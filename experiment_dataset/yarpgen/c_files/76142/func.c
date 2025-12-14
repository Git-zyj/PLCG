/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76142
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
    var_19 = ((/* implicit */unsigned short) (+(1856437608U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_1] [i_1 - 2] [(short)15] [i_4 + 2])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_6 [i_3 - 2] [4] [i_1 - 1])))), (((/* implicit */int) ((1856437604U) <= (((1856437608U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [1U]))))))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((((((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)6])) % (((/* implicit */int) arr_13 [i_4 + 1] [i_2] [i_2] [(unsigned short)12] [i_4] [10ULL])))) > (((((/* implicit */int) arr_10 [i_1] [i_2] [i_1 - 3])) >> (16ULL)))))));
                                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)17)), (2438529673U)))) ? (((/* implicit */int) min((arr_11 [i_4] [i_2] [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_11 [(unsigned short)4] [i_2] [i_4 - 2] [i_4 + 2] [i_4])))) : (((/* implicit */int) arr_11 [i_4] [i_2] [i_4 + 1] [i_4 - 1] [i_4 + 2]))));
                                var_23 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4 + 1]);
                            }
                        } 
                    } 
                } 
                var_24 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((((/* implicit */int) arr_3 [i_1])) - (22753))))));
            }
        } 
    } 
}
