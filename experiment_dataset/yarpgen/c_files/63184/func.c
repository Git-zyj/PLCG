/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63184
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
    var_15 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_12 [i_3] [i_1] [i_2] [i_3] &= ((var_11) + (((arr_6 [i_0] [i_0] [i_0] [i_2 - 2]) + (((/* implicit */int) arr_9 [i_2 + 2] [i_1] [i_3] [i_1 + 1])))));
                            arr_13 [i_3] [i_1] |= ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) var_1);
                /* LoopSeq 2 */
                for (int i_4 = 3; i_4 < 15; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_26 [i_1] = ((var_13) - (((/* implicit */long long int) ((/* implicit */int) var_6))));
                                var_17 ^= ((/* implicit */short) ((((/* implicit */int) min((min((arr_1 [i_6]), (((/* implicit */short) var_12)))), (((/* implicit */short) ((arr_6 [i_0] [i_1] [i_5] [i_6]) > (((/* implicit */int) arr_1 [i_0])))))))) < (((/* implicit */int) min((arr_3 [12] [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_13))))))))));
                            }
                        } 
                    } 
                    arr_27 [i_1] [i_1] [i_1] = arr_11 [i_0] [i_1] [i_0];
                    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1 + 4] [i_1] [i_4] [i_4] [i_4]))) % (arr_25 [i_1 + 1] [i_4 - 1])))));
                }
                for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) <= (((arr_25 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) & (var_0))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        var_20 += ((/* implicit */unsigned int) arr_15 [i_7] [i_7] [i_7]);
                        var_21 ^= ((/* implicit */unsigned short) arr_17 [i_8]);
                    }
                    var_22 = ((/* implicit */signed char) min((max((arr_19 [i_1]), (arr_19 [i_1]))), (arr_19 [i_1])));
                    var_23 *= ((/* implicit */long long int) var_6);
                }
                arr_35 [i_1] = ((var_7) - (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 2] [i_1 + 2])));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_12);
}
