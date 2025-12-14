/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99933
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
    var_19 = ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((14059669730388308865ULL), (arr_2 [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) 12136670882221660941ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 404916315956662140ULL)))) > (var_1))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17777)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2 + 4] [i_3 - 1]))) : (18148409705932682841ULL)))) ? (((404916315956662132ULL) >> (((404916315956662149ULL) - (404916315956662094ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_2 - 1] [i_4])) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_2 + 2] [11])) : (((/* implicit */int) arr_7 [i_3 + 1] [i_2 + 1] [i_2])))))));
                                arr_16 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) var_6)), (min((((((/* implicit */int) (unsigned short)2240)) << (((((var_15) + (348436548))) - (22))))), (((/* implicit */int) arr_6 [i_3] [i_3 + 1] [5LL]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_5])) > (((/* implicit */int) var_2)))) ? ((-(((/* implicit */int) arr_17 [i_5] [i_5])))) : (((/* implicit */int) (((+(582535227438752825LL))) != (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)156))))))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)960))) / (18446744073709551615ULL)))) && (((/* implicit */_Bool) (signed char)116))))));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_6] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (_Bool)0))) > (((/* implicit */int) ((short) arr_20 [i_5] [i_5] [i_6])))));
            var_22 += ((((/* implicit */int) arr_20 [i_5] [i_5] [i_5])) > (((/* implicit */int) max((var_10), (((/* implicit */short) arr_18 [i_5]))))));
            arr_24 [i_5] = ((/* implicit */unsigned long long int) max((min((arr_17 [(short)15] [i_6]), (arr_17 [i_6] [i_5]))), (((/* implicit */short) var_3))));
            arr_25 [i_5] [i_6] [i_5] = ((((/* implicit */_Bool) (unsigned short)960)) ? (404916315956662157ULL) : (12136670882221660941ULL));
            arr_26 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((404916315956662140ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2240)) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 5612013909695409231ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (short)24172))) / (582535227438752847LL)))))));
        }
        /* vectorizable */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) var_9);
            arr_29 [i_5] [i_5] = ((/* implicit */int) ((short) var_15));
            var_24 = ((/* implicit */unsigned long long int) ((short) arr_21 [i_7 - 1]));
            arr_30 [i_5] = ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (unsigned char)14)) : (1818054631));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    var_25 = ((/* implicit */int) ((long long int) arr_33 [2ULL] [i_7 - 1] [2ULL] [i_7 - 1]));
                    arr_39 [i_5] [i_5] [i_5] [i_5] = var_5;
                }
                var_26 |= ((/* implicit */unsigned char) arr_28 [i_5] [(signed char)11]);
            }
            for (int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 298564350)) ? (-582535227438752822LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                arr_43 [i_10] [(unsigned short)12] [i_10] &= ((/* implicit */int) (unsigned short)960);
                arr_44 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_31 [i_5] [i_7 - 1])));
            }
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) var_14);
            var_29 = ((/* implicit */_Bool) (short)-30069);
            arr_47 [(unsigned char)16] [i_5] = ((/* implicit */long long int) var_13);
            arr_48 [i_5] [i_5] [(signed char)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? ((+(4503599627370492ULL))) : (((/* implicit */unsigned long long int) ((((arr_22 [i_5] [i_5]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_17 [i_11 - 1] [i_11 - 1])) - (17445))))))));
            var_30 = ((/* implicit */unsigned char) ((arr_28 [i_5] [(signed char)11]) != (((((((/* implicit */long long int) arr_36 [2] [i_11 - 1] [i_11 - 1])) != ((-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_22 [i_5] [(short)12])))));
        }
    }
    /* vectorizable */
    for (unsigned char i_12 = 1; i_12 < 22; i_12 += 3) 
    {
        var_31 = ((_Bool) ((_Bool) (unsigned short)960));
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) var_8))));
    }
    for (short i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        arr_57 [i_13] [i_13] = ((/* implicit */long long int) var_13);
        arr_58 [(signed char)24] [i_13] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) ((int) 404916315956662121ULL))) : ((~(12136670882221660941ULL)))))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) 2302986925U))));
        arr_59 [i_13] = ((/* implicit */_Bool) (unsigned short)58431);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
    {
        for (unsigned char i_15 = 2; i_15 < 14; i_15 += 4) 
        {
            {
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((short) (+(arr_34 [i_15 - 1])))))));
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (+(13567153378301836439ULL))))));
                arr_65 [i_14] = ((/* implicit */_Bool) arr_51 [(unsigned char)9]);
                arr_66 [i_14] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (6310073191487890675ULL));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned char) var_14);
}
