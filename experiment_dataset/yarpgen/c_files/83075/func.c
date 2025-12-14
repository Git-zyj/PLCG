/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83075
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
    var_10 = ((/* implicit */signed char) var_6);
    var_11 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (var_4))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)59))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) : (min((((/* implicit */int) ((short) (short)16345))), (((((/* implicit */int) (short)16314)) + (((/* implicit */int) var_3))))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_5))) & ((~(((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) ? ((((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */short) arr_2 [i_2 - 2] [i_2 - 2])))))) % (((((((arr_5 [i_0] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)68)) - (68))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                            var_13 = ((/* implicit */short) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) (_Bool)1))));
                            arr_15 [i_3] = ((/* implicit */unsigned char) arr_10 [i_2] [i_2] [i_2 - 3] [i_3]);
                        }
                        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */short) (!(arr_3 [i_2 + 1] [i_0])));
                            var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_2))))))), (max((((/* implicit */unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) (short)-1))))), (arr_12 [i_5] [(short)8] [i_3] [i_1] [i_2 + 1] [i_1] [i_0])))));
                            var_15 = ((/* implicit */signed char) var_6);
                            arr_20 [i_0] [i_0] [(short)14] [i_0] [i_2] [i_3] [i_5] &= ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */short) ((_Bool) var_3))), (arr_8 [i_0] [i_1] [(short)20] [(_Bool)0]))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_3))));
                        }
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16315)) ? (-4451257354704341116LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-273)))));
                            arr_25 [i_1] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */short) ((signed char) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)20071)) - (20062))))) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2 + 1])))));
                            arr_26 [i_0] [i_1] [i_2] [i_3] [(unsigned char)9] = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_1])) | (((/* implicit */int) arr_2 [i_6] [i_0]))));
                            var_18 = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */int) arr_16 [i_6] [i_0] [i_0] [i_3])), (((((/* implicit */_Bool) (short)25915)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)0)))))));
                        }
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_3))));
    }
    for (unsigned char i_7 = 1; i_7 < 8; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            for (short i_9 = 4; i_9 < 11; i_9 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_24 [i_9 - 1])))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_21 -= ((/* implicit */signed char) (_Bool)1);
                        var_22 += ((/* implicit */_Bool) arr_18 [i_7 + 3] [i_7] [i_9] [i_9] [(signed char)6]);
                        arr_36 [i_8 + 2] = ((/* implicit */short) min((arr_27 [i_9] [i_10]), (((/* implicit */long long int) ((unsigned char) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_11 = 1; i_11 < 9; i_11 += 1) 
        {
            arr_39 [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (short)16322)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775796LL))) + (26LL)))))), (((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7] [(_Bool)1] [i_7 + 3])) ? (arr_22 [i_11] [i_11] [i_7] [(unsigned char)22] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
            arr_40 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (short)21240)))))) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                for (signed char i_13 = 1; i_13 < 11; i_13 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((arr_22 [(short)4] [i_11] [i_7 - 1] [i_12] [(short)4]) ^ (arr_22 [i_14] [i_12] [i_7 + 2] [i_12] [i_14])));
                            var_24 = ((/* implicit */short) arr_44 [i_7 + 3] [i_11 + 2] [i_12] [i_13]);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((((/* implicit */int) arr_46 [i_14] [i_13] [i_13 - 1] [i_12] [i_11 + 1] [i_7])) - (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
                        {
                            arr_51 [(short)0] [i_13] [i_7] [i_7] [i_7] = var_6;
                            arr_52 [(_Bool)1] [i_12] [i_11 + 1] [i_13 - 1] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16345)) ? (((/* implicit */int) arr_46 [i_7 + 3] [i_7 + 3] [i_13 - 1] [i_15] [i_15] [(signed char)9])) : (((/* implicit */int) arr_2 [i_7] [i_7 + 3]))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) /* same iter space */
                        {
                            var_26 = var_3;
                            var_27 = (short)-21241;
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
                        {
                            var_28 = ((/* implicit */long long int) var_3);
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7099207172575071791LL))))) : (((/* implicit */int) (!(arr_47 [i_12] [i_13] [i_12] [i_13 + 1] [(_Bool)1])))))))));
                            var_30 = ((short) arr_55 [i_7] [i_13 - 1] [i_11 + 2] [i_11 + 3] [i_11 + 2]);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_18 = 2; i_18 < 11; i_18 += 4) 
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) (unsigned char)35))));
                            arr_63 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7 + 3] = ((/* implicit */unsigned char) arr_61 [i_7] [i_11 + 3] [i_11 + 3] [i_11 + 3] [i_13] [i_18 - 1] [i_18]);
                            var_32 &= ((/* implicit */signed char) var_8);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_11 - 1] [i_12] [i_18 + 1])) / (((/* implicit */int) var_6))));
                            var_34 = ((/* implicit */short) min((var_34), (var_5)));
                        }
                        arr_64 [i_11] [(short)10] = var_6;
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_11] [i_11] [i_11] [i_11 + 3])) / (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((short) (short)-16315))) : ((-(((/* implicit */int) arr_50 [i_7 + 2] [i_12] [i_7 + 2] [i_11] [i_11 + 3]))))));
                    }
                } 
            } 
        }
        for (short i_19 = 0; i_19 < 12; i_19 += 2) 
        {
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (arr_50 [i_19] [i_7] [i_19] [(unsigned char)5] [i_7 + 2]))))));
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 12; i_20 += 2) 
            {
                for (short i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    {
                        var_37 &= ((_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (_Bool)0))));
                        arr_74 [i_21] [i_19] [i_21] [i_21] = ((/* implicit */short) (unsigned char)255);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_22 = 1; i_22 < 11; i_22 += 4) 
                        {
                            arr_77 [i_7 - 1] [i_7 - 1] [i_21] = ((/* implicit */short) ((_Bool) ((arr_67 [i_20] [i_20]) ? (((/* implicit */int) arr_53 [i_22] [i_21] [i_20] [i_19] [i_7])) : (((/* implicit */int) arr_49 [i_7] [i_7] [i_7 + 3] [i_7] [i_7] [i_7 + 3])))));
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((arr_42 [i_7] [i_21] [i_22]) / (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))));
                            var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_21]))));
                            arr_78 [i_21] [i_19] [i_21] [i_19] [i_22 + 1] [i_22 + 1] [i_21] = ((var_2) - (var_8));
                            arr_79 [i_21] [i_21] = ((/* implicit */_Bool) var_9);
                        }
                        var_40 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_53 [i_7] [i_7 - 1] [i_7 + 4] [i_7] [i_7])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_23 = 4; i_23 < 11; i_23 += 3) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_41 += ((/* implicit */signed char) ((short) arr_87 [i_7 + 1] [i_19] [i_23] [i_19]));
                        var_42 = ((/* implicit */long long int) var_1);
                    }
                } 
            } 
        }
        var_43 = ((/* implicit */_Bool) var_9);
    }
    /* vectorizable */
    for (unsigned char i_25 = 1; i_25 < 8; i_25 += 1) /* same iter space */
    {
        arr_90 [i_25 + 4] = ((/* implicit */unsigned char) arr_1 [i_25 + 3] [i_25]);
        var_44 = ((/* implicit */_Bool) var_3);
        var_45 = ((/* implicit */long long int) ((short) (short)-8));
    }
}
