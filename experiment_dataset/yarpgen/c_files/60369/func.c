/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60369
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_19 = min((min((max((var_12), (2563329869U))), (((/* implicit */unsigned int) max((arr_7 [i_1] [i_3] [i_2] [i_2] [i_1]), (arr_5 [i_0])))))), (min((max((var_12), (((/* implicit */unsigned int) arr_7 [i_0] [i_3] [i_1] [i_2] [i_0])))), (min((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (arr_6 [i_0] [i_3] [i_3]))))));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((max((2563329877U), (((/* implicit */unsigned int) arr_7 [i_0] [i_3] [i_0] [(unsigned char)10] [i_0])))), (((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (-1813216350))))))), (min((min((((/* implicit */unsigned long long int) 2563329869U)), (var_5))), (((/* implicit */unsigned long long int) max((1731637419U), (((/* implicit */unsigned int) var_16)))))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (min((max((min((arr_8 [i_1]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) max((var_0), (((/* implicit */int) arr_4 [i_2] [6LL] [i_2]))))))), (((/* implicit */long long int) max((max((var_8), (((/* implicit */unsigned int) (signed char)82)))), (((/* implicit */unsigned int) min((arr_3 [i_0] [i_3]), (((/* implicit */unsigned short) arr_5 [i_0]))))))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((min((max((((/* implicit */long long int) 1731637418U)), (var_9))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)104)), (arr_3 [i_0] [i_0])))))), (((/* implicit */long long int) max((min((var_11), (arr_0 [i_1]))), (((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) min((2563329869U), (((/* implicit */unsigned int) var_0))))), (min((((/* implicit */unsigned long long int) var_0)), (var_3))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_15)))), (min((var_0), (((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                {
                    var_24 += ((/* implicit */long long int) min((min((((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_6])), (var_0)))), (min((arr_6 [i_5] [14LL] [14LL]), (2067799138U))))), (((/* implicit */unsigned int) min((max((-2072898286), (((/* implicit */int) arr_0 [i_4])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_5])), (var_1)))))))));
                    var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((max((var_12), (((/* implicit */unsigned int) -687635952)))), (min((((/* implicit */unsigned int) var_14)), (2563329877U)))))), (max((((/* implicit */long long int) max((((/* implicit */signed char) var_2)), ((signed char)82)))), (max((((/* implicit */long long int) var_4)), (var_9)))))));
                }
            } 
        } 
    } 
}
