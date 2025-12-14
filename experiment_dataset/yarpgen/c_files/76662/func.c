/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76662
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
    var_17 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (34359738304ULL))))) + (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_5)), (var_0))))))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_2), (((((/* implicit */int) (short)15)) - (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_9)) / (1736384373)))))) : ((+(var_0)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) var_14);
                arr_5 [i_0] = ((/* implicit */int) (((-(((/* implicit */int) var_7)))) < ((~(((/* implicit */int) (signed char)-18))))));
                var_20 = ((/* implicit */long long int) var_8);
                arr_6 [i_0] [i_1] [(unsigned short)5] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                var_21 -= ((/* implicit */int) (short)15);
            }
        } 
    } 
}
