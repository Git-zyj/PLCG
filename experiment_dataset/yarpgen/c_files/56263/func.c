/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56263
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_1 + 2] [i_1 + 1]), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 1] [(signed char)14])) ? (arr_3 [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_0])))) : ((+(arr_3 [i_1 - 1] [i_1 - 1])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [6] [i_0] [0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 526464655U)) ? (873139369U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24606)))));
                                arr_15 [18ULL] [i_1] [(unsigned short)8] [i_2 + 1] [i_0] [i_3] [13] = ((/* implicit */int) var_1);
                                var_13 ^= ((/* implicit */unsigned int) min((((unsigned long long int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2 + 1] [i_3] [i_3])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    arr_19 [i_0] [i_1] [(unsigned short)15] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))));
                    arr_20 [i_0] [i_0] = arr_1 [i_0] [i_0];
                    arr_21 [i_0] [i_0] [i_1 + 1] [(short)12] &= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1] [i_5]);
                }
                var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3421827926U)) ? (((((/* implicit */_Bool) max((3421827945U), (arr_7 [i_0] [i_1 + 2] [i_1])))) ? (min((((/* implicit */long long int) (unsigned short)53238)), (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (873139355U)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [21U]))))))));
                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) max((1075981701U), (((/* implicit */unsigned int) arr_0 [i_0]))))) || (((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) arr_10 [i_0] [i_0] [(unsigned short)21] [i_0] [i_1] [i_1]))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_3);
    var_17 = ((/* implicit */short) var_6);
}
