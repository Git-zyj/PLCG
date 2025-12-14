/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98515
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 &= ((/* implicit */int) (unsigned short)42214);
    var_20 |= ((/* implicit */unsigned char) -322883691);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)42214)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_22 ^= ((/* implicit */unsigned char) (short)-26780);
                arr_5 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) 4311528448985948088LL);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_8 [(unsigned char)0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)42214)) | (((/* implicit */int) (unsigned char)3)))))))));
                    var_23 |= ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) % ((-(arr_4 [i_2]))))), (arr_0 [i_1] [i_2])));
                    arr_9 [i_1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)26781))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-13)) + (2147483647))) << (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)40384)))) > (((/* implicit */int) (unsigned char)24)))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    var_24 += ((/* implicit */unsigned long long int) ((unsigned short) arr_13 [i_1] [i_0] [i_1]));
                    arr_14 [i_0] = ((/* implicit */short) (-((~(4311528448985948105LL)))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_25 ^= ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)218)))) & (((/* implicit */int) (_Bool)1))));
                                arr_20 [i_4] [i_4] [(short)10] [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_3 + 2] [i_1]);
                                var_26 = ((/* implicit */long long int) (~(((13071354092371265733ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23340)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((unsigned char) var_0));
                                arr_26 [i_0] [i_1] [i_0] [i_0] [(_Bool)1] [i_6] [(short)4] = ((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))));
                                var_28 = ((/* implicit */short) (_Bool)1);
                                var_29 += ((/* implicit */unsigned long long int) -4311528448985948090LL);
                            }
                        } 
                    } 
                }
                for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)5992))));
                    var_31 = ((/* implicit */short) ((2821189433916978191LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42)))));
                    arr_29 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_8]))));
                    arr_30 [i_1] [i_8] [i_8] [i_1] = ((/* implicit */unsigned int) ((max(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */_Bool) 2903776005U)) && (((/* implicit */_Bool) (unsigned char)239)))))) || (((/* implicit */_Bool) var_5))));
                }
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    arr_33 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)202);
                        arr_37 [i_0] [i_1] [i_9 + 1] [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) ((short) (unsigned short)42181))), ((unsigned short)55450)))) / (((((/* implicit */int) (unsigned short)63594)) << (((((/* implicit */int) (unsigned char)239)) - (235)))))));
                    }
                    for (short i_11 = 2; i_11 < 21; i_11 += 3) /* same iter space */
                    {
                        arr_40 [i_11] [i_1] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_11);
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 1; i_12 < 22; i_12 += 3) 
                        {
                            arr_43 [i_12] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(380420468138996583LL))))));
                            arr_44 [i_12] [i_12] [i_11] [i_9] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (short)10769));
                            var_32 += ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)239))))));
                            arr_45 [i_0] [i_1] [i_0] [i_1] [i_11 + 2] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) * (((/* implicit */int) (unsigned short)25146))))) * (min((((/* implicit */unsigned int) var_7)), (arr_25 [i_0] [i_9 + 1] [10ULL])))));
                        }
                    }
                    for (short i_13 = 2; i_13 < 21; i_13 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)64849)))) <= (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            arr_53 [i_0] [i_1] [i_9 + 1] [i_13] [i_1] [i_13] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) % (-7304385863525297919LL)))));
                            arr_54 [i_0] [i_0] [i_0] [i_9] [i_13 - 2] [i_14] = ((((/* implicit */int) (unsigned short)63360)) != ((~(arr_2 [i_1]))));
                            arr_55 [i_0] [(signed char)22] [i_9] [i_13 - 2] [i_14] = ((/* implicit */unsigned char) ((5672125102216205622ULL) + (((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_9] [i_13 + 1]))));
                            arr_56 [i_0] [i_0] [i_9 + 1] [i_0] [i_14] = ((/* implicit */long long int) (+(var_17)));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)42214)) || (((/* implicit */_Bool) 350267479U))));
                        }
                    }
                }
            }
        } 
    } 
}
