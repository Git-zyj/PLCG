/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87712
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
    var_18 = ((/* implicit */_Bool) min((((var_3) + (var_15))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((419531261U), (var_16)))), ((~(var_8))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((int) var_7));
                    var_20 = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_11))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */long long int) var_0);
}
