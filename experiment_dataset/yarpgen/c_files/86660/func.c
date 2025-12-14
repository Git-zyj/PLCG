/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86660
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_3)))) : (((var_3) ? (var_2) : (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (var_2))) : (((/* implicit */int) min((((/* implicit */short) var_4)), (var_8)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) max((var_9), (var_9)))) ? (max((((/* implicit */unsigned long long int) var_0)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                                var_12 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((var_9), (var_9)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_9))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) max((var_2), (var_1)))) ? (min((((/* implicit */int) var_0)), (var_6))) : (((/* implicit */int) var_5)))));
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) var_4)) : (max((var_2), (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_5)) : (var_6))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (var_1))) : (((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_2] [i_1] = ((((/* implicit */_Bool) max((((var_3) ? (((/* implicit */int) var_8)) : (var_1))), (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : (var_2))) : (((/* implicit */int) var_8)))) : (var_6));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */int) var_3)))), (min((((/* implicit */int) var_0)), (var_2)))))), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) ? (((((/* implicit */_Bool) var_7)) ? (var_2) : (var_1))) : (((/* implicit */int) var_4))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))), (((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) max((max((var_4), (var_4))), (((/* implicit */unsigned char) var_3))))))))));
                    var_16 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (max((((var_0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))), (max((((/* implicit */int) var_5)), (var_6)))))));
                }
            } 
        } 
    } 
}
