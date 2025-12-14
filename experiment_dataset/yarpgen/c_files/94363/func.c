/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94363
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (1020215690U))))));
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) ((short) arr_3 [i_1]));
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                /* LoopSeq 4 */
                for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2] [i_1 + 3] [i_2])) <= (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_3 [i_1 + 2]))))));
                    var_20 = ((/* implicit */unsigned short) (short)-13209);
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_10))))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) (~(var_4)))) : ((+(var_9)))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-13209)) || (((/* implicit */_Bool) arr_2 [i_1 + 3] [i_3]))))) : (((/* implicit */int) max((arr_2 [i_1 + 3] [4]), (((/* implicit */unsigned char) var_10)))))));
                    arr_11 [(unsigned char)2] [i_1 + 3] [i_2] [i_3] = ((/* implicit */unsigned int) ((signed char) (~((~(((/* implicit */int) (short)-13219)))))));
                }
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    arr_15 [i_0] [i_0] [i_2] [15ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-13220)) | (((/* implicit */int) (signed char)27))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 3]))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_4])) == (((/* implicit */int) arr_6 [i_2] [i_2 - 1] [i_4]))))))));
                    var_22 = ((signed char) (signed char)-6);
                    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (short)13184))) | (((/* implicit */int) ((signed char) (signed char)0))))) ^ (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)42805)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13195))) : (8610900690483221953LL)))))));
                    var_24 = ((/* implicit */unsigned long long int) arr_14 [i_0] [(unsigned char)1] [i_2] [i_2]);
                }
                for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_0] [i_0]))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 1] [i_2 + 2])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_5])))))));
                    arr_19 [i_2] = ((/* implicit */unsigned char) (short)13208);
                }
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    var_26 = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1 + 1])) + (2147483647))) << (((((/* implicit */int) (unsigned char)209)) - (209)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_27 &= ((/* implicit */unsigned char) ((int) var_13));
                        arr_25 [i_0] [i_2] [(signed char)12] = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                    }
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)53))))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)13228)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (short)13213))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (short)13206))))) ? (((/* implicit */int) min((arr_26 [i_1] [i_1 + 3] [i_1 + 3] [i_1] [i_1]), (arr_18 [(signed char)10] [i_1 - 1] [(unsigned char)5] [(signed char)10] [(signed char)10] [i_1 + 2])))) : (((((/* implicit */int) (signed char)48)) ^ (((/* implicit */int) (short)-13208))))));
                        var_31 = ((/* implicit */unsigned short) ((signed char) (~(18446744073709551615ULL))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 24; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0] [i_0]), (var_12)));
                        arr_31 [i_0] [i_2] = ((/* implicit */unsigned short) var_14);
                    }
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_9))));
                    arr_32 [i_0] [i_6] [i_6] [12LL] |= ((/* implicit */unsigned char) ((signed char) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((((/* implicit */short) arr_23 [i_6] [i_6] [i_2] [i_1] [i_0])), ((short)-13209)))))));
                    var_34 = ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) (signed char)48)), (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1] [i_6] [i_1] [i_1])), (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-13220)) * (((/* implicit */int) (short)-27146))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((long long int) var_6)) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)80))))))))));
                }
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    for (unsigned char i_11 = 4; i_11 < 24; i_11 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) max(((unsigned char)81), ((unsigned char)175)))))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) / (-3412918498158897997LL)));
                        }
                    } 
                } 
                arr_38 [i_2] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((3085176520U), (((/* implicit */unsigned int) (short)13207)))))));
                arr_39 [(unsigned char)7] [i_1 + 1] [i_2 + 1] [i_2] = ((/* implicit */signed char) var_1);
                /* LoopSeq 4 */
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    var_37 = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-1))));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [(unsigned char)5] [(unsigned char)5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54)))))))))));
                    }
                    for (short i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)67)) <= (((/* implicit */int) ((signed char) arr_16 [i_1] [i_1] [i_1 + 1] [i_2 - 1] [i_2 - 1] [(signed char)14])))));
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) var_2))));
                        var_42 = (+(((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                    }
                    var_43 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)188)), ((short)3249))))));
                }
                for (signed char i_15 = 2; i_15 < 22; i_15 += 2) 
                {
                    var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1023154105)) ? (((/* implicit */int) (short)13231)) : (((/* implicit */int) (unsigned char)60)))) - (((/* implicit */int) var_11))))), (min((((/* implicit */unsigned int) arr_14 [(signed char)12] [i_1] [i_2] [i_15])), (((unsigned int) var_8)))))))));
                    arr_49 [i_0] [(signed char)5] [i_2] [i_0] [(unsigned char)0] = ((/* implicit */signed char) 2846204431726897484ULL);
                }
                /* vectorizable */
                for (long long int i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                {
                    var_45 &= ((/* implicit */unsigned char) ((((unsigned int) var_7)) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3))))));
                    var_46 = (unsigned char)206;
                }
                for (long long int i_17 = 0; i_17 < 25; i_17 += 4) /* same iter space */
                {
                    var_47 = ((/* implicit */unsigned long long int) ((signed char) arr_22 [8U] [i_1] [i_2] [i_2] [(short)17]));
                    var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) -589259606)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (unsigned char)199)))))));
                    var_49 |= ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1 + 2] [5ULL] [i_17])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)0)) != (((/* implicit */int) (signed char)-53)))) && (((/* implicit */_Bool) var_4))))))));
                }
            }
        }
    }
    for (short i_18 = 0; i_18 < 23; i_18 += 1) 
    {
        var_50 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (9745773777709114764ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17038)))))) ? (((/* implicit */int) ((((/* implicit */int) (short)17013)) <= (1754108569)))) : (((int) (unsigned char)58))));
        var_51 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned char)199)))))) > (253600009U)))) * (((((/* implicit */_Bool) 5431809595778183429LL)) ? ((~(((/* implicit */int) (signed char)3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 196891242U)))))))));
        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) 253600009U)) && (((/* implicit */_Bool) (short)-17039)))))));
        var_53 = ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */int) arr_48 [i_18] [i_18] [i_18] [i_18])) << (((((/* implicit */int) var_15)) - (43250))))) | (((/* implicit */int) arr_42 [i_18] [(unsigned char)13] [(signed char)0] [(signed char)0] [21LL])))));
    }
    var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16591379818058598986ULL)) ? (((/* implicit */int) (signed char)32)) : (1754108569)))) ? (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-15)) <= (((/* implicit */int) (unsigned char)50))))))));
}
