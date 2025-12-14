/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86193
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
    var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) var_1))))) : (max((var_3), (((/* implicit */unsigned int) var_0)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
    var_11 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (~(var_6)))), (min((((/* implicit */unsigned long long int) var_8)), (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */int) var_1)), (var_0))) : (((/* implicit */int) max((((/* implicit */short) var_7)), (var_2)))))))));
                arr_4 [i_0] = ((/* implicit */short) max((min(((+(var_3))), (min((var_3), (((/* implicit */unsigned int) var_0)))))), (((((/* implicit */_Bool) 1953998564U)) ? (396932149U) : (((/* implicit */unsigned int) -99731554))))));
                var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))), (max((((/* implicit */unsigned long long int) var_6)), ((~(var_4)))))));
                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */int) var_9)), (var_6))), (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_7))))))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) var_8)), (var_4))) : (max((((/* implicit */unsigned long long int) var_5)), (var_4)))))) ? (max((((/* implicit */int) var_1)), (min((((/* implicit */int) var_7)), (var_6))))) : (min((((var_9) ? (((/* implicit */int) var_1)) : (var_6))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_6)))))));
}
