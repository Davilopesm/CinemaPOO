#include "Cinema.h"
#include "Sala.h"
#include "Filme.h"
#include "Sessao.h"
#include "Ingresso.h"

using namespace System;
using namespace System::Windows::Forms;

namespace Cinema {

	System::Void Cinema::button1_Click(Object^  sender, EventArgs^  e) {
		this->Hide();
		Sala^ tela = gcnew Sala;
		tela->Show();

	}

	System::Void Cinema::button2_Click(Object^  sender, EventArgs^  e) {
		this->Hide();
		Filme^ tela = gcnew Filme;
		tela->Show();
	}

	System::Void Cinema::button3_Click(Object^  sender, EventArgs^  e) {
		this->Hide();
		Sessao^ tela = gcnew Sessao;
		tela->Show();
	}

	System::Void Cinema::button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Ingresso^ tela = gcnew Ingresso;
		tela->Show();

	}




}


[STAThread]
void main(array<String^>^ arg) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Cinema::Cinema form;
	Application::Run(%form);

}
