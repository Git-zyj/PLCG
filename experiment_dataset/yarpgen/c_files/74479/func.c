/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74479
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_12 [i_1] [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]), (arr_12 [i_1 + 1] [i_0] [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 2]))))));
                                var_15 = ((/* implicit */unsigned int) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_18 [i_2] [i_5] [i_6] |= 2658230887U;
                                var_16 -= ((/* implicit */_Bool) arr_8 [i_6] [i_5] [i_2] [i_0] [i_0]);
                                var_17 = ((/* implicit */unsigned short) 1636736409U);
                                var_18 = ((/* implicit */unsigned short) var_12);
                                var_19 -= ((/* implicit */short) (-(((arr_11 [i_5] [i_2 - 1] [i_2] [i_1 - 3] [i_1] [i_5]) ^ (var_5)))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_2 - 2] [i_2 - 1] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) : (min((var_8), (((/* implicit */unsigned int) var_9))))))) : (((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1636736409U))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 3; i_7 < 14; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_9))));
                var_22 = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)16211)), (4194296)))) ? (max((((/* implicit */long long int) (unsigned short)16220)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))));
            }
        } 
    } 
}
