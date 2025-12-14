/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81697
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [(short)15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) -581395514)), (arr_2 [i_1] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)85)) | (((/* implicit */int) (short)-1))))) : (min((arr_2 [(_Bool)1] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)204)) * (1048576)))) ? (((long long int) (unsigned char)189)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)200)), ((unsigned short)34514))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_1] [(unsigned char)12] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? ((-(arr_2 [i_0] [i_2] [i_4]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_2] [i_0])), (arr_3 [i_4] [i_3]))))))));
                                var_19 -= (-(min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)193))))), (((arr_3 [i_2] [i_2]) | (((/* implicit */unsigned int) arr_14 [i_4])))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_3 + 3] [i_3 + 1] [i_4 + 3]))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((~(arr_2 [2] [2] [i_4]))) : (((/* implicit */unsigned long long int) ((arr_3 [i_0] [(unsigned short)4]) + (((/* implicit */unsigned int) arr_14 [i_1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1335650107)) ? (((((/* implicit */int) (unsigned char)204)) + (((/* implicit */int) var_13)))) : (((2147483633) + (((/* implicit */int) arr_11 [12U] [i_3] [i_2] [i_2])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) (-(var_3)))) ? (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) | (max((var_8), (((/* implicit */long long int) var_5)))))))));
}
