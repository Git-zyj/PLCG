/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83425
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) (unsigned char)62))))) ? (var_5) : (((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1 - 1] [i_2])))))));
                                arr_13 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_4 [i_1])) : (-1)))), (var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_1 + 2])))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((6026544644424197896ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 + 3] [i_1] [i_1] [i_1] [i_0])))))), (arr_2 [i_0] [i_1 + 2])));
                    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_4 [i_0]) ? (((/* implicit */int) (short)-849)) : (((/* implicit */int) (unsigned char)219))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (129024ULL)))));
                    var_17 &= ((/* implicit */int) arr_12 [i_1 + 2] [i_0] [i_1 + 1] [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((int) min((((/* implicit */long long int) 4U)), (((long long int) 18446744073709551610ULL)))));
                arr_19 [2U] &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [(unsigned short)10] [i_5] [i_5] [(signed char)6])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_6] [i_5] [(short)0] [i_5] [2] [i_6]))))));
                var_19 = ((/* implicit */unsigned int) max((var_19), ((-((-(4294967283U)))))));
                var_20 ^= ((/* implicit */signed char) arr_7 [i_5] [i_6]);
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) arr_5 [i_5] [i_7 - 2]);
                    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_7 [i_7 - 2] [i_7 - 2]))), (((((/* implicit */_Bool) arr_7 [i_7 - 3] [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_7 [i_7 - 3] [i_7 - 2])))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(8388608)))) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))) : (((min((var_14), (((/* implicit */unsigned long long int) var_5)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_12)))))));
    var_24 = ((/* implicit */int) var_2);
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) min((((int) var_11)), (((/* implicit */int) min(((unsigned char)75), (var_9))))))) : (min((((/* implicit */unsigned long long int) 3791371423U)), (12420199429285353704ULL)))));
}
