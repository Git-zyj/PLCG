/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79745
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
    var_12 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((short) var_11))), (max((((/* implicit */long long int) 125463430)), (var_10))))), (((/* implicit */long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (_Bool)1)))));
                                var_14 = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_2 - 1])) ? (((/* implicit */int) arr_16 [i_6 - 2] [i_5] [i_5] [i_2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_3 [i_6 + 2] [i_6] [i_2 + 1]))))) ? (((((/* implicit */unsigned long long int) arr_12 [i_0 + 3] [i_2 - 1] [i_6 - 2])) * (var_3))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1] [i_5] [i_6 + 2])) : (((/* implicit */int) arr_8 [i_6] [i_1] [i_2 + 1] [i_0]))))) | (var_3)))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((long long int) arr_15 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_5] [i_0 + 2]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)22842))))), (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2 - 2] [i_1] [i_6])) ? (var_11) : (((/* implicit */unsigned long long int) var_10))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_6 [i_0])))), (((((1073741823) / (((/* implicit */int) arr_10 [i_0 - 3] [i_0 + 2] [i_0 + 2] [i_2 - 3] [(unsigned short)13] [i_2 - 2])))) + (((/* implicit */int) max(((unsigned char)170), ((unsigned char)174))))))));
                    var_17 = var_6;
                }
            } 
        } 
    } 
}
