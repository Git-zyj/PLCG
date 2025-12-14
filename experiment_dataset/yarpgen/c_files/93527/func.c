/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93527
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
    var_13 &= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((var_12) == (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (var_3))) == (((/* implicit */long long int) ((/* implicit */int) ((((_Bool) var_6)) && (((/* implicit */_Bool) var_10))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_4))));
                var_15 = ((/* implicit */short) (+(((unsigned long long int) arr_1 [i_1] [(unsigned short)6]))));
            }
        } 
    } 
}
