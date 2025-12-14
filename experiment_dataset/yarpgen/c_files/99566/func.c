/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99566
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
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */unsigned short) var_6);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_2]))) ? (((/* implicit */int) arr_4 [i_2 + 3] [i_0 - 4])) : (((/* implicit */int) ((signed char) arr_3 [i_0])))));
                arr_10 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(var_3))))));
            }
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (unsigned char i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_1))))) : (((/* implicit */int) var_7))));
                            arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */long long int) arr_18 [i_0 - 1])) : (arr_6 [i_0 - 2]));
                            var_13 = arr_15 [i_0];
                            var_14 = ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
                var_15 = ((((/* implicit */long long int) arr_18 [i_3])) > (9223372036854775807LL));
            }
            for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_17 = ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_7])) * (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)72)), ((unsigned short)0)))))) * (((/* implicit */int) ((unsigned short) (signed char)-81)))));
                    var_18 = ((arr_25 [i_0] [i_0] [i_0 - 1] [i_0]) - (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) - (arr_1 [i_7]))), (((/* implicit */unsigned int) arr_23 [i_0] [i_0 + 1] [i_0 - 1]))))));
                }
                for (signed char i_9 = 4; i_9 < 21; i_9 += 4) 
                {
                    arr_30 [i_0] [i_3] [i_0] [i_9] = (signed char)-100;
                    /* LoopSeq 3 */
                    for (long long int i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        arr_33 [i_0] [i_0] [i_10] [i_9 + 1] [i_10] = ((/* implicit */_Bool) arr_23 [i_0 - 1] [(_Bool)1] [i_0]);
                        var_19 = ((/* implicit */long long int) (_Bool)1);
                        arr_34 [i_10] = ((/* implicit */long long int) max((17710528064740163645ULL), (((((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0 - 1] [i_0] [i_0]))) : (7805612247920650938ULL))) | (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0] [i_0])) + (2147483647))) >> (((arr_22 [i_0] [i_0] [i_0] [i_0]) - (4392146614306623146LL))))))))));
                    }
                    for (short i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        arr_38 [i_0] = ((/* implicit */unsigned int) var_1);
                        var_20 = ((/* implicit */unsigned short) arr_8 [i_3] [i_3]);
                        arr_39 [i_3] [i_9] [i_7] [i_3] = ((/* implicit */unsigned int) arr_15 [i_3]);
                        var_21 = ((/* implicit */signed char) arr_20 [i_9 - 1] [2U] [i_9] [i_9] [i_11 + 1] [2U]);
                        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-9))));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (arr_12 [i_0 - 3] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 1]))));
                        var_24 = ((/* implicit */signed char) ((_Bool) -8025238098058604593LL));
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]))));
                        var_26 = var_6;
                    }
                }
                for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    arr_46 [i_0 - 3] [i_3] [i_3] [i_3] [11LL] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_9 [i_7] [i_0] [i_0 - 4]), (arr_9 [i_13] [i_13] [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_14] [i_0 + 1] [i_0 - 4]), (arr_9 [i_14] [i_0 - 4] [i_0 - 2])))) && (((/* implicit */_Bool) arr_19 [i_0 - 2] [i_3] [i_7] [i_13] [i_0 - 2]))));
                        var_28 = var_3;
                    }
                    var_29 = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0]);
                }
                var_30 = ((/* implicit */signed char) (~(arr_43 [i_7] [i_7] [i_0] [i_3] [i_0] [i_0])));
                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0]))));
                arr_51 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)119)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7702))) != (arr_32 [i_0] [i_3] [i_0 + 1] [i_0] [i_0]))))));
            }
            var_32 = ((/* implicit */unsigned int) (short)3781);
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 1; i_16 < 20; i_16 += 4) 
            {
                for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [(_Bool)1] [(_Bool)1] [i_17] [(_Bool)1])) || ((!(((/* implicit */_Bool) arr_52 [i_15]))))));
                            arr_63 [i_15] [i_17] [i_16 - 1] [i_15] [i_18] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned long long int) arr_58 [i_0] [i_0] [i_0] [i_0 - 4] [i_17] [13ULL])) : (arr_43 [i_0 - 1] [i_0] [4U] [i_16] [i_0 - 1] [i_17])));
                            var_34 = arr_8 [i_16 - 1] [i_0 + 1];
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned short) (+(arr_25 [i_0] [i_0 - 2] [i_0 - 2] [i_16 - 1])));
                            arr_66 [i_0] [i_0] [i_15] [i_0] [i_17] [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) arr_61 [i_0 - 4] [0U] [0U]))));
                            var_36 = ((/* implicit */long long int) arr_18 [i_15]);
                        }
                        for (unsigned long long int i_20 = 4; i_20 < 21; i_20 += 3) 
                        {
                            arr_70 [i_0] [i_15] [i_15] [i_17] = ((/* implicit */signed char) arr_19 [i_0] [i_0] [i_0 + 1] [(unsigned char)8] [i_0]);
                            arr_71 [i_15] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0])) ? (arr_24 [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 + 1] [i_0 + 1] [i_20 - 3] [i_17])))));
                            var_37 = ((/* implicit */unsigned short) ((arr_7 [i_0 - 3] [i_16 - 1] [i_15]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_20] [i_15] [i_17] [i_15] [i_0 - 2])))));
                        }
                        var_38 = ((/* implicit */signed char) arr_48 [i_0] [i_0] [i_15] [(signed char)4] [i_17]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_21 = 0; i_21 < 22; i_21 += 4) 
            {
                var_39 = ((/* implicit */unsigned short) var_7);
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 2) 
                    {
                        {
                            arr_80 [i_21] [i_21] [i_21] [i_15] [i_21] [i_21] [i_21] = ((arr_24 [i_15] [i_0 - 2] [i_15] [i_22]) / (arr_24 [i_0] [i_0 - 2] [i_21] [i_22]));
                            var_40 = ((/* implicit */unsigned short) ((signed char) arr_25 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 4]));
                            var_41 = ((/* implicit */_Bool) ((unsigned int) arr_13 [i_0]));
                        }
                    } 
                } 
                var_42 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_0 - 4] [i_0] [i_0] [i_0 - 4] [i_0] [15LL])) + (((/* implicit */int) arr_68 [i_0] [i_0] [(signed char)17] [i_15] [i_0] [i_21] [i_15]))))));
                arr_81 [(unsigned short)4] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((unsigned int) 0U));
            }
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 3])) ? (arr_77 [i_0 - 3] [i_0] [i_0 - 4] [i_0 - 2] [i_0 - 4]) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
        }
        for (long long int i_24 = 0; i_24 < 22; i_24 += 4) 
        {
            arr_86 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_28 [i_0 - 2] [i_24] [i_0 - 1] [i_24])), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_24] [i_0 - 3] [i_0 - 3]))) : (min((-1004199769228339140LL), (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0 + 1] [(unsigned short)6]))))));
            arr_87 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)0)), (var_0)));
            arr_88 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((+(arr_77 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0])))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
        {
            var_44 = ((/* implicit */_Bool) (+(var_6)));
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 4) 
            {
                for (long long int i_27 = 2; i_27 < 20; i_27 += 3) 
                {
                    {
                        arr_95 [i_0] [i_27] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_74 [i_0 - 2] [i_0 - 2] [i_0 - 1])) * (((/* implicit */int) arr_74 [i_0 - 4] [i_25] [i_26]))));
                        var_45 = ((/* implicit */long long int) ((_Bool) arr_1 [i_25]));
                    }
                } 
            } 
        }
        arr_96 [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(2442793915U)))) ? (((/* implicit */int) arr_52 [(signed char)16])) : (((((/* implicit */_Bool) arr_52 [(_Bool)1])) ? (((/* implicit */int) arr_52 [(_Bool)1])) : (((/* implicit */int) arr_52 [(_Bool)1]))))));
        var_46 = ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [(_Bool)1] [i_0])) ? (3611358537U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [(signed char)16])) ? (((/* implicit */int) arr_55 [10LL])) : (((/* implicit */int) arr_55 [(short)6]))))));
    }
    var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
}
