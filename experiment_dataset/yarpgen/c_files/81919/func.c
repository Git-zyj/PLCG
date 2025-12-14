/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81919
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))))) : (((1952591003) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) < (12004550285974862843ULL))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(short)18] &= ((/* implicit */unsigned short) ((-1077162455) - (((/* implicit */int) var_4))));
                arr_6 [i_1] [i_1] [i_1] = arr_4 [i_0 - 2] [i_1];
            }
        } 
    } 
    var_11 = ((/* implicit */short) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) var_1)), (-1LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) (unsigned short)18855)) - (18842))))))))));
    var_12 |= ((/* implicit */unsigned long long int) var_7);
    var_13 = ((/* implicit */unsigned long long int) ((long long int) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_3))))));
}
