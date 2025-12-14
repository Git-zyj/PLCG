/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64397
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
    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
    var_13 = ((/* implicit */unsigned char) var_5);
    var_14 ^= ((/* implicit */int) var_11);
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((7350936697054518214LL), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)193))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((16382U) != (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20199)))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned char)5))));
        arr_3 [i_0] = ((/* implicit */long long int) ((_Bool) arr_1 [i_0] [i_0]));
        arr_4 [i_0] [i_0] &= var_5;
    }
}
