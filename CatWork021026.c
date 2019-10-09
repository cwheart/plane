#include <stdio.h>
#include "cJSON.h"
#include "CatBase.h"

void InitCAT021026(CAT *pstCat)
{
  int i=0,j=0;
  pstCat->iType=21026;


  pstCat->astSValue[0].iIndex=21026010;
  pstCat->astSValue[1].iIndex=21026040;
  pstCat->astSValue[2].iIndex=21026030;
  pstCat->astSValue[3].iIndex=21026130;
  pstCat->astSValue[4].iIndex=21026080;
  pstCat->astSValue[5].iIndex=21026140;
  pstCat->astSValue[6].iIndex=21026090;
  pstCat->astSValue[7].iIndex=21026210;
  pstCat->astSValue[8].iIndex=21026230;
  pstCat->astSValue[9].iIndex=21026145;
  pstCat->astSValue[10].iIndex=21026150;
  pstCat->astSValue[11].iIndex=21026151;
  pstCat->astSValue[12].iIndex=21026152;
  pstCat->astSValue[13].iIndex=21026155;
  pstCat->astSValue[14].iIndex=21026157;
  pstCat->astSValue[15].iIndex=21026160;
  pstCat->astSValue[16].iIndex=21026165;
  pstCat->astSValue[17].iIndex=21026170;
  pstCat->astSValue[18].iIndex=21026095;
  pstCat->astSValue[19].iIndex=21026032;
  pstCat->astSValue[20].iIndex=21026200;
  pstCat->astSValue[21].iIndex=21026020;
  pstCat->astSValue[22].iIndex=21026220;
  pstCat->astSValue[23].iIndex=21026146;
  pstCat->astSValue[24].iIndex=21026148;
  pstCat->astSValue[25].iIndex=21026110;
  pstCat->astSValue[26].iIndex=21026070;
  pstCat->astSValue[27].iIndex=21026131;
  pstCat->astSValue[28].iIndex=99999;


  strcpy(pstCat->astSValue[0].acName,"DSID");
  strcpy(pstCat->astSValue[0].astBValue[0].acName,"SAC");
  strcpy(pstCat->astSValue[0].astBValue[1].acName,"SIC");
  strcpy(pstCat->astSValue[1].acName,"TargetRptD");
  strcpy(pstCat->astSValue[1].astBValue[0].acName,"ATP");
  strcpy(pstCat->astSValue[1].astBValue[1].acName,"ARC");
  strcpy(pstCat->astSValue[1].astBValue[2].acName,"DCR");
  strcpy(pstCat->astSValue[1].astBValue[3].acName,"GBS");
  strcpy(pstCat->astSValue[1].astBValue[4].acName,"SIM");
  strcpy(pstCat->astSValue[1].astBValue[5].acName,"TST");
  strcpy(pstCat->astSValue[1].astBValue[6].acName,"RAB");
  strcpy(pstCat->astSValue[1].astBValue[7].acName,"SAA");
  strcpy(pstCat->astSValue[1].astBValue[8].acName,"SPI");
  strcpy(pstCat->astSValue[2].acName,"TOD");
  strcpy(pstCat->astSValue[2].astBValue[0].acName,"TOD");
  strcpy(pstCat->astSValue[2].astBValue[1].acName,"TOD_FORMAT");
  strcpy(pstCat->astSValue[3].acName,"CTrackPosIn84");
  strcpy(pstCat->astSValue[3].astBValue[0].acName,"LAT");
  strcpy(pstCat->astSValue[3].astBValue[1].acName,"LON");
  strcpy(pstCat->astSValue[4].acName,"TargetADD");
  strcpy(pstCat->astSValue[4].astBValue[0].acName,"TargetAddress");
  strcpy(pstCat->astSValue[5].acName,"CTrackGeoAltd");
  strcpy(pstCat->astSValue[5].astBValue[0].acName,"GeometricHeight");
  strcpy(pstCat->astSValue[6].acName,"FigOfMerit");
  strcpy(pstCat->astSValue[6].astBValue[0].acName,"AC");
  strcpy(pstCat->astSValue[6].astBValue[1].acName,"MN");
  strcpy(pstCat->astSValue[6].astBValue[2].acName,"DC");
  strcpy(pstCat->astSValue[6].astBValue[3].acName,"PA");
  strcpy(pstCat->astSValue[7].acName,"LinkTecInd");
  strcpy(pstCat->astSValue[7].astBValue[0].acName,"DTI");
  strcpy(pstCat->astSValue[7].astBValue[1].acName,"MDS");
  strcpy(pstCat->astSValue[7].astBValue[2].acName,"UAT");
  strcpy(pstCat->astSValue[7].astBValue[3].acName,"VDL");
  strcpy(pstCat->astSValue[7].astBValue[4].acName,"OTR");
  strcpy(pstCat->astSValue[8].acName,"RollAng");
  strcpy(pstCat->astSValue[8].astBValue[0].acName,"RollAngle");
  strcpy(pstCat->astSValue[9].acName,"FlitLevl");
  strcpy(pstCat->astSValue[9].astBValue[0].acName,"FlghtLevel");
  strcpy(pstCat->astSValue[10].acName,"AirSpd");
  strcpy(pstCat->astSValue[10].astBValue[0].acName,"IAS");
  strcpy(pstCat->astSValue[10].astBValue[1].acName,"Mach");
  strcpy(pstCat->astSValue[10].astBValue[2].acName,"TrueAirSpeed");
  strcpy(pstCat->astSValue[11].acName,"TAirSpd");
  strcpy(pstCat->astSValue[11].astBValue[0].acName,"TrueAirSpeed");
  strcpy(pstCat->astSValue[12].acName,"MagHead");
  strcpy(pstCat->astSValue[12].astBValue[0].acName,"Magnetic Heading");
  strcpy(pstCat->astSValue[13].acName,"BarVtcalRate");
  strcpy(pstCat->astSValue[13].astBValue[0].acName,"BV Rate");
  strcpy(pstCat->astSValue[14].acName,"GeoVtcalRate");
  strcpy(pstCat->astSValue[14].astBValue[0].acName,"GV Rate");
  strcpy(pstCat->astSValue[15].acName,"GroundVctr");
  strcpy(pstCat->astSValue[15].astBValue[0].acName,"GroundSpeed");
  strcpy(pstCat->astSValue[15].astBValue[1].acName,"TrackAngle");
  strcpy(pstCat->astSValue[16].acName,"TrackAngRate");
  strcpy(pstCat->astSValue[16].astBValue[0].acName,"TI");
  strcpy(pstCat->astSValue[16].astBValue[0].acName,"RateofTurn");
  strcpy(pstCat->astSValue[17].acName,"TargetID");
  strcpy(pstCat->astSValue[17].astBValue[0].acName,"TargetIdentification");
  strcpy(pstCat->astSValue[18].acName,"VeloAcc");
  strcpy(pstCat->astSValue[18].astBValue[0].acName,"Velocity Accuracy");
  strcpy(pstCat->astSValue[19].acName,"TODAcc");
  strcpy(pstCat->astSValue[19].astBValue[0].acName,"TOD");
  strcpy(pstCat->astSValue[19].astBValue[1].acName,"TOD_FORMAT");
  strcpy(pstCat->astSValue[20].acName,"TargetStus");
  strcpy(pstCat->astSValue[20].astBValue[0].acName,"TargetStatus");
  strcpy(pstCat->astSValue[21].acName,"EmitCatg");
  strcpy(pstCat->astSValue[21].astBValue[0].acName,"ECAT");
  strcpy(pstCat->astSValue[22].acName,"MetInfo");
  strcpy(pstCat->astSValue[22].astBValue[0].acName,"WS");
  strcpy(pstCat->astSValue[22].astBValue[1].acName,"WD");
  strcpy(pstCat->astSValue[22].astBValue[2].acName,"TMP");
  strcpy(pstCat->astSValue[22].astBValue[3].acName,"TMB");
  strcpy(pstCat->astSValue[23].acName,"InterSSelctAltd");
  strcpy(pstCat->astSValue[23].astBValue[0].acName,"SAS");
  strcpy(pstCat->astSValue[23].astBValue[1].acName,"Source");
  strcpy(pstCat->astSValue[23].astBValue[2].acName,"Altitude");
  strcpy(pstCat->astSValue[24].acName,"FSSelctAltd");
  strcpy(pstCat->astSValue[24].astBValue[0].acName,"MV");
  strcpy(pstCat->astSValue[24].astBValue[1].acName,"AH");
  strcpy(pstCat->astSValue[24].astBValue[2].acName,"AM");
  strcpy(pstCat->astSValue[24].astBValue[3].acName,"Altitude");
  strcpy(pstCat->astSValue[25].acName,"TrjtryInt");
  strcpy(pstCat->astSValue[25].astBValue[0].acName,"NAV");
  strcpy(pstCat->astSValue[25].astBValue[1].acName,"NVB");
  strcpy(pstCat->astSValue[25].astBValue[2].acName,"TID");
  strcpy(pstCat->astSValue[26].acName,"M3ACodeInOct");
  strcpy(pstCat->astSValue[26].astBValue[0].acName,"Mode3A-Reply");
  strcpy(pstCat->astSValue[26].astBValue[1].acName,"V");
  strcpy(pstCat->astSValue[26].astBValue[2].acName,"G");
  strcpy(pstCat->astSValue[26].astBValue[3].acName,"L");
  strcpy(pstCat->astSValue[27].acName,"SigAmp");
  strcpy(pstCat->astSValue[27].astBValue[0].acName,"SAM");
  strcpy(pstCat->astSValue[28].acName,"category");
  strcpy(pstCat->astSValue[28].astBValue[0].acName,"cat");
  strcpy(pstCat->astSValue[28].astBValue[1].acValue,"021026");
  strcpy(pstCat->astSValue[28].astBValue[2].acName,"version");
  strcpy(pstCat->astSValue[28].astBValue[3].acValue,"");
  for(i=0;i<64;i++)
    {
      pstCat->astSValue[i].iNull=1;
      for(j=0;j<32;j++)
        {
          pstCat->astSValue[i].astBValue[j].iNull=1;
        }
    }
  pstCat->astSValue[28].astBValue[0].iNull=0;
  pstCat->astSValue[28].astBValue[1].iNull=0;
  pstCat->astSValue[28].iNull=0;

  
}




int ParseByteCAT021026(unsigned char *pCatBuff,CAT *pstCat,int iPos)
{
  unsigned short usT;
  unsigned int uT1,uT2;
  float fT1,fT2;
  int iDLen,i=3,fs,iArray[32],j,n;
  char JsonArrStr[128],strTmp[256];
  unsigned char fspec[10],cT1,cT2,cT3,cT4,ucCall[8];
  if(pCatBuff[0]!=0x15) return -1; // asterix 048 or 034
  iDLen =(pCatBuff[1]<<8)+pCatBuff[2];
  if(iPos>0) i=iPos;
  if(iDLen>1024) return -1;
  while(i<iDLen) //CRC length=2
    {
      for(fs=0; fs<10; fs++)//get FSPEC
        {
          fspec[fs]= pCatBuff[i++];
          if((fspec[fs]&0x01)!=0)
            continue;
          break;
        }
      if((fspec[0]&0x80)!=0)
        {
          SetSubValueByIndex(pstCat,21026010,"SAC",CatIntToString(pCatBuff[i++],JsonArrStr,128));
          SetSubValueByIndex(pstCat,21026010,"SIC",CatIntToString(pCatBuff[i++],JsonArrStr,128));
        }
      if((fspec[0]&0x40)!=0)
        {
          cT2 = pCatBuff[i++];
          if(BIT_GET(cT2,7))
            SetSubValueByIndex(pstCat,21026040,"DCR","1");
          else
            SetSubValueByIndex(pstCat,21026040,"DCR","0");
          if(BIT_GET(cT2,6))
            SetSubValueByIndex(pstCat,21026040,"GBS","1");
          else
            SetSubValueByIndex(pstCat,21026040,"GBS","0");

          if(BIT_GET(cT2,5))
            SetSubValueByIndex(pstCat,21026040,"SIM","1");
          else
            SetSubValueByIndex(pstCat,21026040,"SIM","0");
          if(BIT_GET(cT2,4))
            SetSubValueByIndex(pstCat,21026040,"TST","1");
          else
            SetSubValueByIndex(pstCat,21026040,"TST","0");
          if(BIT_GET(cT2,3))
            SetSubValueByIndex(pstCat,21026040,"RAB","1");
          else
            SetSubValueByIndex(pstCat,21026040,"RAB","0");

          if(BIT_GET(cT2,2))
            SetSubValueByIndex(pstCat,21026040,"SAA","1");
          else
            SetSubValueByIndex(pstCat,21026040,"SAA","0");
          if(BIT_GET(cT2,1))
            SetSubValueByIndex(pstCat,21026040,"SPI","1");
          else
            SetSubValueByIndex(pstCat,21026040,"SPI","0");

          cT1 = pCatBuff[i++];
          cT2 = cT1>>5;
          memset(JsonArrStr,0,128);
          sprintf(JsonArrStr,"%d",cT2);
          SetSubValueByIndex(pstCat,21026040,"ATP",JsonArrStr);
          cT2 = (0x1F&cT1)>>3;
          memset(JsonArrStr,0,128);
          sprintf(JsonArrStr,"%d",cT2);
          SetSubValueByIndex(pstCat,21026040,"ARC",JsonArrStr);
        }
      if((fspec[0]&0x20)!=0)
        {
          fT1 = (pCatBuff[i++]*256*256+pCatBuff[i++]*256+pCatBuff[i++])/128.0;
          SetSubValueByIndex(pstCat,21026030,"TOD",CatFloatToString(fT1,JsonArrStr,128));
          int hour = fT1 / 3600;
          int minute = (fT1 - hour * 3600) / 60;
          int second = (fT1 - hour * 3600 - minute * 60);
          sprintf(JsonArrStr,"%d:%d:%d",hour,minute,second);
          SetSubValueByIndex(pstCat,21026030,"TOD_FORMAT",JsonArrStr);

        }
      if((fspec[0]&0x10)!=0) //40083161
        {
          uT1+=pCatBuff[i++]*256*256*256;
          uT1+=pCatBuff[i++]*256*256;
          uT1+=pCatBuff[i++]*256;
          uT1+=pCatBuff[i++];
          uT2+=pCatBuff[i++]*256*256*256;
          uT2+=pCatBuff[i++]*256*256;
          uT2+=pCatBuff[i++]*256;
          uT2+=pCatBuff[i++];

          fT1=(float)(uT1)*180.0/pow(2,25);
          fT2=(float)(uT2)*180.0/pow(2,25);

          SetSubValueByIndex(pstCat,21026130,"LAT",CatFloatToString(fT1,JsonArrStr,128));
          SetSubValueByIndex(pstCat,21026130,"LON",CatFloatToString(fT2,JsonArrStr,128));
        }
      if((fspec[0]&0x08)!=0)//40083042
        {

          cT1=pCatBuff[i++];
          cT2=pCatBuff[i++];
          cT3=pCatBuff[i++];
          sprintf(JsonArrStr,"%02X%02X%02X",cT1,cT2,cT3);
          SetSubValueByIndex(pstCat,21026080,"TargetAddress",JsonArrStr);
        }
      if((fspec[0]&0x04)!=0)
        {
          fT1 = (pCatBuff[i++]*256+pCatBuff[i++])*6.25*0.3048;
          SetSubValueByIndex(pstCat,21026140,"GeometricHeight",JsonArrStr);
        }
      if((fspec[0]&0x02)!=0)
        {
          cT1=pCatBuff[i++];
          cT2=cT1>>6;
          SetSubValueByIndex(pstCat,21026090,"AC",CatIntToString(cT2,JsonArrStr,128));
          cT2=0x3F&cT1>>4;
          SetSubValueByIndex(pstCat,21026090,"MN",CatIntToString(cT2,JsonArrStr,128));
          cT2=0x1F&cT1>>2;
          SetSubValueByIndex(pstCat,21026090,"DC",CatIntToString(cT2,JsonArrStr,128));
          cT2=pCatBuff[i++];
          SetSubValueByIndex(pstCat,21026090,"PA",CatIntToString(cT2,JsonArrStr,128));
        }
      if((fspec[0]&0x01)!=0)
        {
          if((fspec[1]&0x80)!=0)
            {
              cT2 = pCatBuff[i++];
              if(BIT_GET(cT2,4))
                SetSubValueByIndex(pstCat,21026210,"DTI","1");
              else
                SetSubValueByIndex(pstCat,21026210,"DTI","0");
              if(BIT_GET(cT2,3))
                SetSubValueByIndex(pstCat,21026210,"MDS","1");
              else
                SetSubValueByIndex(pstCat,21026210,"MDS","0");

              if(BIT_GET(cT2,2))
                SetSubValueByIndex(pstCat,21026210,"UAT","1");
              else
                SetSubValueByIndex(pstCat,21026210,"UAT","0");
              if(BIT_GET(cT2,1))
                SetSubValueByIndex(pstCat,21026210,"VDL","1");
              else
                SetSubValueByIndex(pstCat,21026210,"VDL","0");

              if(BIT_GET(cT2,0))
                SetSubValueByIndex(pstCat,21026210,"OTR","1");
              else
                SetSubValueByIndex(pstCat,21026210,"OTR","0");
            }

          if((fspec[1]&0x40)!=0)
            {
              fT1 = (pCatBuff[i++]*256+pCatBuff[i++])*0.01;
              SetSubValueByIndex(pstCat,21026230,"RollAngle",CatFloatToString(fT1,JsonArrStr,128));
            }
          if((fspec[1]&0x20)!=0)
            {
              fT1 = (pCatBuff[i++]*256+pCatBuff[i++])*0.25*FL;
              SetSubValueByIndex(pstCat,21026145,"FlghtLevel",CatFloatToString(fT1,JsonArrStr,128));
            }
          if((fspec[1]&0x10)!=0)
            {
              usT = pCatBuff[i++]*256+pCatBuff[i++];
              if(BIT_GET(usT,15))
                {
                  fT1 = (0x7FFF&usT)*0.001;
                  SetSubValueByIndex(pstCat,21026150,"Mach","1");
                  SetSubValueByIndex(pstCat,21026150,"AirSpeed",CatFloatToString(fT1,JsonArrStr,128));
                }
              else
                {
                  fT1 = usT*pow(2,-14)*1852.0;
                  SetSubValueByIndex(pstCat,21026150,"IAS","1");
                  SetSubValueByIndex(pstCat,21026150,"AirSpeed",CatFloatToString(fT1,JsonArrStr,128));
                }
            }
          if((fspec[1]&0x08)!=0)
            {
              usT = pCatBuff[i++]*256+pCatBuff[i++];
              fT1 = (usT)*1852.0;
              SetSubValueByIndex(pstCat,21026151,"TrueAirSpeed",CatFloatToString(fT1,JsonArrStr,128));
            }
          if((fspec[1]&0x04)!=0)
            {
              fT1 = (pCatBuff[i++]*256+pCatBuff[i++])*360.0/pow(2,16);
              SetSubValueByIndex(pstCat,21026152,"Magnetic Heading",CatFloatToString(fT1,JsonArrStr,128));

            }
          if((fspec[1]&0x02)!=0)
            {
              usT = pCatBuff[i++]*256+pCatBuff[i++];
              fT1 = (usT)*6.25;
              SetSubValueByIndex(pstCat,21026155,"BV Rate",CatFloatToString(fT1,JsonArrStr,128));
            }
        }
      if((fspec[1]&0x01)!=0)
        {
          if((fspec[2]&0x80)!=0)
            {
              usT = pCatBuff[i++]*256+pCatBuff[i++];
              fT1 = (0x7FFF)*6.25;
              SetSubValueByIndex(pstCat,21026157,"GV Rate",CatFloatToString(fT1,JsonArrStr,128));
            }
          if((fspec[2]&0x40)!=0)
            {
              usT = pCatBuff[i++]*256.0+pCatBuff[i++];
              fT1 = (usT);
              SetSubValueByIndex(pstCat,21026160,"GroundSpeed",CatFloatToString(fT1*pow(2,-14)*1852.0,JsonArrStr,128));
              fT1 = pCatBuff[i++]*256.0+pCatBuff[i++]*1.0;
              SetSubValueByIndex(pstCat,21026160,"TrackAngle",CatFloatToString(fT1*360/pow(2,16),JsonArrStr,128));

            }
          if((fspec[2]&0x20)!=0)
            {
              cT2 = pCatBuff[i++];
              if(!BIT_GET(cT2,7)&&!BIT_GET(cT2,6))
                SetSubValueByIndex(pstCat,21026165,"TI","0");
              else if(!BIT_GET(cT2,7)&&BIT_GET(cT2,6))
                SetSubValueByIndex(pstCat,21026165,"TI","1");
              else if(BIT_GET(cT2,7)&&!BIT_GET(cT2,6))
                SetSubValueByIndex(pstCat,21026165,"TI","2");
              else if(BIT_GET(cT2,7)&&BIT_GET(cT2,6))
                SetSubValueByIndex(pstCat,21026165,"TI","3");
              SetSubValueByIndex(pstCat,21026165,"TI",CatIntToString(fT1,JsonArrStr,128));
              cT2 = pCatBuff[i++];
              while(cT2&0x01)
              {
                cT2=cT2>>1;
                SetSubValueByIndex(pstCat,21026165,"RateofTurn",CatIntToString(cT2,JsonArrStr,128));
                cT2 = pCatBuff[i++];
              }

            }
          if((fspec[2]&0x10)!=0)//100
            {
              memset(ucCall,0,8);
              ucCall[0]=pCatBuff[i++];
              ucCall[1]=pCatBuff[i++];
              ucCall[2]=pCatBuff[i++];
              ucCall[3]=pCatBuff[i++];
              ucCall[4]=pCatBuff[i++];
              ucCall[5]=pCatBuff[i++];
              memset(JsonArrStr,0,128);
              //printf("11 %X%X%X%X%X%X\n",ucCall[0],ucCall[1],ucCall[2],ucCall[3],ucCall[4],ucCall[5]);
              Aircraft_Identification_Character_Coding(ucCall,JsonArrStr);
              SetSubValueByIndex(pstCat,21026170,"TargetIdentification",JsonArrStr);

            }
          if((fspec[2]&0x08)!=0)
            {
              cT2 = pCatBuff[i++];
              SetSubValueByIndex(pstCat,21026095,"Velocity Accuracy",CatIntToString(cT2,JsonArrStr,128));
            }
          if((fspec[2]&0x04)!=0)
            {
              cT2 = pCatBuff[i++];
              SetSubValueByIndex(pstCat,21026032,"ToDA",CatIntToString(cT2,JsonArrStr,128));
            }
          if((fspec[2]&0x02)!=0)
            {
              cT1=pCatBuff[i++];
              SetSubValueByIndex(pstCat,21026200,"TargetStatus",CatIntToString(cT2,JsonArrStr,128));
            }
        }
      if((fspec[2]&0x01)!=0)
        {
          if((fspec[3]&0x40)!=0)
            {
              cT1=pCatBuff[i++];
              SetSubValueByIndex(pstCat,21026020,"ECAT",CatIntToString(cT1,JsonArrStr,128));
            }
          if((fspec[3]&0x40)!=0)
            {
              cT1=pCatBuff[i++];
              if(BIT_GET(cT1,7))
                {
                  fT1=(pCatBuff[i++]*256+pCatBuff[i++])*1.852;
                  SetSubValueByIndex(pstCat,21026220,"WS",CatFloatToString(fT1,JsonArrStr,128));
                }
              if(BIT_GET(cT1,6))
                {
                  usT=(pCatBuff[i++]*256+pCatBuff[i++]);
                  SetSubValueByIndex(pstCat,21026220,"WD",CatIntToString(usT,JsonArrStr,128));
                }
              if(BIT_GET(cT1,5))
                {
                  fT1=(pCatBuff[i++]*256+pCatBuff[i++])*0.25;
                  SetSubValueByIndex(pstCat,21026220,"TMP",CatFloatToString(fT1,JsonArrStr,128));
                }
              if(BIT_GET(cT1,4))
                {
                  cT2=pCatBuff[i++];
                  SetSubValueByIndex(pstCat,21026220,"TRB",CatIntToString(cT1,JsonArrStr,128));
                }


            }
          if((fspec[3]&0x20)!=0)
            {
              usT = pCatBuff[i++]*256+pCatBuff[i++];
              if(BIT_GET(usT,15))
                SetSubValueByIndex(pstCat,21026146,"SAS","1");
              else
                SetSubValueByIndex(pstCat,21026146,"SAS","0");
              if(!BIT_GET(usT,14)&&!BIT_GET(usT,13))
                SetSubValueByIndex(pstCat,21026146,"Source","0");
              else if(!BIT_GET(usT,14)&&BIT_GET(usT,13))
                SetSubValueByIndex(pstCat,21026146,"Source","1");
              else if(BIT_GET(usT,14)&&!BIT_GET(usT,13))
                SetSubValueByIndex(pstCat,21026146,"Source","2");
              else if(BIT_GET(usT,14)&&BIT_GET(usT,13))
                SetSubValueByIndex(pstCat,21026146,"Source","3");

              fT1 = (usT&0x1FFF)*25*0.384;
              SetSubValueByIndex(pstCat,21026146,"Altitude",CatFloatToString(fT1,JsonArrStr,128));
            }
          if((fspec[3]&0x10)!=0)
            {
              usT = pCatBuff[i++]*256+pCatBuff[i++];
              if(BIT_GET(usT,15))
                SetSubValueByIndex(pstCat,21026148,"MV","1");
              else
                SetSubValueByIndex(pstCat,21026148,"MV","0");
              if(BIT_GET(usT,14))
                SetSubValueByIndex(pstCat,21026148,"AH","1");
              else
                SetSubValueByIndex(pstCat,21026148,"AH","0");
              if(BIT_GET(usT,13))
                SetSubValueByIndex(pstCat,21026148,"AM","1");
              else
                SetSubValueByIndex(pstCat,21026148,"AM","0");

              fT1 = (usT&0x1FFF)*25*0.384;
              SetSubValueByIndex(pstCat,21026148,"Altitude",CatFloatToString(fT1,JsonArrStr,128));
            }
          if((fspec[3]&0x8)!=0)
            {
              cT1=pCatBuff[i++];
              if(BIT_GET(cT1,7))
                {
                  if(BIT_GET(cT1,0))
                    {
                      cT2=pCatBuff[i++];
                      if(BIT_GET(cT2,7))
                        SetSubValueByIndex(pstCat,21026110,"NAV","1");
                      else
                        SetSubValueByIndex(pstCat,21026110,"NAV","0");
                      if(BIT_GET(cT2,6))
                        SetSubValueByIndex(pstCat,21026110,"NVB","1");
                      else
                        SetSubValueByIndex(pstCat,21026110,"NVB","0");
                    }
                }
              if(BIT_GET(cT1,6))
                {
                  cT2=pCatBuff[i++];
                  ///if(cT2>0)
                  //  {
                  //    memcpy(strTmp,pCatBuff+i,16*cT2);
                  //    tBytes2String(strTmp,JsonArrStr,8*cT1);
                  //  }
                  i=i+cT2*16;
                  SetSubValueByIndex(pstCat,21026110,"TID",JsonArrStr);
                }
            }
          if((fspec[3]&0x04)!=0)
            {
              usT = pCatBuff[i++]*256+pCatBuff[i++];
              if(BIT_GET(usT,15))
                SetSubValueByIndex(pstCat,21026070,"V","1");
              else
                SetSubValueByIndex(pstCat,21026070,"V","0");
              if(BIT_GET(usT,14))
                SetSubValueByIndex(pstCat,21026070,"G","1");
              else
                SetSubValueByIndex(pstCat,21026070,"G","0");
              if(BIT_GET(usT,13))
                SetSubValueByIndex(pstCat,21026070,"L","1");
              else
                SetSubValueByIndex(pstCat,21026070,"L","0");
              memset(JsonArrStr,0,128);
              sprintf(JsonArrStr,"%d%d%d%d",(usT&0x0E00)>>9,(usT&0x01C0)>>6,(usT&0x0038)>>3,usT&0x0007);
              SetSubValueByIndex(pstCat,21026070,"Mode3A-Reply",JsonArrStr);
            }
          if((fspec[3]&0x02)!=0)
            {
              cT1=pCatBuff[i++];
              SetSubValueByIndex(pstCat,21026131,"SAM",CatIntToString(cT1,JsonArrStr,128));
            }

        }

      SetSubValueByIndex(pstCat,99999,"POS",CatIntToString(i,JsonArrStr,128));
      if(i > iDLen) return -2 ;
      if(i == iDLen) return 0 ;
            return i;
    }
  return -1;
}

int CteateByteCat021026(unsigned char *pCatBuff,CAT *pstCat)
{
  unsigned int uT1,uT2;
  float fT1,fT2,fT3;
  int i,j,iPos=0,iFs1,iFs2,iFs3,iFs4,iFs5,iBitFss,iBitFs1,iBitFs2,iBitFs3,iBitFs4,iT;
  unsigned short int usT1,usT2,usT3,usT4;
  unsigned char acTemp[1024],acFs[4],ucT1,ucT2,ucT3,ucT4,uacT3[32];
  BVALUE * pBValue;
  memset(acFs,0,4);
  memset(acTemp,0,1024);
  pBValue=GetSubBValue(pstCat,21026010);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"SAC")==0)
            {
              acTemp[iPos++] = atoi(pBValue[i].acValue);
            }
          if(strcmp(pBValue[i].acName,"SIC")==0)
            {
              acTemp[iPos++] = atoi(pBValue[i].acValue);
              break;
            }
        }
      BIT_SET(acFs[0],7);
    }
  for(j=0;j<8;j++) uacT3[j]=0;
  pBValue=GetSubBValue(pstCat,21026040);
  if(pBValue)
    {
      ucT1=0,ucT2=0,iBitFs1=0;
      for(i=0;i<128;i++)
        {
          if(strcmp(pBValue[i].acName,"ATP")==0&&strlen(pBValue[i].acValue)>0)
            {
              ucT1 = atoi(pBValue[i].acValue)<<5;
            }
          if(strcmp(pBValue[i].acName,"ARC")==0&&strlen(pBValue[i].acValue)>0)
            {
              ucT1=ucT1|(atoi(pBValue[i].acValue)<<3);
            }
          if(strcmp(pBValue[i].acName,"RC")==0&&strlen(pBValue[i].acValue)>0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,2);
                }
            }
          if(strcmp(pBValue[i].acName,"RAB")==0&&strlen(pBValue[i].acValue)>0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,1);
                }
            }
          if(strcmp(pBValue[i].acName,"DCR")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT2,7);
                  iBitFs1=1;
                }
            }
          if(strcmp(pBValue[i].acName,"GBS")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT2,6);
                  iBitFs1=1;
                }
            }
          if(strcmp(pBValue[i].acName,"SIM")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT2,5);
                  iBitFs1=1;
                }
            }
          if(strcmp(pBValue[i].acName,"TST")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT2,4);
                  iBitFs1=1;
                }
            }
          if(strcmp(pBValue[i].acName,"SAA")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT2,3);
                  iBitFs1=1;
                }
            }
          if(strcmp(pBValue[i].acName,"CL")==0)
            {
              if(strstr(pBValue[i].acValue,"0"))
                {
                  iBitFs1=1;
                }
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT2,1);
                  iBitFs1=1;
                }
              if(strstr(pBValue[i].acValue,"2"))
                {
                  BIT_SET(ucT1,2);
                  iBitFs1=1;
                }
              if(strstr(pBValue[i].acValue,"3"))
                {
                  BIT_SET(ucT1,1);
                  BIT_SET(ucT1,2);
                  iBitFs1=1;
                }
            }
          if(strcmp(pBValue[i].acName,"IPC")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT3,5);
                  iBitFs1=2;
                }
            }
          if(strcmp(pBValue[i].acName,"NOGO")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT3,4);
                  iBitFs2=2;
                }
            }
          if(strcmp(pBValue[i].acName,"CPR")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT3,3);
                  iBitFs2=2;
                }
            }
          if(strcmp(pBValue[i].acName,"LDPJ")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT3,2);
                  iBitFs2=2;
                }
            }
          if(strcmp(pBValue[i].acName,"RCF")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT3,1);
                  iBitFs2=2;
                }
            }
        }
      BIT_SET(acFs[0],6);
      if(iBitFs1==1) BIT_SET(ucT1,0);
      if(iBitFs2==2) BIT_SET(ucT2,0);
      acTemp[iPos++] = ucT1;
      if(iBitFs1==1) acTemp[iPos++] = ucT1;
      if(iBitFs2==1) acTemp[iPos++] = ucT2;
    }

  usT1=0,usT2=0;
  pBValue=GetSubBValue(pstCat,21026161);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"TRACKNO")==0)
            {
              usT1 =atoi(pBValue[i].acValue);
            }
        }
      usT1=HtoNs(usT1);
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      BIT_SET(acFs[0],5);
    }
  ucT1=0;
  pBValue=GetSubBValue(pstCat,21026015);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"ServcID")==0)
            {
              ucT1 =atoi(pBValue[i].acValue);
            }
        }
      acTemp[iPos++] = ucT1;
      BIT_SET(acFs[0],4);
    }
  uT1=0;
  pBValue=GetSubBValue(pstCat,21026071);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"TOD")==0)
            {
              uT1 =round(atof(pBValue[i].acValue)*128.0);
              uacT3[0]=(uT1&0x00FF0000)>>16;
              uacT3[1]=(uT1&0x0000FF00)>>8;
              uacT3[2]=uT1&0x000000FF;
            }
        }
      acTemp[iPos++] = uacT3[0];
      acTemp[iPos++] = uacT3[1];
      acTemp[iPos++] = uacT3[2];
      BIT_SET(acFs[0],3);
    }
  for(j=0;j<8;j++) uacT3[j]=0;
  pBValue=GetSubBValue(pstCat,21026130);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"LAT")==0)
            {
              if(atof(pBValue[i].acValue)<0)
                {
                }
              else
                {
                  uT1 =atof(pBValue[i].acValue)*pow(2,30)/180.0;
                }
            }
          if(strcmp(pBValue[i].acName,"LON")==0)
            {
              if(atof(pBValue[i].acValue)<0)
                {
                }
              else
                {
                  uT1 =atof(pBValue[i].acValue)*pow(2,30)/180.0;
                }
            }
        }
      uT1=HtoNl(uT1);
      uT2=HtoNl(uT2);
      memcpy(acTemp+iPos,&uT1,3);
      iPos=iPos+3;
      memcpy(acTemp+iPos,&uT2,3);
      iPos=iPos+3;
      BIT_SET(acFs[0],2);
    }

  ucT1=0;usT1=0;
  pBValue=GetSubBValue(pstCat,21026131);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"LAT")==0)
            {
              if(atof(pBValue[i].acValue)<0)
                {
                }
              else
                {
                  uT1 =atof(pBValue[i].acValue)*pow(2,30)/180.0;
                }
            }
          if(strcmp(pBValue[i].acName,"LON")==0)
            {
              if(atof(pBValue[i].acValue)<0)
                {
                }
              else
                {
                  uT1 =atof(pBValue[i].acValue)*pow(2,30)/180.0;
                }
            }
        }
      memcpy(acTemp+iPos,&uT1,sizeof(unsigned int));
      iPos=iPos+sizeof(unsigned int);
      memcpy(acTemp+iPos,&uT2,sizeof(unsigned int));
      iPos=iPos+sizeof(unsigned int);
      BIT_SET(acFs[0],1);
    }
  uT1=0;for(j=0;j<8;j++) uacT3[j]=0;
  pBValue=GetSubBValue(pstCat,21026072);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"TOD")==0)
            {
              uT1 =round(atof(pBValue[i].acValue)*128.0);
              uacT3[0]=(uT1&0x00FF0000)>>16;
              uacT3[1]=(uT1&0x0000FF00)>>8;
              uacT3[2]=uT1&0x000000FF;
            }
        }
      acTemp[iPos++] = uacT3[0];
      acTemp[iPos++] = uacT3[1];
      acTemp[iPos++] = uacT3[2];
      iFs1=1;
      BIT_SET(acFs[1],7);
    }
  ucT1=0,ucT2=0;
  pBValue=GetSubBValue(pstCat,21026150);
  if(pBValue)
    {
      ucT1=0,ucT2=0,iBitFss=0;
      for(i=0;i<3;i++)
        {
          if(strcmp(pBValue[i].acName,"IAS")==0)
            {
              ucT1 =1;
            }
          if(strcmp(pBValue[i].acName,"Mach")==0)
            {
              ucT2 =1;
            }
          if(strcmp(pBValue[i].acName,"AirSpeed")==0)
            {
              fT1 =atof(pBValue[i].acValue);
            }
        }
      if(ucT1 ==1)
        {
          usT1 = fT1/0.001;
          BIT_SET(usT1,15);
        }
      if(ucT2 ==1)
        {
          usT1 = fT1/pow(2,-14)/1852.0;
        }
      usT1=HtoNs(usT1);
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs1=1;
      BIT_SET(acFs[1],6);
    }
  ucT1=0,ucT2=0;iT=0;
  pBValue=GetSubBValue(pstCat,21026151);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"RE")==0)
            {
              ucT1=1;
            }
          if(strcmp(pBValue[i].acName,"TrueAirSpeed")==0)
            {
              usT1 =atof(pBValue[i].acValue)/1852.0;
            }
        }
      if(ucT1 ==1)
        {
          BIT_SET(usT1,15);
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs1=1;
      BIT_SET(acFs[1],5);
    }
  pBValue=GetSubBValue(pstCat,21026080);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"TargetAddress")==0)
            {
              tString2Bytes(pBValue[i].acValue,uacT3,strlen(pBValue[i].acValue));
            }
        }
      acTemp[iPos++] = uacT3[0];
      acTemp[iPos++] = uacT3[1];
      acTemp[iPos++] = uacT3[2];
      iFs1=1;
      BIT_SET(acFs[1],4);
    }
  for(j=0;j<8;j++) uacT3[j]=0;
  pBValue=GetSubBValue(pstCat,21026073);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"TOD")==0)
            {
              fT2=atof(pBValue[i].acValue);
              uT1 =round(atof(pBValue[i].acValue)*128.0);
              uacT3[0]=(uT1&0x00FF0000)>>16;
              uacT3[1]=(uT1&0x0000FF00)>>8;
              uacT3[2]=uT1&0x000000FF;
            }
        }
      acTemp[iPos++] = uacT3[0];
      acTemp[iPos++] = uacT3[1];
      acTemp[iPos++] = uacT3[2];
      iFs1=1;
      BIT_SET(acFs[1],3);
    }
  usT1=0;usT2=0;for(j=0;j<8;j++) uacT3[j]=0;
  pBValue=GetSubBValue(pstCat,21026074);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"FSI")==0)
            {
              if(atoi(pBValue[i].acValue)==0)
                {
                  ucT1=1;
                }
              if(atoi(pBValue[i].acValue)==1)
                {
                  ucT2=1;
                }
              if(atoi(pBValue[i].acValue)==2)
                {
                  ucT3=1;
                }
            }
          if(strcmp(pBValue[i].acName,"TOD")==0)
            {
              fT1 =atof(pBValue[i].acValue);
            }
        }
      if(ucT1==1)
        {
          fT1=(fT1-fT2+1)/pow(2,-30);
          BIT_SET(uT1,31);
        }
      if(ucT1==1)
        {
          fT1=(fT1-fT2-1)/pow(2,-30);
          BIT_SET(uT1,30);
        }
      if(ucT1==1)
        {
          fT1=(fT1-fT2)/pow(2,-30);
        }
      memcpy(acTemp+iPos,&uT1,sizeof(unsigned int));
      iPos=iPos+sizeof(unsigned int);
      iFs1=1;
      BIT_SET(acFs[1],2);
    }
  pBValue=GetSubBValue(pstCat,21026075);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"TOD")==0)
            {
              fT2=atof(pBValue[i].acValue);
              uT1 =round(atof(pBValue[i].acValue)*128.0);
              uacT3[0]=(uT1&0x00FF0000)>>16;
              uacT3[1]=(uT1&0x0000FF00)>>8;
              uacT3[2]=uT1&0x000000FF;
            }
        }
      acTemp[iPos++] = uacT3[0];
      acTemp[iPos++] = uacT3[1];
      acTemp[iPos++] = uacT3[2];
      iFs1=1;
      BIT_SET(acFs[1],1);
    }
  pBValue=GetSubBValue(pstCat,21026076);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"FSI")==0)
            {
              if(atoi(pBValue[i].acValue)==0)
                {
                  ucT1=1;
                }
              if(atoi(pBValue[i].acValue)==1)
                {
                  ucT2=1;
                }
              if(atoi(pBValue[i].acValue)==2)
                {
                  ucT3=1;
                }
            }
          if(strcmp(pBValue[i].acName,"TOD")==0)
            {
              fT1 =atof(pBValue[i].acValue);
            }
        }
      if(ucT1==1)
        {
          fT1=(fT1-fT2+1)/pow(2,-30);
          BIT_SET(uT1,31);
        }
      if(ucT1==1)
        {
          fT1=(fT1-fT2-1)/pow(2,-30);
          BIT_SET(uT1,30);
        }
      if(ucT1==1)
        {
          fT1=(fT1-fT2)/pow(2,-30);
        }
      memcpy(acTemp+iPos,&uT1,sizeof(unsigned int));
      iPos=iPos+sizeof(unsigned int);
      iFs2=1;
      BIT_SET(acFs[2],7);
    }
  if(iBitFs1==1) BIT_SET(acFs[0],0);
  for(j=0;j<8;j++) uacT3[j]=0;
  pBValue=GetSubBValue(pstCat,21026140);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"GeometricHeight")==0)
            {
              ucT1 =round(atof(pBValue[i].acValue)/6.25/0.3048);
            }
        }
      iFs2=1;
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      BIT_SET(acFs[2],6);
    }

  ucT1=0;ucT2=0;
  pBValue=GetSubBValue(pstCat,21026090);
  if(pBValue)
    {
      ucT1=0,ucT2=0;
      for(i=0;i<128;i++)
        {
          if(strcmp(pBValue[i].acName,"NUCrNACv")==0&&strlen(pBValue[i].acValue)>0)
            {
              ucT1 = ucT1|atoi(pBValue[i].acValue)<<5;
            }
          if(strcmp(pBValue[i].acName,"NUCNIC")==0&&strlen(pBValue[i].acValue)>0)
            {
              ucT1=ucT1|(atoi(pBValue[i].acValue)<<1);
            }
          if(strcmp(pBValue[i].acName,"BARO")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT2,7);
                  iBitFs1=1;
                }
            }
          if(strcmp(pBValue[i].acName,"SIL")==0&&strlen(pBValue[i].acValue)>0)
            {
              ucT2 = ucT2|atoi(pBValue[i].acValue)<<5;
            }
          if(strcmp(pBValue[i].acName,"NACP")==0&&strlen(pBValue[i].acValue)>0)
            {
              ucT2 = ucT2|(atoi(pBValue[i].acValue)<<1);
            }
          if(strcmp(pBValue[i].acName,"SIL1")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT3,5);
                  iBitFs2=1;
                }
            }
          if(strcmp(pBValue[i].acName,"SDA")==0&&strlen(pBValue[i].acValue)>0)
            {
              ucT3 = ucT3|atoi(pBValue[i].acValue)<<3;
              iBitFs2=1;
            }
          if(strcmp(pBValue[i].acName,"GVA")==0&&strlen(pBValue[i].acValue)>0)
            {
              ucT3 = ucT3|(atoi(pBValue[i].acValue)<<1);
              iBitFs2=1;
            }
          if(strcmp(pBValue[i].acName,"PIC")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT3,1);
                  iBitFs2=1;
                  ucT4 = atoi(pBValue[i].acValue)<<4;
                  iBitFs3=1;
                }

            }

        }
      iFs2=1;
      if(iBitFs1==1) BIT_SET(ucT1,0);
      if(iBitFs2==1) BIT_SET(ucT2,0);
      if(iBitFs3==1) BIT_SET(ucT3,0);
      acTemp[iPos++] = ucT1;
      if(iBitFs1==1) acTemp[iPos++] = ucT2;
      if(iBitFs2==1) acTemp[iPos++] = ucT3;
      if(iBitFs3==1) acTemp[iPos++] = ucT4;
      BIT_SET(acFs[2],5);
    }
  usT1=0;
  pBValue=GetSubBValue(pstCat,21026210);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"VNS")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,7);
                }
            }
          if(strcmp(pBValue[i].acName,"VN")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  ucT1=ucT1|(atoi(pBValue[i].acValue)<<3);
                }
            }
          if(strcmp(pBValue[i].acName,"LTT")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  ucT1=ucT1|(atoi(pBValue[i].acValue));
                }
            }
        }
      acTemp[iPos++] = ucT1;
      iFs2=1;
      BIT_SET(acFs[2],4);
    }
  usT1=0,usT2=0;
  pBValue=GetSubBValue(pstCat,21026070);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"Mode3A-Reply")==0)
            {
              usT1 = usT1|((pBValue[i].acValue[0]-0x30)<<9);
              usT1 = usT1|((pBValue[i].acValue[1]-0x30)<<6);
              usT1 = usT1|((pBValue[i].acValue[2]-0x30)<<3);
              usT1 = usT1|(pBValue[i].acValue[3]-0x30);
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs2=1;
      BIT_SET(acFs[2],3);
    }
  pBValue=GetSubBValue(pstCat,21026230);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"RollAngle")==0)
            {
              usT1=round(pBValue[i].acValue[0]/0.01);
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs2=1;
      BIT_SET(acFs[2],2);
    }
  pBValue=GetSubBValue(pstCat,21026145);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"FlghtLevel")==0)
            {
              usT1=round(pBValue[i].acValue[0]/0.25/FL);
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs2=1;
      BIT_SET(acFs[2],1);
    }
  pBValue=GetSubBValue(pstCat,21026152);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"Magnetic Heading")==0)
            {
              usT1=round(atof(pBValue[i].acValue)/360.0*pow(2,16));
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs2=1;
      BIT_SET(acFs[3],7);
    }
  pBValue=GetSubBValue(pstCat,21026200);
  if(pBValue)
    {
      for(i=0;i<4;i++)
        {
          if(strcmp(pBValue[i].acName,"ICF")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,7);
                }

            }
          if(strcmp(pBValue[i].acName,"LNAV")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,6);
                }
            }
          if(strcmp(pBValue[i].acName,"PS")==0)
            {
              ucT1 = ucT1|(atoi(pBValue[i].acValue)<<1);
            }
          if(strcmp(pBValue[i].acName,"SS")==0)
            {
              ucT1 = ucT1|(atoi(pBValue[i].acValue));
            }
        }
      acTemp[iPos++] = ucT1;

      iFs2=3;
      BIT_SET(acFs[3],6);
    }
  pBValue=GetSubBValue(pstCat,21026155);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"RE")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(usT1,15);
                }
            }
          if(strcmp(pBValue[i].acName,"BV Rate")==0)
            {
              usT2=round(atof(pBValue[i].acValue)/6.25);
              usT1=usT1|usT2;
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs3=1;
      BIT_SET(acFs[3],5);
    }
  pBValue=GetSubBValue(pstCat,21026157);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"RE")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(usT1,15);
                }
            }
          if(strcmp(pBValue[i].acName,"GV Rate")==0)
            {
              usT2=round(atof(pBValue[i].acValue)/6.25);
              usT1=usT1|usT2;
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs3=1;
      BIT_SET(acFs[3],4);
    }
  pBValue=GetSubBValue(pstCat,21026160);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"Range Exceeded")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(usT1,15);
                }
            }
          if(strcmp(pBValue[i].acName,"GroundSpeed")==0)
            {
              usT2=round(atof(pBValue[i].acValue)/pow(2,-14)/1852.0);
              usT1=usT1|usT2;
            }
          if(strcmp(pBValue[i].acName,"TrackAngle")==0)
            {
              usT2=round(atof(pBValue[i].acValue)/360*pow(2,16));
              usT1=usT1|usT2;
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs3=1;
      BIT_SET(acFs[3],3);
    }
  pBValue=GetSubBValue(pstCat,21026165);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"TAR")==0)
            {
              usT1=round(atof(pBValue[i].acValue)*32.0);
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs3=1;
      BIT_SET(acFs[3],2);
    }
  pBValue=GetSubBValue(pstCat,21026077);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"TOD")==0)
            {
              fT2=atof(pBValue[i].acValue);
              uT1 =round(atof(pBValue[i].acValue)*128.0);
              uacT3[0]=(uT1&0x00FF0000)>>16;
              uacT3[1]=(uT1&0x0000FF00)>>8;
              uacT3[2]=uT1&0x000000FF;
            }
        }
      acTemp[iPos++] = uacT3[0];
      acTemp[iPos++] = uacT3[1];
      acTemp[iPos++] = uacT3[2];
      iFs3=1;
      BIT_SET(acFs[3],1);
    }
  pBValue=GetSubBValue(pstCat,21026170);
  if(pBValue)
    {
      for(i=0;i<1;i++)
        {
          if(strcmp(pBValue[i].acName,"TargetIdentification")==0)
            {
              uacT3[0]=pBValue[i].acValue[0]; //xx000000
              uacT3[0]=uacT3[0]<<2; //000000xx
              uacT3[0]=uacT3[0]|pBValue[i].acValue[1]>>4; //00000000

              uacT3[1]=pBValue[i].acValue[1]<<4; //00000000 0000
              uacT3[1]=uacT3[1]|pBValue[i].acValue[2]>>2;//00000000 00000000

              uacT3[2]=pBValue[i].acValue[2]<<6;//00000000 00000000 0000
              uacT3[2]=uacT3[2]|pBValue[i].acValue[3];

              uacT3[3]=pBValue[i].acValue[4];
              uacT3[3]=uacT3[3]<<2;
              uacT3[3]=uacT3[3]|pBValue[i].acValue[5]>>4;

              uacT3[4]=pBValue[i].acValue[5]<<4;
              uacT3[4]=uacT3[4]|pBValue[i].acValue[6]>>2;

              uacT3[5]=pBValue[i].acValue[6]<<6;
              uacT3[5]=uacT3[5]|pBValue[i].acValue[7];
            }
        }
      for(j=0;j<6;j++) acTemp[iPos++] = uacT3[j];
      iFs4=1;
      BIT_SET(acFs[4],7);
    }
  pBValue=GetSubBValue(pstCat,21026020);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"RE")==0)
            {
              ucT1=atoi(pBValue[i].acValue);
            }

        }
      acTemp[iPos++] = ucT1;
      iFs4=1;
      BIT_SET(acFs[4],6);
    }
  pBValue=GetSubBValue(pstCat,21026220);
  if(pBValue)
    {
      for(i=0;i<4;i++)
        {
          if(strcmp(pBValue[i].acName,"WS")==0)
            {
              usT1=round(atof(pBValue[i].acValue)/1.852);
              BIT_SET(ucT1,7);
            }
          if(strcmp(pBValue[i].acName,"WD")==0)
            {
              usT2=atoi(pBValue[i].acValue);
              BIT_SET(ucT1,6);
            }

          if(strcmp(pBValue[i].acName,"TMP")==0)
            {
              usT3=round(atof(pBValue[i].acValue)/0.25);
              BIT_SET(ucT1,5);
            }

          if(strcmp(pBValue[i].acName,"TMB")==0)
            {
              ucT2=atoi(pBValue[i].acValue);
              BIT_SET(ucT1,4);
            }

        }
      acTemp[iPos++] = ucT1;
      if(BIT_GET(ucT1,7))
        {
          memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
          iPos=iPos+sizeof(unsigned short int);
        }
      if(BIT_GET(ucT1,6))
        {
          memcpy(acTemp+iPos,&usT2,sizeof(unsigned short int));
          iPos=iPos+sizeof(unsigned short int);
        }
      if(BIT_GET(ucT1,5))
        {
          memcpy(acTemp+iPos,&usT3,sizeof(unsigned short int));
          iPos=iPos+sizeof(unsigned short int);
        }
      if(BIT_GET(ucT1,4))
        {
          acTemp[iPos++] = ucT2;
        }
      iFs4=1;
      BIT_SET(acFs[4],5);
    }
  pBValue=GetSubBValue(pstCat,21026146);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"SAS")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(usT1,15);
                }
            }
          if(strcmp(pBValue[i].acName,"Source")==0)
            {
              if(strstr(pBValue[i].acValue,"0"))
                {

                }
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(usT1,13);
                }
              if(strstr(pBValue[i].acValue,"2"))
                {
                  BIT_SET(usT1,14);
                }
              if(strstr(pBValue[i].acValue,"3"))
                {
                  BIT_SET(usT1,14);
                  BIT_SET(usT1,13);
                }
            }
          if(strcmp(pBValue[i].acName,"Altitude")==0)
            {
              usT2=round(atof(pBValue[i].acValue)/25.0/0.384);
              usT1=usT1|usT2;
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs3=1;
      BIT_SET(acFs[4],4);
    }
  pBValue=GetSubBValue(pstCat,21026148);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"MV")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(usT1,15);
                }
            }
          if(strcmp(pBValue[i].acName,"AH")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(usT1,14);
                }
            }
          if(strcmp(pBValue[i].acName,"AM")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(usT1,13);
                }
            }
          if(strcmp(pBValue[i].acName,"Altitude")==0)
            {
              usT2=round(atof(pBValue[i].acValue)/25.0/0.384);
              usT1=usT1|usT2;
            }
        }
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      iFs3=1;
      BIT_SET(acFs[4],3);
    }

  pBValue=GetSubBValue(pstCat,21026110);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"NAV")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT2,7);
                }
            }
          if(strcmp(pBValue[i].acName,"NVB")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT2,6);
                }
            }
          if(strcmp(pBValue[i].acName,"TID")==0)
            {
              if(strlen(pBValue[i].acValue)>0)
                {
                  BIT_SET(ucT1,6);
                  usT1=tString2Bytes(pBValue[i].acValue,acTemp,strlen(pBValue[i].acValue));
                }
            }
        }

      if(ucT2>0)
        {
          BIT_SET(ucT1,7);
          BIT_SET(ucT1,0);
        }
      acTemp[iPos++] = ucT1;
      if(ucT2>0)
        {
          acTemp[iPos++] = ucT2;
        }
      if(usT1>0)
        {
          memcpy(acTemp+iPos,acTemp,usT1);
          iPos=iPos+usT1;
        }
      iFs3=1;
      BIT_SET(acFs[4],2);
    }
  pBValue=GetSubBValue(pstCat,21026016);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"SMgmt")==0)
            {
              ucT1=atoi(pBValue[i].acValue);
            }

        }
      acTemp[iPos++] = ucT1;
      iFs4=1;
      BIT_SET(acFs[4],1);
    }
  pBValue=GetSubBValue(pstCat,21026008);
  if(pBValue)
    {
      for(i=0;i<16;i++)
        {
          if(strcmp(pBValue[i].acName,"RA")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,7);
                }
            }
          if(strcmp(pBValue[i].acName,"TC")==0)
            {
              if(strstr(pBValue[i].acValue,"0"))
                {
                }
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,5);
                }
              if(strstr(pBValue[i].acValue,"2"))
                {
                  BIT_SET(ucT1,6);
                }
              if(strstr(pBValue[i].acValue,"3"))
                {
                  BIT_SET(ucT1,6);
                  BIT_SET(ucT1,5);
                }
            }
          if(strcmp(pBValue[i].acName,"TS")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,4);
                }
            }
          if(strcmp(pBValue[i].acName,"ARV")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,3);
                }
            }
          if(strcmp(pBValue[i].acName,"CDTI/A")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,2);
                }
            }
          if(strcmp(pBValue[i].acName,"Not TCAS")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,1);
                }
            }
          if(strcmp(pBValue[i].acName,"SA")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,0);
                }
            }
        }
      acTemp[iPos++] = ucT1;
      iFs5=1;
      BIT_SET(acFs[5],7);
    }
  pBValue=GetSubBValue(pstCat,21026271);
  if(pBValue)
    {
      for(i=0;i<16;i++)
        {
          if(strcmp(pBValue[i].acName,"POA")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,5);
                }
            }
          if(strcmp(pBValue[i].acName,"CDTI/S")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,4);
                }
            }
          if(strcmp(pBValue[i].acName,"B2LOW")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,3);
                }
            }
          if(strcmp(pBValue[i].acName,"RAS")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,2);
                }
            }
          if(strcmp(pBValue[i].acName,"IDENT")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT1,1);
                }
            }
          if(strcmp(pBValue[i].acName,"LW")==0)
            {
                ucT2=atoi(pBValue[i].acValue);
            }
        }
      if(ucT2>0) BIT_SET(ucT1,0);
      acTemp[iPos++] = ucT1;
      if(ucT2>0) acTemp[iPos++] = ucT2;
      iFs5=1;
      BIT_SET(acFs[5],6);
    }
  pBValue=GetSubBValue(pstCat,21026132);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"MAM")==0)
            {
              ucT1=atoi(pBValue[i].acValue);
            }

        }
      acTemp[iPos++] = ucT1;
      iFs5=1;
      BIT_SET(acFs[5],5);
    }
  pBValue=GetSubBValue(pstCat,21026250);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"MB")==0)
            {
              ucT1=atoi(pBValue[i].acValue);
            }
        }
      acTemp[iPos++] = ucT1;
      iFs5=1;
      BIT_SET(acFs[5],4);
    }
  pBValue=GetSubBValue(pstCat,21026400);
  if(pBValue)
    {
      for(i=0;i<2;i++)
        {
          if(strcmp(pBValue[i].acName,"RID")==0)
            {
              ucT1 = atoi(pBValue[i].acValue);
            }
        }
      acTemp[iPos++] = ucT1;
      iFs5=1;
      BIT_SET(acFs[5],3);
    }
  pBValue=GetSubBValue(pstCat,21026260);
  if(pBValue)
    {
      for(i=0;i<16;i++)
        {
          if(strcmp(pBValue[i].acName,"TYP")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  ucT1 = usT1|(atoi(pBValue[i].acValue)<<3);
                }
            }
          if(strcmp(pBValue[i].acName,"STYP")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  ucT1 = usT1|(atoi(pBValue[i].acValue));
                }
            }
          if(strcmp(pBValue[i].acName,"ARA")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  usT1 = atoi(pBValue[i].acValue);
                }
            }
          if(strcmp(pBValue[i].acName,"RAC")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  ucT2 = atoi(pBValue[i].acValue);
                }
            }
          if(strcmp(pBValue[i].acName,"RAT")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT3,3);
                }
            }
          if(strcmp(pBValue[i].acName,"MTE")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                  BIT_SET(ucT3,3);
                }
            }
          if(strcmp(pBValue[i].acName,"TTI")==0)
            {
              if(strstr(pBValue[i].acValue,"1"))
                {
                 ucT3=ucT3| atoi(pBValue[i].acValue);
                }
            }
          if(strcmp(pBValue[i].acName,"TID")==0)
            {
               uT1 = atoi(pBValue[i].acValue);
            }
        }

      usT1=usT1<<2;
      usT1=usT1|usT2>>6;
      ucT3=usT3|usT2<<6;
      ucT3=ucT3|uT1>>24;
      uacT3[0]=(uT1&0x00FF0000)>>16;
      uacT3[1]=(uT1&0x0000FF00)>>8;
      uacT3[2]=uT1&0x000000FF;
      acTemp[iPos++] = ucT1;
      memcpy(acTemp+iPos,&usT1,sizeof(unsigned short int));
      iPos=iPos+sizeof(unsigned short int);
      acTemp[iPos++] = ucT3;
      acTemp[iPos++] = uacT3[0];
      acTemp[iPos++] = uacT3[1];
      acTemp[iPos++] = uacT3[2];
      iFs5=1;
      BIT_SET(acFs[5],2);
    }

  pBValue=GetSubBValue(pstCat,21026295);
  if(pBValue)
    {
      for(i=0;i<32;i++)
        {
          if(strcmp(pBValue[i].acName,"AOS")==0)
            {
              BIT_SET(ucT1,7);
              uacT3[0]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"TRD")==0)
            {
              BIT_SET(ucT1,6);
              uacT3[1]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"M3A")==0)
            {
              BIT_SET(ucT1,5);
              uacT3[2]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"QI")==0)
            {
              BIT_SET(ucT1,4);
              uacT3[3]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"TI")==0)
            {
              BIT_SET(ucT1,3);
              uacT3[4]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"MAM")==0)
            {
              BIT_SET(ucT1,2);
              uacT3[5]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"GH")==0)
            {
              BIT_SET(ucT1,1);
              uacT3[6]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"FL")==0)
            {
              BIT_SET(ucT2,7);
              uacT3[7]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"ISA")==0)
            {
              BIT_SET(ucT2,6);
              uacT3[8]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"FSA")==0)
            {
              BIT_SET(ucT2,5);
              uacT3[9]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"AS")==0)
            {
              BIT_SET(ucT2,4);
              uacT3[10]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"TAS")==0)
            {
              BIT_SET(ucT2,3);
              uacT3[11]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"MH")==0)
            {
              BIT_SET(ucT2,2);
              uacT3[12]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"BVR")==0)
            {
              BIT_SET(ucT2,1);
              uacT3[13]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"GVR")==0)
            {
              BIT_SET(ucT3,7);
              uacT3[14]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"GV")==0)
            {
              BIT_SET(ucT3,6);
              uacT3[15]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"TAR")==0)
            {
              BIT_SET(ucT3,5);
              uacT3[16]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"TI")==0)
            {
              BIT_SET(ucT3,4);
              uacT3[17]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"TS")==0)
            {
              BIT_SET(ucT3,3);
              uacT3[18]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"MET")==0)
            {
              BIT_SET(ucT3,2);
              uacT3[19]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"RDA")==0)
            {
              BIT_SET(ucT3,1);
              uacT3[20]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"ARA")==0)
            {
              BIT_SET(ucT4,7);
              uacT3[21]=round(atof(pBValue[i].acValue)/0.1);
            }
          if(strcmp(pBValue[i].acName,"SCC")==0)
            {
              BIT_SET(ucT4,6);
              uacT3[22]=round(atof(pBValue[i].acValue)/0.1);
            }
        }

      if(ucT4>0) BIT_SET(ucT3,0);
      if(ucT3>0) BIT_SET(ucT2,0);
      if(ucT2>0) BIT_SET(ucT1,0);
      acTemp[iPos++] = ucT1;
      if(ucT2>0) acTemp[iPos++] = ucT2;
      if(ucT3>0) acTemp[iPos++] = ucT3;
      if(ucT4>0) acTemp[iPos++] = ucT4;
      for(j=0;j<32;j++)
      {
          if(uacT3[j]>0)
            acTemp[iPos++] = uacT3[j];
      }
      iFs5=1;
      BIT_SET(acFs[5],1);
    }


  if(iFs1==1) BIT_SET(acFs[1],0);
  if(iFs2==1) BIT_SET(acFs[2],0);
  if(iFs3==1) BIT_SET(acFs[3],0);
  if(iFs4==1) BIT_SET(acFs[4],0);
  usT1 = iPos;
  usT1 = HtoNs(usT1);
  pCatBuff[0] = 0x21;
  memcpy(pCatBuff+1,&usT1,sizeof(unsigned short int));
  for(j=0;j<6;j++)
    {
      if(acFs[j]>0)
        {
          pCatBuff[3+j]=acFs[j];
          iT=iT+1;
        }
    }
  memcpy(pCatBuff+3+iT,acTemp,iPos);
  return iPos;
}

int JsonToByte021026(unsigned char *pCatBuff,char *pJson)
{
  CAT stCat;
  int iBuffLen;
  memset(&stCat,0,sizeof(CAT));
  InitCAT021026(&stCat);
  ParseJsonCat(pJson,&stCat);
  PrintfCat(&stCat);
  iBuffLen = CteateByteCat021026(pCatBuff,&stCat);
  return iBuffLen;
}

int ByteToJson021026(unsigned char *pCatBuff,char *pJson)
{
  CAT stCat;
  int i,ibPos=0,ijPos=0,ibPosnew;
  while(1)
    {
      memset(&stCat,0,sizeof(CAT));
      InitCAT021026(&stCat);
      ibPos = ParseByteCAT021026(pCatBuff,&stCat,ibPos);
      if(ibPos>=0)
		{
			PrintfCat(&stCat);
			ijPos = CreateJsonCat(pJson,&stCat,ijPos);
          if(ibPos==0)
          	break;
    	  else
    	  {
    	  	strcat(pJson,"#");
          	ijPos=ijPos+1;
		  }
        }
		else if(ibPos<0)
        {
          return -1;
        }
      //printf("%d %d %d\n",i,ibPos,ijPos);
    }
  //printf("%s\n",pJson);
  return strlen(pJson);
}
