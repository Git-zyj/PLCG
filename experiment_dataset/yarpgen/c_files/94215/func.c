/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94215
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)174))))))));
    var_11 = var_6;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [i_0]) << (((((/* implicit */int) (unsigned short)11111)) - (11055)))))) ? (((/* implicit */int) ((((11352381653014332430ULL) - (7576272655561872805ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) : (((/* implicit */int) (unsigned char)235)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [0] [i_4] [i_4] [i_1] [i_0] = max((((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60716))) : (16160072081875320547ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned char)235)) : (1850408919)))));
                                var_13 |= ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7955516224550487212ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1])))) * (var_3)))));
                                arr_13 [i_0] [i_4] [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned int) var_4)) <= (arr_10 [i_0] [i_0] [i_0] [i_2 - 1] [i_4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_4])))))) : (((var_1) + (((/* implicit */unsigned long long int) arr_10 [i_1] [(unsigned short)23] [i_2] [i_2 - 1] [i_4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_21 [i_6] [i_5] [i_5] [17ULL] [17ULL] [17ULL] [i_0] = ((/* implicit */int) var_3);
                                arr_22 [i_0] [i_6] [i_2 - 1] = ((/* implicit */signed char) ((unsigned long long int) ((((((arr_18 [i_2]) - (((/* implicit */long long int) var_4)))) + (9223372036854775807LL))) << (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (5620739939852099530ULL))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)21)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6 - 1] [i_6] [i_6] [i_6] [i_6]))) != (var_3))))));
                                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_8) << (((arr_17 [i_0] [i_1] [i_2 + 1] [i_6]) - (764393973U)))))) ? (((/* implicit */unsigned long long int) (-(arr_10 [20] [(signed char)8] [i_2] [20] [i_0])))) : (max((((/* implicit */unsigned long long int) arr_18 [i_2])), (var_6))))) | (max((arr_15 [i_6 - 2] [i_6 - 1] [i_6 - 1] [15] [i_6]), (arr_15 [i_6 - 2] [i_6] [i_6] [i_6] [i_6])))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (((arr_15 [i_1] [i_2] [i_6 + 2] [i_5] [i_2 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) * (((/* implicit */int) arr_16 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    arr_24 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((arr_8 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] [i_0]) << (((var_3) - (3951285134532315444ULL))))) % (((var_3) << (((/* implicit */int) (unsigned char)24))))));
                }
            } 
        } 
    } 
}
