#include "Sessao.h"
#include "Cinema.h"

namespace Cinema {
	
	System::Void Sessao::button1_Click(Object^  sender, EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		
		String^ nome = textBox1->Text;
		int sala = Int32::Parse(textBox2->Text);
		String^ horario = textBox3->Text;

		MySqlCommand^ cmd = gcnew MySqlCommand("select * from filme WHERE nome='" +nome+ "'", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		int testar_nome_filme = 0;
		while (dr->Read()) {
			testar_nome_filme = 1;
			con->Close();
			cmd = gcnew MySqlCommand("select * from sala WHERE id=" + sala + "", con);
			con->Open();
			dr = cmd->ExecuteReader();
			int testar_sala_filme = 0;
			while (dr->Read()) {
				testar_sala_filme = 1;
				con->Close();
				cmd = gcnew MySqlCommand("select * from sessao WHERE sala=" + sala + " AND horario='" + horario + "'", con);
				con->Open();
				dr = cmd->ExecuteReader();
				int testar_sala = 0;
				while (dr->Read()) {
					MessageBox::Show("Sala ja esta sendo utilizada neste horario");
					testar_sala = 1;
				}
				//con->Close();
				if (testar_sala == 0) {
					con->Close();
					cmd = gcnew MySqlCommand("insert into sessao values ('" + nome + "'," + sala + ",'" + horario + "') ", con);
					con->Open();
					dr = cmd->ExecuteReader();
					MessageBox::Show("Dados da Sessão Salvos!");
					//con->Close();
				}
				
			}
			if (testar_sala_filme == 0) {
				MessageBox::Show("Sala não cadastrada, impossivel cadastar sessão");
			}
		}
		if (testar_nome_filme == 0) {
			MessageBox::Show("Filme não cadastrado, impossivel cadastar sessão");
		}
	
	}


	System::Void Sessao::button2_Click(Object^  sender, EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=cinema";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ nome = textBox1->Text;
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("Select * from sessao WHERE nome='"+nome+"'", con);

		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;

	}

	System::Void Sessao::button6_Click(Object^  sender, EventArgs^  e) {
}
	//deletar
	System::Void Sessao::button3_Click(Object^  sender, EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		String^ nome = textBox1->Text;
		int sala = Int32::Parse(textBox2->Text);
		String^ horario = textBox3->Text;

		MySqlCommand^ cmd = gcnew MySqlCommand("delete from sessao WHERE nome='" + nome + "' AND horario='"+horario+"' AND sala="+sala+"", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Dados Deletados");
		con->Close();


	}
	
	System::Void Sessao::button5_Click(Object^  sender, EventArgs^  e) {
		this->Hide();
		Cinema^ tela = gcnew Cinema;
		tela->Show();

	}

}
