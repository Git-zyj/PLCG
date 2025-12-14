/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81102
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_4] [i_3] [i_4] [(unsigned char)10] [(unsigned char)4] [i_3] = ((/* implicit */unsigned char) ((int) max((((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) var_11)))), ((-(var_7))))));
                                var_15 = max(((+(((/* implicit */int) arr_4 [i_0])))), (((max((((/* implicit */int) (unsigned char)0)), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_1]))) + (((/* implicit */int) (unsigned char)0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [(unsigned char)3] [i_6] [i_5] [(unsigned char)16] = ((/* implicit */unsigned char) min((min(((~(var_1))), (-956229769))), (((/* implicit */int) (unsigned char)247))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_8)), (16733344))) - (((((/* implicit */int) arr_16 [(unsigned char)12] [13] [i_0] [i_0])) - (arr_11 [i_0] [i_0] [16] [5] [i_0] [5] [i_0])))))) ? (((((1783746076) - (((/* implicit */int) (unsigned char)255)))) + (((/* implicit */int) arr_4 [(unsigned char)2])))) : (((/* implicit */int) ((unsigned char) ((var_7) - (((/* implicit */int) (unsigned char)218))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) max((((((/* implicit */int) min(((unsigned char)252), (var_10)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), ((!(((/* implicit */_Bool) 889126620))))));
    var_18 = ((/* implicit */unsigned char) var_9);
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_7)))) ? (((/* implicit */int) var_2)) : (max((max((((/* implicit */int) var_10)), (var_12))), (((((/* implicit */int) var_14)) & (((/* implicit */int) (unsigned char)38))))))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> (((/* implicit */int) var_14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_14)), (var_7))))))) : (((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) (unsigned char)49)))) : ((+(((/* implicit */int) var_10)))))));
}
