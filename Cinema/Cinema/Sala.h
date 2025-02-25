#pragma once

namespace Cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Sala
	/// </summary>
	public ref class Sala : public System::Windows::Forms::Form
	{
	public:
		Sala(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Sala()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(150, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Capacidade: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(127, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(208, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(208, 162);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(165, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Salvar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sala::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(165, 261);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 32);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Atualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Sala::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(289, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 32);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Deletar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Sala::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(178, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 45);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Sala";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(42, 261);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 32);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Sala::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 337);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 27);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Voltar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Sala::button5_Click);
			// 
			// Sala
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 376);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Sala";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sala";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//ATUALIZAR
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
		
		//SALVAR
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);

		 //BUSCAR
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);

		 //ATUALIZAR
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);


};
}
