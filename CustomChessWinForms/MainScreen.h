#pragma once

namespace CustomChessWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainScreen
	/// </summary>
	
	public ref class ChessPiece {
	public:
		String^ Type; // "Pawn", "Rook", etc.
		int X; // Column position
		int Y; // Row position

		ChessPiece(String^ type, int x, int y) {
			Type = type;
			X = x;
			Y = y;
		}
	};



	public ref class MainScreen : public System::Windows::Forms::Form
	{
	public:
		MainScreen(void)
		{
			this->InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ grid_ms;

	protected:

	protected:

	protected:
	private:
		void InitializeComponent() {
			this->chessBoardPanel = gcnew Panel();
			this->SuspendLayout();

			// 
			// chessBoardPanel
			// 
			this->chessBoardPanel->Location = Point(10, 10);
			this->chessBoardPanel->Size = Drawing::Size(480, 480);
			this->chessBoardPanel->Paint += gcnew PaintEventHandler(this, &MainScreen::chessBoardPanel_Paint);
			;
			// 
			// YourForm
			// 
			this->ClientSize = Drawing::Size(500, 500);
			this->Controls->Add(this->chessBoardPanel);
			this->ResumeLayout(false);
			
		}

		void chessBoardPanel_Paint(Object^ sender, PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			int squareSize = 60;

			for (int row = 0; row < 8; ++row) {
				for (int col = 0; col < 8; ++col) {
					Color color = (row + col) % 2 == 0 ? Color::White : Color::Black;
					Brush^ brush = gcnew SolidBrush(color);
					g->FillRectangle(brush, col * squareSize, row * squareSize, squareSize, squareSize);
				}
			}
		}

	private:
		Panel^ chessBoardPanel;

		

	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>

#pragma endregion


	private: System::Void grid_ms_Click(System::Object^ sender, System::EventArgs^ e) {

		int w = grid_ms->Width;
		int h = grid_ms->Height;




	}
	};
}
