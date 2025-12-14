/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83411
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))) ? ((-(arr_1 [i_0]))) : (((/* implicit */int) ((arr_6 [i_0]) > (((/* implicit */long long int) 13U))))))));
                var_17 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (-3098973410366417489LL) : (((((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6))) / (max((arr_3 [i_0] [i_0]), (9223372036854775807LL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (short)-12792);
    var_19 &= ((/* implicit */_Bool) var_9);
}
