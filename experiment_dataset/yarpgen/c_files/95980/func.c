/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95980
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (unsigned short)61867);
                    arr_8 [i_2] [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                    var_14 = ((/* implicit */unsigned int) (unsigned short)3668);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (var_5)))))) : (((/* implicit */unsigned long long int) var_9))));
}
