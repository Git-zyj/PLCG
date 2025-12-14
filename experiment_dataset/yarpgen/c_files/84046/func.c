/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84046
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
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((max((-4561913834698255563LL), (((/* implicit */long long int) (short)-10733)))), (((/* implicit */long long int) var_9))))), (max((max((((/* implicit */unsigned long long int) var_12)), (var_0))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))))))));
        var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_19 = ((/* implicit */signed char) (-(((unsigned int) ((_Bool) var_12)))));
                    arr_11 [10] [i_0] [i_2] [i_1 + 2] [i_0] [i_1 - 2] = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) max((-8461587127943602726LL), (((/* implicit */long long int) (_Bool)0)))))))), (((short) (+(((/* implicit */int) var_12)))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(4092))))));
                }
                for (int i_4 = 2; i_4 < 23; i_4 += 4) 
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max(((~(((unsigned int) arr_10 [i_0] [(unsigned char)10])))), (max(((~(var_4))), (((/* implicit */unsigned int) ((_Bool) arr_2 [8U]))))))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_0))));
                        var_23 = ((/* implicit */short) (+((+(((/* implicit */int) (unsigned char)78))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */int) var_7);
                        arr_18 [i_0] [i_4] [i_2] [i_4] [i_6] |= ((/* implicit */short) arr_10 [i_0] [18]);
                    }
                    var_25 = ((/* implicit */_Bool) ((long long int) arr_16 [i_4] [10U] [i_4 - 2] [i_0] [i_4 - 2]));
                }
                for (int i_7 = 1; i_7 < 23; i_7 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) var_14);
                    var_27 = max((((/* implicit */short) var_1)), (max((((/* implicit */short) var_5)), (var_2))));
                    arr_22 [(unsigned char)17] [(unsigned char)17] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (+((-((+(((/* implicit */int) arr_13 [i_0] [i_0] [i_7]))))))));
                }
                arr_23 [(unsigned char)20] [i_2] &= ((/* implicit */unsigned short) ((unsigned char) var_11));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_8))));
                /* LoopSeq 1 */
                for (long long int i_8 = 3; i_8 < 22; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) (+((+((-(((/* implicit */int) arr_30 [i_1] [i_9] [i_2] [i_1] [i_9]))))))));
                        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_8 + 2]))));
                        var_31 = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) arr_14 [i_0] [i_1 + 2] [i_2] [i_0] [i_1 - 2])))));
                        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1 + 2] [i_8 + 2] [i_1 + 2]))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        arr_33 [i_0] [17] [i_0] [i_8] [i_10] [(unsigned char)20] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)71));
                        arr_34 [i_0] [i_0] [i_0] [11] [(unsigned short)21] [(unsigned short)20] [i_2] = ((/* implicit */unsigned char) (~(arr_32 [i_1] [i_1] [i_1 + 2] [i_1] [(short)21] [i_1] [i_1 + 2])));
                    }
                    for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) arr_13 [i_11] [i_1] [i_1])), (var_6)))));
                        arr_38 [i_0] [i_0] [(unsigned char)17] [i_8 + 2] [i_0] [i_8] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))))), ((~(((/* implicit */int) ((short) var_8)))))));
                        var_34 = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */short) arr_35 [20ULL] [i_2] [i_0])), (max((var_13), (var_14)))))), ((~(min((arr_17 [i_0] [21] [4] [i_0] [21]), (((/* implicit */int) var_12))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        var_35 += ((/* implicit */short) max((((/* implicit */int) (unsigned char)178)), (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) (unsigned char)78)))))));
                        var_36 = ((/* implicit */int) (-((+((~(arr_5 [i_0] [i_1] [i_2])))))));
                    }
                    var_37 = ((/* implicit */int) var_13);
                }
            }
            arr_41 [i_0] [17LL] [i_0] = ((/* implicit */int) min((min(((-(131071U))), (((/* implicit */unsigned int) (_Bool)1)))), (((unsigned int) -3278447223838105728LL))));
            var_38 = ((/* implicit */short) arr_15 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [4]);
            var_39 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 3956101892U)))))), (var_11)));
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            var_40 = ((/* implicit */int) var_4);
            var_41 = ((/* implicit */int) max((var_41), ((-(arr_17 [i_0] [i_13] [i_0] [(signed char)14] [i_13])))));
        }
        for (unsigned char i_14 = 1; i_14 < 23; i_14 += 1) 
        {
            var_42 = ((/* implicit */unsigned char) ((short) max((arr_37 [i_14 + 1] [i_14 + 1]), (arr_37 [i_14 + 1] [i_14 + 1]))));
            var_43 = ((/* implicit */int) arr_10 [i_0] [(unsigned char)4]);
            /* LoopSeq 4 */
            for (long long int i_15 = 1; i_15 < 22; i_15 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                {
                    arr_52 [14U] [i_0] [14U] [i_0] [11U] [i_0] = ((/* implicit */short) (-((-(((/* implicit */int) var_12))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 2; i_17 < 20; i_17 += 3) 
                    {
                        var_44 = ((/* implicit */short) ((unsigned int) arr_51 [i_0] [i_0] [i_15] [i_0]));
                        var_45 = ((/* implicit */unsigned char) (-(arr_39 [i_17 + 2] [i_0])));
                        var_46 = arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                    }
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_47 ^= var_4;
                        arr_58 [(short)22] [i_0] [i_0] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_56 [i_0] [(short)13] [i_0] [i_0] [(unsigned short)14])))));
                    }
                    var_48 = ((/* implicit */short) (+((-(var_6)))));
                    arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_16 [i_14 + 1] [i_14 - 1] [i_15 - 1] [i_0] [i_15 + 2])));
                    arr_60 [i_0] [i_0] [19U] = ((/* implicit */unsigned char) (+(arr_15 [4] [i_15 + 1] [i_0] [20ULL] [i_15 + 1] [i_16])));
                }
                for (unsigned int i_19 = 0; i_19 < 24; i_19 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_20 = 0; i_20 < 24; i_20 += 4) 
                    {
                        arr_68 [i_15] [i_15 - 1] [(_Bool)1] [21LL] [21LL] [i_0] = ((/* implicit */short) arr_12 [(short)0] [i_20] [i_14 + 1] [i_14 + 1] [i_14 + 1]);
                        var_49 = ((/* implicit */short) ((unsigned long long int) arr_5 [i_14 + 1] [i_14] [i_15 + 1]));
                    }
                    for (unsigned int i_21 = 4; i_21 < 22; i_21 += 2) 
                    {
                        arr_73 [i_0] [10] [10] [i_15] [i_0] [(short)22] = ((/* implicit */_Bool) var_14);
                        var_50 = var_9;
                        arr_74 [i_0] = ((/* implicit */int) var_10);
                    }
                    var_51 ^= ((/* implicit */unsigned long long int) (-(max(((+(((/* implicit */int) arr_45 [i_0] [(short)20])))), ((+(((/* implicit */int) (signed char)120))))))));
                    /* LoopSeq 3 */
                    for (signed char i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        var_52 += ((/* implicit */unsigned char) ((unsigned int) (~(max((var_8), (((/* implicit */long long int) (_Bool)1)))))));
                        arr_78 [i_0] [i_14] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (+(((/* implicit */int) var_9))))))));
                        var_53 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (-(var_3)))))));
                        var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_22] [i_19] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (short i_23 = 0; i_23 < 24; i_23 += 2) 
                    {
                        var_55 *= ((/* implicit */signed char) (~((~(min((((/* implicit */unsigned int) (_Bool)1)), (3956101917U)))))));
                        var_56 -= ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned int) 2147483647)), (max((4282860455U), (3956101878U))))));
                        var_57 = ((/* implicit */signed char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_10 [i_15] [23U])))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 3) 
                    {
                        var_58 = ((/* implicit */short) arr_49 [i_0] [i_14 + 1] [i_15 + 1] [i_15 + 2]);
                        var_59 = ((/* implicit */unsigned char) (-(((long long int) var_10))));
                        var_60 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                        var_61 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_13)))));
                    }
                }
                arr_85 [i_0] [i_0] = ((/* implicit */int) arr_71 [i_15] [i_14] [(signed char)4]);
                /* LoopSeq 2 */
                for (signed char i_25 = 2; i_25 < 23; i_25 += 4) 
                {
                    var_62 = ((/* implicit */long long int) max((3011697118U), (3956101884U)));
                    var_63 = ((unsigned char) max((4294967288U), (4294967295U)));
                }
                for (unsigned int i_26 = 1; i_26 < 23; i_26 += 1) 
                {
                    var_64 += ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_80 [i_26] [i_15] [i_14 + 1] [11ULL] [i_0]))))));
                    var_65 = (~(((/* implicit */int) max(((unsigned char)78), (((/* implicit */unsigned char) (_Bool)1))))));
                }
            }
            for (int i_27 = 1; i_27 < 21; i_27 += 2) 
            {
                var_66 = ((/* implicit */_Bool) max((var_66), (((/* implicit */_Bool) arr_36 [i_0]))));
                arr_93 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))));
                arr_94 [i_0] [i_0] [i_14] [i_27] = ((/* implicit */signed char) var_11);
            }
            for (unsigned char i_28 = 0; i_28 < 24; i_28 += 1) 
            {
                arr_97 [i_0] [i_0] [i_28] [i_14] = ((/* implicit */unsigned int) arr_36 [(_Bool)1]);
                var_67 = ((/* implicit */int) max((var_67), ((~(max((arr_54 [(unsigned char)4] [i_14] [i_14] [i_14 - 1] [i_14 - 1] [i_28]), (arr_54 [(unsigned char)22] [i_14] [i_14 + 1] [i_14 + 1] [i_14 - 1] [(short)20])))))));
            }
            for (signed char i_29 = 1; i_29 < 22; i_29 += 3) 
            {
                arr_100 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_14);
                var_68 = ((/* implicit */signed char) (+((~(arr_15 [i_29 - 1] [i_14] [i_0] [i_0] [i_14 + 1] [11U])))));
                /* LoopSeq 1 */
                for (unsigned char i_30 = 2; i_30 < 20; i_30 += 3) 
                {
                    var_69 += ((/* implicit */signed char) (+(4164111792U)));
                    var_70 -= ((/* implicit */unsigned long long int) ((_Bool) (+((+(((/* implicit */int) (short)-21723)))))));
                    arr_103 [i_0] [i_14] [i_0] [i_30 - 2] [i_14] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) (unsigned char)196)));
                }
            }
            /* LoopSeq 2 */
            for (int i_31 = 2; i_31 < 22; i_31 += 4) 
            {
                var_71 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) arr_80 [i_0] [11] [11] [i_0] [i_0])))))))));
                var_72 ^= ((/* implicit */int) ((short) (~((~(((/* implicit */int) arr_6 [i_31])))))));
                /* LoopSeq 2 */
                for (signed char i_32 = 1; i_32 < 23; i_32 += 2) 
                {
                    arr_110 [i_0] [i_0] [i_31] [i_32 + 1] [17U] [i_0] = ((/* implicit */long long int) ((signed char) ((unsigned char) (-(((/* implicit */int) arr_75 [i_0] [i_14] [i_14]))))));
                    var_73 = ((/* implicit */short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [(unsigned char)8] [i_14] [19U]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_104 [i_14 - 1] [i_31] [i_0])))))));
                }
                for (unsigned char i_33 = 3; i_33 < 21; i_33 += 3) 
                {
                    var_74 = ((/* implicit */signed char) max((arr_109 [i_31] [i_0]), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_75 [i_0] [(signed char)0] [i_0])))))))));
                    var_75 = ((/* implicit */unsigned int) arr_95 [i_0] [i_14] [i_0] [4LL]);
                }
            }
            for (unsigned int i_34 = 1; i_34 < 23; i_34 += 2) 
            {
                var_76 = ((/* implicit */unsigned long long int) max((var_76), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), ((+(3956101871U))))))));
                /* LoopSeq 3 */
                for (short i_35 = 0; i_35 < 24; i_35 += 3) 
                {
                    arr_120 [i_0] [i_0] = var_7;
                    var_77 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                    var_78 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_11)))));
                }
                /* vectorizable */
                for (long long int i_36 = 2; i_36 < 22; i_36 += 2) 
                {
                    var_79 = ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_0] [i_34 - 1] [i_34 - 1] [i_0] [i_14 + 1] [i_0] [13U]))));
                    /* LoopSeq 2 */
                    for (int i_37 = 0; i_37 < 24; i_37 += 2) 
                    {
                        var_80 = ((/* implicit */long long int) max((var_80), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                        arr_126 [i_0] [i_14] [i_34 - 1] [(signed char)9] [i_37] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))));
                    }
                    for (_Bool i_38 = 0; i_38 < 0; i_38 += 1) 
                    {
                        arr_130 [i_0] [i_0] [i_34] [i_0] [18ULL] [i_36] = ((/* implicit */long long int) (+(var_11)));
                        var_81 = ((/* implicit */unsigned int) min((var_81), (arr_109 [6U] [i_36])));
                        arr_131 [i_38] [i_36] [i_0] [(short)6] [i_0] = (+(338865403U));
                    }
                }
                for (unsigned char i_39 = 0; i_39 < 24; i_39 += 4) 
                {
                    var_82 = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_40 = 0; i_40 < 24; i_40 += 2) /* same iter space */
                    {
                        var_83 = ((/* implicit */unsigned char) ((int) (+(var_4))));
                        arr_137 [i_0] [(signed char)4] [i_0] [i_0] [(signed char)4] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_0)))));
                    }
                    /* vectorizable */
                    for (signed char i_41 = 0; i_41 < 24; i_41 += 2) /* same iter space */
                    {
                        var_84 = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) var_1)))));
                        var_85 = ((/* implicit */unsigned char) ((_Bool) arr_47 [i_0] [i_34 + 1] [i_41]));
                    }
                    var_86 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32764))))), (var_8)));
                }
                arr_141 [i_0] [i_0] [(unsigned char)14] [i_34] |= ((/* implicit */short) ((signed char) (~((-(arr_44 [20LL] [i_14]))))));
                var_87 = ((/* implicit */unsigned int) ((signed char) (short)-11577));
            }
            /* LoopSeq 1 */
            for (int i_42 = 0; i_42 < 24; i_42 += 3) 
            {
                var_88 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_144 [i_14 + 1])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_43 = 0; i_43 < 24; i_43 += 3) 
                {
                    var_89 -= ((/* implicit */short) arr_43 [i_0] [(short)10]);
                    var_90 = ((/* implicit */unsigned char) (+(3956101878U)));
                    arr_147 [i_0] = ((/* implicit */signed char) arr_72 [i_0] [i_14 + 1] [i_0] [i_43] [i_14] [i_42]);
                }
                for (short i_44 = 0; i_44 < 24; i_44 += 1) 
                {
                    var_91 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_107 [i_14 + 1])))));
                    var_92 = ((/* implicit */long long int) max((var_92), (((/* implicit */long long int) var_2))));
                    /* LoopSeq 4 */
                    for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
                    {
                        arr_153 [i_0] [22LL] [i_42] [i_14] [i_0] = ((/* implicit */long long int) arr_61 [(unsigned char)17] [i_14 + 1] [22ULL] [i_44] [i_45]);
                        var_93 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))))), (min((((/* implicit */long long int) arr_83 [i_0] [i_0] [i_42])), ((+(arr_44 [i_0] [i_44])))))));
                        arr_154 [i_0] [i_0] [i_44] [17ULL] [i_45] [i_0] [i_45] = ((/* implicit */signed char) arr_145 [i_0] [i_44]);
                        var_94 = ((/* implicit */unsigned int) (+((~(arr_46 [i_0] [i_14 + 1] [i_0] [i_14 + 1])))));
                    }
                    for (unsigned long long int i_46 = 0; i_46 < 24; i_46 += 2) 
                    {
                        arr_158 [i_0] = ((/* implicit */long long int) (+(max((var_11), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_49 [i_0] [i_0] [i_44] [i_46])))))))));
                        var_95 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_14 + 1])))))));
                    }
                    for (short i_47 = 1; i_47 < 23; i_47 += 2) /* same iter space */
                    {
                        arr_161 [i_0] [i_0] [i_0] [i_0] [i_44] [i_47] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) max((arr_26 [i_0]), (arr_138 [i_0] [i_0] [11U])))), (max((arr_142 [i_42] [i_0] [i_47]), (((/* implicit */long long int) var_10))))))));
                        var_96 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) ((unsigned char) arr_55 [i_0] [i_44] [i_42] [i_14] [i_0]))))));
                    }
                    /* vectorizable */
                    for (short i_48 = 1; i_48 < 23; i_48 += 2) /* same iter space */
                    {
                        arr_166 [(signed char)16] [i_0] [i_42] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                        var_97 *= ((/* implicit */unsigned char) var_11);
                    }
                }
            }
        }
    }
    for (unsigned char i_49 = 3; i_49 < 22; i_49 += 2) 
    {
        var_98 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) arr_132 [i_49] [i_49] [i_49] [i_49] [i_49]))), ((+(var_0))))))));
        var_99 = ((/* implicit */short) (+((-(((/* implicit */int) arr_82 [14LL]))))));
        var_100 *= ((/* implicit */signed char) ((unsigned char) (~(3ULL))));
    }
}
