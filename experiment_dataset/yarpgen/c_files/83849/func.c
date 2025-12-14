/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83849
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
    var_14 = ((/* implicit */unsigned int) 6647290598535978032LL);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) var_7);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_3)))) & (((/* implicit */int) (unsigned short)65526))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((int) var_13))))) : (((unsigned long long int) arr_12 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 + 2] [i_3 + 2]))));
                                var_17 = ((/* implicit */unsigned long long int) ((((long long int) arr_6 [i_3 - 2] [i_3 + 2] [i_3 - 1] [i_3 + 1])) * (min((arr_8 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]), (((/* implicit */long long int) arr_6 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 2]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) var_9);
                                var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [(signed char)10] [i_0] [i_0] [(unsigned short)8] [8U] &= ((/* implicit */signed char) arr_17 [i_0] [i_0] [i_2] [i_0]);
                                var_20 = arr_11 [i_0] [i_0] [i_1] [(unsigned short)9] [i_7] [i_8];
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_8]))) : (((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_11);
    var_23 = ((/* implicit */int) (_Bool)1);
}
