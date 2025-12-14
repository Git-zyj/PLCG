/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83012
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0])) - (((/* implicit */int) arr_8 [i_2]))))) ? (((((arr_2 [i_0]) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) >> (((arr_0 [i_0]) - (6791085101280322468ULL))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) > (arr_0 [i_0]))) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0])) != (((/* implicit */int) arr_1 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = arr_13 [i_4];
                                var_13 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (arr_7 [i_2] [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [(unsigned char)8]) || (((/* implicit */_Bool) arr_13 [i_4])))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))))) ? (arr_12 [i_4] [i_3 + 2] [i_1 - 3] [i_0] [i_0 + 1]) : (((((/* implicit */_Bool) 3803820133U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1]))) : (arr_10 [i_3 - 1] [i_1 + 2] [i_0 + 1] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_23 [5U] [i_0] [5U] [i_2] [i_5] [5LL] = ((/* implicit */unsigned char) ((((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1 - 3] [i_2] [i_5] [i_6] [i_5 + 1])))) >= (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1 - 1] [i_5 - 1] [i_0 + 1] [i_6] [i_6])))) ? (((/* implicit */int) max((arr_11 [i_0 + 1] [i_0 + 1]), (arr_11 [i_0 + 1] [i_1 - 3])))) : (((/* implicit */int) ((arr_10 [i_0 + 1] [i_0] [i_1 - 1] [i_5 + 1]) <= (((/* implicit */unsigned long long int) arr_15 [6] [6] [i_2] [i_5] [i_5] [i_6])))))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2] [i_5]))));
                                var_16 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) < (arr_9 [i_0] [i_5] [7] [i_1] [i_1] [i_0])))), (min((((/* implicit */unsigned long long int) arr_7 [i_6] [i_2] [i_1])), (arr_21 [(unsigned short)9] [i_1] [i_2] [(unsigned char)5] [i_6]))))), (((/* implicit */unsigned long long int) max((arr_15 [7] [i_5 - 1] [i_0 + 1] [7] [i_1 - 2] [i_1]), (((/* implicit */long long int) arr_18 [(_Bool)1] [i_1 - 2] [i_2] [i_5])))))));
                                arr_24 [(signed char)16] [(signed char)16] [(signed char)16] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_5 + 1])) == (arr_19 [i_0] [10] [i_5 + 1] [i_5 - 1] [i_6]))))) < (((arr_7 [(signed char)5] [i_2] [i_0]) << (((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_5])) != (arr_3 [i_0] [i_1 - 3]))))))));
                                var_17 -= ((/* implicit */int) arr_11 [i_0] [i_1]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_0] [i_1 - 3] [i_0]))) * (arr_0 [i_0])))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_0 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_1] [i_1 + 1] [i_2])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_0);
    var_20 = ((/* implicit */unsigned short) var_7);
}
