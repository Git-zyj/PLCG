/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83718
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (max((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)70)) * (((/* implicit */int) (unsigned char)14))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (1346258889) : (((/* implicit */int) var_7))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [2ULL] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_5 [10] [i_1] [i_1] [i_1])))) % (min((var_10), (((/* implicit */int) var_15))))));
                }
            } 
        } 
    } 
}
