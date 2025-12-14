/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77213
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)28329))))), ((+(arr_3 [i_0 - 2])))));
                var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) 2783413611U)) % (1703426750637981841LL)))))) < (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))));
                var_12 |= ((/* implicit */unsigned char) ((2783413581U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) var_5);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((/* implicit */int) ((max((var_3), (((/* implicit */unsigned int) var_2)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((2783413591U) != (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))), (((((((/* implicit */_Bool) 1ULL)) ? (-13) : (((/* implicit */int) var_5)))) / ((~(((/* implicit */int) (_Bool)0)))))))))));
}
