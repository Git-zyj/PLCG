/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87585
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
    var_15 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
                var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0])))))))), (((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    var_18 = 1433994369U;
                    var_19 = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [(short)6]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2 - 2])))))) - (min((arr_7 [(unsigned char)12] [i_1] [i_2 + 1] [(unsigned char)12]), (((/* implicit */unsigned int) arr_5 [i_1])))))), (arr_7 [i_1] [i_1] [i_1] [2ULL])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_1] [i_4]))));
                                var_21 = ((/* implicit */unsigned long long int) arr_13 [i_1] [(unsigned char)2]);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_22 ^= ((/* implicit */_Bool) max((max((((/* implicit */int) arr_8 [i_0] [i_1] [i_5 - 1] [i_6 - 1])), ((-(((/* implicit */int) arr_1 [i_0] [i_1])))))), (((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [(signed char)5] [i_5] [i_6])))) & (((/* implicit */int) min((arr_5 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))))));
                            var_23 ^= min(((((+(512ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5 - 1]))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8372224U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31592))) : (2984429928U)))))));
                            var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5 - 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)138)) >> (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (21779)))))) ? ((-(4286595072U))) : (min((4286595071U), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0])))));
                            var_25 -= ((/* implicit */_Bool) 5133889363393153480ULL);
                            var_26 = ((/* implicit */unsigned short) arr_17 [i_6]);
                        }
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_0])) ? (arr_7 [i_0] [(short)8] [(short)8] [i_0]) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-26704))) * (1310537348U)))))), (18410715276690587648ULL)));
            }
        } 
    } 
}
