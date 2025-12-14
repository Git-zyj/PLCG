/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93844
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
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                var_14 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2]);
                var_15 = ((/* implicit */short) (-(arr_6 [i_2 - 1] [i_0 - 1] [i_0])));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_2])) ? (((/* implicit */long long int) arr_5 [i_0 - 1] [i_0] [i_2])) : (arr_4 [i_0 - 1] [i_2 - 2] [i_2 + 1])));
                arr_8 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0] [i_0 + 1] [i_2 - 2])));
            }
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        arr_18 [i_0 + 1] [i_1] [i_3] [i_4] [i_5] [i_0] = ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_0] [i_4] [i_5 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1]))) : (arr_15 [i_1] [i_5 + 2] [i_5] [i_5 - 1] [i_5] [i_5]));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7155))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) - (2970660060183663493ULL)))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        arr_21 [i_0] [i_1] [i_3] [i_0] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_20 [i_1] [i_6])) : (((/* implicit */int) (_Bool)1))))));
                        var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) * (240518168576LL)))));
                        arr_22 [i_0] [i_1] [i_3] [i_4] [i_6] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_3] [i_4] [i_6])) : (((/* implicit */int) (unsigned char)40)))) >= (((/* implicit */int) arr_17 [i_0 + 2] [i_0] [i_3] [i_4 + 1] [i_6]))));
                        arr_23 [i_0 + 2] [i_0] [i_6] = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (2412424470U));
                    }
                    arr_24 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) 1266252656U)) : (arr_4 [i_0] [i_0 - 1] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65518)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_3] [i_4] [i_7] [i_7])))) ? (((/* implicit */int) (!(arr_26 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4 - 2] [i_7])))) : (((((arr_25 [i_0 + 1] [i_1] [i_3] [i_4] [i_7]) + (2147483647))) >> (((((/* implicit */int) (unsigned char)253)) - (252)))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_4 - 1] [i_4] [i_7] [i_7] [i_7])) ? (arr_15 [i_0 - 1] [i_4 - 1] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                        arr_29 [i_7] [i_0] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 2] [i_4])) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_0] [i_3] [i_4 + 1] [i_7])) : (((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [i_0] [i_7])))));
                    }
                }
                for (unsigned short i_8 = 1; i_8 < 11; i_8 += 3) 
                {
                    arr_34 [i_0] [i_1] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0 + 2])) + (((/* implicit */int) arr_1 [i_0 + 1]))));
                    arr_35 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_3] [i_8] [i_8 + 1]);
                    arr_36 [i_0] [i_1] = ((/* implicit */unsigned char) 18446744073709551614ULL);
                }
                for (long long int i_9 = 2; i_9 < 9; i_9 += 3) 
                {
                    arr_40 [i_0] [i_1] [i_3] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_9 - 1] [i_3] [i_0] [i_9 - 2]))))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_3] [i_0])) : (arr_3 [i_0] [i_1] [i_9])));
                    arr_41 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)36));
                }
                arr_42 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12222539959536656032ULL)) ? (arr_30 [i_0] [i_0] [i_1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_3])))))));
            }
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1]))));
        }
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_33 [i_0 + 2] [i_0 - 1] [i_10] [i_10] [i_11])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_10] [i_11])))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            {
                                arr_56 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_0] [i_11] [i_11] = ((/* implicit */_Bool) ((arr_31 [i_0] [i_0 + 1] [i_10 - 1] [i_12]) + (arr_47 [i_0] [i_10 - 1])));
                                arr_57 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_0] [i_10] = ((/* implicit */unsigned short) arr_30 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 - 1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 10; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_15] [i_14] [i_0] [i_0] [i_10 - 1] [i_0]))));
                                arr_62 [i_0] [i_0] [i_11] [i_14 - 2] [i_15] = arr_14 [i_11] [i_10 - 1];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_0] [i_10] [i_11] [i_16])))))));
                                arr_70 [i_17] [i_16] [i_16] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                                var_24 = ((/* implicit */short) ((((/* implicit */int) arr_49 [i_0 + 1] [i_10] [i_0] [i_11 + 1])) & (((/* implicit */int) arr_49 [i_0 - 1] [i_10] [i_0] [i_11 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
