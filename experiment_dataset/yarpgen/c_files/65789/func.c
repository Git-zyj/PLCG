/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65789
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((((unsigned long long int) (unsigned char)168)), (((/* implicit */unsigned long long int) (!(var_4))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 1147063062120145881LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_1]))) : (593423890U))) >> (((/* implicit */int) arr_11 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 3] [i_2 + 3] [i_2])))) / (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)157)) < (((/* implicit */int) arr_10 [i_4] [i_3] [i_0] [i_0]))))), ((-(((/* implicit */int) (unsigned char)73)))))))));
                                var_13 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2 + 1] [i_4]);
                            }
                        } 
                    } 
                    var_14 |= ((/* implicit */unsigned long long int) ((signed char) (unsigned char)64));
                    var_15 = ((/* implicit */short) max((398721482874437033ULL), (((/* implicit */unsigned long long int) ((((arr_1 [i_0] [i_1 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2434028340U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_2 + 3] [i_0] [i_0] [i_1] [i_0])) % (((/* implicit */int) (unsigned char)153))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_5 - 1] [i_6 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48)))))) ? (((/* implicit */int) min((arr_14 [i_6 + 2] [i_5 - 2]), (arr_14 [i_6 + 2] [i_5 + 1])))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)101))))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_5] [i_6] [i_7 + 2] [(signed char)8] [i_6] [i_6 - 1]))))) ? ((-(arr_5 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)93), (arr_9 [i_7 + 1] [i_7 + 1] [i_6 + 2] [i_6 + 2] [i_5 + 1])))))));
                    var_18 = ((/* implicit */short) ((((min((arr_15 [i_5] [i_6]), (((/* implicit */unsigned int) arr_11 [(short)0] [i_6] [(short)10] [15ULL] [(short)0] [i_6] [i_6])))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)89))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180)))));
                }
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((min((((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_5] [i_5] [i_5] [17U] [i_5] [i_5] [i_5])), ((unsigned char)108)))), (((int) var_9)))) + (((((/* implicit */_Bool) ((signed char) var_3))) ? (((((/* implicit */_Bool) 3874394741U)) ? (((/* implicit */int) (_Bool)1)) : (-1345726420))) : (((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned char)160)))))))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned long long int) var_1);
}
