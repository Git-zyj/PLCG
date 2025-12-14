/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8915
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32256)) ? (((/* implicit */int) (short)28)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 3106320471U)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]))))))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        var_18 -= ((/* implicit */unsigned short) arr_8 [i_1] [(short)11] [i_3]);
                        var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3]))))), ((-(var_15)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_14 [i_4] [i_4] = ((/* implicit */_Bool) ((arr_6 [i_4] [i_2] [i_1]) >> (((min((arr_6 [i_0] [i_1] [i_4]), (arr_6 [i_4] [i_0] [i_0]))) - (13532155308500675880ULL)))));
                        arr_15 [i_4] = ((/* implicit */int) ((var_11) * (((/* implicit */unsigned long long int) (((!((_Bool)0))) ? (((/* implicit */int) (short)28)) : (((/* implicit */int) (signed char)16)))))));
                    }
                    for (short i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        arr_19 [(short)5] = ((/* implicit */unsigned long long int) ((signed char) (-(arr_17 [i_5 - 1] [i_5 - 1] [i_2] [i_5 - 1]))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_11 [(unsigned short)12] [i_5 - 1] [i_5 + 1] [(unsigned short)12] [i_5] [(unsigned short)12])))), ((-(((/* implicit */int) arr_11 [i_2] [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5])))))))));
                    }
                    var_21 = ((/* implicit */_Bool) var_12);
                    var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (max((2147483647), (((/* implicit */int) (short)-28)))) : (((arr_9 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -610379771)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (8ULL)))) ? (((/* implicit */unsigned long long int) -610379771)) : (((var_5) >> (((((/* implicit */int) var_14)) + (16540)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) -2623444805698798475LL);
        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) (+(2623444805698798478LL))))));
    }
}
