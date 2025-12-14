/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84831
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((((/* implicit */int) var_12)) - (((/* implicit */int) var_13))))))), (min((((/* implicit */long long int) var_6)), (((long long int) 1653132162246018333LL))))));
    var_17 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [2U] [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) | (arr_7 [i_0] [i_0] [i_0])))) : (arr_0 [i_0])));
                    arr_11 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)47)), (0U)))) : (((-2831563910426599321LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33392))))));
                }
            } 
        } 
    } 
}
