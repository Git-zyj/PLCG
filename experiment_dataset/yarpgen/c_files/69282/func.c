/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69282
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
    var_10 = ((/* implicit */signed char) var_1);
    var_11 -= ((/* implicit */signed char) min((max((min((var_6), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_4), (var_4)))))))));
    var_12 = ((/* implicit */int) max((max((((/* implicit */short) var_2)), (var_9))), (max((min((var_9), (((/* implicit */short) var_7)))), (((/* implicit */short) var_7))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
        var_14 = ((/* implicit */long long int) ((_Bool) var_9));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((var_8) >= (((/* implicit */int) ((signed char) var_0)))));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))));
                                arr_16 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) (~(((var_3) & (var_6)))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((((/* implicit */_Bool) max((var_5), (var_2)))) ? ((-(var_8))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_8)) < (var_0))) ? (((/* implicit */int) max((((/* implicit */short) var_5)), (var_9)))) : ((-(((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) var_7))))))));
        arr_22 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */short) var_2)), (var_9)))), (max((((/* implicit */long long int) ((unsigned int) var_2))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_0)))))));
        arr_23 [i_5] = ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5))))) >> (((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) var_2)), (max((((((/* implicit */long long int) ((/* implicit */int) var_9))) % (var_0))), (((/* implicit */long long int) var_2))))));
                    var_18 = ((/* implicit */short) ((signed char) (-(((((/* implicit */unsigned long long int) var_8)) / (var_6))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (var_7)))))), (var_1)));
}
