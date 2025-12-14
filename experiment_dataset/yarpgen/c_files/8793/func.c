/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8793
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1067755818U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 311372596U)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((3983594700U), (max((((/* implicit */unsigned int) var_4)), (311372595U)))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_1 [(unsigned short)6]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 2948472357U)) : (arr_0 [16U])))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (-9160443370436782573LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19581))))), (((/* implicit */long long int) max(((short)-20809), (((/* implicit */short) var_10)))))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0])))))));
        var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((var_8) << (((arr_0 [i_0]) - (4654429127016504807ULL))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [16U]))) : ((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_10)), (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) * (311372596U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-888095380) : (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_1 [i_0])) - (-888095366)))))) : (((((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) % (((/* implicit */unsigned long long int) var_1))))));
        arr_2 [(short)20] = ((/* implicit */unsigned short) ((((unsigned long long int) min((2344335888732823932ULL), (((/* implicit */unsigned long long int) 1346494938U))))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned short)14] [i_2] [i_3])) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) 3983594681U)), (2649043502901412605LL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (arr_6 [(short)14] [i_2] [(short)11])))) : (arr_5 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1]) != (((/* implicit */unsigned long long int) max((arr_4 [i_1] [i_2]), (arr_4 [i_1] [i_3]))))))))));
                    var_19 = ((/* implicit */unsigned int) min((-831722603), (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) (short)29971)) : (((/* implicit */int) (short)-20809))))));
                }
            } 
        } 
        var_20 ^= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [17ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (311372600U)))) && (((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) -931140394)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) : (arr_4 [i_1] [i_1]))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) 2857161817U);
            var_22 = min((min((((/* implicit */unsigned long long int) arr_1 [i_1])), ((~(arr_3 [3LL]))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_1 [i_4])))), (((/* implicit */int) var_2))))));
        }
        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_23 += ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_5])) : (2649043502901412605LL)))) ? (min((arr_5 [i_1] [i_5]), (((/* implicit */unsigned long long int) 2948472330U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [(short)2])) ? (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) arr_7 [i_5] [i_1] [i_1] [i_5]))))) : (((((/* implicit */unsigned long long int) 311372595U)) + (arr_5 [i_5] [i_5])))))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) max((arr_8 [4U] [i_5] [i_5] [i_5]), (((/* implicit */int) arr_10 [i_1])))))) ? ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_3)), (arr_10 [(unsigned char)16]))))) : (arr_3 [4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) var_1);
                            var_26 -= ((/* implicit */unsigned int) ((max((arr_5 [i_1] [i_6]), (((/* implicit */unsigned long long int) (short)-23482)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [(_Bool)1])) ? (arr_14 [i_7] [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
                arr_20 [i_6] [5ULL] = ((/* implicit */signed char) var_9);
                var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_1]))) ? (((((/* implicit */_Bool) arr_9 [i_1])) ? (var_1) : (((/* implicit */int) arr_9 [i_5])))) : (((/* implicit */int) max((arr_1 [i_5]), (((/* implicit */unsigned short) var_9)))))));
            }
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_28 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_11)), (arr_3 [i_1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_5] [i_1] [i_9]))) % (max((var_6), (((/* implicit */unsigned int) (short)-20782)))))))));
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_11))));
                var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                var_31 = ((((((/* implicit */_Bool) ((arr_3 [i_9]) >> (((arr_4 [i_1] [i_5]) - (2653145273U)))))) ? (1437805457U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [0ULL])) ? (((/* implicit */int) arr_23 [i_1] [i_5] [i_5] [i_9])) : (((/* implicit */int) var_2))))))) != (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_1] [(short)12] [i_1])) ? (((/* implicit */int) arr_13 [i_1] [(_Bool)1] [4U])) : (((/* implicit */int) var_2)))) + (((/* implicit */int) var_10))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_10])))))));
            var_33 = ((/* implicit */unsigned long long int) var_11);
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_24 [i_10] [i_10] [i_1]) : (((/* implicit */int) var_2))));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2857161826U)) ? (((/* implicit */int) arr_7 [(short)14] [i_1] [i_10] [i_10])) : (((/* implicit */int) var_3))));
        }
    }
    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (short)7359)) ? (((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4383550523785291678ULL)) ? (((/* implicit */int) (short)-20794)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) max((var_7), (((/* implicit */int) var_4)))))))));
}
