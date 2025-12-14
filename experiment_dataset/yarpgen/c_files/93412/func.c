/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93412
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
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2 - 1] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (max((((((/* implicit */_Bool) 202934366510865604LL)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0] [i_2])))), (min((arr_3 [i_0]), (((/* implicit */int) (short)-389))))))));
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2 + 1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) max((arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1]), (arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
                                var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (~((+(min((arr_9 [i_3] [i_1] [i_1] [i_3]), (((/* implicit */long long int) (unsigned short)7866)))))))))));
                                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_4 - 3])) ? (var_3) : (((/* implicit */int) var_7))))), (min((((/* implicit */long long int) (!(arr_10 [i_0] [i_3] [i_1] [i_0])))), (min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))))));
                                var_11 = ((/* implicit */signed char) min((var_11), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)107)))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned char) ((arr_3 [i_0]) / (min(((~(var_3))), (((/* implicit */int) min((arr_5 [i_0 - 1] [i_1] [i_0 - 1]), (((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) (+(var_1)))) ? (var_1) : (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) / (var_8)))))))));
}
