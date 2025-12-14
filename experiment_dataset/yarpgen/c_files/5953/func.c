/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5953
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
    var_10 |= ((/* implicit */short) max((min((((/* implicit */int) var_8)), (max((var_4), (((/* implicit */int) (short)-26292)))))), (((((/* implicit */_Bool) (~(27U)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_11 *= ((/* implicit */short) arr_3 [i_0] [i_0 - 1]);
                    var_12 = ((/* implicit */long long int) (+(arr_3 [i_1] [i_2])));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_5 [i_0 + 1]))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1]))) : ((-(arr_5 [i_0 + 1])))));
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        var_14 = (~(((/* implicit */int) (short)(-32767 - 1))));
                        var_15 = ((/* implicit */unsigned long long int) 3783027471U);
                        arr_12 [i_3] [(_Bool)1] = ((/* implicit */int) min((arr_0 [16ULL]), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)20398)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))))))));
                        var_16 = ((/* implicit */short) var_7);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 896U))) ? (var_5) : (arr_5 [i_3])));
                        var_18 ^= ((/* implicit */long long int) (-(arr_8 [i_0 + 1] [2LL] [i_3] [i_1])));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_16 [(unsigned short)4] [i_3] [1U]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)20398)))))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_6])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [(signed char)6] [i_1] [i_3] [i_6] [i_3])) ^ (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_3] [15])))))))) ? ((-(arr_3 [i_0 - 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((802314783U) / (((/* implicit */unsigned int) arr_18 [i_3])))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)23804)), (3783027471U)))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_6])) : (((/* implicit */int) var_0))))), (arr_0 [i_0 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((int) arr_16 [i_6] [i_3] [i_0])) : (((/* implicit */int) var_7)))))));
                        var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) || (((/* implicit */_Bool) (short)-5036)))))));
                    }
                    for (short i_7 = 3; i_7 < 18; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) -636650694874840237LL))), (arr_7 [i_3])));
                        var_23 += arr_10 [i_0 - 1] [i_1] [i_1] [i_7 - 2] [0LL];
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0 - 1])) || (((/* implicit */_Bool) arr_11 [i_3] [i_7 - 3])))) ? ((-(((/* implicit */int) (short)30481)))) : (min((((/* implicit */int) (short)27700)), (arr_18 [i_3])))));
                        var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((27U), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3]))) : (max((1570932672U), (((/* implicit */unsigned int) (signed char)-95)))))), (((/* implicit */unsigned int) (_Bool)0))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_26 -= var_0;
                                var_27 = ((/* implicit */unsigned short) arr_22 [16ULL] [i_1] [i_3] [i_8] [i_3]);
                                var_28 |= ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [(short)8] [i_0]);
                            }
                        } 
                    } 
                    var_29 &= ((/* implicit */unsigned char) (unsigned short)5592);
                    var_30 = ((/* implicit */short) arr_16 [i_0] [i_3] [i_0]);
                }
                arr_25 [i_1] = (-(((((/* implicit */_Bool) min((arr_5 [i_1]), (((/* implicit */unsigned int) arr_23 [(short)5] [i_1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0]))) : (arr_0 [i_0]))));
                var_31 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_5 [i_1])))) ? (arr_21 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))))))))) + (((((/* implicit */_Bool) (+(arr_17 [i_0 + 1] [i_1] [18U] [i_1] [i_1])))) ? (arr_16 [i_0 - 1] [i_1] [i_1]) : (((((/* implicit */_Bool) (unsigned short)4464)) ? (3150583479U) : (arr_22 [i_0] [(short)6] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
}
