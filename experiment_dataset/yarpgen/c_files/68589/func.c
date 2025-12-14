/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68589
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (unsigned short)49412);
        var_14 = ((/* implicit */signed char) (-(((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [6LL]))))))));
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)49412))));
                                var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_1] [i_4 + 1] [i_5])) + (((/* implicit */int) arr_9 [i_1 - 2] [i_2 + 2])))) * (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) arr_5 [i_1]);
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */short) arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_1]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            arr_20 [i_1] [i_1] = ((/* implicit */int) arr_7 [i_1]);
            /* LoopSeq 1 */
            for (short i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned int i_9 = 4; i_9 < 10; i_9 += 2) 
                    {
                        {
                            arr_32 [i_1] [i_6] [i_7] [i_1] [i_9 - 3] = ((/* implicit */short) arr_5 [i_1]);
                            var_18 = (unsigned short)49427;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_10 = 2; i_10 < 12; i_10 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) arr_21 [i_1 - 2] [i_6] [i_7] [7U]);
                    arr_36 [i_1] [(unsigned char)8] [i_7] [i_1] = arr_31 [i_1];
                    arr_37 [i_1] [i_6] [(unsigned short)3] [i_1] [i_10 - 2] = (signed char)-113;
                    arr_38 [i_1 - 1] [i_6] [i_1] = ((/* implicit */unsigned short) arr_11 [i_1 - 2] [(signed char)4] [i_6] [11U] [i_7] [i_10]);
                }
                var_20 = (i_1 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_1] [i_1 - 1] [i_1] [i_6] [i_7 - 1])) << (((((/* implicit */int) arr_28 [1U] [8LL] [i_1])) + (105)))))) - (arr_8 [i_6])))) : (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_1] [i_1 - 1] [i_1] [i_6] [i_7 - 1])) << (((((((/* implicit */int) arr_28 [1U] [8LL] [i_1])) + (105))) - (216)))))) - (arr_8 [i_6]))));
                arr_39 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_1 + 1] [i_1] [i_7 - 1] [i_7])) <= (((/* implicit */int) (short)-7))));
                arr_40 [i_1] [i_6] [i_1] [i_7 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_6] [i_6] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_1] [i_6] [i_6] [i_1])) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) arr_25 [(signed char)0] [i_6] [i_7]))))) : (arr_11 [i_1 + 1] [(signed char)1] [i_6] [i_7 + 2] [(signed char)1] [(signed char)1])));
            }
        }
        for (short i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            arr_43 [i_1] = ((/* implicit */unsigned char) arr_27 [i_1 - 2] [i_1 - 2] [1] [i_1] [(_Bool)1] [i_11]);
            /* LoopNest 2 */
            for (short i_12 = 4; i_12 < 10; i_12 += 1) 
            {
                for (short i_13 = 2; i_13 < 10; i_13 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 1; i_14 < 11; i_14 += 1) /* same iter space */
                        {
                            arr_51 [i_1] [i_11] [i_11] [i_12] [i_13] [i_1] [i_14 - 1] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_13 [i_12 - 3] [i_12 - 2] [i_12 - 3] [i_12 + 1] [i_12 + 3] [i_14 - 1])) << (((var_11) - (1727080386U)))))));
                            var_21 = (unsigned short)16103;
                            var_22 = ((/* implicit */_Bool) arr_31 [i_1]);
                        }
                        for (unsigned short i_15 = 1; i_15 < 11; i_15 += 1) /* same iter space */
                        {
                            var_23 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1]))) : (var_10))) - (arr_15 [i_1 - 2] [i_1 - 2] [i_11] [i_13 + 3] [i_15 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1 + 1] [i_11] [(short)2] [i_1])))))) : (((((/* implicit */_Bool) -1839782759)) ? (((arr_29 [6LL] [i_11] [i_12] [i_13] [i_15 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_1] [i_15 - 1])) != (((/* implicit */int) (unsigned short)49412)))))))));
                            var_24 = ((/* implicit */unsigned int) arr_17 [i_11] [(signed char)11]);
                        }
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */int) (short)10)) - (((/* implicit */int) (unsigned short)16109)))) * (((/* implicit */int) var_2))));
                        var_26 = ((/* implicit */unsigned char) arr_46 [i_1] [i_13 + 2] [i_1] [i_1]);
                        arr_55 [i_1 + 2] [i_1 + 2] [i_12 + 1] [i_1] = ((/* implicit */short) arr_41 [i_1]);
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */short) (-(((/* implicit */int) min((arr_22 [i_1 - 1] [i_1 - 2] [i_1 + 1]), ((signed char)-5))))));
    }
    for (short i_16 = 2; i_16 < 11; i_16 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) var_4);
        var_29 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_57 [i_16]))))));
    }
    /* LoopSeq 1 */
    for (short i_17 = 1; i_17 < 10; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_18 = 3; i_18 < 10; i_18 += 2) 
        {
            for (short i_19 = 1; i_19 < 10; i_19 += 3) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) var_8);
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        arr_67 [i_17 + 1] [i_18] [i_17] [i_19] [9U] = ((min((((((/* implicit */int) (unsigned short)65524)) - (((/* implicit */int) arr_28 [i_17] [i_18] [i_17])))), (((/* implicit */int) arr_64 [i_17 - 1] [(short)5] [(short)5])))) - (((((/* implicit */_Bool) arr_62 [i_17] [i_18] [i_19 - 1])) ? ((+(((/* implicit */int) (unsigned short)16123)))) : (((/* implicit */int) arr_66 [i_17] [i_20])))));
                        arr_68 [i_17] [i_18] [i_18 - 2] [i_19] [i_20 + 1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_17] [i_19 - 1] [i_20 + 1]))) : (11U)))) && (((/* implicit */_Bool) arr_22 [i_17 + 1] [i_18 - 2] [i_19 - 1])))))) * (((((/* implicit */_Bool) arr_58 [i_17 - 1])) ? (max((arr_21 [i_17] [i_18 - 3] [i_17] [i_20]), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) (+(arr_45 [(short)12] [i_19]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 3) 
                        {
                            arr_72 [i_17] [i_17] [i_17] [i_20] [i_21] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16085))))) ? (((((arr_53 [i_17] [i_18] [i_18] [7U] [i_17] [i_21]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16123))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_20 + 1] [i_21])) ? (((/* implicit */int) arr_7 [i_17])) : (((/* implicit */int) arr_57 [i_21]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_17] [i_17])) ? (((/* implicit */int) (unsigned short)65535)) : (var_9)))) ? (arr_47 [i_17 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26684)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))))));
                            var_31 = ((/* implicit */_Bool) arr_63 [i_18 + 1] [i_17]);
                        }
                        var_32 = max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)16961))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58990)) ? (var_9) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)5732))) : (-1400887857631284754LL))));
                        arr_73 [i_17] [i_17] [i_20] = ((/* implicit */short) (~(((long long int) max((1400887857631284750LL), (((/* implicit */long long int) var_12)))))));
                    }
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_71 [i_17 - 1] [i_17 - 1] [i_17] [i_19 - 1] [i_19 + 1]))))) ? (((/* implicit */int) var_4)) : (arr_45 [i_18 - 3] [12U])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((arr_27 [(_Bool)1] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17] [i_17]) != (((arr_9 [i_17] [i_17]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-27020))))))), (arr_42 [i_17])));
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((482875829), (((/* implicit */int) arr_62 [i_17] [i_17 - 1] [i_17 + 1]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_58 [i_17 - 1])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_17]))) - (var_8))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_22 = 2; i_22 < 8; i_22 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) 
        {
            for (int i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                {
                    arr_80 [i_22] [i_22] [i_22] [i_24] = ((/* implicit */int) ((((arr_63 [i_22 + 2] [(unsigned char)10]) / (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (signed char)5))))))) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_49 [(_Bool)1] [i_22] [i_22] [i_22 + 2] [i_22 - 2])))))));
                    /* LoopNest 2 */
                    for (short i_25 = 0; i_25 < 10; i_25 += 3) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) arr_12 [i_22] [i_23] [i_25] [8U]);
                                arr_86 [2U] [i_23] [(unsigned char)9] [1U] [(unsigned short)0] = ((/* implicit */unsigned short) ((((((((arr_31 [(_Bool)0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)30384))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_76 [i_23])))) : ((-(((/* implicit */int) arr_66 [i_23] [i_26])))))) + (2147483647))) << (((((/* implicit */int) arr_42 [i_23])) - (16791)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_37 = ((/* implicit */int) arr_75 [i_22]);
        var_38 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_79 [i_22 - 1]))))));
    }
    var_39 = var_2;
    /* LoopNest 2 */
    for (unsigned short i_27 = 0; i_27 < 20; i_27 += 3) 
    {
        for (signed char i_28 = 3; i_28 < 19; i_28 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_29 = 1; i_29 < 17; i_29 += 4) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_40 = (unsigned short)6;
                            var_41 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_89 [i_28] [(unsigned short)8])) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (-1400887857631284763LL))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_31 = 0; i_31 < 20; i_31 += 2) 
                {
                    for (unsigned int i_32 = 1; i_32 < 19; i_32 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */int) arr_98 [i_28 + 1] [i_32 - 1] [i_32 - 1]);
                            var_43 = ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((((/* implicit */int) arr_93 [i_27] [i_28 - 3] [i_31] [i_32 + 1])) << (((/* implicit */int) arr_93 [i_27] [i_28 - 3] [i_31] [i_31]))))));
                            var_44 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_98 [i_27] [i_28] [i_32])))) ? (((/* implicit */int) arr_96 [i_27] [i_28 - 1] [i_31] [(short)9])) : (((/* implicit */int) min((arr_101 [i_28 - 3] [i_32 - 1] [i_32 - 1] [i_32 + 1] [i_32 + 1]), (arr_101 [i_28 + 1] [i_32 - 1] [i_32] [i_32] [i_32]))))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)-30363), (((/* implicit */short) (unsigned char)85))))) ? (((/* implicit */int) ((((/* implicit */int) arr_100 [i_27] [i_27] [i_27] [i_27] [(_Bool)1] [i_28 - 2])) <= ((~(((/* implicit */int) arr_96 [i_27] [i_27] [16] [i_28]))))))) : (((/* implicit */int) ((((/* implicit */int) arr_101 [i_27] [i_27] [i_27] [i_28 - 2] [i_28 + 1])) <= (((/* implicit */int) ((((/* implicit */int) arr_99 [i_27] [(unsigned short)0] [i_28])) <= (((/* implicit */int) arr_101 [i_27] [(unsigned short)0] [i_27] [i_28] [i_28]))))))))));
                arr_103 [i_27] [i_28] [i_28] = ((/* implicit */unsigned short) arr_100 [i_27] [i_27] [i_27] [i_27] [i_27] [i_28]);
            }
        } 
    } 
}
