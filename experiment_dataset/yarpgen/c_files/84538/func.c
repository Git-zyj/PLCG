/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84538
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
    var_13 = var_7;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */signed char) ((((var_10) ^ (var_5))) & (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_0 [i_0])) != (var_5)));
    }
    for (unsigned int i_1 = 4; i_1 < 11; i_1 += 3) 
    {
        arr_7 [(signed char)3] = ((/* implicit */unsigned int) arr_4 [9] [i_1 - 3]);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */int) min((var_14), (min((((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [(signed char)4] [i_4 - 3])), (((((/* implicit */int) arr_13 [(signed char)1] [i_2] [i_3] [i_2] [i_4 + 1])) / (((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [(signed char)13] [i_4 - 2]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) max((arr_12 [i_4 + 3] [i_3]), (((/* implicit */int) ((arr_0 [i_1]) > (arr_11 [i_1] [i_1] [i_1]))))))), (min((var_0), (((/* implicit */unsigned int) arr_15 [i_3 - 1] [i_3 - 1] [(signed char)10] [i_4] [i_3] [i_4 - 2] [i_5]))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [(signed char)3] [i_5] [i_5] [i_5 + 1] [i_3] [(unsigned char)5] [i_3]) / (arr_15 [i_5] [i_5] [i_5] [i_5 - 1] [i_3] [i_3] [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1])) & (var_7))))));
                            var_17 *= max((var_0), (((/* implicit */unsigned int) arr_4 [i_2] [i_2])));
                        }
                    }
                    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        arr_19 [i_3] = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) 1726831107)), (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [13] [i_3] [i_3 - 1] [i_3 - 1])) >> (((arr_17 [i_2] [10] [i_3 - 1] [10]) - (992630778U))))))));
                        var_18 = ((/* implicit */signed char) ((max((min((var_7), (var_0))), (((/* implicit */unsigned int) arr_6 [i_2])))) == (max((var_5), (min((((/* implicit */unsigned int) arr_0 [i_3])), (arr_16 [i_2])))))));
                        var_19 = min((min((arr_1 [i_1] [i_6]), (min((var_5), (((/* implicit */unsigned int) var_1)))))), (arr_17 [i_1 - 1] [i_2] [i_2] [i_6]));
                    }
                    arr_20 [i_3] = max((1U), (2344191584U));
                    var_20 *= ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_3 - 1]))) | (var_9));
                }
            } 
        } 
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((310135844U), (4294967288U))))));
        arr_21 [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1 + 3])) && (((/* implicit */_Bool) ((((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [(signed char)0] [(signed char)0] [i_1]))))) - (max((((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1])), (var_9))))))));
    }
    for (unsigned int i_7 = 4; i_7 < 11; i_7 += 4) 
    {
        arr_24 [(signed char)9] = ((/* implicit */unsigned char) max((((537434846U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))))), (((((arr_17 [i_7] [4U] [i_7 - 3] [i_7]) ^ (arr_17 [i_7] [i_7] [i_7] [i_7]))) | (((/* implicit */unsigned int) arr_15 [i_7 - 3] [4U] [i_7] [i_7] [i_7] [2U] [i_7 + 1]))))));
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (signed char)120)))))));
    }
    var_22 = ((((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) % (((min((((/* implicit */unsigned int) var_1)), (var_3))) ^ (((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 4) 
    {
        for (unsigned char i_9 = 3; i_9 < 21; i_9 += 4) 
        {
            {
                arr_34 [i_8] = arr_30 [i_8] [(signed char)17];
                arr_35 [i_9] [i_8] = min((11U), (((/* implicit */unsigned int) (signed char)112)));
                var_23 = ((/* implicit */int) min((max((((/* implicit */unsigned int) arr_32 [i_8])), (var_12))), (min((((/* implicit */unsigned int) ((arr_31 [i_8 - 1] [i_8] [i_8]) <= (var_0)))), (max((((/* implicit */unsigned int) var_8)), (var_3)))))));
            }
        } 
    } 
}
