/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81683
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
    var_15 += ((/* implicit */unsigned int) var_6);
    var_16 += ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * ((-(((/* implicit */int) (unsigned short)34856))))))) ? (min((((/* implicit */long long int) max((var_8), ((signed char)88)))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (arr_1 [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)12167)))))));
        var_18 = ((/* implicit */signed char) min(((+((-(var_2))))), (max(((~(2142715684268380068ULL))), (((((/* implicit */_Bool) var_0)) ? (1146374952720636801ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3057))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0))));
            arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) var_10)) : (1146374952720636801ULL));
        }
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) arr_5 [i_1]))));
    }
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) var_5))) ? (((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) var_14)) - (1206))))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) << (((((((/* implicit */int) var_6)) + (130))) - (8)))));
    var_22 = ((/* implicit */signed char) ((long long int) var_0));
}
