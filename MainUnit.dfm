object MainForm: TMainForm
  Left = 192
  Top = 149
  Width = 277
  Height = 186
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Passport Checker'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object LabelSeries: TLabel
    Left = 45
    Top = 15
    Width = 34
    Height = 13
    Caption = #1057#1077#1088#1080#1103':'
  end
  object LabelNumber: TLabel
    Left = 123
    Top = 15
    Width = 37
    Height = 13
    Caption = #1053#1086#1084#1077#1088':'
  end
  object MaskEditSeries: TMaskEdit
    Left = 84
    Top = 12
    Width = 34
    Height = 21
    EditMask = '0000;1;_'
    MaxLength = 4
    TabOrder = 0
    Text = '    '
  end
  object MaskEditNumber: TMaskEdit
    Left = 165
    Top = 12
    Width = 46
    Height = 21
    EditMask = '000000;1;_'
    MaxLength = 6
    TabOrder = 1
    Text = '      '
  end
  object ButtonCheck: TButton
    Left = 45
    Top = 39
    Width = 169
    Height = 25
    Caption = #1055#1088#1086#1074#1077#1088#1080#1090#1100
    TabOrder = 2
    OnClick = ButtonCheckClick
  end
  object MemoResults: TMemo
    Left = 45
    Top = 72
    Width = 169
    Height = 40
    Color = clBtnFace
    ReadOnly = True
    TabOrder = 3
  end
end
