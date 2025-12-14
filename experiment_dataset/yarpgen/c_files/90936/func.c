/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90936
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~((-(var_9))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_16 = var_1;
                        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)10359)) ? ((~(((/* implicit */int) (short)10357)))) : ((+(((/* implicit */int) (short)-10353))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_18 &= ((/* implicit */signed char) var_7);
                                var_19 = ((/* implicit */unsigned short) var_7);
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (min((((/* implicit */unsigned short) (short)-10355)), (arr_8 [i_0 + 2] [i_1 - 1] [i_0 + 2] [i_0 + 2] [i_5] [i_2])))))), ((~(((/* implicit */int) (short)-10353)))))))));
                                arr_18 [4] [i_1] [i_0] [(signed char)6] [i_1] [i_1] = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_1] = (short)-10353;
                                var_21 = ((unsigned long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (arr_16 [i_0 - 1] [i_1 + 3] [i_2] [(short)16])));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1)))))));
                                var_23 -= var_8;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
