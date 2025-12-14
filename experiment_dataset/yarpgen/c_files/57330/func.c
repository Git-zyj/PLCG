/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57330
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
    var_18 = ((((/* implicit */int) (!(((/* implicit */_Bool) -222878416))))) | ((+(((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10707064365779854324ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0])))));
        arr_5 [i_0 + 1] [i_0 - 1] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_0 - 1])) % (((/* implicit */int) var_12))));
            arr_9 [i_0 - 1] = ((/* implicit */int) (((+(var_14))) >= (arr_2 [i_1])));
            arr_10 [i_0 - 1] [i_1] = ((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])));
        }
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            arr_14 [i_0] = ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)27803)))) - (((/* implicit */int) (!(((/* implicit */_Bool) -1087542400))))));
            var_19 = ((/* implicit */unsigned short) (-(1030225095392451957ULL)));
            arr_15 [i_2] = ((/* implicit */unsigned short) arr_2 [i_2]);
            arr_16 [i_0] = (-(arr_2 [i_0 + 1]));
        }
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) 4194300)) ? (((/* implicit */int) var_7)) : (var_11)))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 3) 
    {
        arr_21 [i_3] = ((/* implicit */short) max((((arr_20 [i_3 - 2]) * (arr_20 [i_3 - 3]))), (min((15481359387180317377ULL), (2731539490344584912ULL)))));
        var_20 = ((/* implicit */int) (-(((unsigned long long int) arr_18 [i_3 + 2]))));
        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_3 - 3])), (arr_6 [i_3] [i_3 + 2] [9]))))));
        var_22 |= ((/* implicit */short) arr_0 [i_3 + 2]);
    }
}
