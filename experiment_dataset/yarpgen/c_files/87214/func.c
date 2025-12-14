/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87214
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
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((5006225374159463347LL) ^ (((/* implicit */long long int) 383741117U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : ((~(max((((/* implicit */unsigned long long int) var_9)), (var_2))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_4 [i_1] [i_0]) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 - 2])))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_0);
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((383741117U) == (4294967287U))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((3911226179U), (0U)))))) ? ((((_Bool)1) ? (3911226193U) : (383741105U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    var_19 *= ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_2)) || (var_10))), ((!(((/* implicit */_Bool) var_7)))))) && (((/* implicit */_Bool) var_11))));
}
