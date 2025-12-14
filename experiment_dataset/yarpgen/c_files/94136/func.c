/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94136
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
    var_10 = ((/* implicit */int) 8957604006946805932LL);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_11 = var_9;
                                var_12 = ((((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2))) << (((arr_3 [i_0] [i_1]) - (2326421742U))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (unsigned char)149))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (var_8))) : (((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_13 = ((/* implicit */int) var_6);
                        var_14 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(var_5)))) > (min((min((17229224539113110956ULL), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_1] [(short)6])))), (((/* implicit */unsigned long long int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            arr_15 [i_0] = ((/* implicit */long long int) var_1);
                            arr_16 [i_0] [i_0] [(unsigned short)0] [(unsigned short)0] [i_6] = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)9270)) ? (((/* implicit */long long int) var_8)) : (arr_1 [i_1])))));
                            var_15 = ((/* implicit */unsigned int) var_2);
                        }
                    }
                }
            } 
        } 
    } 
}
