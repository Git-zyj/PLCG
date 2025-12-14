/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5631
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) 2869555957U)), (-2651497809538390375LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25139)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)25139)) && (((/* implicit */_Bool) arr_2 [i_2 - 1])))) && (((/* implicit */_Bool) (-(var_0))))));
                    var_22 = ((((/* implicit */_Bool) var_15)) ? ((+(((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */long long int) arr_7 [(signed char)8] [i_2] [(signed char)7])) : (-2651497809538390371LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))));
                }
            } 
        } 
    } 
}
