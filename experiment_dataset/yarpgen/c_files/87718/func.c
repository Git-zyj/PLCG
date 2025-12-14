/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87718
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
    var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8)))))) : (var_1))) == (((/* implicit */long long int) (-(min((520093696U), (((/* implicit */unsigned int) (signed char)127)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) / (arr_4 [i_0] [i_1 - 4] [i_1])))))) ? (arr_4 [i_0] [i_0] [i_1 + 1]) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_3)))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_7);
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */int) (signed char)-97)) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0] [i_1])) + (21743))))) : (15)))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_5))));
                }
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [14ULL])) ^ (((/* implicit */int) arr_6 [i_1] [(_Bool)1]))))) ? (var_3) : (((/* implicit */long long int) ((arr_9 [i_3]) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))))));
                    var_14 = ((/* implicit */signed char) 520093702U);
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2114640617)) / (arr_4 [i_0] [i_3 - 1] [i_1 - 3])))) : (((((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned char)13] [i_3])))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_13 [6] [i_1 - 1] [i_1 - 1] [i_3] = ((/* implicit */unsigned long long int) (~(var_2)));
                        var_16 -= ((max((((((/* implicit */int) arr_6 [i_0] [i_0])) > (((/* implicit */int) arr_9 [i_4])))), (arr_11 [i_1] [i_1] [i_0] [12LL] [i_1] [i_1 + 1]))) ? ((+(65472ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                        arr_14 [i_0] [i_3] [15] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (6142925193814427764LL))), (((/* implicit */long long int) ((((/* implicit */int) max((var_6), (((/* implicit */signed char) arr_3 [i_1]))))) * (((/* implicit */int) arr_9 [i_3])))))));
                        var_17 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3] [i_4])) ? (((/* implicit */int) arr_2 [i_0])) : ((~(((/* implicit */int) var_4)))))) & (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_1 + 2] [i_3] [i_3] = ((((/* implicit */_Bool) 5121945413664982036LL)) || (((/* implicit */_Bool) var_9)));
                        arr_19 [i_3] [i_1 - 2] [i_3 + 1] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_6))));
                        arr_20 [i_0] [i_1] [(short)12] [(short)12] &= ((/* implicit */unsigned int) (!((((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3 - 1])))) && (arr_3 [i_0])))));
                        arr_21 [i_0] [i_0] [i_3] = ((/* implicit */long long int) (short)32767);
                    }
                }
            }
        } 
    } 
}
