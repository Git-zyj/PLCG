/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63796
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_3 [0LL] [0LL]);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) arr_6 [i_0] [i_3]))) != (arr_0 [i_1])));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_2] [(unsigned char)6] [i_1] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_4] [i_1])), (((long long int) arr_7 [i_1] [i_1]))))) ? (((((/* implicit */unsigned long long int) arr_6 [i_1] [(unsigned char)15])) ^ (((((/* implicit */unsigned long long int) 1073741760)) ^ (arr_0 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_3]))));
                                var_21 &= ((/* implicit */int) max((arr_12 [i_1]), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_10 [i_4] [i_1] [i_0] [i_0] [i_1])), (arr_9 [i_0] [i_1] [i_3]))) + (arr_9 [i_1] [i_1] [i_4]))))));
                                arr_14 [i_1] [i_3] [i_4] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (-(var_13)))))))));
                            }
                            arr_15 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_14)))) ? (((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_2 [i_0]))))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_7 [i_0] [8U])))))) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [19] [i_3] [i_0]))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_5])) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_2])))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_2])) ? (arr_9 [i_1] [i_2] [i_5]) : (arr_9 [i_0] [i_3] [i_5])));
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_2]))));
                            }
                            for (unsigned short i_6 = 2; i_6 < 23; i_6 += 3) 
                            {
                                var_25 = ((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [5LL] [5LL] [i_6]);
                                arr_22 [i_3] [i_1] [i_2] [i_3] [i_6] [i_3] [i_6] = ((/* implicit */short) (~(-1073741739)));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_7 = 4; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_26 &= ((/* implicit */unsigned int) ((max((arr_12 [i_7 + 1]), (((/* implicit */long long int) 3800716093U)))) + (((/* implicit */long long int) arr_5 [i_1] [i_7 - 1] [i_7]))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])))))) & (((((/* implicit */_Bool) max((arr_9 [i_1] [i_8] [i_9]), (((/* implicit */unsigned int) 1073741738))))) ? (((unsigned int) arr_18 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    arr_33 [i_0] [i_1] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-5)) | (((/* implicit */int) arr_11 [i_10] [i_0] [i_1] [i_1] [i_0] [i_0]))));
                    arr_34 [i_10] [i_1] [18ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_10]))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_28 = ((arr_9 [i_0] [i_1] [i_11]) >= (arr_5 [i_0] [i_1] [i_12]));
                                arr_40 [i_0] [i_12] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            }
                        } 
                    } 
                    var_29 += ((/* implicit */unsigned char) ((short) (_Bool)1));
                    var_30 = ((/* implicit */signed char) arr_16 [i_0] [i_1] [i_1] [i_1] [i_1]);
                }
                /* vectorizable */
                for (unsigned int i_13 = 1; i_13 < 22; i_13 += 1) 
                {
                    arr_45 [i_0] [i_1] [i_13] |= ((/* implicit */_Bool) ((((arr_39 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1])))))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_10))))) | (arr_6 [i_13 + 1] [i_13 - 1])));
                }
                arr_46 [i_1] [i_0] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [(signed char)23]);
            }
        } 
    } 
    var_32 = ((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */long long int) var_12)));
}
