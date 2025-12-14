/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88350
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
    var_10 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), ((((_Bool)0) ? (var_8) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [5ULL] [i_0] = ((/* implicit */signed char) (_Bool)0);
        var_11 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned short) ((1365810069) << (((((/* implicit */int) (_Bool)1)) - (1)))));
        var_13 = arr_5 [i_1];
    }
    var_14 = ((/* implicit */signed char) (((-(var_2))) < (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
