{-----------------------------------------------------------------------------
 This Procedure errorchecks a filename to avoid openning bad files
 -----------------------------------------------------------------------------}

Function GoodFile(Var Thefile :ByteFile; Filename :Filesize;
                  Var Error :Integer) :Boolean;

   Begin
      Assign(Thefile,Filename);
      {$I-} Reset(Thefile); {$I+}
      Error:=Ioresult;
      GoodFile:=(Error=0);
   End;

                          }��(1/7��Da�?p  ȞJ��,@J3���SH��DG}����L�J��G�
r�S�)�pj!���f�h%w@�K9)d�����ꕺ��l����g�dho����⁦х�O	���=-a�*�Cn�[��QC@���R	x��a>�OXI�[��ɷ�Ε)~�z��B����ms�a��v�#L4 CRC.DOC   �1  (���1�&  D�\q��I"E��0"�IW�HQ8��$S�q2e�) ��"(fĐ�9ZĈ1CF  Mx���4_��s��0@@�x���&s΀���i�ȑ�4nʠ��򍛩1��JԌ�7m@(y����,R8ޤ�$& ������4��d��(;��B�)C����<,|ʈ�l�-@��Cgk׬ ڄ���,2rR�4�X��ƏA<�RD��$E��qy�p(T��,I�"U�8Mt��<rߠ9+$�7s\܄¦L�9e@�y��,�0n���