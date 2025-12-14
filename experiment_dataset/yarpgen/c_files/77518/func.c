/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77518
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_3] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_5 [i_4] [i_2] [i_2] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_3)))))) : (((((/* implicit */_Bool) arr_12 [i_4] [i_3] [15] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) var_6)) : (-22LL))))))));
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_3] [i_3] [i_3] [i_3 + 1]) > (((/* implicit */unsigned long long int) var_1)))))) != (var_4))))));
                            }
                        } 
                    } 
                } 
                var_14 = (i_0 % 2 == 0) ? ((!(((/* implicit */_Bool) ((((unsigned long long int) var_9)) >> (((((((/* implicit */_Bool) var_5)) ? (arr_7 [i_0] [i_0] [0]) : (var_6))) - (121618381U)))))))) : ((!(((/* implicit */_Bool) ((((unsigned long long int) var_9)) >> (((((((((/* implicit */_Bool) var_5)) ? (arr_7 [i_0] [i_0] [0]) : (var_6))) - (121618381U))) - (3719906293U))))))));
                var_15 = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_5 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned char)0] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (min((4362862139015168ULL), (((/* implicit */unsigned long long int) 4294967287U))))))) ? (var_5) : (((/* implicit */long long int) var_10))));
    var_17 = ((/* implicit */unsigned int) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 0U)) ? (var_4) : (((/* implicit */unsigned long long int) min((var_10), (var_0))))))));
}
