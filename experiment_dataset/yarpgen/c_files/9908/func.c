/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9908
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) (short)26202))));
                    arr_8 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)36660);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-114)) && (((/* implicit */_Bool) -3607481724678800066LL))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        var_11 -= ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) (short)26194))));
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2742103255522105703LL)) || (((/* implicit */_Bool) (short)26194))));
                        var_13 = ((9223372036854775807LL) * (((/* implicit */long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42166))))))));
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((-2137269341) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17539))) < (9223372036854775807LL))))));
                    }
                    for (int i_4 = 3; i_4 < 8; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 2; i_5 < 7; i_5 += 4) 
                        {
                            arr_19 [i_5] [i_5] [i_5] [i_1 - 1] |= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((-9223372036854775807LL - 1LL)))) ^ (((/* implicit */long long int) 1))));
                            var_14 = ((/* implicit */unsigned short) -411156264);
                        }
                        arr_20 [i_0] [i_4] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) & (6LL)));
                    }
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) -1619794314);
                        arr_23 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                        arr_24 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (unsigned short)42166);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 8; i_7 += 1) 
                    {
                        var_16 |= ((/* implicit */long long int) ((((/* implicit */int) (signed char)49)) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)16331)))))));
                        var_17 &= ((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (9223372036854775800LL)));
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) (short)-26195);
        var_19 &= ((/* implicit */short) 1116879276413048216LL);
        var_20 |= ((/* implicit */signed char) ((((/* implicit */int) (short)10)) + (((/* implicit */int) (unsigned char)50))));
        var_21 = ((/* implicit */_Bool) (unsigned char)0);
    }
    var_22 ^= ((/* implicit */unsigned int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30716)))));
}
