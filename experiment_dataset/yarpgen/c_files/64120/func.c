/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64120
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
    var_15 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))) : (((/* implicit */int) (signed char)-99)))));
        var_17 = ((/* implicit */short) var_11);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (3971724535U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_7 [i_1] = ((/* implicit */long long int) arr_6 [i_1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            var_19 |= ((/* implicit */_Bool) arr_12 [i_3]);
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned char) var_1);
                var_21 = ((((/* implicit */int) arr_10 [i_2] [i_2])) ^ (((/* implicit */int) (_Bool)1)));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */_Bool) arr_18 [i_5]);
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    var_23 = arr_4 [i_2];
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) arr_17 [i_3 - 2] [i_3] [i_3 - 2]);
                        arr_24 [4U] [i_3] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) arr_8 [i_3 - 1] [i_3 + 1]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 *= ((/* implicit */signed char) var_7);
                        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3 - 1] [i_3]))));
                        var_27 = ((/* implicit */short) var_6);
                        var_28 = ((/* implicit */unsigned long long int) ((signed char) arr_4 [i_3 + 1]));
                    }
                    var_29 = arr_3 [(unsigned char)22];
                }
                for (int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) ((unsigned short) arr_21 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]));
                    var_31 = ((/* implicit */signed char) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    var_32 = ((/* implicit */long long int) (unsigned char)120);
                    arr_31 [i_2] [i_9] [i_5] [i_9] [i_2] = ((/* implicit */long long int) (+(arr_23 [i_9] [(signed char)21] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                }
                for (int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                {
                    var_33 *= (+((+(arr_5 [i_3]))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_34 |= ((/* implicit */unsigned char) ((((471730511) != (((/* implicit */int) arr_10 [i_10] [i_10])))) ? (((((/* implicit */_Bool) arr_20 [i_2] [i_3])) ? (var_12) : (540952843U))) : (var_12)));
                        var_35 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (954863088U)));
                        arr_37 [i_3] [i_10] &= var_10;
                        arr_38 [i_2] [i_3 - 2] [(signed char)11] [i_10] [i_5] = ((/* implicit */long long int) arr_36 [i_2] [i_3 + 1] [i_5] [i_10] [i_10]);
                        arr_39 [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_36 [i_11 - 1] [i_11 - 1] [i_11 - 1] [(_Bool)1] [i_11 - 1]))));
                    }
                    var_36 += ((/* implicit */long long int) ((((_Bool) var_4)) ? (((((/* implicit */unsigned long long int) arr_33 [i_10])) & (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2])))));
                    var_37 = ((/* implicit */short) arr_10 [i_2] [(_Bool)1]);
                }
                var_38 |= ((/* implicit */signed char) arr_36 [i_5] [i_5] [i_5] [i_5] [i_5]);
            }
            var_39 &= arr_17 [(unsigned short)14] [i_3 - 2] [(unsigned short)14];
            arr_40 [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
        }
        for (short i_12 = 1; i_12 < 23; i_12 += 4) 
        {
            var_40 = ((/* implicit */unsigned char) arr_25 [i_12 + 1] [i_12 + 1]);
            var_41 = var_0;
            /* LoopSeq 1 */
            for (signed char i_13 = 3; i_13 < 22; i_13 += 4) 
            {
                arr_47 [i_2] &= (+(((/* implicit */int) (_Bool)1)));
                var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) (signed char)9))));
                var_43 &= ((/* implicit */short) ((unsigned int) arr_42 [i_2] [i_2] [i_13]));
                arr_48 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((arr_28 [(short)2] [i_12 - 1] [(short)2] [i_2] [i_12] [(signed char)1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_13] [i_13])))));
                arr_49 [i_2] [i_2] [(signed char)18] |= ((/* implicit */unsigned long long int) ((short) arr_46 [i_12 + 1] [i_12 - 1]));
            }
        }
        for (short i_14 = 4; i_14 < 23; i_14 += 3) 
        {
            var_44 ^= ((/* implicit */unsigned short) ((((_Bool) arr_12 [i_14])) ? (var_11) : (((/* implicit */long long int) ((((arr_23 [i_2] [i_2] [14U] [i_2] [i_2]) + (2147483647))) >> (((arr_44 [i_2]) - (4211801402U))))))));
            /* LoopSeq 2 */
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    arr_58 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_12)) ? (4962509434794494815LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                }
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_46 = arr_52 [i_2] [i_2];
                        var_47 ^= ((/* implicit */int) var_6);
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_2] [i_2] [i_17] [i_18])) ? (arr_28 [i_2] [i_2] [i_15] [i_15] [i_18] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_53 [i_17] [i_14 - 3] [i_14] [i_17]))))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_49 ^= ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) arr_9 [i_14] [i_14 - 3])))));
                        var_50 = ((/* implicit */long long int) var_1);
                        arr_65 [(signed char)14] [i_17 - 1] [i_17] [i_17 - 1] [i_17] [i_2] [i_2] = ((/* implicit */int) arr_20 [i_2] [(short)16]);
                    }
                    var_51 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_17 - 1] [i_14 + 1] [i_17 - 1] [i_17] [i_14 - 3]))));
                }
                /* LoopSeq 1 */
                for (int i_20 = 2; i_20 < 23; i_20 += 4) 
                {
                    arr_68 [i_14] [i_14] [i_15] [i_14] [i_20] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) / (var_0));
                    /* LoopSeq 1 */
                    for (unsigned char i_21 = 4; i_21 < 22; i_21 += 3) 
                    {
                        var_52 = ((((((/* implicit */int) arr_14 [i_2] [i_14 - 3] [i_21 + 1])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)));
                        var_53 = ((/* implicit */signed char) var_14);
                        arr_71 [i_2] [(unsigned short)2] [i_20] [i_21] = ((((/* implicit */_Bool) arr_61 [i_14 - 2] [i_14 - 4] [i_14 + 1] [i_14 - 2] [i_14 + 1] [i_14] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (arr_44 [i_14 - 3]));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        var_54 = ((/* implicit */unsigned short) ((int) arr_19 [i_14 - 4] [i_20 - 1]));
                        arr_74 [(signed char)13] [i_14 - 1] [(short)1] [i_20 + 1] [(unsigned short)0] [i_22] [i_14] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    arr_75 [i_14] [i_14] [(unsigned short)6] [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    var_55 = ((/* implicit */unsigned short) var_11);
                }
            }
            for (unsigned short i_23 = 0; i_23 < 24; i_23 += 4) 
            {
                var_56 = ((/* implicit */unsigned char) (-(var_11)));
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                {
                    for (long long int i_25 = 0; i_25 < 24; i_25 += 3) 
                    {
                        {
                            var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_23] [i_24 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_14 - 4] [i_24 + 1]))) : (var_11)));
                            arr_86 [i_23] [i_14] [i_23] [i_14 - 4] [i_24] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            var_58 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_7))));
        }
        /* LoopSeq 1 */
        for (int i_26 = 0; i_26 < 24; i_26 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_27 = 1; i_27 < 21; i_27 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_28 = 0; i_28 < 24; i_28 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_29 = 0; i_29 < 24; i_29 += 3) 
                    {
                        var_59 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_2] [i_2] [i_27] [i_27] [i_27 - 1]))));
                        var_60 ^= (~((~(((/* implicit */int) (_Bool)1)))));
                        var_61 = var_4;
                        var_62 = arr_87 [i_2];
                    }
                    var_63 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_27 + 3])) ? (((/* implicit */int) arr_55 [i_27 + 3])) : (((/* implicit */int) arr_82 [i_27] [i_26] [i_26] [i_27] [i_28] [i_27 + 2]))));
                    arr_95 [i_2] [i_2] [(unsigned short)16] [i_27] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_94 [i_28] [i_27 - 1] [i_27 + 1] [i_27 + 1] [i_27 + 1] [i_27 + 1]))) ^ (arr_57 [i_27 - 1] [i_27 + 1] [i_27 + 1] [i_27 + 2])));
                }
                for (short i_30 = 0; i_30 < 24; i_30 += 2) 
                {
                    var_64 = ((/* implicit */unsigned short) arr_92 [i_2] [5ULL] [5ULL] [i_27]);
                    /* LoopSeq 1 */
                    for (int i_31 = 0; i_31 < 24; i_31 += 1) 
                    {
                        var_65 = ((/* implicit */int) min((var_65), (((arr_6 [i_26]) >> (((arr_28 [i_31] [i_31] [i_31] [i_31] [i_31] [i_27 + 3]) + (3573960477584291516LL)))))));
                        var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_27 - 1] [i_27 + 1] [i_27 + 1] [i_27 + 2] [i_27] [i_26])) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (short)-11243))));
                    }
                    var_67 = ((/* implicit */signed char) max((var_67), (((/* implicit */signed char) ((unsigned int) arr_21 [i_2] [i_27 + 1] [i_27] [i_26])))));
                }
                for (signed char i_32 = 0; i_32 < 24; i_32 += 4) 
                {
                    var_68 = ((/* implicit */unsigned int) (((_Bool)1) ? (268435456) : (((/* implicit */int) (signed char)-10))));
                    arr_103 [i_2] [i_27] [i_27 + 2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_27 + 2] [i_27 - 1] [i_27])) <= (((/* implicit */int) arr_42 [i_27 - 1] [i_27 - 1] [i_27]))));
                    var_69 = ((((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (signed char)-28)))) - (((/* implicit */int) arr_60 [i_32] [i_26] [2LL] [i_27])));
                }
                arr_104 [i_27] [i_27 + 2] [i_27] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-30)) != (((/* implicit */int) (signed char)-55))));
            }
            var_70 = ((/* implicit */unsigned long long int) arr_102 [i_2] [i_26] [i_2] [i_2]);
            arr_105 [i_2] [i_2] = (+(((/* implicit */int) (signed char)37)));
        }
        arr_106 [i_2] = ((/* implicit */_Bool) 2147483647U);
    }
    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
    {
        arr_109 [i_33] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)2)), (532209282)))), (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) arr_50 [i_33] [i_33] [i_33])) : (((/* implicit */int) arr_90 [i_33] [i_33])))))))));
        var_71 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-22)) ? (max((((/* implicit */int) ((unsigned char) (short)23928))), ((-2147483647 - 1)))) : (((/* implicit */int) (unsigned short)65535))));
    }
    var_72 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) var_7)), (((unsigned int) (signed char)-89))))));
    var_73 = ((/* implicit */long long int) (~(((int) var_2))));
    var_74 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) ^ (var_5))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_13)))) ? (((/* implicit */long long int) var_12)) : ((-(var_5)))))));
}
