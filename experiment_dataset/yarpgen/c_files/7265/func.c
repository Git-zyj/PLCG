/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7265
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
    var_12 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */long long int) (~(((var_3) - (var_3)))))) : (var_0))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_5)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_1)) / (var_3)))))) ? (min((var_11), (((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 3; i_5 < 18; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_16 = ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_11));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_4)))))));
                            arr_19 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_4] [i_5 - 1] [6ULL] |= ((/* implicit */unsigned long long int) var_10);
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) % (var_11))) : (var_5)));
                            var_19 = ((/* implicit */short) var_4);
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_7))))) : (var_3)));
                            var_21 ^= ((/* implicit */long long int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_10 = 1; i_10 < 18; i_10 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                        var_24 = ((/* implicit */signed char) (-(((var_0) << (((((((/* implicit */int) var_9)) + (5653))) - (22)))))));
                        arr_35 [13LL] [i_0] [i_5] [i_10] [i_11] [13LL] = ((/* implicit */short) var_10);
                    }
                    for (long long int i_12 = 2; i_12 < 16; i_12 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
                        var_26 = ((/* implicit */long long int) var_7);
                    }
                    arr_38 [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (var_11))) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                }
                for (int i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_10)))) ? (var_3) : (((/* implicit */int) var_9))));
                }
            }
            for (int i_14 = 2; i_14 < 18; i_14 += 3) 
            {
                var_29 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_10)));
                arr_44 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_10) : (var_0)))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_3))))));
                arr_45 [i_0] [i_0] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_7)) : (var_3)));
            }
            /* LoopNest 3 */
            for (long long int i_15 = 1; i_15 < 17; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    for (signed char i_17 = 3; i_17 < 17; i_17 += 4) 
                    {
                        {
                            arr_53 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_2)));
                            var_30 = ((/* implicit */unsigned long long int) var_11);
                            var_31 = ((/* implicit */short) (((-(var_3))) <= ((~(((/* implicit */int) var_6))))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */int) min((var_32), (((var_3) / (((/* implicit */int) var_7))))));
            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_2) : ((-(var_2)))));
            arr_54 [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        }
        for (long long int i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (int i_19 = 3; i_19 < 17; i_19 += 4) 
            {
                for (unsigned char i_20 = 0; i_20 < 19; i_20 += 2) 
                {
                    {
                        var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) > (((/* implicit */int) var_9)))) ? (var_3) : (((/* implicit */int) max((var_1), (((/* implicit */short) var_4)))))))), (((var_2) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))));
                        arr_63 [i_0 - 1] [i_0] [i_18] [(short)6] [i_19] [i_20] = ((/* implicit */long long int) ((min((((/* implicit */int) var_9)), (var_3))) + (((/* implicit */int) (!((!(((/* implicit */_Bool) var_3)))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_21 = 0; i_21 < 19; i_21 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_22 = 1; i_22 < 16; i_22 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_23 = 1; i_23 < 18; i_23 += 4) 
                    {
                        var_35 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) var_3)) != (var_0)));
                        arr_74 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) ((((((/* implicit */int) var_7)) & (var_3))) & (((((/* implicit */int) var_1)) | (((/* implicit */int) var_9))))));
                    }
                    for (short i_24 = 0; i_24 < 19; i_24 += 4) 
                    {
                        arr_77 [i_0] [18] [18] [i_0] [i_22] = ((/* implicit */signed char) var_5);
                        arr_78 [i_0] [i_21] [i_22] [i_24] = (~(var_5));
                        arr_79 [i_0] [i_0] [16LL] [i_21] [(short)11] [i_22] [16LL] = ((/* implicit */_Bool) var_2);
                        var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_3)) : (var_2)));
                    }
                    for (long long int i_25 = 0; i_25 < 19; i_25 += 3) 
                    {
                        var_38 = ((/* implicit */signed char) var_7);
                        var_39 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_10)) ^ ((-(var_2)))));
                    }
                    arr_83 [i_0] [1ULL] [1ULL] [i_22] [i_0] = var_5;
                    /* LoopSeq 2 */
                    for (short i_26 = 1; i_26 < 16; i_26 += 1) 
                    {
                        arr_86 [i_0] [i_0] [i_21] [i_22] [i_21] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) var_8))));
                        arr_87 [i_0 - 1] [16] [i_0 - 1] [i_0] [i_26] = ((/* implicit */unsigned short) var_9);
                    }
                    for (unsigned long long int i_27 = 3; i_27 < 15; i_27 += 2) 
                    {
                        var_40 = ((/* implicit */signed char) var_9);
                        arr_90 [i_27] [i_21] [i_21] [i_21] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        var_41 ^= ((/* implicit */unsigned short) (~(var_3)));
                    }
                    arr_91 [i_0] [i_0] [9ULL] [i_0] = ((/* implicit */signed char) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_28 = 1; i_28 < 18; i_28 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_10)))));
                        var_43 = ((/* implicit */unsigned int) var_4);
                        var_44 = ((/* implicit */int) max((var_44), ((~(((/* implicit */int) var_7))))));
                        var_45 = ((/* implicit */short) ((((var_0) - (var_0))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                        arr_94 [i_0] [(unsigned short)7] [i_21] [(unsigned short)8] [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) var_6))))));
                    }
                }
                for (unsigned int i_29 = 0; i_29 < 19; i_29 += 4) 
                {
                    var_46 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
                    var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_8)))))));
                    arr_98 [i_29] [i_21] [i_0 + 1] [i_29] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))));
                    arr_99 [i_29] [i_18] [i_21] [i_18] [i_0] |= ((/* implicit */unsigned long long int) var_0);
                }
                /* LoopNest 2 */
                for (unsigned short i_30 = 2; i_30 < 18; i_30 += 1) 
                {
                    for (long long int i_31 = 0; i_31 < 19; i_31 += 1) 
                    {
                        {
                            var_48 = ((((/* implicit */int) var_6)) < (((/* implicit */int) var_6)));
                            var_49 = var_2;
                            arr_105 [i_0] [i_21] [i_0] [i_31] = ((/* implicit */signed char) ((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            var_50 |= ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) ((var_11) >> (((var_3) - (791173370))))))));
                /* LoopSeq 4 */
                for (short i_32 = 0; i_32 < 19; i_32 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_33 = 3; i_33 < 18; i_33 += 1) 
                    {
                        arr_113 [i_0] [i_18] [i_18] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
                        arr_114 [i_0] [i_0] [i_21] [i_32] [i_33] = ((/* implicit */unsigned char) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_52 = ((/* implicit */unsigned short) var_9);
                        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) var_3))));
                    }
                    for (signed char i_34 = 1; i_34 < 17; i_34 += 4) 
                    {
                        var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) ((var_0) - (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))));
                        var_55 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) < (var_10)));
                        var_56 = ((/* implicit */unsigned short) var_7);
                    }
                    for (short i_35 = 0; i_35 < 19; i_35 += 3) 
                    {
                        arr_121 [i_0] [i_18] [i_0] [i_32] [2] = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                        var_57 ^= ((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) - (var_0)))) ? (((var_5) - (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
                        arr_122 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                        var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) (!(((/* implicit */_Bool) var_10)))))));
                    }
                    arr_123 [i_18] |= ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                    var_59 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_10) != (((/* implicit */long long int) var_3)))))));
                }
                for (_Bool i_36 = 0; i_36 < 0; i_36 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_37 = 0; i_37 < 19; i_37 += 1) /* same iter space */
                    {
                        var_60 = var_2;
                        arr_131 [4ULL] [i_18] [i_0] [i_36] [i_37] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                    }
                    for (unsigned short i_38 = 0; i_38 < 19; i_38 += 1) /* same iter space */
                    {
                        arr_134 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_0)))) && (((/* implicit */_Bool) var_2))));
                        var_61 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_11)) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_2)))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_39 = 0; i_39 < 19; i_39 += 4) 
                    {
                        arr_137 [(short)5] [i_18] [i_21] [i_21] [i_0] [i_39] [i_39] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        var_62 = ((/* implicit */unsigned short) var_9);
                        arr_138 [i_0] [i_0] [i_0] [(signed char)0] [i_39] = ((/* implicit */_Bool) (~((-(var_3)))));
                    }
                    arr_139 [i_21] [i_21] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))));
                    arr_140 [i_0] [i_36] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)));
                    var_63 ^= ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                }
                for (_Bool i_40 = 1; i_40 < 1; i_40 += 1) 
                {
                    arr_144 [i_0] [i_0] [i_0] [(signed char)14] [(signed char)14] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    for (unsigned char i_41 = 0; i_41 < 19; i_41 += 2) 
                    {
                        var_64 = ((/* implicit */int) var_2);
                        arr_147 [i_41] [i_41] [i_0] = ((/* implicit */long long int) var_3);
                    }
                    for (long long int i_42 = 4; i_42 < 15; i_42 += 1) 
                    {
                        arr_151 [i_0] [(unsigned short)2] [i_18] [i_21] [7LL] [i_42 + 4] [i_42] = ((/* implicit */_Bool) var_7);
                        var_65 = ((/* implicit */long long int) var_3);
                    }
                    arr_152 [i_40] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
                    var_66 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10)));
                    var_67 ^= ((/* implicit */signed char) (+(((((/* implicit */int) var_7)) & (((/* implicit */int) var_6))))));
                }
                for (signed char i_43 = 0; i_43 < 19; i_43 += 2) 
                {
                    arr_155 [(unsigned char)2] [i_18] [i_0] [i_43] = ((/* implicit */unsigned short) ((((var_11) >> (((var_3) - (791173426))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_44 = 2; i_44 < 18; i_44 += 2) /* same iter space */
                    {
                        arr_159 [i_0] [i_0] [i_21] [i_43] [i_44] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2))));
                        var_68 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (var_10)));
                        var_69 = ((/* implicit */unsigned char) var_3);
                    }
                    for (unsigned short i_45 = 2; i_45 < 18; i_45 += 2) /* same iter space */
                    {
                        var_70 = ((/* implicit */signed char) min((var_70), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                        var_71 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((var_11) >> (((/* implicit */int) var_4))))));
                        var_72 = var_8;
                        var_73 = ((/* implicit */short) max((var_73), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_10)) != (var_2))))));
                        var_74 = (+((+(var_5))));
                    }
                    for (short i_46 = 0; i_46 < 19; i_46 += 3) 
                    {
                        var_75 = ((/* implicit */unsigned short) max((var_75), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (var_5) : (var_5))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (var_3))))))))));
                        var_76 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_47 = 2; i_47 < 17; i_47 += 3) 
                    {
                        var_77 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) ^ (var_2)));
                        var_78 = ((/* implicit */unsigned long long int) var_9);
                        var_79 = ((/* implicit */signed char) var_4);
                    }
                    for (unsigned short i_48 = 0; i_48 < 19; i_48 += 2) 
                    {
                        var_80 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) & (var_2)))) ? ((~(var_10))) : ((~(var_0)))));
                        var_81 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (var_5)));
                    }
                }
                var_82 = ((/* implicit */short) var_5);
            }
        }
        /* LoopSeq 2 */
        for (signed char i_49 = 2; i_49 < 18; i_49 += 2) /* same iter space */
        {
            arr_174 [i_0] = ((/* implicit */signed char) ((var_3) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) >= (min((var_2), (((/* implicit */unsigned long long int) var_9)))))))));
            var_83 = ((/* implicit */_Bool) max((var_83), (((/* implicit */_Bool) var_10))));
        }
        for (signed char i_50 = 2; i_50 < 18; i_50 += 2) /* same iter space */
        {
            var_84 = ((/* implicit */signed char) var_9);
            /* LoopNest 3 */
            for (signed char i_51 = 0; i_51 < 19; i_51 += 3) 
            {
                for (int i_52 = 2; i_52 < 15; i_52 += 3) 
                {
                    for (long long int i_53 = 2; i_53 < 18; i_53 += 4) 
                    {
                        {
                            arr_186 [(unsigned char)7] [i_0] [5LL] [(unsigned char)7] [i_53 + 1] = min((var_5), (min(((-(var_11))), (((/* implicit */long long int) min((var_1), (var_7)))))));
                            var_85 ^= ((/* implicit */short) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((/* implicit */int) (((-(((/* implicit */int) var_6)))) < (((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
            } 
            var_86 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_4))))), (var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_9))))) - (var_11))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
        }
        var_87 ^= ((/* implicit */int) min((min((min((var_9), (var_9))), (var_9))), (min((((/* implicit */short) ((var_10) < (var_10)))), (var_7)))));
    }
    var_88 |= var_6;
}
