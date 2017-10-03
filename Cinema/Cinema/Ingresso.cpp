#include "Ingresso.h"
#include "Cinema.h"


namespace Cinema {

	System::Void Ingresso::button1_Click(Object^  sender, EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ filme = textBox1->Text;
		String^ horario = textBox2->Text;
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from sessao WHERE nome='"+filme+"' AND horario='"+horario+"'", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		dr->Read();
		int sala = Int32::Parse(dr->GetString(1));
		con->Close();
		cmd = gcnew MySqlCommand("select * from sala WHERE id="+sala+"", con);
		con->Open();
		dr = cmd->ExecuteReader();
		int capacidade;
		while (dr->Read()) {
			capacidade = Int32::Parse(dr->GetString(1));
		}
		con->Close();
		int teste_ingresso = 0;
		int ingresso = 0;
		cmd = gcnew MySqlCommand("select * from ingresso WHERE filme='" + filme + "' AND horario='"+horario+"'", con);
		con->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read()) {
			int ingresso_existente = Int32::Parse(dr->GetString(2));
			if (ingresso_existente >= 1) {
				con->Close();
				ingresso_existente = ingresso_existente - 1;
				teste_ingresso = 1;
				cmd = gcnew MySqlCommand("update ingresso set ingresso=" + ingresso_existente + " WHERE filme='" + filme + "' AND horario='" + horario + "'", con);
				con->Open();
				dr = cmd->ExecuteReader();
				MessageBox::Show("Ingresso Comprado");
			}
			if(ingresso_existente == 0) {
				MessageBox::Show("Sessão Esgotada");
				teste_ingresso = 1;
			}
		}
		if (teste_ingresso == 0) {
			con->Close();
			ingresso = capacidade - 1;
			cmd = gcnew MySqlCommand("insert into ingresso values ('" + filme + "','" + horario + "'," + ingresso + ") ", con);
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Ingresso Comprado!");
			con->Close(); 
		}
	}

System::Void Ingresso::button2_Click(Object^  sender, EventArgs^  e) {
	this->Hide();
	Cinema^ tela = gcnew Cinema;
	tela->Show();

}


}
