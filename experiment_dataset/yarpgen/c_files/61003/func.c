/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61003
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
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((max((4294967295U), (17U))), (1U)))), (max((max((((/* implicit */unsigned long long int) 4294967287U)), (var_11))), (((/* implicit */unsigned long long int) max((4294967289U), (((/* implicit */unsigned int) var_3)))))))));
    var_21 = ((/* implicit */signed char) min((max((max((var_19), (((/* implicit */long long int) 8U)))), (max((((/* implicit */long long int) var_17)), (var_13))))), (max((((/* implicit */long long int) max((8U), (5U)))), (max((((/* implicit */long long int) var_3)), (var_8)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */int) max((max((max((((/* implicit */long long int) 40U)), (arr_4 [i_1]))), (((/* implicit */long long int) max((37U), (((/* implicit */unsigned int) var_4))))))), (((/* implicit */long long int) min((max((4294967273U), (((/* implicit */unsigned int) arr_2 [i_1])))), (((/* implicit */unsigned int) max((var_9), (var_3)))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) 36U)), (arr_4 [i_1]))), (((/* implicit */long long int) max((36U), (((/* implicit */unsigned int) var_0)))))))), (min((max((((/* implicit */unsigned long long int) arr_0 [(unsigned char)7])), (var_11))), (((/* implicit */unsigned long long int) max((arr_3 [1LL]), (((/* implicit */long long int) 4294967279U)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_0] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_16)), (arr_8 [i_1] [i_2] [i_1])))), (min((((/* implicit */unsigned int) var_12)), (8U)))))), (min((((/* implicit */long long int) max((4294967287U), (4294967260U)))), (min((((/* implicit */long long int) var_9)), (arr_4 [i_1])))))));
                            var_22 = ((/* implicit */signed char) max((min((((/* implicit */long long int) max((4294967294U), (4294967289U)))), (max((((/* implicit */long long int) 7U)), (var_19))))), (((/* implicit */long long int) max((min((4294967260U), (((/* implicit */unsigned int) var_16)))), (max((7U), (4294967281U))))))));
                            var_23 = ((/* implicit */_Bool) max((max((max((17U), (6U))), (4294967279U))), (8U)));
                            arr_12 [i_1] [(signed char)5] [i_1] [i_1] = ((/* implicit */long long int) min((max((4294967280U), (20U))), (max((max((4294967279U), (4294967267U))), (max((5U), (19U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_20 [i_4] [i_4] [i_1] [i_5] = ((/* implicit */long long int) min((max((min((7U), (((/* implicit */unsigned int) arr_7 [i_1] [i_1])))), (((/* implicit */unsigned int) max((arr_13 [i_1] [(unsigned char)8] [i_1]), (((/* implicit */int) arr_1 [i_0] [i_4 - 1]))))))), (max((max((4294967278U), (26U))), (10U)))));
                            var_24 += ((/* implicit */signed char) min((min((((/* implicit */long long int) min((6U), (26U)))), (max((((/* implicit */long long int) 4294967288U)), (var_7))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_14)))), (max((((/* implicit */long long int) var_16)), (var_19)))))));
                            arr_21 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_1] [i_5]))))), (min((((/* implicit */unsigned int) var_1)), (8U))))), (min((4294967279U), (0U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
