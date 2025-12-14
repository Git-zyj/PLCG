/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63428
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
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4194048)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (signed char)-65)))))));
    var_15 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [(signed char)2] [i_0] = ((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) != (((/* implicit */int) var_4)));
                    arr_9 [i_1] [8U] [(signed char)12] = ((/* implicit */int) arr_7 [i_1] [i_0]);
                    var_16 = ((/* implicit */unsigned int) ((arr_7 [i_0] [i_2]) < (((/* implicit */long long int) 65536U))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (((-(var_8))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) -7148481422252846844LL)) || (var_12)))))))));
}
