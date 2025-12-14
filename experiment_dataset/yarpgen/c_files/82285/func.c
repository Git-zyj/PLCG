/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82285
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38626)) / (230527471)))) ? (min((var_5), (var_5))) : (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) max((var_3), (max((((/* implicit */long long int) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) arr_5 [i_0 - 3] [i_1]))))), (max((((/* implicit */long long int) arr_3 [i_1] [i_1])), (var_9)))))));
                var_15 = ((/* implicit */_Bool) arr_2 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */long long int) var_1);
                                var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (1291686547))))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_11)))), ((~(arr_5 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (-230527464)))) ? (((((/* implicit */_Bool) 254682255)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_0 [i_0 - 2])))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1]))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_12 [i_3] [(_Bool)1] [i_1] [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0 - 2] [i_1] [i_1] [i_3 + 1] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))))) : (arr_10 [i_0] [i_1] [i_1] [i_4])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (signed char i_6 = 3; i_6 < 10; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_14 [i_7])) ? ((-(var_10))) : (((/* implicit */unsigned long long int) var_12)))), (((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) arr_25 [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_7] [i_6] [i_7])), (var_5)))) : (max((((/* implicit */unsigned long long int) arr_20 [(unsigned char)8] [(unsigned char)8])), (var_10)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_14 [i_7])) : (((/* implicit */int) arr_22 [i_7] [i_9]))))) ? (min((((/* implicit */long long int) var_5)), (arr_10 [8LL] [i_6 + 2] [i_7] [10U]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_8])) ? (((/* implicit */int) var_6)) : (var_5)))))), (((/* implicit */long long int) ((var_2) > (arr_5 [i_6 - 3] [i_7]))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) arr_22 [i_7] [4U])), (var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_3 [i_7] [i_8])) / (arr_19 [i_5] [i_6])))) ? (arr_28 [i_6 - 2] [i_6] [i_6 + 2] [i_6]) : (((/* implicit */unsigned int) arr_9 [i_7] [i_6 - 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
