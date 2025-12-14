/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73129
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
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) var_6)), (var_13)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_11 [i_1] [i_1] [(short)12] [i_3] [i_4] = ((/* implicit */unsigned int) 1073217536);
                                arr_12 [i_0] [16ULL] [i_2] [i_2] [i_0] = ((/* implicit */int) ((arr_4 [i_2 + 2] [i_2]) * (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_2 + 3] [i_2 + 3]) == (arr_4 [i_2 - 1] [i_2 - 1])))))));
                                arr_13 [i_0] [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_4] [(signed char)11] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) == (((/* implicit */int) max(((short)127), (((/* implicit */short) (unsigned char)89)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) (short)16))))), (max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) var_7))))));
                    arr_15 [(unsigned short)16] [(unsigned short)16] [(unsigned short)16] [i_1] = ((/* implicit */short) ((unsigned int) (short)-8));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_2] [(unsigned short)1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_2 - 1] [i_6])) ? (arr_7 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]) : (arr_7 [i_0] [i_1] [i_2] [i_2 - 1] [i_5 - 1])))));
                                arr_21 [i_1] [10ULL] [(signed char)5] = ((/* implicit */unsigned int) arr_9 [(signed char)13] [i_2] [(signed char)13] [i_6]);
                                arr_22 [14U] [i_1] [14U] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0 - 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 15ULL)))) : (((var_8) & (((/* implicit */unsigned long long int) 1678198977U)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (5U))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)16)))))))));
                            }
                        } 
                    } 
                    arr_23 [i_2] = var_7;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) 1332982300);
}
