/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79801
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (18181014542077311159ULL)))) ? (var_10) : ((-(((((/* implicit */_Bool) var_12)) ? (var_18) : (((/* implicit */long long int) 33554400))))))));
    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)27085))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_2 - 2]);
                                var_22 = ((((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_3])) + (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = ((/* implicit */short) 1853225552);
                    var_23 = ((/* implicit */signed char) arr_10 [i_0] [i_0 - 2] [i_0]);
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])) : (5708796454666980617ULL))) : (((arr_8 [i_2] [i_1] [i_0]) ? (5151985616428330937ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [11ULL] [i_0]))))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    /* LoopSeq 3 */
                    for (int i_5 = 4; i_5 < 11; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned char)6] [i_1]))))));
                        arr_21 [i_0] [i_0] [i_1] [i_0] [i_1] [i_5] = ((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1] [i_0 - 1] [i_2 - 3]);
                        var_25 -= ((/* implicit */int) (short)-27086);
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_18 [i_0 - 2] [i_1 + 2] [i_2] [i_2] [i_1 + 2] [i_5 - 3]), (arr_18 [i_0 + 1] [11] [i_2 - 1] [i_1] [i_1 - 1] [i_5 - 1])))) ? (((/* implicit */int) arr_18 [i_0 + 1] [i_1] [i_1 + 3] [i_5] [i_1 + 2] [i_5 + 4])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_2 + 1] [i_1 - 1] [i_5 + 4])), (var_2)))))))));
                    }
                    for (long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        arr_24 [i_0] [i_1] [14U] [i_6] = ((/* implicit */_Bool) arr_9 [i_0 - 1]);
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
                        {
                            var_27 = arr_10 [i_0 - 2] [i_0] [i_0];
                            arr_27 [i_0] [i_1] [i_6 - 2] [(short)8] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_12 [i_0] [i_1 + 2] [i_1] [12LL] [i_1] [i_0])) & (((/* implicit */int) var_3))))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) min((arr_10 [i_1 + 2] [i_8 + 2] [i_6]), (arr_10 [i_1 + 2] [i_8 - 1] [i_1]))))));
                            var_29 = ((/* implicit */int) arr_11 [i_0] [i_0] [(short)7]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 3; i_9 < 13; i_9 += 1) 
                    {
                        var_30 -= ((/* implicit */long long int) arr_19 [(short)6] [i_1] [(short)6] [(short)6] [i_2 - 3] [i_9]);
                        var_31 = var_12;
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_26 [i_9 - 2] [i_9] [i_2 - 1] [i_1 + 2])) : (((/* implicit */int) arr_26 [i_9 - 2] [i_2] [i_2 - 1] [i_1 - 2]))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0]))));
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_34 [i_0] [i_9] [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) arr_8 [i_0 - 2] [i_0 - 2] [i_10]);
                            var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) ((90828012) ^ (((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_1 + 3] [i_9 - 3] [(unsigned short)4])) : (var_0)));
                        }
                        for (short i_11 = 4; i_11 < 11; i_11 += 2) 
                        {
                            var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1] [i_2] [i_0 - 2])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_1 - 1] [i_1])) : (((arr_1 [i_0]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_9 [i_0]))))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_1 - 2])) < (((/* implicit */int) arr_6 [i_0 - 2] [i_1 - 1]))));
                            var_37 = ((/* implicit */short) var_6);
                            arr_37 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(unsigned char)0] [i_2 - 2] [i_0] [i_9 - 1] [i_11] [(short)0] [i_9 - 1])) ? ((+(arr_20 [i_2 + 1] [(unsigned char)1] [i_0] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 - 2] [i_1 + 1] [i_2 - 3] [i_9 + 1] [i_9 - 2] [i_11 + 4])))));
                        }
                        for (unsigned char i_12 = 2; i_12 < 13; i_12 += 2) 
                        {
                            var_38 = ((/* implicit */signed char) arr_1 [i_1]);
                            arr_42 [i_0 - 1] [i_1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] &= ((/* implicit */int) var_7);
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_39 = ((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_1 - 1]);
                            arr_45 [i_0] [(short)7] [i_9 - 1] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_13 - 1] [i_2 - 1] [i_2] [i_1 + 1]))));
                        }
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3072)) << (((((((/* implicit */int) (short)-27059)) + (27087))) - (19)))));
    }
    for (int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) arr_46 [i_14] [i_14]))));
        var_42 *= var_4;
        /* LoopSeq 3 */
        for (long long int i_15 = 1; i_15 < 14; i_15 += 2) 
        {
            var_43 -= ((/* implicit */_Bool) var_11);
            var_44 = ((/* implicit */unsigned long long int) max((var_44), (arr_46 [i_14] [i_14])));
            var_45 *= ((/* implicit */short) arr_48 [i_15]);
            var_46 = ((/* implicit */signed char) arr_46 [i_14] [i_15]);
        }
        for (unsigned long long int i_16 = 1; i_16 < 12; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 3; i_18 < 13; i_18 += 1) 
                {
                    {
                        var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_16 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-32759))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) -1853225540)) : (7366972673867441854ULL))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) : (arr_50 [i_14] [i_17] [i_14])))))))));
                        var_48 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_18 + 2] [i_18 + 2])) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) arr_50 [i_14] [i_16] [i_14])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)-126))))))) : (arr_50 [i_14] [i_17] [i_14])));
                    }
                } 
            } 
            var_49 *= ((/* implicit */unsigned long long int) arr_57 [i_14] [i_14] [i_14]);
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_50 *= ((/* implicit */unsigned int) (~(arr_51 [i_14])));
            /* LoopNest 2 */
            for (long long int i_20 = 1; i_20 < 15; i_20 += 3) 
            {
                for (unsigned int i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    {
                        var_51 = ((/* implicit */int) arr_65 [i_21] [i_20 + 1] [7ULL]);
                        var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(var_15)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_0)))))) ? (((((/* implicit */_Bool) arr_47 [i_14] [i_19])) ? (((/* implicit */int) arr_57 [i_21] [i_21] [i_19])) : (arr_61 [i_21]))) : (arr_63 [i_14] [i_19] [i_21] [i_14])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_22 = 2; i_22 < 12; i_22 += 2) 
                        {
                            arr_69 [i_14] [i_21] [i_14] [9] [i_21] = ((/* implicit */int) var_2);
                            var_53 = ((/* implicit */short) var_4);
                            var_54 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_14] [i_21])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_48 [i_14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_14]))) : ((~(arr_58 [7LL]))));
                        }
                    }
                } 
            } 
        }
    }
    var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? ((~(((/* implicit */int) min((var_5), (((/* implicit */signed char) var_13))))))) : (((/* implicit */int) var_3))));
}
