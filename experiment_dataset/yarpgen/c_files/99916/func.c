/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99916
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
    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-9)) ? (max(((~(12088174574222256939ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_16)))) * (((/* implicit */int) min((var_15), ((signed char)0)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned short)1] [2U] [2U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [8U])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [1LL])))))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_18))) + (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_7)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 6; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned char)2))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_4 [i_1 + 1] [(short)7] [i_1 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 7; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 = (unsigned char)2;
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_14 [i_6] [i_0] [i_0] [i_0] [i_1] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
