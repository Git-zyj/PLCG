/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59789
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
    var_15 = ((/* implicit */_Bool) var_8);
    var_16 = ((/* implicit */long long int) var_10);
    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3562143333523219554LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) -3562143333523219554LL)) : (var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_18 *= ((/* implicit */int) arr_0 [i_1]);
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 3562143333523219554LL))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */_Bool) var_2);
    }
}
