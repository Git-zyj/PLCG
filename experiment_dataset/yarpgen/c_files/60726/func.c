/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60726
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = arr_1 [i_0];
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) ((long long int) ((unsigned long long int) 16224386267002612096ULL)));
                        var_15 = ((/* implicit */_Bool) max((((arr_1 [i_3]) % (min((arr_7 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */long long int) arr_3 [i_2] [i_1] [i_0])))))), ((((!(arr_5 [i_0] [i_0]))) ? (arr_2 [i_0]) : (min((arr_4 [(unsigned char)0] [i_0] [i_0]), (arr_2 [i_1])))))));
                        var_16 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) max((((/* implicit */signed char) arr_5 [i_1] [i_0])), (arr_3 [i_0] [i_0] [i_3])))), (max((((/* implicit */long long int) arr_0 [i_1] [i_1])), (arr_2 [i_0]))))) + (((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0] [(unsigned short)1]), (arr_6 [i_0] [i_0] [i_0]))))) : (arr_4 [i_3] [i_0] [i_0])))));
                        arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_3]);
                    }
                } 
            } 
            var_17 -= ((/* implicit */int) ((short) min((((/* implicit */long long int) arr_6 [(signed char)13] [i_1] [i_1])), (arr_2 [i_0]))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_18 = ((/* implicit */short) arr_11 [i_0] [i_0]);
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4] [i_5])) << (((/* implicit */int) arr_6 [i_0] [i_4] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_5])) || (arr_13 [i_0] [i_0] [i_4] [i_5]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5] [i_5] [i_0] [i_5])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0])))))));
            }
            var_20 = ((/* implicit */_Bool) ((arr_5 [i_0] [i_4 - 1]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0])) != (((/* implicit */int) arr_5 [i_0] [i_0]))))))));
            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_4 - 4] [i_0] [i_0]))));
        }
        for (unsigned long long int i_6 = 4; i_6 < 16; i_6 += 3) /* same iter space */
        {
            arr_19 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_6] [i_0])), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_0])), (arr_14 [i_0] [i_6]))))) : (arr_4 [i_0] [i_0] [i_0])))) >= (((((/* implicit */_Bool) ((long long int) (unsigned short)35382))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [14ULL] [i_6 - 2] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_6])) : (((/* implicit */int) arr_13 [i_0] [i_6 - 3] [i_6 + 1] [i_0]))))) : (((arr_13 [i_0] [i_6] [i_0] [i_0]) ? (arr_9 [i_6] [i_6 - 1] [i_6] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
            arr_20 [i_0] [i_0] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_6])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_7 [i_0] [i_0] [i_6 - 3] [i_6]) : (arr_7 [i_0] [i_6] [i_0] [i_0])))) ? (((/* implicit */int) arr_15 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [2ULL] [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_6]))) : (arr_1 [i_0])))) ? (((/* implicit */int) max((arr_16 [i_6] [i_6 - 2] [i_6]), (arr_13 [i_6] [i_6] [i_6] [i_6])))) : (((/* implicit */int) ((((/* implicit */_Bool) 2942762013U)) || ((_Bool)1))))))));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_0] [i_0])), (arr_18 [i_0])))) : (((arr_4 [i_0] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0])))))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [(short)4] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
    }
    var_23 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) var_3)), (var_1))) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))));
}
