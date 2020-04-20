object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Wave Cutter'
  ClientHeight = 131
  ClientWidth = 246
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 58
    Height = 13
    Caption = #1052#1085#1086#1078#1080#1090#1077#1083#1100
  end
  object Label2: TLabel
    Left = 128
    Top = 8
    Width = 77
    Height = 13
    Caption = #1064#1072#1075' '#1086#1090#1089#1077#1082#1072#1085#1080#1103
  end
  object Button1: TButton
    Left = 8
    Top = 56
    Width = 105
    Height = 25
    Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1092#1072#1081#1083
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 128
    Top = 56
    Width = 105
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1074' '#1092#1072#1081#1083
    Enabled = False
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 8
    Top = 96
    Width = 225
    Height = 21
    Enabled = False
    TabOrder = 2
  end
  object Edit2: TEdit
    Left = 8
    Top = 27
    Width = 105
    Height = 21
    TabOrder = 3
    Text = '254'
  end
  object Edit3: TEdit
    Left = 128
    Top = 27
    Width = 105
    Height = 21
    TabOrder = 4
    Text = '8'
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 240
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        AutoHotkeys = maManual
        Caption = #1054#1090#1082#1088#1099#1090#1100
        ShortCut = 16463
        OnClick = N2Click
      end
      object N3: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        ShortCut = 32883
        OnClick = N3Click
      end
    end
    object Help1: TMenuItem
      Caption = 'Help'
      object N4: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
        OnClick = N4Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 64
    Top = 240
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 320
    Top = 240
  end
end
