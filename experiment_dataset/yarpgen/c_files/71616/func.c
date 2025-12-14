/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71616
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
    var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)208))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : (max((((/* implicit */long long int) var_3)), (var_10))))), (((((var_2) + (9223372036854775807LL))) << (((((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)43)))) - (37)))))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_11))))) ? (13274175653218797717ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)1])) ? (((/* implicit */int) var_11)) : (var_7)))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) var_10)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (_Bool)0);
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_21 *= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (short)1252)) << (((((((/* implicit */_Bool) var_14)) ? (1245577658) : (((/* implicit */int) arr_6 [(_Bool)1])))) - (1245577641)))))), ((~(var_15)))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_2] [i_2] = ((/* implicit */long long int) (((((+(var_8))) << (((arr_5 [i_1]) + (323715213))))) >> (((min((((arr_8 [i_2] [i_2] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))))), (((/* implicit */long long int) arr_0 [i_1 - 1])))) - (843LL)))));
                    var_22 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_7) & (((/* implicit */int) (short)1252))))) && (((/* implicit */_Bool) arr_4 [i_1 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3]))) > (((((/* implicit */_Bool) (unsigned short)56958)) ? (3588649190472883664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1252)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) 713490091)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) && (((/* implicit */_Bool) (unsigned short)3125)))))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_23 = ((/* implicit */short) (~(((unsigned int) min((arr_8 [i_4] [i_4] [i_4]), (((/* implicit */long long int) var_7)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            arr_28 [i_1 + 3] [i_1 + 2] [i_6] [(short)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_27 [i_4] [(_Bool)1] [i_5] [i_4] [(signed char)4] [i_1 - 1] [i_1])) || ((_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(8587477976941504329LL)))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) ((signed char) arr_27 [20] [i_5] [i_5] [i_7] [i_6] [i_6] [i_6])))))) : (((((/* implicit */_Bool) arr_17 [i_1 + 1])) ? (12602452234791455962ULL) : (((/* implicit */unsigned long long int) arr_17 [i_1 - 1]))))));
                            arr_29 [i_1] [i_6] [i_5] [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1])) ? (min((((((/* implicit */_Bool) 16100414119142789467ULL)) ? (8750328902018559667ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_6] [i_4])), ((signed char)119)))) & (((/* implicit */int) (short)-10797)))))));
                        }
                    } 
                } 
                var_24 += ((/* implicit */unsigned long long int) ((long long int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) 6061996374565888428ULL)))));
            }
            for (unsigned short i_8 = 2; i_8 < 22; i_8 += 4) 
            {
                arr_33 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_16)) ^ (((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_1 + 2] [i_8] [i_8 + 2])) ? (4316255607472476985LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1 - 1] [i_4] [i_8] [i_8 - 2])))))))) ? (((/* implicit */int) arr_21 [i_1] [i_1] [0])) : (((/* implicit */int) var_3))));
                var_25 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) > (((/* implicit */int) arr_31 [i_1] [i_4] [i_4] [(short)13])))))));
                arr_34 [i_4] [i_4] [15LL] [i_4] = ((/* implicit */short) (+(((long long int) arr_0 [i_1 + 2]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_9 = 1; i_9 < 20; i_9 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [i_1 + 3] [i_1] [(_Bool)1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) 3418908940U)) : (15057425106705001121ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_1] [i_9] [1] [1])) ^ (arr_17 [i_8 + 2]))))));
                    var_27 = ((((/* implicit */_Bool) (~(var_17)))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))));
                    var_28 = ((/* implicit */_Bool) arr_35 [i_1 + 3] [i_9 + 4] [i_9] [i_8] [i_4] [i_4]);
                    var_29 = 8891397908044742759LL;
                }
                /* vectorizable */
                for (long long int i_10 = 1; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    arr_39 [i_1 + 3] [(short)11] [i_8] [i_10 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 + 3])) & (((/* implicit */int) arr_0 [i_1 + 3]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) var_12)))) - (824349878)));
                        arr_42 [(short)14] [i_4] [i_8] [i_10 + 4] [(short)14] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) (short)21359))));
                    }
                    for (int i_12 = 4; i_12 < 23; i_12 += 3) 
                    {
                        arr_45 [i_12] [i_12] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_12])) ? (((/* implicit */long long int) var_13)) : (arr_27 [i_1] [i_4] [i_8 - 1] [i_8] [i_10] [i_12 - 4] [i_12 - 4]))));
                        arr_46 [i_4] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_30 [i_12 - 2] [i_4] [i_1]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        arr_49 [i_1 + 1] [i_13] [i_8] [i_10 + 4] [(short)21] = ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_1 - 1] [i_1 + 1] [i_8 - 2] [i_10] [i_10 + 2])) * (((/* implicit */int) arr_37 [i_1] [i_1 + 2] [i_8 + 1] [i_8 + 1] [i_10 - 1]))));
                        arr_50 [i_13] = ((/* implicit */unsigned char) ((long long int) arr_43 [i_8 + 1] [i_10 + 1]));
                        var_31 = ((/* implicit */long long int) ((signed char) arr_19 [20] [i_1 + 1] [i_1 + 2]));
                    }
                }
                var_32 = arr_5 [i_4];
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                for (long long int i_15 = 1; i_15 < 21; i_15 += 4) 
                {
                    {
                        arr_56 [i_14] [(signed char)6] [i_14] = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) arr_40 [i_1] [i_4] [i_1] [i_1] [i_15 + 1] [i_14]))), (max((((/* implicit */long long int) arr_12 [i_4] [i_4] [i_14] [i_14])), (-1164677960551511083LL)))));
                        arr_57 [i_14] [i_14] [11LL] [i_15 - 1] = (-(((((((/* implicit */_Bool) arr_15 [i_14] [i_4] [i_14])) || (((/* implicit */_Bool) 9131261872543097895LL)))) ? (((((/* implicit */_Bool) arr_52 [i_1] [i_14] [(_Bool)1] [i_1])) ? (((/* implicit */int) (short)-10316)) : (((/* implicit */int) var_1)))) : (((((var_6) + (2147483647))) >> (((((/* implicit */int) (signed char)-108)) + (110))))))));
                        /* LoopSeq 1 */
                        for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            var_33 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_54 [i_1] [i_1] [i_14] [i_4] [i_16])), (-713490089)))) & (max((arr_16 [i_1 + 3] [i_16] [i_14]), (((/* implicit */unsigned long long int) arr_53 [i_16] [i_16])))))) == (((/* implicit */unsigned long long int) (~(((arr_15 [i_1] [i_1] [i_1]) / (arr_27 [i_1 - 1] [i_4] [i_4] [i_4] [i_14] [i_1 - 1] [i_16]))))))));
                            arr_60 [(signed char)23] [i_4] [i_14] [0] [i_15] [(signed char)16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_1] [i_4] [i_16]))))) ? (arr_1 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((var_9), (((/* implicit */short) arr_22 [i_1] [i_4] [i_14] [i_15 + 2] [i_14]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)184)))))))) : (((arr_36 [i_1] [(signed char)9] [i_1 + 3] [i_4] [i_16] [i_15 + 3]) / (((/* implicit */unsigned long long int) arr_23 [i_14] [i_1] [i_1 + 3] [i_14]))))));
                            var_34 = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)27)))) ? (max((((/* implicit */long long int) (unsigned char)57)), (arr_26 [i_14]))) : (min((arr_26 [i_4]), (arr_26 [i_1 + 3])))));
                            var_35 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_59 [i_14] [22ULL] [i_15 - 1] [(short)23] [i_15 + 2] [i_15 + 1])) ? (max((var_17), (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) -6452087416581613826LL)))))));
                        }
                    }
                } 
            } 
        }
    }
    for (signed char i_17 = 1; i_17 < 21; i_17 += 1) /* same iter space */
    {
        arr_64 [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) -3680046747156138649LL)) ? (((((_Bool) arr_30 [i_17 - 1] [i_17 + 2] [i_17 - 1])) ? ((-(var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_43 [i_17] [i_17]) : (((/* implicit */int) (short)19760))))))) : (((/* implicit */long long int) ((((((((/* implicit */int) (short)-27577)) + (2147483647))) << (((3680046747156138649LL) - (3680046747156138649LL))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_17] [i_17 + 2] [1LL] [i_17])) && (((/* implicit */_Bool) -1224302091))))))))));
        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_21 [i_17 + 2] [i_17 - 1] [i_17 + 1]), (((/* implicit */unsigned char) ((_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) (-((~(arr_53 [i_17 - 1] [2])))))) : (((((/* implicit */_Bool) arr_38 [i_17 + 2] [i_17 - 1] [i_17 + 2] [i_17 + 1])) ? (min((((/* implicit */unsigned long long int) arr_1 [i_17])), (arr_36 [i_17] [i_17 + 3] [10ULL] [i_17] [i_17] [i_17]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5044))))))))));
    }
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */unsigned long long int) (-(var_16)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_8)))))));
}
