/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72613
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [(short)4]);
                    arr_10 [i_0] [i_0] [(_Bool)1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_1 - 1])), (arr_3 [i_2] [i_0])))) != (min((min((var_0), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) var_10))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (unsigned char)255))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */short) ((int) var_8));
}
