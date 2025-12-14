/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81082
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
    var_16 += ((/* implicit */unsigned char) (((-(min((((/* implicit */long long int) 4294967268U)), (-5615083840417666008LL))))) * (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_14)), (var_1))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) (_Bool)1)))))))))));
    var_17 = var_2;
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (var_8)))), (max((var_1), (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_13)), (var_14))))) != (max((((/* implicit */unsigned int) var_2)), (var_5))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27929)))))))));
    var_19 = ((unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 2097151ULL))))), (max((var_11), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min((arr_1 [i_0] [(unsigned char)10]), (((/* implicit */unsigned long long int) var_0))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */short) var_5);
                                var_21 = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_3] [i_4]) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (arr_10 [i_0] [i_1] [i_1] [i_3]))))));
                                var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)14] [i_0] [i_0])))))) * (max((arr_6 [i_4] [i_1] [i_2] [i_3]), (arr_6 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] [i_0])), (min((((/* implicit */long long int) (_Bool)1)), (arr_2 [(signed char)12])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_8 [20U] [20U]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) && (((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))))) : (((((/* implicit */unsigned long long int) min((2060658389U), (((/* implicit */unsigned int) (unsigned char)238))))) - (min((var_9), (((/* implicit */unsigned long long int) 1241879035U))))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 3; i_5 < 23; i_5 += 2) 
                {
                    for (long long int i_6 = 4; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_24 = var_12;
                                arr_23 [i_0] [i_1] [i_0] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) min((arr_10 [i_6 - 2] [i_5 - 1] [i_5 - 1] [(short)23]), (min((((/* implicit */long long int) arr_4 [i_5 - 2])), (arr_10 [i_6 + 1] [i_6] [i_5 - 3] [i_5 - 2])))));
                                var_25 = var_3;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
