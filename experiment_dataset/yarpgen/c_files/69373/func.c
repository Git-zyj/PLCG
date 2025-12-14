/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69373
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [(unsigned char)7] [i_3] [i_3] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 208585838U)) ? (((/* implicit */int) (unsigned short)56964)) : (((/* implicit */int) (_Bool)1))));
                                var_15 = arr_11 [i_0] [i_1] [(unsigned char)14] [(unsigned char)14] [i_4] [i_0];
                                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)56967))));
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)8561)) ? (((/* implicit */int) (unsigned short)8550)) : (((/* implicit */int) (unsigned short)56964))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) max(((unsigned short)56943), (((/* implicit */unsigned short) arr_3 [(unsigned char)7] [i_0]))));
                    var_18 = ((/* implicit */_Bool) max(((unsigned short)27922), ((unsigned short)56964)));
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(4294967295U)));
                    arr_17 [1] [i_2 - 1] [i_0] = (~(((/* implicit */int) (unsigned short)56984)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                arr_24 [i_6] [i_5] [i_5] = ((/* implicit */int) arr_19 [i_5]);
                arr_25 [i_6] [i_6] [i_5] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)40441)))), (((/* implicit */int) (short)7219))));
            }
        } 
    } 
}
