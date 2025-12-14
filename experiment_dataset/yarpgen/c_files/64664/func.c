/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64664
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
    var_15 = var_5;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(arr_1 [(_Bool)1])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_1 [i_1 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 1])))));
                var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) ((long long int) var_14)))), (max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0])))));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (_Bool)1))));
                var_18 = ((/* implicit */unsigned int) ((signed char) ((((long long int) arr_5 [i_0] [i_1 - 1])) << (((((arr_1 [i_0]) / (((/* implicit */long long int) arr_5 [i_0] [i_0])))) - (2924049606LL))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (+(var_12)));
    var_20 = ((/* implicit */unsigned short) var_11);
    var_21 = var_2;
}
