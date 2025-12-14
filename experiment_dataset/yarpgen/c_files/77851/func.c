/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77851
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned short) ((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) var_3)))));
            arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)37)), ((unsigned short)55871))))) != (max((var_8), (var_3))))));
        }
        var_12 += ((/* implicit */int) var_0);
        var_13 = ((/* implicit */int) (unsigned char)242);
    }
    var_14 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3304532319U)) ? (((/* implicit */long long int) 2147483647)) : (var_2)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)15))))) : ((-(var_10))))));
    var_15 = ((/* implicit */unsigned char) var_7);
}
