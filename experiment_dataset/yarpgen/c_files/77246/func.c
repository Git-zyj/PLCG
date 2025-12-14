/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77246
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
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_1 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 1]);
            var_13 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 1])) % (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned int) arr_5 [i_1] [i_1 + 1])) : (arr_4 [i_1] [i_1 + 1] [i_0])))));
            arr_6 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */_Bool) 0)) ? (arr_4 [i_0] [i_1 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) < (((/* implicit */unsigned int) arr_0 [i_1 + 1])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned int) ((arr_10 [i_2] [i_0]) * (((/* implicit */int) var_1))));
            var_14 = ((/* implicit */unsigned int) ((arr_7 [i_0]) == (arr_7 [i_0])));
        }
        arr_12 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_7 [i_0]) : (arr_7 [i_0]))));
        arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_0])))) ? (18250038363306291497ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (1033676268U))))))) ? (((/* implicit */unsigned long long int) max((arr_9 [i_0]), (arr_9 [i_0])))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
        arr_14 [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((arr_9 [i_0]) >> (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((3261291027U), (((/* implicit */unsigned int) 1061542006)))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
    {
        arr_17 [i_3] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_9 [i_3 - 1]), (((/* implicit */unsigned int) arr_16 [i_3 - 2] [i_3 - 2]))))) && (((/* implicit */_Bool) arr_0 [i_3]))));
        arr_18 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_3 + 2] [i_3 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (arr_7 [i_3]) : (569368147U)))))))) | (((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_3])) ? (min((arr_4 [i_3 - 2] [i_3 + 2] [i_3]), (((/* implicit */unsigned int) arr_0 [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3 + 2] [i_3 + 1]))))))))));
    }
}
