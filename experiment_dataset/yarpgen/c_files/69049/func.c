/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69049
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
    var_20 = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(var_0))), (((/* implicit */int) min((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_0]))))))) ? (min((((int) var_12)), (((((/* implicit */_Bool) 3794298322U)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) var_13)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [(short)13])), (7838787536416879537ULL)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-29336)), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))));
            }
        } 
    } 
}
