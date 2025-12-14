/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92957
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
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (-(((/* implicit */int) ((arr_6 [i_1 - 2] [i_0] [i_0 - 1] [i_0 - 2]) >= (arr_6 [i_1 - 4] [0ULL] [i_0 - 3] [i_0 + 1])))))))));
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), (max((arr_3 [i_0] [i_1 - 1] [i_2]), ((unsigned char)129)))));
                                var_12 += ((/* implicit */long long int) (+(max((arr_4 [i_0 + 2] [i_1 + 1] [i_2]), (arr_9 [3LL] [i_0] [i_0 - 1] [i_1 - 3])))));
                            }
                        } 
                    } 
                    var_13 &= ((/* implicit */unsigned short) var_5);
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (min((var_0), (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((var_0) < (((/* implicit */int) arr_12 [i_0 + 2] [i_1] [i_0] [i_1] [i_1])))))))) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3] [i_2])))))));
                    arr_16 [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (arr_9 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 + 1]) : (((/* implicit */int) arr_10 [11U] [i_1] [i_1 + 1] [i_1 - 4]))))));
                    arr_17 [i_0] [i_1] [i_2] [11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (0U)))) ? (((/* implicit */long long int) 6U)) : ((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_7);
}
