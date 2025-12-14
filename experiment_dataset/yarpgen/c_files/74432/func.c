/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74432
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
    var_19 = ((/* implicit */_Bool) 0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_0 [i_0])) : (-2147483647)));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-1)) : ((-2147483647 - 1))))) ? (((unsigned int) arr_1 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
        var_21 = ((/* implicit */unsigned short) ((int) (signed char)-113));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) min((((/* implicit */short) arr_1 [i_1])), (((short) arr_4 [i_1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_0 [(_Bool)1]))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)10)), ((unsigned short)57563)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)15577)) ? (arr_3 [i_1] [i_2]) : (arr_5 [i_3 - 1] [i_1])))) : (min((((/* implicit */long long int) arr_8 [i_1] [i_2] [i_3])), (-2596601669159827220LL)))))) ? (((unsigned long long int) arr_3 [i_2] [i_2])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_3 - 2])) ? (((/* implicit */int) ((_Bool) arr_3 [i_1] [i_2]))) : (((/* implicit */int) ((unsigned short) arr_8 [i_3] [i_2] [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                arr_18 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_3] [i_3 - 1] [i_1]))) ? (((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 1] [i_5])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_3 + 1] [i_3 + 2] [i_4])) : (((/* implicit */int) arr_7 [i_2] [i_3 - 1] [i_1])))) : (((/* implicit */int) ((unsigned short) arr_15 [i_1] [i_2] [i_3 - 1] [i_3 - 2] [i_3 - 1])))));
                                var_24 = ((/* implicit */_Bool) (short)-6);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (short)-761)) : (((((/* implicit */_Bool) arr_14 [i_3] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_10 [i_1] [i_3 - 2] [10LL]))))));
                }
            } 
        } 
        arr_19 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [(signed char)4] [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) 2147483647))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (short)-761))))) : (((unsigned int) 7ULL)))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            {
                arr_26 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [1ULL] [1ULL])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_20 [i_6])), (arr_25 [i_7] [i_6] [i_6])))) ? (7ULL) : (((((/* implicit */_Bool) arr_21 [8ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) : (arr_23 [13ULL])))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    for (long long int i_9 = 2; i_9 < 18; i_9 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_9 - 2] [i_9 - 2] [i_10 + 2] [i_10 + 2] [i_10 - 2])) ? (((((/* implicit */_Bool) arr_35 [i_9 - 1] [i_6] [i_10 + 2] [i_9] [i_10 + 2])) ? (((/* implicit */int) arr_35 [i_9 - 1] [i_9 - 1] [i_10 - 1] [i_9 - 2] [i_10 + 1])) : (((/* implicit */int) arr_35 [i_9 - 2] [7ULL] [i_10 - 3] [i_9 + 1] [i_10])))) : (((/* implicit */int) min((arr_35 [i_9 - 2] [i_7] [i_10 + 1] [i_9] [i_10]), (arr_35 [i_9 - 1] [i_7] [i_10 - 1] [i_9] [i_10 - 2]))))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 17179869168ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)9)), (arr_29 [i_7] [i_7] [i_6] [i_7])))) ? (arr_29 [i_6] [(_Bool)1] [i_6] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_30 [i_6] [i_6] [i_6]))))))) : (min((arr_23 [i_9 - 2]), (((/* implicit */unsigned long long int) arr_30 [i_9 + 1] [i_9 + 1] [i_6]))))));
                            }
                            for (long long int i_11 = 2; i_11 < 15; i_11 += 1) 
                            {
                                arr_38 [i_11] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned short) (short)9);
                                arr_39 [i_6] [i_11 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) 9554921170591237086ULL))) ? (((/* implicit */unsigned long long int) -1843116329)) : (min((((/* implicit */unsigned long long int) 2147483647)), (arr_31 [(_Bool)1] [i_9 + 1] [16] [i_9] [i_6] [i_9 - 2])))));
                            }
                            arr_40 [i_6] [i_9] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)64))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) (short)16))))))) : (arr_21 [i_6])));
            }
        } 
    } 
}
