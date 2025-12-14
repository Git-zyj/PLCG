/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69149
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_3] [i_2 - 1] [(unsigned short)4] [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
                                arr_16 [i_0 - 2] [i_1] [i_2] [i_3] [(unsigned char)5] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)231)))) >= ((+(((/* implicit */int) (unsigned char)111))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_23 [i_6] [(_Bool)1] [i_1] [i_1] [(signed char)10] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_2 - 1] [i_2 + 1] [i_0 + 2])), (max((var_6), (((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_2] [i_5] [i_6])))))))));
                                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_18 [i_6] [i_6] [i_5] [i_2 + 1])) / (((/* implicit */int) arr_18 [i_6] [i_6] [i_5] [i_2 - 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) var_1);
}
