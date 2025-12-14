/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99188
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_8))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((int) var_2))))) & (min((((/* implicit */long long int) (short)(-32767 - 1))), (max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL))))))));
                                var_13 = min((var_6), (((/* implicit */int) ((_Bool) arr_11 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0 + 1] [i_0 + 1]))));
                                arr_12 [1] [(signed char)7] [i_0] [i_2 + 3] [6ULL] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) / (min((((/* implicit */long long int) max((((/* implicit */short) arr_11 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0 - 2] [i_0 - 2])), (arr_5 [i_1] [i_1])))), (max((var_2), (((/* implicit */long long int) var_1))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-33))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_8))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 4; i_6 < 10; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    arr_21 [i_6] [i_6 - 2] [i_6 - 4] [i_6] = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_6] [i_7] [i_7]))));
                    var_15 = ((/* implicit */unsigned int) ((var_2) < (((/* implicit */long long int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 1])))))));
                    arr_22 [i_6] [i_6] [i_6] = ((/* implicit */short) arr_4 [(signed char)5] [5U] [i_7]);
                }
            } 
        } 
    } 
}
