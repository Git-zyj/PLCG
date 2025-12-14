/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5539
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */long long int) max((((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (arr_0 [i_2]))) ^ (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) arr_5 [i_2] [i_2] [(signed char)2] [i_0]))))))), ((+(((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                    arr_7 [i_2] [i_1] [0] = ((/* implicit */unsigned short) arr_4 [i_2]);
                    var_17 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) ^ ((~(((/* implicit */int) var_3))))))) >= (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))), (((arr_0 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [8ULL])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_2] [i_3] = max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), (arr_1 [i_3] [(signed char)5]))))))), (max((((/* implicit */unsigned int) var_15)), (max((((/* implicit */unsigned int) var_2)), (arr_9 [i_0] [(signed char)2] [i_0] [i_3] [i_4]))))));
                                var_18 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_5)))) / ((+(min((var_1), (((/* implicit */int) var_15))))))));
                                var_19 |= ((/* implicit */short) ((arr_9 [i_0] [6U] [0U] [i_0] [0U]) & (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_3] [i_0])))) - (var_10))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_14);
    var_21 = ((/* implicit */short) ((var_7) + (max((((/* implicit */int) var_6)), (((((/* implicit */int) var_14)) * (((/* implicit */int) var_12))))))));
}
