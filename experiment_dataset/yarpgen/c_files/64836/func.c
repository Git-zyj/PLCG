/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64836
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))));
    var_16 = ((/* implicit */signed char) min((14273588427057391352ULL), (((/* implicit */unsigned long long int) 1075985014U))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0 - 1]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)228)) + (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
