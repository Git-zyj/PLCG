/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61976
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
    var_14 |= ((/* implicit */short) (~(((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((-1734617375) | (((/* implicit */int) (short)-10344)))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (-5425170723104561233LL)));
                        arr_9 [i_0] &= ((/* implicit */unsigned short) arr_0 [i_2 - 1]);
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_13 [i_1] [i_2] = arr_10 [i_2] [i_1] [i_2] [i_4] [i_4];
                        arr_14 [i_2] [i_4] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) min((arr_6 [i_2 - 1]), (arr_6 [i_2 - 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_2 - 1] [i_2 - 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2 - 1] [i_2 - 1]))) % (arr_6 [i_2 - 1]))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 1] [i_4])) ? (((/* implicit */int) arr_12 [i_4] [i_2] [i_2 - 1])) : (((/* implicit */int) var_0)))), (arr_0 [i_2 - 1]))))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_5 = 3; i_5 < 9; i_5 += 4) /* same iter space */
                    {
                        var_18 ^= ((((/* implicit */_Bool) 5425170723104561232LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25894))) : (13514772753836513411ULL));
                        var_19 += ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -5425170723104561202LL)) ? (((/* implicit */int) (short)-22446)) : (-1653223098))), (((/* implicit */int) arr_3 [i_1] [i_2] [i_5 + 1]))))), (max((((/* implicit */unsigned long long int) max((1105923591U), (((/* implicit */unsigned int) (_Bool)1))))), (((8675973671579199695ULL) >> (((var_11) - (1419442331467335094LL)))))))));
                        arr_18 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)34)))));
                    }
                    for (long long int i_6 = 3; i_6 < 9; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 3; i_7 < 9; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((unsigned char) max((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))) : (arr_20 [i_7] [i_1] [i_2]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))) != (arr_21 [i_0] [i_1] [i_2])))))))));
                            arr_23 [i_6] [i_7] [i_2] [i_2] [i_7] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_6] [i_7])) < (((/* implicit */int) arr_15 [i_7 - 2] [i_2 - 1] [i_2] [i_6 + 1]))))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_21 [i_6] [i_6 - 2] [i_6 - 3])))));
                            arr_24 [i_2] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((arr_0 [i_6 + 1]) != (((/* implicit */int) arr_16 [i_6] [i_2] [i_2] [i_2 - 1]))))), ((-(arr_17 [i_6 - 1] [i_7 - 3] [i_2 - 1] [i_0] [i_0])))));
                            var_21 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_6] [i_2] [i_6])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)13540))))) : ((+(arr_5 [i_0] [i_1] [i_2] [i_8])))));
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((5425170723104561244LL) != (arr_20 [i_0] [i_6 - 1] [i_2 - 1]))))) < (((unsigned long long int) ((int) arr_0 [i_8])))));
                            var_23 *= ((arr_22 [i_0] [i_1] [i_2] [i_6] [i_8]) | (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_20 [i_0] [i_1] [i_1]))))))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_9 = 3; i_9 < 9; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_32 [i_0] [i_2] [i_1] [i_2] [i_9] [i_10] = ((/* implicit */unsigned short) 1257276706);
                            arr_33 [i_0] [i_2] [i_1] [i_1] [i_2] [i_9] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_1] [i_9] [i_10])) ? (((/* implicit */int) ((short) (_Bool)1))) : ((~(((/* implicit */int) (unsigned char)191))))));
                            arr_34 [i_0] [i_2] [i_2] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2 - 1] [i_2])) >= (((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]))));
                        }
                        var_24 = ((/* implicit */unsigned int) arr_2 [i_9 - 3] [i_2 - 1]);
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_2])) | (arr_21 [i_9] [i_2] [i_0])));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) 3189043716U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10264))) : (-7322325417535645649LL))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_11 = 2; i_11 < 11; i_11 += 2) 
    {
        for (unsigned char i_12 = 3; i_12 < 10; i_12 += 2) 
        {
            {
                var_27 ^= arr_37 [i_11] [i_12] [i_12];
                var_28 += ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (-331598152)));
            }
        } 
    } 
    var_29 -= ((((/* implicit */_Bool) ((unsigned char) var_11))) ? ((-((~(9494760868302953135ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (1257276729)))));
}
