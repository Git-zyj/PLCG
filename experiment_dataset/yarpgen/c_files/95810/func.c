/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95810
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (unsigned short)20528)) ? (((/* implicit */int) (unsigned short)20527)) : (((/* implicit */int) (unsigned short)20505))))))) ? (((/* implicit */unsigned long long int) var_10)) : (var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) 1146237688427101617LL);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) arr_12 [i_4] [i_3] [i_2] [i_0] [i_0]);
                                var_18 = ((/* implicit */_Bool) ((arr_11 [i_0 - 1] [i_1] [i_2 + 1] [i_2 + 1]) ? (((arr_11 [i_0] [i_2] [i_2 - 1] [i_3]) ? (arr_8 [i_3] [i_0 - 1] [i_0]) : (arr_8 [i_0 + 1] [i_0 + 1] [19U]))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_2 - 2] [i_1])))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) arr_13 [i_1] [i_0] [i_0]);
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2382473615U)) ? (((/* implicit */int) (unsigned short)20537)) : (((/* implicit */int) (short)24287))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) arr_21 [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                arr_26 [i_5] [i_5] [i_5] [i_8] [i_9] [i_7] [i_5] = ((/* implicit */long long int) arr_21 [i_5] [i_5]);
                                arr_27 [i_5] = ((/* implicit */_Bool) var_6);
                                var_20 = ((/* implicit */signed char) (unsigned short)20514);
                                arr_28 [i_5] [i_5] [i_7] [i_8] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned short)20519)) : (((/* implicit */int) (signed char)-72))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
