/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81599
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) max(((-(arr_1 [(signed char)16]))), (((/* implicit */unsigned int) max((var_4), (((/* implicit */int) (_Bool)0)))))))), (min(((+(var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                var_10 = ((/* implicit */unsigned int) min((((unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0])) & (((/* implicit */int) var_8))))), (((/* implicit */unsigned short) (unsigned char)145))));
                arr_5 [i_1] = ((/* implicit */short) max((((var_6) ? (arr_0 [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) var_1)))), (arr_0 [i_1 + 1] [i_1])));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_9);
    var_12 = ((/* implicit */unsigned int) var_2);
    var_13 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9))) : (((/* implicit */long long int) ((var_4) % (var_4)))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) 3895372629U)) ? (((/* implicit */int) var_6)) : (var_4))), (((/* implicit */int) var_5)))))));
}
