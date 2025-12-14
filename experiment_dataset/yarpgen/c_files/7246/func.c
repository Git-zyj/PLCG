/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7246
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) * (arr_0 [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) var_19);
        var_22 = ((/* implicit */unsigned long long int) ((min((arr_0 [i_0]), (arr_0 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93)))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (min((((arr_3 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)17]))))), (max((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_1])), (max((var_18), (((/* implicit */int) arr_5 [i_1])))))))));
        var_23 = ((/* implicit */short) ((((long long int) min((var_13), (((/* implicit */unsigned long long int) (signed char)-3))))) / (((/* implicit */long long int) ((int) 4406876701288284015ULL)))));
        var_24 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) * (9LL))), (((long long int) arr_3 [i_1]))));
    }
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 24; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_4 = 3; i_4 < 22; i_4 += 1) 
                {
                    arr_16 [i_2] [i_2] [(signed char)11] [i_2] = ((/* implicit */unsigned char) ((min(((~(((/* implicit */int) arr_8 [i_2])))), ((+(((/* implicit */int) arr_8 [i_2])))))) / ((-(var_18)))));
                    arr_17 [i_2] [(signed char)20] [i_2] = ((/* implicit */short) (-(min((var_16), (max((((/* implicit */unsigned long long int) var_12)), (var_13)))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_12 [i_2])), ((~(min((arr_10 [i_2 - 1]), (((/* implicit */unsigned long long int) arr_8 [i_2]))))))));
                    arr_23 [8] [i_3] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 - 1]))))) ? (arr_20 [i_2] [i_2] [i_5] [i_5]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) arr_12 [(signed char)22])))))));
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)208))));
                }
                for (int i_6 = 3; i_6 < 21; i_6 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) (~((-(-3139024702502626696LL)))));
                    var_27 = arr_24 [i_6 + 2] [i_6] [i_6] [i_6];
                    var_28 = max((((/* implicit */long long int) ((signed char) var_17))), (arr_15 [i_2 + 1] [i_2] [i_6 + 2]));
                }
                var_29 = ((/* implicit */short) (-(((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [i_3] [2LL] [i_2 + 1])))))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_3])) ? (arr_13 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)93)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1]))) : (min((((/* implicit */unsigned long long int) arr_12 [i_2])), (((unsigned long long int) arr_12 [i_2]))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) var_19);
}
