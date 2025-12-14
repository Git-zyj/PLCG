/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82743
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
    var_20 -= ((/* implicit */short) max(((+((~(((/* implicit */int) var_15)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)9)), ((unsigned char)5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), ((!(((((/* implicit */_Bool) arr_0 [i_1])) && ((!(((/* implicit */_Bool) (unsigned char)5))))))))));
                var_22 *= ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_0])), (arr_2 [i_0] [8ULL]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1])))))));
                var_23 -= ((/* implicit */signed char) ((unsigned short) ((arr_3 [i_1]) - (arr_3 [i_1]))));
                arr_6 [0LL] = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
        } 
    } 
    var_24 += ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)))))) ? (((/* implicit */int) var_19)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((var_16) >= (var_18)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned short)7))))))));
}
