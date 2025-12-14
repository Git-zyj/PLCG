/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87392
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) var_3);
                                var_14 |= ((/* implicit */_Bool) max(((unsigned char)251), ((unsigned char)251)));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_0 + 1] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) (signed char)79))))));
                var_16 = ((/* implicit */short) var_12);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_9))));
    var_18 = max(((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (-866783259))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_1)))))));
}
