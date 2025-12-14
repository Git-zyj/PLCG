/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85192
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (short)-10776))))));
        var_21 = ((/* implicit */unsigned int) (~((-(1411943260)))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_5 [i_1])))))));
        arr_9 [9] = ((/* implicit */unsigned long long int) (unsigned char)92);
        arr_10 [i_1] = arr_4 [i_1 + 1];
        var_22 |= ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) (short)16256)))) ? (((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16256))))) : (((/* implicit */unsigned long long int) (-(32640U)))))), (((/* implicit */unsigned long long int) ((long long int) arr_6 [i_1 - 1])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 3] = ((/* implicit */long long int) (-(((/* implicit */int) (short)14520))));
            var_23 ^= var_2;
        }
        for (short i_3 = 1; i_3 < 12; i_3 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 2; i_4 < 13; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) min(((short)11638), ((short)16238)))) ? (((((/* implicit */_Bool) max(((short)-16251), (((/* implicit */short) var_3))))) ? (((unsigned long long int) (unsigned char)18)) : (arr_11 [i_1 - 3] [i_3 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_15 [i_1])), (arr_5 [(short)13])))) != ((-(arr_11 [i_4] [i_5])))))))));
                            arr_25 [i_1] [i_1] [11U] [i_1] [i_5] [11U] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (arr_22 [i_1 + 1] [i_3 + 2] [i_3 + 2] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_3 - 1])) ? (arr_22 [i_1 - 3] [i_3 + 2] [i_3 + 1] [i_4 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_3 + 1])))))));
                            var_25 = ((/* implicit */unsigned short) ((long long int) arr_24 [i_1] [i_3 + 1] [i_4 - 2] [i_5] [i_3 + 1] [i_4 - 1] [i_6 - 2]));
                            arr_26 [i_4] [2U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_12 [i_6 - 1] [i_4] [i_4]))) ? ((-(arr_4 [i_6 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)11)))))))));
                        }
                    } 
                } 
            } 
            arr_27 [i_1] [(_Bool)1] = ((/* implicit */long long int) ((unsigned int) arr_23 [i_1 - 1] [i_1 - 2]));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-16261)))) > ((((_Bool)1) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
            /* LoopSeq 3 */
            for (unsigned int i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                arr_30 [i_7] = ((/* implicit */short) var_5);
                arr_31 [i_1 + 2] [i_1 + 2] [i_3 - 1] [i_1 + 2] = ((/* implicit */unsigned int) arr_28 [i_1 + 2] [i_1 + 2] [i_7 + 1] [i_7 - 1]);
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_35 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (arr_23 [i_1 - 3] [i_7 - 1])))) / ((+(2519688500U)))));
                    arr_36 [i_1] [0U] [i_3] [i_3] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65512))) : (var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_21 [i_1] [i_1] [i_1] [i_7 + 1] [i_1 - 2] [i_3 - 1])))) : (min((((/* implicit */unsigned int) (short)17074)), (1895638962U)))));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                arr_41 [i_1] [i_1] [1U] = ((/* implicit */long long int) (_Bool)1);
                var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_3 + 2])) ? (((/* implicit */int) (short)-10250)) : (((/* implicit */int) var_11))));
            }
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                arr_45 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (max((((/* implicit */int) var_15)), (396449097)))))), (((((/* implicit */_Bool) arr_19 [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17074))) : (min((((/* implicit */unsigned long long int) arr_17 [i_1 - 1] [i_3] [8U])), (8444249301319680ULL)))))));
                arr_46 [i_1] [i_3 + 2] [i_3 + 2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_38 [i_3 + 2])) && (((/* implicit */_Bool) var_16)))));
            }
        }
        for (short i_11 = 1; i_11 < 12; i_11 += 2) /* same iter space */
        {
            arr_49 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((short) var_7))), (arr_22 [i_11 + 2] [i_1 - 3] [i_11 + 2] [i_11 + 2]))))));
            arr_50 [i_1 - 3] [(short)10] = ((/* implicit */long long int) var_19);
        }
    }
    var_28 &= ((/* implicit */signed char) ((((/* implicit */int) var_7)) & ((~(var_0)))));
    var_29 = ((/* implicit */unsigned long long int) (unsigned char)26);
}
