/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63494
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */int) ((signed char) arr_0 [i_0]))))))));
                    arr_7 [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (max((((var_10) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (arr_3 [i_1] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_13))));
    var_19 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_11)))) != (((/* implicit */int) var_16))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_12))));
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))));
}
