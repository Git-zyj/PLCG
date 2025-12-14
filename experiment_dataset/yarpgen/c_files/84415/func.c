/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84415
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((arr_0 [(signed char)0]), (((/* implicit */long long int) ((signed char) max((var_0), (((/* implicit */long long int) var_14)))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((min((((/* implicit */int) (unsigned char)249)), (462139118))) > (((/* implicit */int) (unsigned short)15484))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9))))));
    }
    var_18 = ((/* implicit */int) 2970571039U);
    var_19 &= ((/* implicit */signed char) max((2970571026U), (3518101810U)));
}
