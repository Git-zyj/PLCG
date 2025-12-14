/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6230
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
    var_16 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (((~(((int) 6928765276213886056LL)))) >= (((/* implicit */int) ((_Bool) ((unsigned long long int) var_4))))));
                                var_18 -= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [(short)12] [i_3] [i_4] [i_4])), (arr_1 [i_3]))), (((/* implicit */unsigned short) ((signed char) (signed char)-67)))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_2 - 3] [i_3])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_3), ((signed char)-70))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) ((unsigned short) 0))) : (-20))) : (((/* implicit */int) min((arr_3 [i_0 + 3] [i_2 - 1]), (arr_3 [i_0 + 2] [i_2 - 3]))))));
                                var_20 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1] [(signed char)13])) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_3 [i_3] [i_4])))) + (2147483647))) >> (((arr_5 [i_0 + 3] [i_0]) - (1040292084U))))) : (((/* implicit */int) ((signed char) (signed char)-118)))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1] [(signed char)13])) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_3 [i_3] [i_4])))) + (2147483647))) >> (((((arr_5 [i_0 + 3] [i_0]) - (1040292084U))) - (608166171U))))) : (((/* implicit */int) ((signed char) (signed char)-118))))));
                                var_21 = ((/* implicit */signed char) (~(arr_4 [i_0] [i_0] [i_0 + 1])));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 3])) && (((/* implicit */_Bool) arr_7 [i_2 - 3] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_7 [i_2 - 3] [i_2 - 2])) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1])) : (var_2))) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1]))));
                }
            } 
        } 
    } 
}
