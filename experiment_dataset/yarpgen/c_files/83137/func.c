/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83137
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
    var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_4 [i_3] [i_0]))));
                                var_16 = ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) ((arr_1 [(signed char)3]) | (((/* implicit */unsigned long long int) arr_9 [i_2] [i_3] [i_2] [i_1])))))));
                                var_17 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_7 [10U] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_1])))) / (max((((/* implicit */unsigned long long int) arr_10 [19ULL] [i_0] [i_2] [(unsigned char)4] [(unsigned char)17])), (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) max((arr_2 [i_1 + 1]), (arr_2 [i_1 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_16 [i_0] [16ULL] [i_2] [i_5] [i_6] [i_2] [i_2] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_6 [i_6] [i_5] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5]))) : (arr_13 [i_6] [i_5] [i_2] [i_0]))) - (((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_0] [(unsigned char)4] [(unsigned char)4])))) & (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (arr_11 [i_5] [i_1 + 1] [i_1 + 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5 + 3] [i_5 + 3])))))))))));
                                var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_5] [i_0] [i_0])) : (max((arr_13 [(unsigned short)5] [18ULL] [i_2] [i_5]), (((/* implicit */unsigned long long int) arr_8 [i_0])))))), ((-(((arr_3 [i_0] [i_1]) * (arr_7 [i_0] [23LL] [i_0])))))));
                                var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_1] [i_2] [(unsigned char)11]), (((/* implicit */unsigned int) arr_0 [i_2]))))), (arr_7 [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) ((arr_10 [i_6] [i_2] [i_2] [i_2] [i_0]) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1 - 1] [(signed char)23] [i_5])))))) ? (((unsigned long long int) arr_2 [i_5])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_6] [i_6] [i_2] [i_1] [i_6] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_2] [i_5] [i_2] [i_2] [i_0])))));
                                arr_17 [i_0] [i_5] [0] [i_1] [i_0] = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_4 [i_6] [i_2])), (arr_1 [i_5]))), (((/* implicit */unsigned long long int) max((arr_6 [i_6] [i_5] [(signed char)5] [i_0]), (((/* implicit */unsigned short) arr_10 [i_6] [i_0] [i_2] [i_0] [11LL])))))))) ? (((((/* implicit */_Bool) arr_5 [i_5 - 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [(signed char)15] [i_0] [i_2] [i_0] [i_0])), (arr_5 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_6] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [22LL] [i_2])))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_1] [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_2] [i_1]))))))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned long long int) ((max((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]))))))) != (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_6 [16LL] [i_0] [i_0] [3U]))))))));
    }
}
