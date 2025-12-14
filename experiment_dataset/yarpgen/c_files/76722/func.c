/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76722
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */signed char) var_7);
                arr_5 [i_0 - 1] [i_0] [3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_2 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0]), (((/* implicit */unsigned short) var_18))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6310993515069513668ULL)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) var_14))))))) ? (arr_3 [i_1 - 1] [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)2047), (((/* implicit */unsigned short) (_Bool)1))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_8))));
    var_22 = ((/* implicit */_Bool) var_16);
    var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_15))));
}
