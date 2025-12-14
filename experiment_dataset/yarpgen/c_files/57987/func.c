/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57987
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_6 [(unsigned char)16] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) 8499654590219779235LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (8499654590219779254LL))))), (arr_0 [i_0])));
                    var_20 = ((/* implicit */short) (~((-(((((/* implicit */_Bool) 8499654590219779235LL)) ? (-137438953472LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_1])))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_21 = 8499654590219779229LL;
                        arr_13 [i_0] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */unsigned int) var_5);
                        arr_14 [i_0] [i_3] [i_4 + 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5] [16U] [16U])) ? (arr_5 [i_0] [8]) : (((/* implicit */int) arr_3 [(unsigned short)4] [i_4 + 1] [i_0]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (unsigned short)10927)))) : (((int) (-9223372036854775807LL - 1LL)))))) ? (arr_7 [i_5] [i_5]) : (((/* implicit */int) var_16))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) ((unsigned short) arr_12 [i_0] [i_0] [i_0]));
    }
    for (unsigned short i_6 = 2; i_6 < 10; i_6 += 3) 
    {
        arr_17 [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_6)), ((+(arr_11 [i_6] [i_6] [i_6 - 2] [i_6] [12LL])))));
        arr_18 [i_6] [i_6] = 8499654590219779235LL;
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                    {
                        var_23 = var_6;
                        arr_27 [i_9] [i_7] [i_8] = ((/* implicit */long long int) (unsigned short)16);
                    }
                    arr_28 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_26 [i_6 - 1] [8ULL] [i_6 + 3] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_26 [i_6 - 2] [10LL] [i_6] [(unsigned char)4] [4LL]))) : (((((/* implicit */_Bool) var_5)) ? (arr_26 [i_6 + 1] [(signed char)10] [i_6] [i_6] [i_6]) : (arr_26 [i_6 + 3] [(unsigned short)12] [i_6] [i_6] [(unsigned char)6])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_10 = 2; i_10 < 13; i_10 += 3) /* same iter space */
                    {
                        arr_31 [i_6] [i_6] [i_8] [i_10] [i_10] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
                        arr_32 [i_6] [i_7] [(unsigned short)9] [i_6] [13LL] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_30 [i_7 + 1] [i_7] [i_7 + 1] [i_10 - 2] [i_7]))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 13; i_11 += 3) /* same iter space */
                    {
                        arr_36 [i_11 + 1] [i_11] [i_11] [i_6] = var_15;
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_4 [i_6] [i_7] [(unsigned short)2] [(unsigned short)2]))));
                            arr_40 [i_11] = ((/* implicit */signed char) (unsigned char)13);
                            arr_41 [i_7] [i_8] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8499654590219779240LL)) ? (arr_23 [i_11 + 1] [i_7] [i_6 + 4]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((int) arr_39 [8ULL] [i_6] [i_6] [i_6 + 2] [i_11] [i_6 - 2] [i_6])) : (((/* implicit */int) ((unsigned short) ((arr_21 [i_6] [i_6] [0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))));
                            arr_42 [i_11] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) (unsigned short)40483))), (((((/* implicit */_Bool) arr_15 [i_6 + 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) : (arr_15 [i_6 + 1] [i_7])))));
                            var_25 = ((/* implicit */short) min((-8499654590219779218LL), (8499654590219779219LL)));
                        }
                        arr_43 [i_6 - 1] [i_11] [i_6] [i_6] = ((/* implicit */unsigned char) var_0);
                    }
                    for (unsigned char i_13 = 2; i_13 < 13; i_13 += 3) /* same iter space */
                    {
                        arr_46 [i_13] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) -8499654590219779219LL)) * (arr_25 [i_6] [i_6] [(unsigned short)4] [i_13] [i_13 + 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_25 [i_6] [i_6] [i_6] [i_13] [i_13 + 1]))))));
                        arr_47 [i_6] [(unsigned char)12] [i_8] [i_13] = -1282277813403745397LL;
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((((/* implicit */int) max((((-687893712889477425LL) >= (3840894426850449462LL))), (((arr_29 [i_6] [2LL] [i_8] [i_13]) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6] [(unsigned char)16] [(unsigned char)4])))))))), ((-(((/* implicit */int) var_11)))))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            for (long long int i_15 = 1; i_15 < 10; i_15 += 3) 
            {
                for (unsigned char i_16 = 1; i_16 < 11; i_16 += 3) 
                {
                    {
                        arr_56 [i_14] [i_6] [i_6] [i_16] [i_14] = max((((/* implicit */long long int) ((unsigned short) arr_12 [i_16 + 2] [i_14] [i_6 + 3]))), (min((((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_35 [i_15] [i_14] [i_16] [i_14] [i_16]))), (((/* implicit */long long int) min((((/* implicit */short) var_8)), (arr_49 [i_6] [i_14] [i_15])))))));
                        arr_57 [i_14] = ((/* implicit */unsigned char) 687893712889477425LL);
                        arr_58 [i_14] [i_15] [i_14] [i_14] [i_15] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_19)) ? (arr_11 [i_14] [i_6 + 4] [i_6] [i_6] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_17 = 1; i_17 < 18; i_17 += 3) 
    {
        for (long long int i_18 = 2; i_18 < 19; i_18 += 3) 
        {
            {
                var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) -8499654590219779229LL)) || (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_17] [17LL] [i_17])) ? (134217696U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (min((((/* implicit */long long int) var_8)), (-8499654590219779219LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_17] [i_18] [i_18]))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)255)) : (arr_62 [i_18] [i_17]))))))));
                var_28 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_61 [i_18] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (7271932821425018243LL))) & (((/* implicit */long long int) ((unsigned int) -3331340737292296559LL)))))));
                var_29 = ((/* implicit */long long int) min((var_29), (((((/* implicit */_Bool) 687893712889477425LL)) ? ((-(1282277813403745383LL))) : (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (3987873831U))))))))));
                /* LoopNest 3 */
                for (unsigned char i_19 = 1; i_19 < 19; i_19 += 3) 
                {
                    for (short i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        for (long long int i_21 = 3; i_21 < 19; i_21 += 3) 
                        {
                            {
                                arr_72 [i_17] [i_17] [i_21] [(unsigned char)12] [i_20] [i_20] = ((/* implicit */unsigned char) -1);
                                arr_73 [i_17] [i_17] [i_19] [i_20] [i_17] = ((/* implicit */unsigned char) 8499654590219779257LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 3) 
    {
        for (unsigned short i_23 = 0; i_23 < 12; i_23 += 3) 
        {
            {
                arr_78 [i_22] = ((/* implicit */unsigned short) var_15);
                arr_79 [i_22] [i_22] [5LL] = ((/* implicit */unsigned char) var_1);
                /* LoopNest 2 */
                for (unsigned short i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        {
                            var_31 += ((/* implicit */long long int) ((signed char) ((unsigned int) 116318642263445891LL)));
                            arr_84 [i_22] [i_25] [i_24] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_59 [i_25])) : (-916616783)))))) + (min((8499654590219779202LL), (-28658703535317210LL)))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */long long int) 2512479605U)) < (7635865768889066621LL)));
                            var_33 -= ((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_17)))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) ((short) (+(max((2356885375071572917LL), (((/* implicit */long long int) (unsigned char)141)))))));
                var_35 = 8499654590219779257LL;
            }
        } 
    } 
}
