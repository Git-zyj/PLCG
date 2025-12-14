/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78876
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
    var_15 = ((/* implicit */unsigned char) min((6082258086271395987LL), (((long long int) (~(var_13))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)8192))));
                    var_16 = var_13;
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((-308131752) % (((/* implicit */int) (signed char)122)))) : (1009972480))))));
                }
            } 
        } 
    } 
}
