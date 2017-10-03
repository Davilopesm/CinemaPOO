#include "Sala.h"
#include "Cinema.h"


namespace Cinema {

	System::Void Sala::button2_Click(Object^  sender, EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		int id = Int32::Parse(textBox1->Text);
		int capacidade = Int32::Parse(textBox2->Text);
		String^ tipo = textBox3->Text;

		MySqlCommand^ cmd = gcnew MySqlCommand("update sala set id=" + id + ",capacidade=" + capacidade + ",tipo='" + tipo + "'WHERE id=" + id + "", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("User Info updated");
		con->Close();
	}

	System::Void Sala::button1_Click(Object^  sender, EventArgs^  e) {

		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id = Int32::Parse(textBox1->Text);
			int capacidade = Int32::Parse(textBox2->Text);
			String^ tipo = textBox3->Text;

			MySqlCommand^ cmd = gcnew MySqlCommand("insert into sala values (" + id + "," + capacidade + ",'" + tipo + "') ", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();


			MessageBox::Show("User Info Saved");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}



	}

	System::Void Sala::button4_Click(Object^  sender, EventArgs^  e) {
		try {
			int id = Int32::Parse(textBox1->Text);
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from sala WHERE id=" + id + "", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read()) {
				textBox2->Text = dr->GetString(1);
				textBox3->Text = dr->GetString(2);

			}
			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
	}

	System::Void Sala::button3_Click(Object^  sender, EventArgs^  e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=Cinema";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		int id = Int32::Parse(textBox1->Text);
		MySqlCommand^ cmd = gcnew MySqlCommand("delete from sala WHERE id=" + id + "", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("Dados Deletados");
		con->Close();
	}

	System::Void Sala::button5_Click(Object^  sender, EventArgs^  e) {
		this->Hide();
		Cinema^ tela = gcnew Cinema;
		tela->Show();


	}

}

