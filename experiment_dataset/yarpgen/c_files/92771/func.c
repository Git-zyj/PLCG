/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92771
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
    var_10 = min((((/* implicit */unsigned long long int) var_7)), (var_9));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [(unsigned char)4] [(unsigned char)4] |= ((((/* implicit */_Bool) arr_2 [i_1])) ? (((unsigned long long int) 949674398U)) : (((/* implicit */unsigned long long int) arr_2 [i_1])));
                /* LoopSeq 4 */
                for (short i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    arr_9 [i_0] [(signed char)9] [i_0] [(unsigned char)3] = ((/* implicit */signed char) arr_0 [i_1]);
                    var_11 = ((/* implicit */unsigned short) arr_5 [i_2 + 2]);
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_12 &= ((/* implicit */short) ((var_2) <= (((/* implicit */int) arr_10 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 2]))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_11 [i_1 - 2] [i_1 - 2])) & (3345292886U)));
                                arr_17 [i_0] [9ULL] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (+(((unsigned int) -1966324210))));
                                arr_18 [(short)10] [(unsigned char)0] [i_1] [i_3] [5ULL] [i_3] = ((/* implicit */unsigned char) ((long long int) 4278239748U));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_14 &= ((/* implicit */unsigned long long int) ((signed char) arr_15 [(_Bool)1] [i_1] [i_1 + 2] [4ULL] [i_6] [i_0] [i_6]));
                    var_15 = 3345292872U;
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [(signed char)3] [i_0] [10ULL] [i_6])) ? (4757257130530235345LL) : (((/* implicit */long long int) arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 1] [2ULL] [i_1 + 2]))));
                    var_17 &= ((((/* implicit */_Bool) ((arr_2 [i_0]) & (((/* implicit */long long int) arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (short)7493)) : (((/* implicit */int) (unsigned short)1844))))) : (arr_3 [i_1 - 1]));
                    arr_21 [7] [1ULL] = ((/* implicit */unsigned char) var_2);
                }
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned char)15))));
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63719)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)11717))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_24 [(_Bool)1] [4U] = ((/* implicit */unsigned char) (~((~(arr_16 [i_0] [i_0] [i_1 + 2] [i_7] [i_7])))));
                }
            }
        } 
    } 
}
