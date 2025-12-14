/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75727
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
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 11; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned long long int) (~((+(min((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (arr_3 [i_1 + 3] [i_0 - 2])))))));
            arr_6 [i_0] [(_Bool)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1])) ? (((/* implicit */long long int) arr_1 [i_0] [10])) : (arr_0 [i_1 - 3] [i_1 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])))))) : (arr_1 [i_0] [i_0 + 2])));
        }
        for (int i_2 = 3; i_2 < 11; i_2 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) max((var_15), (arr_0 [i_0] [i_2 + 1])));
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2])) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 + 1] [i_0 + 2])))) < (max((max((((/* implicit */long long int) arr_2 [i_0] [i_2])), (arr_0 [i_2 + 3] [i_2]))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_0 [6ULL] [i_2 + 1]) : (((/* implicit */long long int) arr_3 [i_0] [i_2]))))))));
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min(((short)-14840), (((/* implicit */short) (signed char)30)))))));
        }
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_17 [i_0 - 3] [i_3] [i_0 - 3] [i_4] = min((((/* implicit */unsigned long long int) arr_2 [i_3] [i_3])), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) | (arr_7 [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_16 [i_0 + 2] [i_3 + 1])) >= (((/* implicit */int) arr_16 [i_0 + 2] [i_3 + 1])))) ? ((~(((/* implicit */int) (unsigned char)75)))) : (((/* implicit */int) ((arr_0 [i_0 - 2] [i_3 + 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 + 2] [i_3 + 2]))))))));
                        arr_20 [i_0] [i_0] [i_4] [i_5] [i_5] &= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_4 - 1] [9U]))))) ? (((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_4 + 2])) ? (((/* implicit */int) arr_4 [i_4 + 3] [i_4 + 3])) : (((/* implicit */int) arr_4 [i_4 + 1] [(signed char)10])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4 + 2] [i_4 + 2]))))));
                    }
                    for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_24 [i_0 + 1] [i_0 + 1] [i_3] [i_4] [9] &= ((/* implicit */int) ((((/* implicit */int) arr_8 [i_4])) >= (((/* implicit */int) max((arr_11 [i_0 + 2]), (arr_11 [i_0 - 2]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((!(arr_11 [i_0 - 2]))) ? (((arr_11 [i_0 - 1]) ? (((/* implicit */int) arr_11 [i_0 - 2])) : (((/* implicit */int) arr_11 [i_0 - 3])))) : (((arr_11 [i_0 - 2]) ? (((/* implicit */int) arr_11 [i_0 + 1])) : (((/* implicit */int) arr_11 [i_0 + 1])))))))));
                            arr_28 [i_3] [i_4] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_4 - 1] [i_3 + 2]) + (arr_2 [i_4 + 2] [i_3 + 1])))) ? (max((arr_2 [i_4 + 4] [i_3 + 1]), (arr_2 [i_4 + 3] [i_3 + 1]))) : ((-(arr_2 [i_4 - 1] [i_3 + 1])))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) arr_19 [i_8]);
                            arr_31 [i_0] [i_3] [i_4 + 3] [i_6] [i_4 + 3] [i_8] [i_6] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0]);
                        }
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_19 [i_6]) ? (((/* implicit */int) arr_19 [i_4 + 3])) : (((/* implicit */int) arr_19 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 - 2]))) : (((arr_19 [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2433203098448937060ULL)))));
                    }
                    arr_32 [0U] [i_3] [i_0 + 1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7954)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1985))) : (1536302148U)))) ? (arr_7 [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 + 2] [i_3 + 1] [i_4 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_3 - 1])) ? (arr_3 [i_0 - 2] [i_0 - 3]) : (arr_3 [i_3] [i_4 + 3]))))));
                    arr_33 [i_4] [i_3 + 2] [i_0 - 2] = ((/* implicit */short) ((((arr_14 [i_3 - 2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 + 1] [(unsigned char)6] [i_3 - 1] [i_3] [i_4] [i_0 + 1]))))) || (((/* implicit */_Bool) min((arr_25 [i_3] [i_3 + 1] [i_3 - 2] [i_4] [i_3] [i_4]), (arr_25 [i_0] [(unsigned char)3] [i_3 + 1] [i_4] [i_0] [i_4]))))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 2; i_9 < 19; i_9 += 1) 
    {
        var_21 &= arr_35 [4];
        var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((arr_34 [4] [i_9]), (arr_34 [i_9] [i_9])))))) ? (arr_35 [i_9]) : ((+(arr_34 [i_9 - 2] [i_9 + 1])))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((arr_34 [i_9] [i_9]), (arr_34 [i_9] [i_9]))), (((((/* implicit */_Bool) arr_35 [10U])) ? (arr_35 [12]) : (arr_35 [(unsigned short)0])))))) ? (((((/* implicit */_Bool) arr_35 [(short)18])) ? (arr_35 [12U]) : (arr_35 [(unsigned short)18]))) : ((+(arr_35 [(unsigned short)8]))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        var_24 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)59242)) : (((/* implicit */int) (short)0))))));
        arr_38 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_35 [(unsigned char)14]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [3U] [i_10])) ? (((/* implicit */int) arr_37 [i_10])) : (((/* implicit */int) arr_37 [i_10])))))))) ? (((/* implicit */int) arr_37 [(unsigned char)16])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [(short)4])))))));
    }
}
