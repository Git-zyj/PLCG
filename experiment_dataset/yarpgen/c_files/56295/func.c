/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56295
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
    var_14 = 6857171562925525970ULL;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (-(((/* implicit */int) (unsigned char)218)));
                arr_6 [i_0] [(_Bool)1] [(unsigned char)2] = ((((((/* implicit */int) arr_2 [i_0 + 2] [i_0] [i_1 - 3])) << (((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_1 - 3])))) >> ((((~(79859764U))) - (4215107509U))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 6; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) arr_3 [i_4] [i_4 + 2] [i_1 - 2]);
                                arr_13 [i_0] [3U] [i_2] [i_3] [i_3] = ((/* implicit */int) ((unsigned char) max((arr_2 [i_1 - 3] [i_4 + 2] [i_4 - 2]), (arr_2 [i_1 - 3] [i_4 + 2] [i_4]))));
                                arr_14 [i_0 + 1] [i_4] [i_4] [i_4] [i_4 + 4] [i_2] = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) 7159406404947472070LL))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_0 - 1] [i_0]))) : (arr_3 [i_0 - 1] [i_0 - 1] [i_0])))));
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_10 [3LL] [i_1] [i_0 + 2] [(unsigned char)7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) : (-7159406404947472064LL))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [5LL] [i_1] [i_1 - 2] [i_1 - 3]))) : (var_5))))) & (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_12);
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)100)))))));
    var_19 = var_1;
}
