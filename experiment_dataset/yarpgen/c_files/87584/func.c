/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87584
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_2] &= ((/* implicit */unsigned char) arr_5 [i_2] [i_1] [i_0]);
                    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_2))), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_1 + 4] [i_2])))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 ^= ((((/* implicit */unsigned long long int) min((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) arr_6 [i_0] [i_1 - 1] [i_2] [i_3]))))) <= (min((var_16), (arr_4 [i_1 + 2]))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned char)68))) ? (((var_2) - (min((((/* implicit */unsigned long long int) arr_1 [i_2])), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)7])))))));
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_22 = ((((/* implicit */_Bool) max((arr_12 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2]), (((/* implicit */unsigned char) ((arr_9 [i_1 + 4] [i_1] [i_2] [i_4] [i_0] [i_4]) < (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2]))))))))) ? (((/* implicit */unsigned long long int) min((arr_8 [i_1 + 2] [i_1] [i_1]), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_5 [i_0] [i_1] [i_0])))))) : ((+(18446744073709551611ULL))));
                        var_23 = ((/* implicit */long long int) ((unsigned long long int) arr_12 [i_1 + 2] [i_1 + 3] [i_1 + 4] [i_1 + 3]));
                        var_24 ^= ((/* implicit */short) var_16);
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(((/* implicit */int) max(((short)-25681), (((/* implicit */short) arr_15 [i_0] [i_1] [11U] [i_1 + 3] [i_1] [i_0]))))))))));
                        var_26 *= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_15 [i_1 + 1] [(short)9] [i_1 + 1] [i_1 + 2] [7ULL] [i_1 - 1])))) * ((~(((/* implicit */int) var_12))))));
                    }
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max(((-(arr_4 [i_1 + 4]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1 + 4] [i_1] [i_1])) - (((/* implicit */int) var_3))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        for (unsigned short i_7 = 4; i_7 < 20; i_7 += 2) 
        {
            {
                var_28 = ((/* implicit */unsigned int) var_9);
                /* LoopNest 3 */
                for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (int i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7 - 1] [2ULL] [i_7 - 3] [i_7 - 4] [i_6 + 1])) ? (((/* implicit */int) ((arr_22 [i_9] [i_9] [i_9 + 1]) < (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_6] [i_6] [(_Bool)1] [i_6] [i_9])))))))) ? (((/* implicit */long long int) (-(arr_19 [i_10] [i_9 + 2] [i_9 + 1])))) : (arr_17 [(unsigned short)7]))))));
                                var_30 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                                var_31 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((max((arr_22 [(unsigned char)7] [(unsigned char)7] [i_8]), (arr_18 [i_6] [19ULL] [i_8]))) < (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6 + 1])))))), (max((((/* implicit */unsigned long long int) arr_21 [i_6 - 1] [i_7] [i_7 - 1] [i_7 - 2])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_10] [i_9]))) : (var_2)))))));
                            }
                        } 
                    } 
                } 
                var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */_Bool) (short)-30143)) ? (((long long int) arr_23 [i_7] [i_7 + 1] [8ULL] [i_7])) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) arr_20 [i_6] [i_7 - 1])) : (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_11] [i_11 - 1] [i_11])) ? (arr_22 [i_6 + 1] [i_7] [i_11 + 1]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_6] [i_6] [i_7] [(_Bool)1])))))));
                    var_34 = ((/* implicit */_Bool) ((arr_18 [i_7 - 2] [i_7 - 2] [i_7]) % (arr_29 [i_11] [i_7] [i_6 + 2] [9LL])));
                    arr_31 [i_11] = ((/* implicit */int) arr_22 [7] [i_6] [i_6]);
                }
                arr_32 [i_7] = arr_24 [i_6] [i_7] [i_7] [i_7];
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 18; i_12 += 3) 
    {
        for (short i_13 = 2; i_13 < 16; i_13 += 1) 
        {
            {
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_34 [i_12])))))));
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (~(((/* implicit */int) arr_24 [i_13 + 1] [i_13 + 2] [i_13 + 2] [i_13])))))));
                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) min((((1048575LL) * (((/* implicit */long long int) ((/* implicit */int) (short)-25693))))), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_37 [i_13] [i_13 + 2])))))))))))));
            }
        } 
    } 
}
