/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58438
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_10 = 1919296312353560556LL;
        var_11 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) 15784569162137694666ULL));
        var_13 = ((/* implicit */unsigned short) ((unsigned long long int) (short)-2));
        var_14 += ((/* implicit */short) (-9223372036854775807LL - 1LL));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) (unsigned short)52107);
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_4]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_19 [i_5] [i_5] [(short)9] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_2]))) / ((+(9223372036854775807LL)))));
                        var_15 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_3]))));
                        var_16 = ((/* implicit */long long int) arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_2]);
                        arr_20 [i_2] [2ULL] [i_2] [i_3] [i_2] &= arr_15 [i_4 + 1];
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_17 += ((/* implicit */long long int) arr_12 [i_3] [i_2] [i_2]);
                        arr_24 [i_2] [i_3] [i_2] [i_6] [i_6] = arr_22 [2LL];
                    }
                    var_18 += ((/* implicit */unsigned long long int) arr_6 [i_2] [i_4]);
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_2]))))), (max((arr_12 [i_2] [i_3] [i_7]), (arr_17 [i_2] [i_2] [i_4 - 1] [i_7])))));
                        var_20 -= ((short) ((0LL) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_4 + 1] [i_7])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            arr_30 [i_2] [i_2] [i_2] [i_7] [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)-32761)), (arr_11 [i_4 - 1]))))));
                            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_4 + 1])) != (((/* implicit */int) arr_23 [i_2] [i_2] [i_2]))))), (1997472625180500186LL)));
                        }
                        arr_31 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) min((arr_2 [i_4] [i_4 - 1]), (arr_27 [i_2] [i_3] [i_2] [i_4] [i_2])));
                    }
                    for (short i_9 = 2; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        var_22 += ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_6 [i_2] [i_3])), (arr_22 [i_2]))) < (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3]))));
                        arr_35 [i_2] [i_2] [i_4] [i_2] [i_4] [13ULL] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) arr_28 [i_2] [i_9 + 1] [i_4] [i_9] [i_4 + 1] [i_3])), (arr_32 [i_2] [i_9 + 1] [i_2] [i_4]))), (10529925701982210630ULL)));
                    }
                    /* vectorizable */
                    for (short i_10 = 2; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        arr_39 [i_2] [i_2] [i_2] [10LL] = ((/* implicit */unsigned long long int) (~(arr_27 [i_2] [i_3] [i_4] [(short)11] [i_2])));
                        arr_40 [i_2] [i_2] [i_3] [i_4] [i_10] = ((/* implicit */unsigned short) arr_27 [i_10] [i_10 + 2] [i_10 - 1] [13ULL] [i_2]);
                        var_23 = ((/* implicit */unsigned short) min((var_23), (arr_7 [i_2])));
                        arr_41 [i_2] [i_3] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_10] [i_10] [7ULL] [i_10 + 3]))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) arr_37 [i_2] [i_3] [i_3] [i_3] [2LL]);
                        arr_45 [i_2] [i_3] [i_4] [i_2] [i_3] = ((/* implicit */long long int) arr_3 [i_3]);
                        var_25 = arr_15 [i_11];
                    }
                    arr_46 [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_4 + 1]);
                }
            } 
        } 
    }
    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] [i_12] = ((/* implicit */long long int) ((unsigned long long int) arr_3 [i_12]));
        arr_51 [i_12] = max((arr_11 [i_12]), (-1997472625180500186LL));
        arr_52 [i_12] [i_12] = ((max((((unsigned long long int) 0LL)), (((/* implicit */unsigned long long int) arr_15 [i_12])))) ^ (max((((/* implicit */unsigned long long int) arr_23 [i_12] [i_12] [i_12])), (((unsigned long long int) 0ULL)))));
    }
    var_26 ^= ((/* implicit */unsigned short) (~(max((var_6), (((/* implicit */unsigned long long int) var_1))))));
    var_27 -= ((/* implicit */unsigned long long int) var_3);
}
