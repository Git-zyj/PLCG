/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82961
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 7212271583264945764LL)))))) > (((min((((/* implicit */long long int) 0U)), (-4817230616992366839LL))) + (((/* implicit */long long int) min((0U), (0U))))))));
    var_19 = ((/* implicit */unsigned char) ((max((8U), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) * (4294967295U))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_16) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (-747623425))))))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)119)), (var_16)))) && (((((/* implicit */_Bool) 13U)) && (((/* implicit */_Bool) 5737764U)))))))) & (((((var_3) / (4294967287U))) * (((4294967282U) ^ (4294967280U))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned int) ((max((min((var_5), (((/* implicit */int) var_7)))), (((var_5) / (((/* implicit */int) (signed char)93)))))) < (((/* implicit */int) ((((((/* implicit */int) (unsigned char)46)) == (((/* implicit */int) var_8)))) || (((/* implicit */_Bool) ((var_16) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))))));
                    arr_9 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 13U)) % (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 4294967295U)))))) == (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)46)) / (((/* implicit */int) (signed char)119)))), (((((/* implicit */int) (signed char)101)) & (((/* implicit */int) arr_0 [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) + (((/* implicit */int) (signed char)-127)))))))), (max((((/* implicit */long long int) (short)-4752)), (-7959601820047114268LL)))));
}
