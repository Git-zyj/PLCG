/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71858
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)(-32767 - 1))), (((((int) (short)32761)) << (((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) (unsigned short)19933)))))))));
    var_17 = ((/* implicit */short) max((min((min((-5243053241238980324LL), (((/* implicit */long long int) 1941464865)))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_0))))))), (((/* implicit */long long int) var_11))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) min(((short)(-32767 - 1)), ((short)32746)))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) var_0))) - (2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */signed char) var_11)), (var_2))), (((/* implicit */signed char) ((var_9) <= (((/* implicit */unsigned long long int) var_15))))))))) : (((min((var_5), (var_4))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) != (var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            {
                arr_4 [(signed char)4] |= ((/* implicit */short) max((max((((var_11) ? (var_13) : (((/* implicit */unsigned long long int) var_15)))), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (var_4)))) && ((!(((/* implicit */_Bool) (short)-32038)))))))));
                var_19 -= ((/* implicit */long long int) ((((unsigned int) 466759416)) >= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19933)) >> (((((/* implicit */int) (signed char)121)) - (115))))))));
                var_20 = ((/* implicit */signed char) (((-(((var_15) / (((/* implicit */int) var_2)))))) | (((/* implicit */int) min((((((/* implicit */_Bool) (signed char)-91)) || (((/* implicit */_Bool) (signed char)14)))), ((!(var_11))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_15)))))))));
            }
        } 
    } 
}
