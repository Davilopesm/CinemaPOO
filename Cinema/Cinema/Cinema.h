#pragma once
#include"Sala.h"

namespace Cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Cinema
	/// </summary>
	public ref class Cinema : public System::Windows::Forms::Form
	{
	public:
		Cinema(void)
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
		~Cinema()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	protected:

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sala";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Cinema::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(234, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 66);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Filme";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Cinema::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(70, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 66);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Sess�o";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Cinema::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(234, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 66);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Ingresso";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Cinema::button4_Click);
			// 
			// Cinema
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 376);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Cinema";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cinema";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
	
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
};
}
