/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7066
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
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((!(var_16))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))))), (((((/* implicit */_Bool) ((var_3) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (min((var_5), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))));
    var_19 = ((/* implicit */_Bool) max((min((((var_9) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))), (((/* implicit */int) max((var_17), (((/* implicit */short) (_Bool)0))))))), (((/* implicit */int) max(((!(var_16))), (var_4))))));
    var_20 ^= ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (var_12))) + (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_0])) * (((/* implicit */int) var_7))))), (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)6144)) && (((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1] [(short)8])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (((2269814212194729984ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_0 + 1] [7ULL] [i_1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0] [(short)4])) : (((/* implicit */int) (short)-18)))), (((/* implicit */int) var_6)))))));
                var_23 = ((/* implicit */int) (+(((((((/* implicit */_Bool) (short)21056)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_5))) >> (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
