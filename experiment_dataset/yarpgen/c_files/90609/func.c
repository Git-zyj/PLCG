/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90609
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (unsigned short)40079)) : (2139095040)));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned char) max((((long long int) 1338776808U)), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)75)) || (((/* implicit */_Bool) var_12)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((arr_10 [i_3 - 1] [i_4] [i_3 - 1] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            var_20 = ((/* implicit */unsigned int) (-(arr_14 [(short)4] [i_1] [i_3])));
                        }
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_21 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0 + 3] [i_1 + 2] [i_3 + 2] [(signed char)3] [i_3]))) - (arr_1 [i_5])));
                            var_22 = ((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_0] [i_1 + 2]));
                            var_23 -= ((/* implicit */unsigned int) (~(((int) 4075456938U))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((arr_2 [i_5]) <= (arr_2 [i_5]))))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            var_25 *= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (unsigned short)25462)))));
                            arr_21 [2ULL] [1] [i_2] [1ULL] [i_0] = ((/* implicit */unsigned int) var_7);
                            var_26 -= ((/* implicit */signed char) ((((/* implicit */long long int) var_12)) | (arr_14 [(signed char)9] [4ULL] [i_1 - 1])));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25454)) ? (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */long long int) arr_2 [i_0]))))) : ((-(((/* implicit */int) (_Bool)0))))));
                        }
                        var_28 = ((/* implicit */_Bool) (unsigned char)61);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_6 [i_0])))) * ((-(((/* implicit */int) var_6))))));
                            arr_24 [i_0] [i_1] [(signed char)10] [i_7] [i_7] &= ((/* implicit */unsigned int) ((arr_16 [i_3] [i_3] [i_7 + 2] [i_7] [i_7] [i_7]) ? (((/* implicit */int) arr_15 [i_7] [i_7 + 1])) : (-983767423)));
                        }
                    }
                }
            } 
        } 
    } 
}
