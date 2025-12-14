/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62423
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
    var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3548535668123224263LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned char)129)))))) : (var_10)));
    var_13 = ((/* implicit */short) ((((((((/* implicit */int) var_5)) != (1915697984))) || (((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) ? (1308913150) : (((((/* implicit */int) var_6)) + (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) <= (18446744073709551610ULL))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) arr_2 [i_0] [6])))));
        var_15 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1915697985)))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [10U] [(short)4])) ? (((1298999286U) << (((var_1) - (2183765484U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
        var_17 = ((/* implicit */int) var_2);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((9ULL) >> (((((/* implicit */int) arr_2 [12U] [i_0])) - (11512)))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_11)))))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */_Bool) var_1);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_15 [4U] [i_1] [i_1] &= ((/* implicit */unsigned long long int) (+(-1915697992)));
                        var_19 ^= ((/* implicit */unsigned long long int) -1915697985);
                        arr_16 [0] [(unsigned short)5] [i_1] [(unsigned short)5] = ((/* implicit */unsigned int) arr_4 [9ULL]);
                        var_20 = ((/* implicit */unsigned char) var_8);
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) arr_17 [i_0] [i_0] [i_0 + 1] [i_0 - 1]));
                        arr_19 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_2])) ? (arr_6 [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 2; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1915697965)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-9223372036854775807LL - 1LL))));
                            arr_22 [i_4] [i_0] [i_0 + 1] [(unsigned char)1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_5))));
                            var_24 = (((!(((/* implicit */_Bool) var_7)))) ? (arr_8 [i_6 - 2]) : (((/* implicit */unsigned long long int) ((int) var_2))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) max((var_25), ((+(114688)))));
                            arr_30 [i_4] [i_1] [i_1] [(unsigned short)7] [i_1] [i_1] = ((unsigned long long int) var_5);
                        }
                    }
                    for (short i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_4)))))) != (max((((unsigned int) var_3)), (((/* implicit */unsigned int) var_7)))))))));
                        arr_34 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((int) arr_26 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_1] [i_0 - 2] [i_0]))));
                    }
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) var_2);
    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
}
