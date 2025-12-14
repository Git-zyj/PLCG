/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95715
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((-111003904) / (111003896))))));
    var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_8)))) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) var_3)) & (((/* implicit */int) var_10))))))) : (var_6)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 - 1]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_4] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)127))) <= (arr_8 [i_0] [i_3] [i_2]))))))) != (min((min((((/* implicit */unsigned int) arr_1 [i_4])), (arr_3 [i_1] [i_2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == zero) ? (((((((/* implicit */int) ((unsigned short) (_Bool)1))) * (((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_0] [i_4]))))) >> (((arr_13 [i_0] [i_0] [i_2]) - (392278893))))) : (((((((/* implicit */int) ((unsigned short) (_Bool)1))) * (((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_0] [i_4]))))) >> (((((arr_13 [i_0] [i_0] [i_2]) - (392278893))) - (1255738936)))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)115))) & (1152921504606846968LL))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) var_4);
                                arr_21 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) ((unsigned short) arr_9 [i_1] [i_2] [i_2] [i_2 + 2]));
                                var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)18792)) * (((/* implicit */int) arr_7 [i_0] [i_2 + 4] [6ULL]))));
                                arr_22 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) var_8);
                            }
                            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                            {
                                arr_26 [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_9 [i_2] [i_2] [i_2] [i_2])))), (((arr_8 [i_0] [i_1] [i_6]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_17 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) >= (arr_3 [i_6] [i_1])))), (((((/* implicit */int) arr_6 [i_0])) & (((/* implicit */int) arr_12 [i_3 + 1] [i_6 + 1] [i_2] [i_3]))))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_6] [i_6 + 1] [i_6] [i_6] [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0])))));
                            }
                            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                            {
                                var_19 = ((/* implicit */signed char) (((~(min((((/* implicit */int) arr_6 [i_0])), (251991966))))) * (((/* implicit */int) ((unsigned short) var_6)))));
                                arr_29 [i_0] [i_0] [i_0] [i_1] [i_2] [i_7] [i_7] |= ((/* implicit */_Bool) 14LL);
                                var_20 -= ((/* implicit */short) arr_19 [i_0] [i_0] [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned short)65424)) * (((/* implicit */int) arr_28 [i_0] [i_1] [i_2])))))) / (arr_14 [i_7] [i_3] [i_2] [i_1] [i_0] [i_0]))))));
                            }
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned long long int) arr_24 [i_0] [i_3] [i_2] [i_3 + 1] [i_3] [i_3] [i_1])))));
                            var_23 = ((/* implicit */int) var_5);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((unsigned long long int) arr_13 [i_0] [(unsigned char)0] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [6ULL])) ^ (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [10U])), (var_11))))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) (signed char)-32);
}
