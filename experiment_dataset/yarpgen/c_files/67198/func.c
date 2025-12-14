/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67198
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3749033684U)) ? (932347900U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4319)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1] [i_1] [i_0])) ? (arr_5 [i_1 + 1] [6LL] [i_1] [i_0]) : (arr_5 [i_1 - 3] [i_1 - 3] [i_1] [i_0]))));
                    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_5 [i_0] [i_1 + 1] [i_1 - 3] [i_2]) + (9223372036854775807LL))) >> (((arr_5 [i_0] [i_1 + 1] [i_1 - 2] [i_2]) + (7695699839695616655LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_5 [i_0] [i_0] [i_1 - 3] [i_2])));
                }
            } 
        } 
    } 
}
