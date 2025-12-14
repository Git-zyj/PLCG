/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8560
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
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */int) min((max((var_7), (var_1))), (min((var_7), (var_0)))))), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_0] [(unsigned char)0] [i_0] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_3))))));
                                var_12 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) min((var_10), (var_2))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_2] [(unsigned char)17] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((unsigned char)148), ((unsigned char)215)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_10))))) ? (((/* implicit */int) max((var_5), (var_4)))) : (((/* implicit */int) max((var_0), (var_7))))))));
                    arr_15 [i_2] [i_1] [i_1] [(unsigned char)1] = min((max((var_0), (var_1))), (max((var_6), (var_3))));
                }
            } 
        } 
    } 
    var_13 += var_0;
}
