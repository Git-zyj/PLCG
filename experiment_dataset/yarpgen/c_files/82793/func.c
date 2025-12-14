/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82793
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
    var_19 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (~((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (var_7)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1 - 1] [i_3 + 2] [i_1] [i_1 - 1] [i_0] = ((/* implicit */signed char) arr_3 [i_1 - 2]);
                                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(unsigned char)4] [i_3 + 2] [i_3 + 3] [i_3 + 2] [(_Bool)1])) * (((/* implicit */int) arr_13 [(unsigned short)8] [i_3 + 2] [i_3 + 3] [i_3 + 2] [(signed char)8]))))) ? (((/* implicit */int) min((arr_13 [(signed char)2] [i_1 + 1] [i_3 + 3] [i_3] [(_Bool)1]), (arr_13 [(unsigned short)6] [i_0] [i_3 + 3] [i_0] [i_3])))) : (((/* implicit */int) arr_13 [8U] [i_3] [i_3 + 3] [i_3] [i_3]))));
                                arr_17 [i_4] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]);
                                var_21 = ((/* implicit */_Bool) arr_11 [7U] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 + 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 2; i_6 < 14; i_6 += 4) 
        {
            for (unsigned short i_7 = 4; i_7 < 13; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_20 [i_5 - 1] [i_6 - 1])))) ? (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_20 [i_5 - 1] [i_6 - 1])))) : (((/* implicit */int) ((arr_18 [i_5 - 1]) || (((/* implicit */_Bool) arr_20 [i_5 - 1] [i_6 + 3])))))));
                    var_23 = ((/* implicit */short) max(((((!(arr_19 [i_5] [i_6]))) ? (min((((/* implicit */long long int) arr_23 [i_5])), (arr_21 [0LL]))) : (((arr_22 [i_7 + 3] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6 - 1]))) : (var_10))))), (((/* implicit */long long int) arr_23 [i_5 - 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_33 [i_5] [i_6 + 3] [i_7 + 2] [i_8] [i_9] = (!((!(((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_7 + 4] [i_8])))));
                                var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) arr_29 [i_5 - 1]))), (min((((/* implicit */long long int) (~(((/* implicit */int) var_14))))), (((((/* implicit */_Bool) var_17)) ? (arr_28 [i_6 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5] [i_6 - 1] [i_7 + 2] [i_5])))))))));
                                var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) min((var_7), (((/* implicit */long long int) arr_30 [i_5 - 1] [i_5 - 1] [i_8])))))), ((~(min((((/* implicit */long long int) arr_27 [i_6])), (var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) var_10);
    var_27 = ((/* implicit */_Bool) ((((_Bool) var_18)) ? (((((/* implicit */_Bool) var_7)) ? (min((var_17), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ^ (var_7))))))))));
}
