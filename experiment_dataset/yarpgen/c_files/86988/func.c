/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86988
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_17 *= ((/* implicit */short) ((int) ((short) (!(((/* implicit */_Bool) var_5))))));
        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (1454379604)));
        var_19 &= (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(-14LL)))) != (var_1)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_5 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_16))));
        var_20 = (~(((/* implicit */int) arr_2 [i_1])));
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_2 [i_2])))))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_12))));
        var_23 *= ((/* implicit */short) ((((long long int) var_8)) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        var_24 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [(short)10] [i_3 + 1]))));
        arr_12 [i_3] = ((/* implicit */short) ((arr_10 [i_3 - 1] [i_3]) != (arr_10 [i_3 - 1] [i_3 - 1])));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                {
                    var_25 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_16)))) || (((/* implicit */_Bool) arr_15 [i_5] [i_5 + 1] [12LL]))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32307))) - (((arr_11 [i_3] [i_4]) / (((/* implicit */long long int) var_7))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_18 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) != (((/* implicit */unsigned long long int) arr_10 [0] [i_3])))))) : (arr_13 [i_3 - 1])));
                }
            } 
        } 
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((((((/* implicit */_Bool) var_8)) ? (-1454379604) : (((/* implicit */int) var_10)))) + (2147483647))) << ((((-(var_14))) - (8332179764067435580ULL))))))));
    }
    var_29 &= ((/* implicit */unsigned int) var_11);
}
