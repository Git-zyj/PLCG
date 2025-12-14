/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65588
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
    var_14 -= ((/* implicit */int) var_6);
    var_15 = ((/* implicit */unsigned char) max((((3711476023U) - (3711476030U))), (((583491252U) / (((/* implicit */unsigned int) 1829757676))))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) ((var_5) <= (((/* implicit */int) var_8))))) * (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_6)))))))), (min((((/* implicit */long long int) var_11)), (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (4788512989515663159LL)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3711476044U)))))))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_11)) : (1845056731U)));
                            var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) 583491255U)))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_5) >= (((/* implicit */int) var_4))))) << (((((/* implicit */int) var_2)) - (29)))));
                            arr_14 [4] [i_0] [i_2] [i_3] [(unsigned char)0] = ((var_11) >> (((var_12) + (1019035698))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (18014398505287680LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32758)))));
                var_20 |= ((/* implicit */int) var_2);
            }
            for (signed char i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 583491251U))));
                }
                for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (583491267U)));
                    arr_28 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 1418991503U)))))));
                }
                for (signed char i_8 = 3; i_8 < 9; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))));
                        arr_33 [i_0] [i_1] [i_0] [(signed char)1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                    }
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        var_26 -= ((/* implicit */signed char) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)2] [i_0]);
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -18014398505287666LL)) ? (-18014398505287680LL) : (((/* implicit */long long int) 3711476044U)))))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_10])) | (((/* implicit */int) arr_3 [(_Bool)1])))) : (((/* implicit */int) var_7))));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((((/* implicit */int) (signed char)90)) >= (arr_20 [(signed char)1] [i_8] [7U] [7U] [7U]))) && (((/* implicit */_Bool) var_11)))))));
                    }
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
                    arr_39 [7ULL] [7ULL] [7ULL] [(unsigned char)9] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2449910564U)) ? (((((/* implicit */_Bool) -3139391713274337814LL)) ? (((/* implicit */int) (signed char)78)) : (var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                }
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)22309)))))));
            }
            for (signed char i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
            {
                var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (arr_11 [i_11] [i_11] [i_0] [i_0] [i_0] [i_0])));
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (signed char)-57))));
                    arr_46 [i_0] [4U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_11)) | (arr_1 [i_0])))) && (((/* implicit */_Bool) var_13))));
                    arr_47 [i_0] [i_1] [i_0] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_36 [i_0] [2ULL] [i_11] [i_13] [i_11] [i_1])) | (arr_17 [i_0] [i_0] [i_0])));
                    arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                }
            }
        }
        arr_52 [i_0] = arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
        arr_53 [i_0] = var_1;
    }
    for (int i_14 = 2; i_14 < 10; i_14 += 1) 
    {
        arr_56 [i_14] = ((/* implicit */signed char) min((max((((unsigned int) var_5)), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((583491294U) >= (((/* implicit */unsigned int) ((var_13) >> (((var_0) + (1681028603)))))))))));
        var_33 ^= ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (496))) % (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7))))));
        var_34 = max((min((var_11), (((((/* implicit */_Bool) var_1)) ? (var_13) : (-1829757676))))), (min((max((((/* implicit */int) var_6)), (var_11))), ((+(var_13))))));
        var_35 = (+(min((((((/* implicit */_Bool) 16894369224328750063ULL)) ? (583491266U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned int) (-(var_12)))))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        var_36 = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (((unsigned char) var_9))))) ? (min(((-(var_5))), ((-(((/* implicit */int) (signed char)124)))))) : (max((((((/* implicit */_Bool) -1)) ? (650312325) : (var_0))), ((-(var_11))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_16 = 2; i_16 < 22; i_16 += 4) 
        {
            var_37 ^= ((/* implicit */unsigned short) ((18014398505287702LL) / (((/* implicit */long long int) 992))));
            arr_62 [i_16] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) & ((+(-18014398505287709LL)))));
        }
        for (int i_17 = 3; i_17 < 22; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_38 ^= ((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) max(((unsigned short)0), (var_4)))), ((-(var_5))))));
                        arr_70 [i_19] [i_17] [i_17] [i_15] = ((/* implicit */unsigned char) ((1418991518U) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (min((var_1), (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) var_8)))))))));
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (var_5)))), ((-(3711476042U))))))));
                        arr_71 [i_15] [i_15] [i_15] [i_15] [i_15] [i_17] = ((/* implicit */unsigned char) var_13);
                    }
                } 
            } 
            arr_72 [i_17] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? ((-(1138508741))) : (((/* implicit */int) ((signed char) var_4)))))));
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 23; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 25; i_21 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_22 = 2; i_22 < 21; i_22 += 2) 
                        {
                            var_40 |= ((/* implicit */int) ((arr_74 [i_22] [i_17 + 3]) > (((/* implicit */long long int) var_10))));
                            arr_81 [i_22 + 2] [(short)16] [i_17] [i_15] [i_15] = ((/* implicit */_Bool) (~(18014398505287663LL)));
                            var_41 -= ((/* implicit */unsigned int) ((var_0) ^ (((/* implicit */int) var_2))));
                        }
                        arr_82 [i_17] [i_21] [i_17] [i_17] [i_17] [i_17] = (-(31));
                    }
                } 
            } 
        }
        for (unsigned char i_23 = 2; i_23 < 23; i_23 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_24 = 0; i_24 < 25; i_24 += 2) 
            {
                for (int i_25 = 0; i_25 < 25; i_25 += 3) 
                {
                    {
                        arr_91 [16] [i_23 - 1] [16] [i_23 - 1] [10] = ((/* implicit */unsigned short) min(((+(arr_58 [i_23 - 1] [i_23 + 2]))), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_1) : (-642305232))) <= (min((var_0), (((/* implicit */int) var_9)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_26 = 0; i_26 < 25; i_26 += 4) 
                        {
                            arr_95 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) (-(max((var_5), (var_13)))));
                            arr_96 [i_15] [i_15] [i_15] [i_25] [i_26] = ((/* implicit */unsigned long long int) var_12);
                            arr_97 [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_74 [i_24] [i_23]) >> (((((/* implicit */int) var_3)) + (92)))))) & (((((/* implicit */_Bool) arr_74 [i_23] [i_23])) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147)))))));
                        }
                        var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                    }
                } 
            } 
            arr_98 [i_15] [i_15] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_86 [i_23 - 2] [i_23 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_86 [i_23 + 2] [i_23 - 2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_68 [i_15] [i_23 - 1] [20] [i_15] [i_15])))))));
            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) var_7))));
        }
    }
}
