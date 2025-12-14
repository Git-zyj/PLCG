/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86622
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((((49152U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15502))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-17775)) : (((/* implicit */int) (_Bool)0)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((((_Bool) (-(((/* implicit */int) var_5))))) ? (((arr_8 [i_0] [i_1] [i_4 - 1] [i_0] [i_2] [i_1] [i_3]) & (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (9223372036854775807LL))))))));
                                var_16 = ((((/* implicit */_Bool) ((2147483647) << (((((-2147483647) - (-2147483636))) + (11)))))) ? (((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_2] [i_2] [i_2] [i_4 - 1] [i_4] [i_3])) ? (arr_8 [i_4 + 1] [i_1] [i_0] [(_Bool)1] [i_0] [i_0] [i_1]) : (arr_8 [i_4 - 1] [(short)20] [(short)20] [(signed char)23] [i_4] [i_4] [i_2]))) : (min((arr_8 [i_4 - 1] [(_Bool)1] [i_2] [i_3] [i_4] [i_3] [i_0]), (arr_8 [i_4 + 1] [i_4 + 1] [i_1] [i_1] [(short)5] [i_1] [i_4]))));
                                var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_6)) ? ((~(49176U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4 - 1] [i_2]))))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))));
                                var_18 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 1820335198)) != (var_8)));
                                arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) -2147483634)) / (arr_8 [(signed char)23] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4] [i_4])));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) (((_Bool)1) ? (1820335180) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_0 [i_5]))))) > (((((/* implicit */_Bool) arr_12 [i_6])) ? (arr_12 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (int i_9 = 2; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) + (arr_8 [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9] [(_Bool)1])))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) 798582450U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
