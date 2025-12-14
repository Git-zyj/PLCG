/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96820
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) var_8));
                    var_16 = ((/* implicit */unsigned char) var_5);
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)));
                }
            } 
        } 
        var_18 -= ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
        var_19 = ((/* implicit */unsigned long long int) var_0);
    }
    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        var_20 = ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))));
        arr_12 [i_3 + 2] [i_3 + 2] &= ((/* implicit */_Bool) (+((-(-8369724881794527320LL)))));
        var_21 ^= ((/* implicit */_Bool) var_11);
    }
    var_22 = ((/* implicit */_Bool) var_13);
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_4))));
}
