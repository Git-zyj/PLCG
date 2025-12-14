/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58436
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
    var_17 = max((((/* implicit */unsigned long long int) (+(398719026U)))), ((-((((_Bool)1) ? (((/* implicit */unsigned long long int) var_16)) : (var_2))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_3 [i_1 + 1])) - (((/* implicit */int) (signed char)-28))))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) | ((~(18238665822794660418ULL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_16 [i_4] [i_2] [i_3] [i_1] [i_1] [i_2] [(short)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28323)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_14 [i_2] [(short)2] [i_2] [i_1] [i_0])), (arr_1 [i_0])))) : (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) 5347506279782785104LL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 923214780)) || (((/* implicit */_Bool) var_12))))) >= (arr_8 [i_0] [i_0] [i_0] [i_2]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (min((arr_10 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0]), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                var_19 = ((/* implicit */_Bool) var_14);
                                arr_17 [i_4] [i_1] [i_2] [i_2] [i_4] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) ((arr_6 [i_5] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) arr_15 [i_5 + 2] [i_0] [i_5] [(signed char)4])) : ((-(var_6)))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [12ULL] [i_5] [0LL] [i_0] [i_0]))))) >= (((/* implicit */int) arr_18 [i_0]))));
            var_22 &= (-2147483647 - 1);
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                arr_22 [i_5 + 4] [i_5] [i_5 + 2] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)21397))));
                arr_23 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (~((-(arr_2 [i_6])))));
                var_23 *= ((/* implicit */_Bool) (-(var_11)));
            }
            arr_24 [i_0] [i_5] [i_5 + 2] = ((/* implicit */short) ((arr_6 [i_0] [i_5 + 1] [i_5 + 4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11606))) : (var_4)));
        }
    }
    var_24 = ((/* implicit */unsigned long long int) var_10);
}
