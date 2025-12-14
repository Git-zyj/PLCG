/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74280
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (short)-29193)));
                arr_6 [8U] [(unsigned char)2] &= ((/* implicit */unsigned int) min(((unsigned short)65517), (((/* implicit */unsigned short) (signed char)-75))));
            }
        } 
    } 
    var_12 *= var_1;
    var_13 = ((/* implicit */long long int) (signed char)74);
}
