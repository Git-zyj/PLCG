/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79712
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)6])) * (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_1] [i_1]))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (unsigned short)31);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((((/* implicit */int) var_11)), (((((/* implicit */int) (short)-14085)) - (((((/* implicit */_Bool) (unsigned short)28345)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (_Bool)1))))))));
    var_19 = ((/* implicit */short) max(((~(((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) (+(var_16))))));
}
