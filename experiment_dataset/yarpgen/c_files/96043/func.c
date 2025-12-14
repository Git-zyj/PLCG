/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96043
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
    var_20 -= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_13)) : (var_2))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-7216936501694843616LL))))) % (var_16)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */unsigned short) min(((+(13086086753537553834ULL))), (((/* implicit */unsigned long long int) (-(arr_4 [10U]))))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (((!(((arr_2 [i_0] [(signed char)0]) == (((/* implicit */long long int) arr_3 [i_0] [8LL] [i_1])))))) ? (min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) var_19)))) : (arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned short) 5360657320171997799ULL);
    var_24 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & ((~((~(var_18)))))));
    var_25 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((0U) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >> (((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))) - (3267))))) : (((/* implicit */unsigned int) min((max((var_1), (((/* implicit */int) var_10)))), ((+(((/* implicit */int) var_12)))))))));
}
