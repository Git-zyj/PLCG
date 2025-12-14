/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87636
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(var_0)))) & (((/* implicit */int) max((var_1), (((/* implicit */short) var_2))))))))));
    var_12 |= ((/* implicit */signed char) ((((/* implicit */int) var_3)) != ((~(((/* implicit */int) var_3))))));
    var_13 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_4))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (unsigned short)1909))));
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 1] [(unsigned short)23])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                }
            } 
        } 
    } 
}
