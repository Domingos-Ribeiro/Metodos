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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNumeroGerado;

	private: System::Windows::Forms::TextBox^ txtNome;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ btnGerarNumero;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNumeroGerado = (gcnew System::Windows::Forms::TextBox());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btnGerarNumero = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtNumeroGerado);
			this->groupBox1->Controls->Add(this->txtNome);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->btnGerarNumero);
			this->groupBox1->Location = System::Drawing::Point(256, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(299, 228);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Número Gerado";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(155, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nome Correspondente";
			// 
			// txtNumeroGerado
			// 
			this->txtNumeroGerado->ForeColor = System::Drawing::Color::ForestGreen;
			this->txtNumeroGerado->Location = System::Drawing::Point(23, 179);
			this->txtNumeroGerado->Name = L"txtNumeroGerado";
			this->txtNumeroGerado->Size = System::Drawing::Size(98, 20);
			this->txtNumeroGerado->TabIndex = 3;
			this->txtNumeroGerado->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtNome
			// 
			this->txtNome->Location = System::Drawing::Point(151, 179);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(120, 20);
			this->txtNome->TabIndex = 2;
			this->txtNome->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ana", L"Rui", L"Abel" });
			this->listBox1->Location = System::Drawing::Point(151, 39);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 108);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// btnGerarNumero
			// 
			this->btnGerarNumero->Location = System::Drawing::Point(23, 39);
			this->btnGerarNumero->Name = L"btnGerarNumero";
			this->btnGerarNumero->Size = System::Drawing::Size(98, 47);
			this->btnGerarNumero->TabIndex = 0;
			this->btnGerarNumero->Text = L"Gerar Numero";
			this->btnGerarNumero->UseVisualStyleBackColor = true;
			this->btnGerarNumero->Click += gcnew System::EventHandler(this, &Form1::btnGerarNumero_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 575);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lstboxVerificaPar);
			this->Controls->Add(this->txtVerificaPar);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void btnGerarNumero_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//Gera um número aleatório
	Random^ aleatorio = gcnew Random();

	//Criação da variável "numero"
	int numero;

	//O número gerado aliatóriamente (entre 0 e 3)é atribuido à variável "numero"
	//Tendo noção que o número 3 nunca será gerado, só o zero, o um e o dois
	numero = aleatorio->Next(0, 3);

	//O número gerado passa para a textBox apropriada
	//Sendo que a listBox começa com o número zero, acrecentamos mais um, 
	//ou seja, se for gerado o zero será apresentado o número um,
	//Da mesma forma, quando for gerado o n.º 2, será apresentado o n.º 3 para corresponder à terceira posição.
	txtNumeroGerado->Text = (numero + 1).ToString();

	//A textBox Nome recebe a posição gerada exata, ou seja, SEM o incremento,
	//Seguindo o último exemplo, a posição 2 corresponde ao último nome, neste caso, o Abel (0,1,2)
	txtNome->Text = listBox1->Items[numero]->ToString();
}
};
}
