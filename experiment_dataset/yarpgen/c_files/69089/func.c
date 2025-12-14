/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69089
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((signed char) max((3487152168U), (((/* implicit */unsigned int) var_6))))));
                var_20 = ((/* implicit */short) (+(max((var_10), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (arr_0 [(_Bool)1]))))))));
                var_21 = ((/* implicit */int) var_5);
                var_22 = ((/* implicit */signed char) var_19);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((var_2) > (max((((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))), (var_16)))));
    var_24 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) 3487152168U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_14))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned int) var_2))))) ? (((int) var_13)) : (((/* implicit */int) var_5)))))));
}
