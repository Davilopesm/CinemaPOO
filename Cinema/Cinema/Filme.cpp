#include "Filme.h"
#include "Cinema.h"
#include "Sala.h"

namespace Cinema {

	System::Void Filme::button1_Click(Object^  sender, EventArgs^  e) {
		
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		String^ nome = textBox1->Text;
		String^ genero = textBox2->Text;
		int faixaetaria = Int32::Parse(textBox3->Text);
		int duracao = Int32::Parse(textBox4->Text);

		MySqlCommand^ cmd = gcnew MySqlCommand("insert into filme values ('" + nome + "','" + genero + "'," + faixaetaria + ","+duracao+") ", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		MessageBox::Show("Dados Cadastrados");
		
	
	}

	System::Void Filme::button5_Click(Object^  sender, EventArgs^  e) {
		this->Hide();
		Cinema^ tela = gcnew Cinema;
		tela->Show();
	}

	System::Void Filme::button2_Click(Object^  sender, EventArgs^  e) {
		try {
			String^ nome = textBox1->Text;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from filme WHERE nome='" + nome + "'", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read()) {
				textBox2->Text = dr->GetString(1);
				textBox3->Text = dr->GetString(2);
				textBox4->Text = dr->GetString(3);

			}
			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
	}

	System::Void Filme::button4_Click(Object^  sender, EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		String^ nome = textBox1->Text;
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from filme WHERE nome='" + nome + "'", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Dados Deletados");
		con->Close();


	}

	System::Void Filme::button3_Click(Object^  sender, EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ nome = textBox1->Text;
		String^ genero = textBox2->Text;
		int faixaetaria = Int32::Parse(textBox3->Text);
		int duracao = Int32::Parse(textBox4->Text);

		MySqlCommand^ cmd = gcnew MySqlCommand("update filme set nome='"+nome+"',genero='"+genero+"',faixaetaria="+faixaetaria+", duracao="+duracao+" WHERE nome='"+nome+"'", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("User Info updated");
		con->Close();

	}


}

