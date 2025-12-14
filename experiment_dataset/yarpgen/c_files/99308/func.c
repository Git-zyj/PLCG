/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99308
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_4 [(signed char)12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : ((-(((/* implicit */int) var_0))))));
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (unsigned short)41807))));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 4])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))));
        arr_5 [i_0] [(unsigned char)8] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_1] = ((/* implicit */signed char) arr_6 [i_2 - 1] [i_3 - 1]);
                    arr_13 [i_1] [i_2 + 2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_3 - 1])) ? (((/* implicit */int) arr_10 [i_2 + 2] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_8 [i_2 + 2] [i_3 - 1]))))) ? (((/* implicit */int) arr_10 [i_2 + 2] [i_3 - 1] [i_3 - 1])) : ((+(((/* implicit */int) arr_6 [i_2 + 2] [i_3 - 1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-14)) ? (0ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-14)))))));
                                arr_20 [(unsigned char)4] [i_1] [i_2] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) var_9);
                                var_13 |= min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_6 [(unsigned short)21] [i_2]))))) ? ((-(arr_9 [i_5]))) : (((/* implicit */int) (unsigned char)40)))));
                            }
                        } 
                    } 
                }
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 152307932)) ? (max((((/* implicit */int) arr_8 [i_2] [i_2])), ((+(((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_10 [(signed char)17] [i_1] [i_2 - 1]))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_1] [(unsigned char)6] [i_1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((_Bool) arr_15 [i_6] [i_6] [i_2] [i_1])), (arr_10 [i_1] [i_2 + 1] [i_7]))))));
                            var_15 = ((/* implicit */_Bool) arr_15 [i_7] [i_6] [i_1] [i_1]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) (~(min((arr_11 [i_2 - 1] [i_2] [i_2]), (arr_11 [i_2 + 2] [i_2 + 2] [(signed char)9])))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_6);
}
