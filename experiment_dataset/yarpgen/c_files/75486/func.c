/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75486
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_0] [i_1] = var_6;
                    arr_8 [i_0] [i_1] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((unsigned int) min((var_1), (((/* implicit */short) var_8))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    var_11 = ((max((arr_6 [i_1] [i_1] [i_0 + 3] [i_2 + 1]), (arr_6 [i_0] [i_1] [i_0 - 1] [i_2 - 1]))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (max((((/* implicit */int) var_8)), (-194962043)))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24846))) : (arr_3 [i_0] [i_0 + 2]))));
                }
                for (signed char i_3 = 1; i_3 < 8; i_3 += 2) /* same iter space */
                {
                    var_12 -= ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
                    arr_12 [9LL] [9LL] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2] [9U])) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1])))))) ? (min((((/* implicit */int) arr_0 [i_0])), (var_3))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)24846)))))));
                }
                for (unsigned int i_4 = 3; i_4 < 8; i_4 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) (-(((arr_1 [i_0 + 1] [i_4]) ? (arr_11 [i_0 - 1] [i_0]) : (((/* implicit */int) var_0))))));
                    var_14 = min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_1] [i_0]))))) > (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24864))) - (arr_15 [i_0 + 2] [i_1] [i_4] [i_4])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -194962032)) ? (((/* implicit */int) (unsigned short)12862)) : (arr_13 [i_0] [i_1] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 - 2] [i_1] [i_0 + 1]))) : (arr_3 [i_0 - 1] [i_4 + 2]))));
                    arr_16 [i_4] [i_4] = ((((/* implicit */unsigned int) ((int) arr_6 [i_4] [3LL] [i_4 + 1] [i_4 - 2]))) > (arr_9 [i_0] [i_0] [i_4] [i_4]));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) (unsigned short)40689);
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_0))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)181)), (182331940U)))) ? (((min((((/* implicit */unsigned long long int) arr_13 [i_0 + 2] [i_0 + 2] [i_5] [i_5 + 1])), (arr_17 [i_1] [i_1]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (var_3)))))) : (((/* implicit */unsigned long long int) ((arr_18 [i_5 + 1] [i_5] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    arr_21 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_2 [i_0] [i_1])))))) > (((((/* implicit */int) var_9)) - (((/* implicit */int) var_1))))));
                }
                var_18 ^= ((/* implicit */unsigned char) min((1597610202), (((/* implicit */int) (_Bool)1))));
                var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (min((((/* implicit */long long int) arr_14 [i_1] [i_0] [i_0] [i_0])), (8368296166787950562LL)))));
                /* LoopSeq 1 */
                for (int i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    var_20 = ((/* implicit */long long int) var_6);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */int) ((signed char) (signed char)-110));
                        var_22 ^= ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_7] [i_6 + 1]);
                    }
                    arr_28 [i_0 + 2] [i_0] [i_0 + 2] [i_0] = ((/* implicit */int) max((((arr_23 [i_0 + 1]) == (1844093271))), (((((/* implicit */int) (_Bool)1)) != (-1249333254)))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (unsigned short)33324)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (_Bool)0)))));
}
