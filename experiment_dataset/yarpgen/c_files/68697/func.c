/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68697
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
    var_14 = ((/* implicit */int) max((max((((/* implicit */unsigned int) max((var_2), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (885340028U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) var_11))));
    var_15 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 17262261960887574377ULL))));
                    var_16 = ((/* implicit */unsigned short) (short)(-32767 - 1));
                }
                var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */short) ((signed char) (_Bool)1))), (arr_5 [i_0])))), (min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0] [i_1])), (max((((/* implicit */long long int) arr_1 [i_0])), (arr_4 [i_1] [(short)1])))))));
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_13 [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(arr_10 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_6 [8] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (396874834821206006ULL)))))));
                    arr_14 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_1]))) ? (max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (9223372036854775807LL))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-76)) + (2147483647))) >> (((arr_6 [i_0] [i_1]) - (1658869984781567259ULL))))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_15 [i_0] [4U] [i_4])), (max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [i_4])), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (0LL)))))));
                    var_19 = (i_4 % 2 == zero) ? (((/* implicit */unsigned char) ((((max((arr_7 [i_0] [i_4] [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_1])))) | (((/* implicit */unsigned int) ((int) var_7))))) >> (((((/* implicit */int) arr_16 [i_4] [i_4])) - (4960)))))) : (((/* implicit */unsigned char) ((((max((arr_7 [i_0] [i_4] [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_1])))) | (((/* implicit */unsigned int) ((int) var_7))))) >> (((((((/* implicit */int) arr_16 [i_4] [i_4])) - (4960))) - (17675))))));
                    arr_17 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [(signed char)5] [(signed char)5])) >= (arr_12 [(_Bool)1] [i_1] [i_0])))) % (((/* implicit */int) arr_3 [i_1] [i_4])))))));
                }
                for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_20 [i_0] [i_1] [i_5] = max((((((/* implicit */_Bool) min((var_5), (arr_2 [i_1] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_5]))) >= (arr_12 [3LL] [i_1] [i_0]))))) : (max((((/* implicit */unsigned long long int) (short)-32766)), (arr_6 [i_1] [7U]))))), (((/* implicit */unsigned long long int) ((arr_0 [i_5]) >= (arr_0 [i_5])))));
                    arr_21 [i_0] [1ULL] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) / (3880996553U)))) + (((((/* implicit */unsigned long long int) (+(7068409473833872175LL)))) & (arr_9 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_28 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                                var_20 = ((/* implicit */_Bool) arr_2 [i_5] [0LL]);
                            }
                        } 
                    } 
                }
                arr_29 [(unsigned short)7] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) -1464040752)), ((+(arr_11 [i_0] [i_1] [i_1]))))) | (((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_0])) + (2147483647))) << (((((arr_0 [i_1]) + (1286304231))) - (10))))))));
            }
        } 
    } 
}
