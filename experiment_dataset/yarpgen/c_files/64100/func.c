/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64100
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [2U] [i_4] = ((/* implicit */_Bool) max((((arr_5 [i_0] [i_1]) / (((/* implicit */int) var_2)))), (((/* implicit */int) arr_2 [i_4]))));
                                var_12 = 0;
                                arr_15 [i_0] [3ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) arr_12 [i_4 + 1] [i_4] [i_4] [(unsigned short)10] [i_4 - 1] [i_0])) + (arr_10 [i_4 - 1] [i_4 - 3] [i_4 + 1] [i_4] [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) ((_Bool) ((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_0] [i_0]), (var_8))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (unsigned char i_6 = 2; i_6 < 7; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) var_6);
                                arr_28 [i_5] [i_5] [i_7] [i_8] [i_7] [i_9] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_27 [i_5] [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_5])) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_7] [i_7 + 1] [i_5])) : (((/* implicit */int) arr_27 [i_7 + 1] [0] [i_7 + 1] [0] [i_7 + 1] [i_5])))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_7 + 1] [i_6 + 3] [i_6 - 2])) >= (((/* implicit */int) var_0))))), (arr_2 [i_5]))))));
                    arr_29 [i_5] [i_5] [4U] = ((/* implicit */unsigned int) arr_7 [i_5] [i_5] [(unsigned char)1] [i_5]);
                    arr_30 [i_5] [i_5] [i_7] = ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_0)))) <= (max((arr_26 [i_5] [i_7 + 1] [i_7 + 1] [i_6 + 2] [i_5]), (((/* implicit */int) arr_3 [i_5] [i_5])))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */short) ((((/* implicit */int) var_10)) + (((((/* implicit */int) (_Bool)1)) ^ (0)))));
}
