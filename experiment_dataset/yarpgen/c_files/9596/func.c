/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9596
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
    var_10 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_4)))) ? (((((/* implicit */unsigned long long int) -1025556444)) ^ (5596186641167481206ULL))) : (((/* implicit */unsigned long long int) (~(1025556444)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((var_3) + (arr_0 [i_0]))) != (((/* implicit */int) var_2))))), ((~(max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (15634876117904666844ULL)))))));
        var_11 = arr_0 [1ULL];
        var_12 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-38)), (var_8)))), ((-(15811114058097852898ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)13)))))));
    }
    var_13 = ((/* implicit */unsigned char) (-(min((var_4), (((/* implicit */unsigned long long int) var_1))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((((min((((/* implicit */int) arr_4 [i_1])), (var_3))) + (2147483647))) >> (((var_0) - (1416060508))))) < (((/* implicit */int) arr_4 [i_1]))));
        var_14 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [(unsigned short)12])) != (((/* implicit */int) arr_4 [(_Bool)1])))))));
        arr_6 [2] [2] &= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_4 [(short)6])) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [6LL]))))))));
        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_1])), ((+(6430535798786626445ULL)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3])) ? (((/* implicit */int) (signed char)38)) : (((((/* implicit */int) arr_4 [i_1])) ^ (var_3))))), (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_7 [i_1] [i_2]))))), (var_1))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (signed char i_5 = 2; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_13 [i_4] [i_2] [i_3]))))) ? (-498988956) : (((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [20] [i_3] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_5] [i_5]))) : (var_7)))) ^ (var_5)))));
                                arr_16 [i_5 + 1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) ((arr_8 [i_1] [i_2] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))), (arr_7 [i_5] [i_3]))))));
                                arr_17 [i_4] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((var_4) - (1014721817638097235ULL)))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3]))))), ((-(((/* implicit */int) arr_13 [20LL] [i_1] [i_3]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_3] [i_1]))) ^ (min((((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1])), (var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (var_0)))) + (min((((/* implicit */long long int) var_2)), (3LL))))))));
                    var_17 = ((/* implicit */short) ((max((max((((/* implicit */unsigned long long int) (unsigned short)59758)), (6430535798786626445ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_1] [i_1] [i_3]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
            } 
        } 
    }
    var_18 += ((/* implicit */unsigned long long int) var_6);
}
