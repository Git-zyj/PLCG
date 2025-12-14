/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85184
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_3 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_12))))));
                    var_16 ^= (+(((((/* implicit */int) var_2)) * (((/* implicit */int) arr_5 [i_0] [(signed char)17] [2U])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3 + 1] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [i_3] [i_4]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_2] [i_2] [i_2] [i_3 + 1] [i_4] [i_1])), (var_7)))) : (((/* implicit */int) (unsigned short)4559)))) + (((((((/* implicit */_Bool) -1364951825)) ? (var_12) : (1364951825))) - (1335586377)))));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] &= ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2]))));
                }
                var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_0] [i_1] [i_1]))))) && (((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */int) arr_6 [i_1])))))))), (((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                var_18 |= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((((/* implicit */int) arr_14 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1])) / (((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6 + 1])))), (((/* implicit */int) ((short) arr_22 [i_6 - 2] [i_6 - 1] [i_6 - 2] [(_Bool)1]))))))));
                                arr_25 [i_0] [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned int) var_11);
                                arr_26 [i_7] [i_6] [i_5] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_6 + 1] [i_0] [i_0] [i_6]))) / (var_15)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((max((((/* implicit */int) ((short) var_8))), ((+(((/* implicit */int) (short)-19142)))))), (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_10)))))))));
}
