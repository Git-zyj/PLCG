/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88718
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
    for (long long int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */unsigned char) min((min((((int) 1247842007334076714ULL)), (((/* implicit */int) var_1)))), (((/* implicit */int) (signed char)0))));
                var_14 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_4 [i_0 + 2] [i_0] [i_0 + 1])), (2117045602U)))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2798597071608814690ULL))));
}
