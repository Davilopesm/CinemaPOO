#pragma once

namespace Cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Filme
	/// </summary>
	public ref class Filme : public System::Windows::Forms::Form
	{
	public:
		Filme(void)
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
		~Filme()
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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(111, 192);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Duração";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(119, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Genero";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(79, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Faixa Etaria";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(133, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nome";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(239, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(239, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(239, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(239, 192);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(168, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 43);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Filme";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(176, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 34);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Cadastrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Filme::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(56, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 34);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Filme::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(176, 278);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 34);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Atualizar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Filme::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(284, 278);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 34);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Deletar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Filme::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 341);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Voltar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Filme::button5_Click);
			// 
			// Filme
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 376);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Filme";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Filme";
			this->Load += gcnew System::EventHandler(this, &Filme::Filme_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Filme_Load(System::Object^  sender, System::EventArgs^  e) {
	}		
			 //cadastrar
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
			 
			 //voltar
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);
			 //buscar
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
		//deletar
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
		//atualizar
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);

};
}
