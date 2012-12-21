program Project1;

uses
  Forms,
  Unit1 in 'Unit1.pas' {Form1};

{$R *.res}

begin
  Application.Initialize;
  Application.Title := 'DLL FROM VS 2010 TO DELPHI';
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
