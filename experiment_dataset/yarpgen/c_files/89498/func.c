/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89498
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 ^= max((max((((arr_3 [(unsigned short)10] [i_0] [i_0]) > (arr_3 [4LL] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_1] [i_0])))))), (((min((((/* implicit */int) arr_2 [i_1] [i_1])), (arr_3 [6] [i_0] [i_1]))) <= (((/* implicit */int) arr_1 [i_0])))));
                var_12 *= ((/* implicit */long long int) min((((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1])), (arr_0 [i_0] [i_1])))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_0 [i_0] [i_1])))))), (((((/* implicit */int) arr_2 [i_0] [i_0])) > (arr_3 [(unsigned short)0] [i_0] [i_0])))));
            }
        } 
    } 
    var_13 *= ((/* implicit */short) min((((/* implicit */long long int) var_9)), (min((max((var_2), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) max((var_4), (var_10))))))));
    var_14 -= ((/* implicit */signed char) max((min((var_2), (min((var_3), (((/* implicit */long long int) var_10)))))), (min((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned short) var_9))))), (min((var_3), (((/* implicit */long long int) var_6))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) max((max((arr_4 [i_2 - 1]), (((/* implicit */short) arr_10 [i_2] [i_2] [i_2])))), (min((arr_4 [i_2]), (((/* implicit */short) arr_9 [i_3]))))))), (max((((/* implicit */unsigned short) arr_4 [i_2])), (max((arr_8 [(_Bool)1]), (((/* implicit */unsigned short) arr_4 [i_3])))))))))));
                var_16 -= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) min((arr_8 [(signed char)10]), (((/* implicit */unsigned short) arr_4 [(short)0]))))), (max((arr_6 [(signed char)22]), (((/* implicit */unsigned long long int) arr_7 [i_2] [(unsigned short)14] [i_2])))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_4 [i_2]), (((/* implicit */short) arr_9 [i_2 - 1]))))) | (((((/* implicit */int) arr_10 [i_2] [i_2] [(_Bool)1])) & (((/* implicit */int) arr_8 [(_Bool)1])))))))));
                var_17 -= ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_3] [2U] [i_2 - 1])) != (((/* implicit */int) arr_7 [i_2] [6LL] [i_3]))))) <= (((((/* implicit */int) arr_8 [(_Bool)1])) + (((/* implicit */int) arr_5 [i_3]))))))), (max((arr_4 [i_3]), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) arr_6 [(unsigned short)16])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 14; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */int) ((min((((arr_12 [i_5] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_6 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_5])) * (((/* implicit */int) arr_20 [8U] [i_5] [i_6] [i_7]))))))) != (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_9 [i_4])) & (((/* implicit */int) arr_24 [12U] [i_5] [(signed char)2] [i_7] [12U])))), (((((/* implicit */int) arr_20 [i_8] [i_7] [(unsigned short)11] [i_5])) + (((/* implicit */int) arr_7 [i_5] [(signed char)24] [i_5])))))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_25 [i_8] [i_7] [i_5] [i_4]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_4] [i_5] [i_6 - 1] [i_6] [i_6 + 2])) / (((/* implicit */int) arr_8 [2ULL]))))), (min((arr_15 [i_4]), (arr_6 [(signed char)12]))))), (min((max((((/* implicit */unsigned long long int) arr_17 [0U] [i_4] [0U])), (arr_22 [i_4] [i_4] [i_5] [(short)0] [(short)0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_4] [i_5] [i_6] [i_4])) >> (((((/* implicit */int) arr_18 [i_4] [i_5] [i_6 - 1])) - (227)))))))))))));
                    arr_26 [8ULL] &= ((/* implicit */signed char) ((max((max((arr_13 [i_4] [i_4]), (((/* implicit */int) arr_11 [i_5])))), (((((/* implicit */int) arr_19 [i_5] [i_5] [i_4] [i_4] [i_4])) * (((/* implicit */int) arr_21 [i_4] [i_4] [(unsigned short)13] [i_4] [i_4])))))) % (((/* implicit */int) ((((/* implicit */_Bool) min((arr_21 [i_6] [i_6 - 1] [i_5] [i_5] [i_4]), (arr_25 [i_5] [11LL] [i_5] [i_5])))) && (((/* implicit */_Bool) max((((/* implicit */short) arr_18 [i_4] [i_4] [i_6 + 2])), (arr_17 [10U] [i_5] [6ULL])))))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)10]))) * (max((arr_15 [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_6 - 1] [i_5] [i_4])) / (((/* implicit */int) arr_14 [i_6] [i_4]))))))))))));
                    var_22 -= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [0ULL]), (((/* implicit */unsigned short) arr_11 [i_4]))))) && (((((/* implicit */int) arr_23 [i_5])) <= (((/* implicit */int) arr_10 [i_4] [i_5] [i_6 + 1]))))))), (arr_6 [4LL]));
                }
            } 
        } 
    } 
}
