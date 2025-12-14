/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7043
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)(-127 - 1))))) & ((+(((/* implicit */int) (_Bool)1))))));
                                var_17 += ((/* implicit */long long int) ((unsigned char) (signed char)121));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) 
                    {
                        arr_19 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-7935)) >= (((/* implicit */int) (_Bool)1))));
                        var_18 += ((/* implicit */unsigned long long int) (short)-813);
                        var_19 += ((/* implicit */long long int) var_13);
                        arr_20 [i_1] [10LL] [i_5] [i_6 - 2] [i_6 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1 - 3]))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        arr_25 [i_1] [i_1 + 2] [i_1 + 2] [i_7 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [(unsigned short)8] [i_1 - 4] [(unsigned char)10])) : (((/* implicit */int) arr_4 [1LL] [i_7 + 1] [i_5 + 1]))));
                        var_20 = ((/* implicit */long long int) (~(10712567346472108359ULL)));
                    }
                    arr_26 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) 61440U);
                    arr_27 [7LL] [i_0] [i_1] [i_5 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)56))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_1] [i_1 - 3] [i_1] [(unsigned char)10]))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (long long int i_9 = 2; i_9 < 8; i_9 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_0] [i_5 + 2] [i_5] [i_1] [(_Bool)1] [(_Bool)1] = var_15;
                                var_22 *= ((/* implicit */signed char) ((var_0) ? (((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_8])) : (arr_1 [i_9 + 3])));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 + 2] [i_1 + 3] [i_1] [i_0]))) ^ (var_4))))));
                                arr_37 [(short)1] [i_0] [i_1] [i_1] [(unsigned char)5] [i_9] = arr_6 [i_1] [i_5];
                            }
                        } 
                    } 
                }
                for (long long int i_10 = 1; i_10 < 9; i_10 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 9; i_12 += 2) 
                        {
                            {
                                arr_47 [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) var_13);
                                var_24 = ((/* implicit */unsigned char) arr_23 [i_0] [i_0] [i_10]);
                                arr_48 [(unsigned short)5] [i_1] [i_10] [i_10] [i_11] [i_1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-809)) || (((/* implicit */_Bool) -3542284602941002341LL))));
                                arr_49 [i_10] [i_10] [i_10] [8ULL] [2LL] [i_10] [8ULL] &= ((/* implicit */signed char) arr_34 [(unsigned char)6] [i_12 - 2] [i_12] [i_12] [i_12 - 2]);
                            }
                        } 
                    } 
                    var_25 = (unsigned short)11110;
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
    {
        arr_52 [i_13] = ((/* implicit */unsigned int) (~(arr_51 [i_13] [i_13])));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(24ULL))))));
        /* LoopNest 2 */
        for (signed char i_14 = 3; i_14 < 23; i_14 += 3) 
        {
            for (unsigned short i_15 = 3; i_15 < 22; i_15 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_16 = 1; i_16 < 21; i_16 += 3) 
                    {
                        arr_59 [i_13] [i_13] [i_13] [20LL] [i_13] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_13] [i_14] [13LL] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_14] [i_14] [i_14]))) : (arr_50 [i_15] [i_15])))) <= (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_58 [i_16 - 1] [(signed char)10] [i_15 + 1] [0ULL])))));
                        var_27 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)23362))));
                        arr_60 [i_13] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) arr_62 [i_15 + 1] [i_15 - 3] [i_15] [i_15] [i_15 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 1; i_18 < 21; i_18 += 1) 
                        {
                            arr_66 [i_13] [(short)5] [i_13] [i_13] [(signed char)4] [i_14] [i_18] = ((/* implicit */short) ((((61445U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_15 + 1] [i_15 + 1] [i_15 - 3] [i_14 - 2] [i_14 - 1])))));
                            var_29 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-118)) ? (-3340180373330600630LL) : (var_7)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_71 [i_13] [i_13] [i_13] [i_13] [i_20] = ((/* implicit */unsigned long long int) var_0);
                                var_30 -= ((/* implicit */unsigned long long int) (~(-1003754110)));
                                var_31 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                                var_32 = ((/* implicit */signed char) ((((/* implicit */int) arr_54 [i_19] [i_19] [i_19 + 1])) >> (((((/* implicit */int) arr_54 [i_19 + 1] [i_19 + 1] [i_19 + 1])) - (41115)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_33 = ((/* implicit */long long int) arr_54 [19LL] [i_21] [i_21]);
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (~(((/* implicit */int) var_6)))))));
    }
}
