/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84734
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */int) ((586392639) >= (((/* implicit */int) (unsigned char)233))));
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (~(min((-7779497254437927683LL), (3170095676518826165LL))))))));
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */unsigned char) ((((_Bool) 3515262393U)) || (((/* implicit */_Bool) var_3))));
    var_13 = ((/* implicit */_Bool) (signed char)31);
    var_14 = ((/* implicit */long long int) max((((unsigned long long int) ((unsigned int) (short)-20263))), (var_7)));
}
