#pragma once

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtVerificaPar;
	private: System::Windows::Forms::ListBox^ lstboxVerificaPar;
	protected:

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
			this->txtVerificaPar = (gcnew System::Windows::Forms::TextBox());
			this->lstboxVerificaPar = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(65, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dizer Olá";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(61, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gerar número aleatório";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(61, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Verificação se o n.º é Par";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// txtVerificaPar
			// 
			this->txtVerificaPar->Location = System::Drawing::Point(108, 253);
			this->txtVerificaPar->Name = L"txtVerificaPar";
			this->txtVerificaPar->Size = System::Drawing::Size(52, 20);
			this->txtVerificaPar->TabIndex = 3;
			// 
			// lstboxVerificaPar
			// 
			this->lstboxVerificaPar->FormattingEnabled = true;
			this->lstboxVerificaPar->Location = System::Drawing::Point(61, 309);
			this->lstboxVerificaPar->Name = L"lstboxVerificaPar";
			this->lstboxVerificaPar->Size = System::Drawing::Size(146, 95);
			this->lstboxVerificaPar->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 575);
			this->Controls->Add(this->lstboxVerificaPar);
			this->Controls->Add(this->txtVerificaPar);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: Void DizerOla()
	{
		MessageBox::Show("Olá Mundo!");
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DizerOla();
	}

	private: int GerarRand(int limiteInferior, int limiteSuperior)
	{
		Random^ r = gcnew Random();

		int n;

		n = r->Next(limiteInferior, limiteSuperior);
		
		return n;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Poderá ser deste modo
		//int n;
		//n = GerarRand(0,20);
		//MessageBox::Show(n.ToString());

		MessageBox::Show(GerarRand(0, 20).ToString());
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//Criação da Variável "numero" para receber a String digitada na textBox
	int numero;
	
	//Converte a String digitada na textBox para um número Inteiro
	numero = Convert::ToInt16(txtVerificaPar->Text);
	
	//Verifica se o número digitado é PAR ou não
	//Se o resto da divisão (%) for Zero
	if (numero % 2 == 0)
	{
		//É par
		lstboxVerificaPar->Items->Add("O Número " + numero + " é PAR");
	}
	else
	{
		//Se a conta não der Resto Zero, NÃO é PAR
		lstboxVerificaPar->Items->Add("O Número " + numero + " NÃO é PAR");
	}
	//Limpa a caixa de texto
	txtVerificaPar->Text = "";
}
};
}
