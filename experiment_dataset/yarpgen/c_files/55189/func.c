/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55189
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
    var_11 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min(((+(((((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0])) | (((/* implicit */int) arr_5 [0LL] [0LL])))))), (((/* implicit */int) ((((/* implicit */int) max((arr_4 [i_1] [i_1] [i_0]), (arr_4 [i_0] [i_1 + 1] [i_1 + 1])))) < (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_0] [(unsigned char)21])), (arr_3 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_2] [i_3]))));
                                arr_14 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_4] [i_4] [(short)17]);
                                var_14 = ((/* implicit */long long int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (13486531263961249865ULL))), (((/* implicit */unsigned long long int) 6U)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [15ULL] [15ULL] [15ULL] [15ULL] [i_3] [i_4])), (max((arr_2 [(_Bool)1]), (((/* implicit */long long int) arr_10 [i_0] [i_0])))))))));
                                var_15 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) min((arr_4 [i_0] [(short)5] [i_0]), (((/* implicit */signed char) arr_8 [i_1 + 1] [i_1] [i_2] [(_Bool)1] [(signed char)15] [i_0]))))))), (((/* implicit */int) arr_9 [i_0] [i_2] [i_3 + 1] [i_4]))));
                                var_16 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0]))))), (max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_2 [i_0]))))))));
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))), (max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0])))))))));
        var_18 *= ((/* implicit */long long int) max((((/* implicit */int) min((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */short) arr_10 [i_0] [i_0]))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5];
        var_19 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_7 [i_5] [i_5] [i_5])))), ((((-(((/* implicit */int) arr_1 [i_5] [i_5])))) - (((/* implicit */int) arr_7 [i_5] [i_5] [i_5]))))));
    }
    var_20 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_1)), (max((7U), (((/* implicit */unsigned int) (_Bool)0)))))), (((/* implicit */unsigned int) var_8))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((/* implicit */int) var_5)), (min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_8))))))))))));
}
