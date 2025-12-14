/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73314
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
    var_17 = ((/* implicit */long long int) (!(((_Bool) (unsigned char)54))));
    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)190)) ? (var_11) : (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_2)))) ? (var_14) : (((/* implicit */unsigned int) ((var_1) / (((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-118)) < (((/* implicit */int) (short)-15237))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)28)) || (((/* implicit */_Bool) (unsigned char)196))))))), (min((((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (signed char)61)))), (((/* implicit */int) arr_4 [i_1 - 1]))))));
                var_20 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -3))))) >> (((((/* implicit */int) max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 + 1] [i_1 + 2])))) + (15017)))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (unsigned char)39);
}
