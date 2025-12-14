/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9300
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) 15123351856152065000ULL);
                var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) (unsigned char)152))))));
                var_17 = ((/* implicit */int) ((unsigned char) ((int) arr_1 [i_1])));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [9ULL] [9ULL] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((arr_12 [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_3] [i_3] [i_3]) >> (((arr_12 [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_3]) - (2541001484U)))))) : (((long long int) arr_3 [i_4 + 1] [i_4]))));
                                arr_14 [i_1] = ((/* implicit */unsigned char) max(((-2147483647 - 1)), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_4]))));
                                var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (arr_5 [i_0] [i_2] [i_3])))) && (((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_2])))) ? (min((arr_12 [i_2] [i_4] [(unsigned short)3] [i_4 - 1] [i_4 + 2] [(unsigned short)3]), (arr_12 [i_2] [i_2] [i_2] [i_4 - 1] [i_4 + 2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_4])) ? (1344074786U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [21LL] [i_3] [i_3] [i_2] [i_1] [i_0]))))) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_4 + 2] [i_3] [i_2] [i_1])))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) 2950892517U);
}
