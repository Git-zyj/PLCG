/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58725
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [6] [11LL] [(short)2] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                arr_5 [i_1] = ((((/* implicit */_Bool) max(((unsigned short)54121), (arr_0 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)-6153)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */short) max((((int) min((var_12), (((/* implicit */int) (short)6161))))), (((/* implicit */int) var_1))));
}
