/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79117
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (((+(arr_6 [i_1]))) + (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))), (min((((/* implicit */int) (unsigned char)51)), (arr_10 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2]))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) 
                            {
                                var_19 &= ((/* implicit */short) (~((~(arr_1 [i_0])))));
                                var_20 = ((/* implicit */_Bool) arr_12 [i_1]);
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [(unsigned char)4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4])) ? (arr_10 [i_1] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 3]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) arr_10 [i_1] [10ULL] [i_4 + 1] [i_4] [i_4 + 1] [i_4]))) : (arr_10 [i_1] [i_1] [i_4 + 1] [i_1] [i_4 + 1] [3LL])));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (_Bool)1))))))));
                            }
                            var_23 = var_4;
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) -5453397188123339097LL);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_26 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)6854)), ((-(((/* implicit */int) var_15))))));
}
