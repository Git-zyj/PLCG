/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81638
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_15), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) ((signed char) max((var_16), (var_8))))) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */_Bool) ((((((/* implicit */int) (!(var_9)))) != ((-(((/* implicit */int) var_16)))))) ? (((/* implicit */int) var_2)) : (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))), (min((var_4), (((/* implicit */unsigned int) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))) ? ((+(var_12))) : ((+(var_1)))))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))));
}
