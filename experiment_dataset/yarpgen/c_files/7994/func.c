/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7994
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
    var_14 ^= ((/* implicit */_Bool) max((((((_Bool) var_2)) ? (var_7) : (var_3))), (var_7)));
    var_15 ^= ((/* implicit */unsigned long long int) (+(1228229630)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((arr_3 [i_0 - 1] [i_0]) + (9223372036854775807LL))) >> (((arr_3 [i_0 + 2] [i_0 + 3]) + (5797761236354020982LL)))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */int) (unsigned short)56645)), (-297952897)))))))))));
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_5 [16LL] [i_0 + 1] [i_0] [(short)0]), (((/* implicit */long long int) arr_4 [i_0] [i_0 + 1])))))));
                    var_18 = -7LL;
                }
                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8890)) - (((/* implicit */int) (!(((/* implicit */_Bool) 897154428215348560LL)))))))) + (((((((/* implicit */_Bool) 1228229613)) ? (-897154428215348561LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58005))))) & (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-12)))))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_0 [i_0 + 4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8890))) - (arr_5 [i_0 + 2] [i_0] [i_0 - 1] [i_1])))) ? (14) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (1480309591)))))) : (((((/* implicit */_Bool) ((int) 4145415524U))) ? (((/* implicit */long long int) arr_0 [i_0 + 3])) : (arr_3 [i_0 - 2] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [13LL] [i_4] [i_5] [i_7]))) < (13623549337766770413ULL))))) <= (max((((/* implicit */unsigned int) var_13)), (559232641U)))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned long long int) arr_17 [i_7 + 2] [13LL] [i_7 + 2] [i_7 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                                var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [1] [i_5] [i_4] [i_3]))))) ? (((/* implicit */unsigned long long int) (+(897154428215348560LL)))) : (((((/* implicit */_Bool) (unsigned short)8890)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) : (arr_15 [i_7 + 3] [8ULL] [i_5] [i_3]))))))));
                            }
                        } 
                    } 
                } 
                var_24 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_6 [i_3 - 1] [i_3 - 1]), (arr_6 [i_3 - 1] [i_3 - 1]))))));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_7)), (2346413211U)))))))))));
            }
        } 
    } 
}
