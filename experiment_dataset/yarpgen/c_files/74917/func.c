/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74917
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [0LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_20 = ((/* implicit */long long int) ((short) arr_1 [i_0 - 1]));
        var_21 = ((/* implicit */unsigned int) ((3370895716184667669ULL) % (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 - 1] [i_1] = ((/* implicit */unsigned short) arr_7 [19LL] [i_1]);
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((long long int) 812902208U)), (arr_1 [i_1 - 1])))) ? (((long long int) arr_9 [i_1 - 1])) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_2 - 2] [i_1]))))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1]))) % (3482065087U)))) + (((((((/* implicit */_Bool) arr_7 [i_1] [i_2])) || (((/* implicit */_Bool) arr_4 [i_1] [22LL])))) ? (arr_4 [i_1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_2]) != (((/* implicit */long long int) ((/* implicit */int) var_17))))))))))))));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) 3601649254414997205LL);
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 23; i_3 += 1) /* same iter space */
        {
            arr_16 [i_1] [i_1] [1ULL] = ((/* implicit */_Bool) (((~(3601649254414997205LL))) ^ (-3601649254414997205LL)));
            var_24 = ((/* implicit */unsigned char) arr_15 [i_3]);
        }
        for (long long int i_4 = 2; i_4 < 23; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    arr_25 [i_1] [i_4 + 1] [i_5] [i_1] = var_10;
                    arr_26 [i_1] [i_4] [i_5] [i_5] [13LL] = ((/* implicit */unsigned char) (+(var_13)));
                    var_25 = ((/* implicit */short) max((((unsigned short) ((_Bool) 134213632U))), (((/* implicit */unsigned short) max((arr_24 [i_1] [i_1 - 1] [i_4 - 1] [i_6]), (arr_24 [i_1] [i_1 - 1] [i_4 - 1] [i_6]))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 1]))))) << (((max((((((/* implicit */_Bool) arr_24 [i_1] [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6872750873633949127ULL))), (((/* implicit */unsigned long long int) (short)-26421)))) - (18446744073709525190ULL)))));
                }
                for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    arr_29 [(short)19] [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((arr_12 [i_4 - 2] [i_7] [i_7 + 3]) & (((/* implicit */long long int) arr_23 [i_1] [i_1 - 1] [(_Bool)1])))), (((/* implicit */long long int) ((((/* implicit */int) (short)26441)) <= (((/* implicit */int) (_Bool)1)))))));
                    arr_30 [i_1] [i_1] [i_7] = ((/* implicit */_Bool) max((((arr_4 [i_1 - 1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (var_1)));
                    var_27 = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (max((arr_27 [i_1 - 1] [i_1] [i_4 + 1] [i_7 - 1]), (((/* implicit */long long int) (short)12))))));
                }
                var_28 = ((/* implicit */_Bool) (+(9223372036854775807LL)));
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) max((((0LL) - (((/* implicit */long long int) var_5)))), (max((7595294141417214378LL), (arr_15 [i_1 - 1])))));
                    arr_33 [i_1] [i_4] [i_5] [(_Bool)1] [i_1] [i_5] = ((/* implicit */_Bool) -3601649254414997205LL);
                    arr_34 [i_1] [i_4] [i_5] [i_8] = ((/* implicit */short) min(((+(max((9223372036854775800LL), (((/* implicit */long long int) arr_21 [i_1])))))), (((/* implicit */long long int) var_17))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_37 [i_1] = ((/* implicit */unsigned short) (_Bool)0);
                    var_30 = ((/* implicit */unsigned char) min((max((arr_12 [i_1] [i_1] [i_4 - 2]), (arr_12 [i_4 + 1] [(signed char)17] [i_4 - 2]))), (((/* implicit */long long int) ((unsigned int) arr_28 [i_4 - 2] [i_1] [i_4 + 1])))));
                }
            }
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                arr_41 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_31 [i_1 - 1] [i_4 - 1] [i_10 + 1])) ? (((/* implicit */int) arr_31 [i_1 - 1] [i_4 - 1] [i_10 + 1])) : (((/* implicit */int) arr_31 [i_1 - 1] [i_4 - 1] [i_10 + 1])))) >= (((/* implicit */int) ((short) arr_31 [i_1 - 1] [i_4 - 1] [i_10 + 1])))));
                arr_42 [i_1] [i_1] [4LL] [i_10 + 1] &= ((/* implicit */unsigned int) arr_24 [i_1] [i_1] [i_1] [i_1]);
            }
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) arr_13 [i_1 - 1])) / (arr_5 [(_Bool)1]))), (max((arr_5 [16LL]), (((/* implicit */long long int) arr_14 [16LL] [(unsigned short)12]))))))) + ((~(18446744073709551613ULL))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                var_32 = ((((/* implicit */_Bool) 4294967295U)) ? (arr_39 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))));
                /* LoopSeq 4 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
                        var_34 = ((/* implicit */signed char) ((((long long int) arr_10 [i_11] [i_12] [i_13])) == (((/* implicit */long long int) ((/* implicit */int) (short)-20069)))));
                    }
                    var_35 = ((/* implicit */long long int) ((812902213U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_50 [i_1] [i_1] = ((/* implicit */unsigned int) arr_17 [i_1 - 1]);
                    var_36 = ((/* implicit */long long int) (unsigned char)209);
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_12)))) << (((((/* implicit */int) (short)-29576)) + (29592)))));
                        var_38 = ((/* implicit */unsigned int) (unsigned short)63725);
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_32 [6U] [i_1 - 1] [i_14 - 1] [i_14 - 1]) : (arr_32 [i_1] [i_1 - 1] [i_4] [i_14 - 1])));
                        arr_55 [i_1] [i_1] [(short)23] [i_11] [i_11] [i_12] [i_14] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_53 [i_1] [i_1] [i_1] [i_1 - 1] [i_14]))));
                        arr_56 [i_1] = ((/* implicit */unsigned short) ((arr_15 [i_4 - 1]) - (((/* implicit */long long int) arr_32 [5U] [i_4 - 2] [i_14] [(short)18]))));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_60 [i_1 - 1] [i_1] = ((/* implicit */long long int) ((_Bool) arr_58 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [10U] [i_1 - 1]));
                        var_40 -= ((/* implicit */long long int) (signed char)29);
                    }
                }
                for (short i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
                    {
                        arr_65 [(unsigned short)18] [i_4] [(unsigned short)18] [i_1] [i_17] = ((/* implicit */short) 3601649254414997205LL);
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((unsigned long long int) var_9)))));
                        arr_66 [(short)9] [i_4] [i_1] [i_16] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775803LL))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
                    {
                        arr_71 [i_1] [11U] [11U] [i_16] = ((/* implicit */_Bool) 6264419068027799474LL);
                        arr_72 [i_1] [i_4 - 2] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-(arr_36 [i_4 - 2] [i_4] [i_11] [i_1 - 1])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 2; i_19 < 23; i_19 += 2) 
                    {
                        var_42 = ((/* implicit */_Bool) arr_67 [i_1 - 1] [i_19 + 1]);
                        arr_75 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_19 + 1])) ? (((/* implicit */long long int) arr_14 [i_1] [i_4 + 1])) : (arr_54 [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 2] [i_4])));
                        arr_76 [i_1] = ((/* implicit */_Bool) arr_13 [i_1 - 1]);
                    }
                }
                for (short i_20 = 0; i_20 < 24; i_20 += 2) /* same iter space */
                {
                    arr_79 [i_1] [i_4] [i_1] [i_20] = ((/* implicit */unsigned char) (short)26714);
                    var_43 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)228))));
                }
                for (short i_21 = 0; i_21 < 24; i_21 += 2) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) - ((-9223372036854775807LL - 1LL))));
                    arr_82 [i_1] [i_1] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_1 - 1]))));
                }
                var_45 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_77 [i_1] [i_4 + 1] [i_11] [i_11]))));
            }
            /* vectorizable */
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                arr_85 [i_4] [i_1] = ((/* implicit */short) ((long long int) var_0));
                arr_86 [i_1] [i_4] [i_1] [4LL] = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_38 [i_1 - 1] [i_1] [i_4] [i_22])))));
                arr_87 [(_Bool)1] |= ((/* implicit */short) ((_Bool) arr_32 [i_1] [i_4 - 1] [i_4 - 1] [i_22 - 1]));
            }
            /* vectorizable */
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                arr_90 [i_1 - 1] [i_4 - 2] [i_23] [i_1] = (~(arr_39 [(_Bool)1] [i_4 - 2] [i_4] [i_23 - 1]));
                arr_91 [(short)17] [i_4] [(short)17] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))));
            }
        }
    }
    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
    {
        arr_94 [(unsigned short)22] &= ((/* implicit */unsigned int) ((long long int) max((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))));
        arr_95 [i_24] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_57 [(short)11] [i_24] [i_24 - 1] [i_24] [i_24 - 1]))));
        arr_96 [i_24] [i_24] = ((/* implicit */unsigned int) ((signed char) arr_9 [i_24]));
    }
    var_46 |= ((/* implicit */_Bool) var_10);
    var_47 &= max((var_18), (((/* implicit */long long int) var_12)));
}
