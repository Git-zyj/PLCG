/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94426
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
    for (long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */signed char) var_1);
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_20 = ((_Bool) (unsigned short)1329);
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        {
                            arr_14 [i_0 - 4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) arr_8 [i_4] [i_0 - 2] [4ULL] [i_3])) : (arr_11 [i_0] [i_1] [i_1] [i_1])));
                            arr_15 [i_1] [i_3 - 4] [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (-(arr_9 [i_4] [i_1] [i_1] [i_0 - 4])));
                            var_21 = ((/* implicit */long long int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1 - 1]))));
                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    var_24 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                    var_25 |= (~(((/* implicit */int) ((unsigned short) var_1))));
                    arr_18 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_1 - 2] [i_5]);
                }
                for (int i_6 = 2; i_6 < 15; i_6 += 3) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((/* implicit */int) var_16)))))));
                    var_27 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_0 - 4] [i_1 + 1] [i_2] [i_6 + 3]))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_7 = 1; i_7 < 18; i_7 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) ((arr_22 [7ULL] [i_1] [i_7 + 1]) % (4632723221113688012LL)));
                arr_25 [i_0] [i_1] [i_0] [i_0 - 3] = ((((/* implicit */_Bool) ((arr_5 [i_0 - 3] [i_0 + 1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))))) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) var_9)));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) ((unsigned char) arr_20 [i_0 - 3] [i_1] [i_0 + 3] [i_1] [7LL]));
                            var_30 = ((/* implicit */unsigned short) arr_2 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        {
                            arr_35 [i_7] [i_7] [i_7] [i_0] [i_7 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_7 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_24 [i_1 + 2])) : (((/* implicit */int) var_14))));
                            var_31 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 2]))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            var_32 = ((/* implicit */int) ((signed char) arr_9 [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 3]));
            /* LoopNest 3 */
            for (signed char i_13 = 3; i_13 < 16; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1074106196U)) / (-4632723221113688027LL)))) ? (((((/* implicit */_Bool) (signed char)-12)) ? (3220861104U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_5)))));
                            arr_44 [i_0 - 4] [i_12] [i_13] [i_14] [i_13] [i_0] = arr_40 [i_14];
                        }
                    } 
                } 
            } 
            var_34 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_12] [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_12] [i_0 + 1] [(signed char)17])) : (((unsigned long long int) (_Bool)0))));
        }
        for (signed char i_16 = 1; i_16 < 17; i_16 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                var_35 = (signed char)-12;
                /* LoopSeq 1 */
                for (long long int i_18 = 1; i_18 < 18; i_18 += 1) 
                {
                    arr_53 [i_16] = ((/* implicit */signed char) var_4);
                    var_36 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))), ((~(arr_11 [i_16] [i_16] [i_16] [i_16 + 1])))));
                    var_37 = arr_6 [1LL] [i_16] [i_0];
                    var_38 = ((/* implicit */signed char) var_12);
                }
                var_39 = ((/* implicit */signed char) arr_2 [i_0]);
            }
            arr_54 [i_16] [i_16] [i_16 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)242))));
            var_40 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)11))));
            arr_55 [i_0] [i_16] [i_16] = ((/* implicit */unsigned short) (!(arr_40 [i_0 - 2])));
            var_41 = ((/* implicit */unsigned int) var_2);
        }
        /* vectorizable */
        for (long long int i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_20 = 4; i_20 < 15; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 19; i_21 += 2) 
                {
                    {
                        var_42 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_20 - 3] [i_20] [i_20 - 3] [i_20] [i_20 + 4] [i_20 - 1] [(unsigned short)10]))));
                        arr_63 [i_20 + 4] [i_20] [i_20] [i_20] = ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4));
                        var_43 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_22 = 0; i_22 < 19; i_22 += 1) 
            {
                for (signed char i_23 = 0; i_23 < 19; i_23 += 3) 
                {
                    {
                        var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
                        var_45 = ((/* implicit */long long int) var_4);
                        arr_71 [i_0] [i_22] [i_22] = ((/* implicit */unsigned short) var_18);
                        /* LoopSeq 1 */
                        for (signed char i_24 = 1; i_24 < 18; i_24 += 3) 
                        {
                            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)114))));
                            var_47 = ((/* implicit */unsigned char) (-(arr_39 [i_24 + 1] [i_24])));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_25 = 1; i_25 < 17; i_25 += 3) 
                        {
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */long long int) var_5)) : (var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)1)))))));
                            arr_78 [i_19] [i_22] = ((/* implicit */signed char) (!(((var_1) == (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        }
                        for (long long int i_26 = 0; i_26 < 19; i_26 += 4) 
                        {
                            arr_82 [i_0] [i_19] [i_22] [i_23] [i_26] [i_22] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_1))) % (((((/* implicit */_Bool) var_4)) ? (4632723221113688014LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
                            arr_83 [i_0] [i_26] [i_26] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) 7059226160104733421LL)))));
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_27 = 0; i_27 < 19; i_27 += 1) 
        {
            for (int i_28 = 0; i_28 < 19; i_28 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned long long int) arr_51 [i_29] [i_28] [i_0]);
                        var_50 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)94)) ? (var_2) : (((/* implicit */unsigned long long int) arr_21 [i_29 + 1] [i_29] [i_29] [i_29 + 1])))))));
                    }
                    for (long long int i_30 = 1; i_30 < 16; i_30 += 2) 
                    {
                        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0]))));
                        arr_94 [i_28] [i_28] [i_28] [i_30] [i_28] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_6)), (((long long int) ((var_14) ? (var_2) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_27] [i_30 + 3])))))));
                        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38520)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)-1))));
                    }
                    var_53 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) var_0))));
                    var_54 = ((/* implicit */unsigned long long int) max((var_54), ((~(((max((var_2), (((/* implicit */unsigned long long int) arr_37 [i_0] [(signed char)14] [8ULL])))) / (((/* implicit */unsigned long long int) arr_84 [i_28] [i_27] [i_0]))))))));
                }
            } 
        } 
        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (max((((((/* implicit */_Bool) arr_47 [i_0 + 1] [(unsigned char)12] [i_0 - 3])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))), (((/* implicit */unsigned int) arr_85 [i_0 - 1]))))));
    }
    for (long long int i_31 = 2; i_31 < 24; i_31 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_32 = 0; i_32 < 25; i_32 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_33 = 0; i_33 < 25; i_33 += 4) 
            {
                var_56 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_96 [i_31 + 1]))));
                /* LoopNest 2 */
                for (signed char i_34 = 0; i_34 < 25; i_34 += 2) 
                {
                    for (unsigned short i_35 = 0; i_35 < 25; i_35 += 3) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned int) arr_98 [i_31 - 2]);
                            var_58 += ((/* implicit */long long int) arr_96 [i_31]);
                            arr_111 [i_31] [i_32] [i_32] [i_35] = arr_104 [i_32] [i_33];
                            var_59 = ((/* implicit */unsigned int) max((var_59), ((-(3220861104U)))));
                        }
                    } 
                } 
                var_60 = ((/* implicit */signed char) arr_98 [i_31]);
                /* LoopNest 2 */
                for (signed char i_36 = 1; i_36 < 23; i_36 += 1) 
                {
                    for (unsigned char i_37 = 0; i_37 < 25; i_37 += 4) 
                    {
                        {
                            arr_117 [i_31] [i_32] [i_33] [i_36] [i_37] [i_31] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_110 [i_31 - 2] [i_31 - 1] [i_31] [i_31] [i_31 + 1]))));
                            var_61 = ((/* implicit */short) (~(arr_116 [i_37] [i_37] [i_37] [i_36] [i_36 + 2])));
                            arr_118 [i_31] [i_31] [i_31] [i_31 + 1] [i_36] = ((/* implicit */short) var_14);
                        }
                    } 
                } 
            }
            var_62 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_113 [i_31] [i_32] [i_32] [i_31] [i_32])) <= (((/* implicit */int) arr_103 [i_31 - 2] [i_31 + 1]))));
            var_63 = ((/* implicit */long long int) max((var_63), (((arr_115 [i_31] [i_31] [i_31] [i_31 - 2] [i_32] [i_32] [i_32]) & (((/* implicit */long long int) ((/* implicit */int) arr_112 [i_31] [i_31] [i_31] [i_31] [i_31 - 1] [i_31])))))));
            var_64 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) % (var_18)))) ? (var_5) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))));
        }
        /* vectorizable */
        for (signed char i_38 = 2; i_38 < 22; i_38 += 2) 
        {
            arr_123 [i_31] = ((/* implicit */signed char) var_5);
            arr_124 [(unsigned char)3] [i_38] = ((/* implicit */long long int) ((signed char) ((signed char) var_5)));
        }
        arr_125 [i_31 - 2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3508828832U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_96 [i_31])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_39 = 0; i_39 < 25; i_39 += 3) 
        {
            arr_129 [i_39] [i_39] [(_Bool)1] = ((/* implicit */unsigned int) arr_114 [(_Bool)1] [i_31 - 1] [i_31 - 2] [i_39] [13] [i_39]);
            var_65 = ((/* implicit */short) max((var_65), (((/* implicit */short) ((signed char) var_5)))));
        }
        for (unsigned int i_40 = 1; i_40 < 23; i_40 += 2) 
        {
            var_66 += ((/* implicit */unsigned char) arr_106 [i_31] [i_31] [i_31] [(signed char)11] [i_31 - 2] [i_31]);
            var_67 = ((/* implicit */_Bool) ((min((arr_108 [i_40 + 2] [0LL] [i_40] [i_31 + 1]), (((/* implicit */long long int) arr_113 [i_31] [i_40 + 2] [i_31 - 1] [i_40] [i_40])))) * (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            /* LoopNest 3 */
            for (signed char i_41 = 0; i_41 < 25; i_41 += 2) 
            {
                for (unsigned long long int i_42 = 1; i_42 < 24; i_42 += 1) 
                {
                    for (unsigned int i_43 = 0; i_43 < 25; i_43 += 2) 
                    {
                        {
                            var_68 = var_15;
                            var_69 = var_1;
                            arr_139 [i_41] [i_40] [10] [i_42] [i_43] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (arr_135 [(unsigned char)11] [i_40] [i_42] [i_43])))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))), (max((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) var_3)), (var_2)))))));
                        }
                    } 
                } 
            } 
        }
        var_70 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_12))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_10))))))))));
    }
    var_71 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), ((~(max((((/* implicit */unsigned int) var_9)), (var_4)))))));
    var_72 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (1076007178505771138LL) : (((/* implicit */long long int) 3565254827U))));
}
