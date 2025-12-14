/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7936
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)40330)))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) var_12)) : (-1801260767)));
                    var_15 = ((/* implicit */_Bool) ((int) 3888232602U));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [(unsigned short)4] [i_0])) ? (var_2) : (((/* implicit */int) (unsigned char)18))))) ? (8) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        var_17 *= ((/* implicit */_Bool) arr_2 [i_0]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_4] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_4])) : (var_2))))));
                        arr_13 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4] [i_2 + 2]))));
                        var_18 = ((/* implicit */signed char) ((arr_4 [i_4] [i_4] [i_2 - 1] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_2 - 1] [i_4])))));
                        arr_14 [i_4] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3888232593U)) ? (((/* implicit */int) ((((/* implicit */_Bool) 2713974243U)) || (arr_10 [i_0] [i_1] [i_4] [i_4] [i_4] [i_2])))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned short)31744))))));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_11 [(unsigned short)6] [2U] [i_0] [(unsigned short)6])) != (var_1)));
        arr_15 [i_0] = ((((((/* implicit */_Bool) 329286959323193020ULL)) ? (3888232579U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [6] [i_0] [6] [(unsigned char)0]))))));
    }
    for (int i_5 = 3; i_5 < 13; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_16 [i_5])) ? (arr_16 [i_5]) : (((/* implicit */unsigned long long int) 406734725U))))));
        arr_20 [i_5] = ((/* implicit */unsigned long long int) ((short) (~(((int) (_Bool)1)))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 13; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    {
                        arr_31 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (((((/* implicit */_Bool) 4294967283U)) ? (-7267312316102228385LL) : (((/* implicit */long long int) 264727380))))));
                        var_20 = ((/* implicit */long long int) ((((_Bool) arr_25 [i_7] [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8] [i_7] [i_8] [i_9])))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 16622229619076998465ULL)) ? (16622229619076998458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6 - 2] [i_6 - 2])))))));
        var_22 = ((/* implicit */int) ((var_10) >> ((((-(var_4))) - (391069064U)))));
        var_23 = ((/* implicit */unsigned int) var_6);
        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6])) || (((/* implicit */_Bool) arr_26 [i_6 - 3] [i_6] [i_6] [i_6 - 3])))))));
    }
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)38225)) < (((/* implicit */int) (_Bool)0))))), (var_1)))) < (min((min((var_10), (((/* implicit */unsigned int) var_5)))), (((((/* implicit */_Bool) var_5)) ? (2623443658U) : (((/* implicit */unsigned int) var_6)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_10 = 1; i_10 < 9; i_10 += 1) 
    {
        arr_34 [i_10 + 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_10 + 1])) ? (11338299588899907133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) ^ (((/* implicit */unsigned long long int) arr_17 [i_10] [2ULL]))));
        arr_35 [i_10] [i_10] &= (-(((/* implicit */int) ((((/* implicit */_Bool) 2623443685U)) || (((/* implicit */_Bool) (signed char)-1))))));
    }
    /* vectorizable */
    for (short i_11 = 4; i_11 < 23; i_11 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_12 = 1; i_12 < 24; i_12 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
            {
                arr_43 [i_11] [i_12] = ((/* implicit */signed char) var_12);
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    arr_47 [i_11] [i_12] [i_12] [i_14] = ((((/* implicit */_Bool) arr_36 [i_11 - 3] [(_Bool)1])) ? (((/* implicit */int) arr_36 [i_11 - 3] [i_12 - 1])) : (((/* implicit */int) arr_36 [i_11 - 3] [i_14])));
                    arr_48 [i_12] [18LL] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) -264727380))));
                }
                var_26 = ((/* implicit */unsigned char) ((((var_6) >> (((((/* implicit */int) arr_36 [i_11] [i_11])) - (49))))) % (((/* implicit */int) arr_39 [i_12] [i_12 + 1]))));
            }
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 22; i_16 += 2) 
                {
                    for (unsigned short i_17 = 1; i_17 < 23; i_17 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) var_0)) : (arr_40 [21] [i_12 - 1])));
                            arr_56 [i_12] [i_12] [i_16 - 1] [i_17] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_11 - 2] [i_11 - 2] [(short)6] [i_16] [i_12] [i_11 - 2]))) : (var_4))));
                        }
                    } 
                } 
                arr_57 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (-217830347) : (((/* implicit */int) (unsigned char)96))))) ? (((/* implicit */int) ((_Bool) 9223372036854775808ULL))) : (((/* implicit */int) (unsigned char)24))));
                arr_58 [i_12] [i_12 - 1] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(arr_42 [i_11] [i_12] [i_15]))))));
                /* LoopNest 2 */
                for (short i_18 = 2; i_18 < 22; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        {
                            arr_63 [i_11] [i_12] [i_15] [i_18 - 2] [i_12] [i_12] [(short)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 4294901760U))) ? (((((/* implicit */_Bool) (signed char)110)) ? (arr_51 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_12] [i_12])))));
                            var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [i_18 + 3] [i_12 - 1] [i_12] [i_11 - 2])) ? (786432) : (((/* implicit */int) arr_39 [i_11] [i_11]))));
                            arr_64 [i_15] [i_15] [i_12] [i_18] [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) 2048U))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned short i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                arr_67 [i_12] [i_12] [i_12] [14U] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)35)) ? (var_1) : (((/* implicit */int) (unsigned char)207)))))));
                var_29 = ((/* implicit */unsigned int) ((((1824514454632553151ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32521))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32514)))));
                var_30 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_52 [i_11] [i_12] [i_12] [i_20] [i_20])))) != (((((/* implicit */_Bool) 2033459811U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))) : (16371308575653686946ULL)))));
            }
        }
        for (int i_21 = 0; i_21 < 25; i_21 += 3) 
        {
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (~(1671523585U))))));
            arr_71 [i_21] [i_11] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)231)) ? (6782639762292333616LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)21)))))));
            arr_72 [i_11] [i_21] [i_21] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_39 [i_21] [22])))) ? (arr_51 [i_11]) : (((/* implicit */unsigned long long int) arr_66 [i_21]))));
            arr_73 [i_11] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_42 [(signed char)20] [i_11] [i_11])) : (2047)))));
            var_32 = ((/* implicit */int) var_10);
        }
        for (short i_22 = 0; i_22 < 25; i_22 += 1) 
        {
            arr_76 [i_11 - 3] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_68 [i_11 - 4]))));
            arr_77 [i_11 - 4] [i_11 - 4] [i_11 - 4] = ((/* implicit */long long int) (short)8449);
            var_33 = ((/* implicit */_Bool) ((3082178441U) + (((/* implicit */unsigned int) var_6))));
            /* LoopNest 2 */
            for (unsigned short i_23 = 0; i_23 < 25; i_23 += 3) 
            {
                for (unsigned long long int i_24 = 1; i_24 < 22; i_24 += 2) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) (-(arr_65 [i_11] [i_11] [i_11])));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) -162078416))));
                        var_36 = ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) arr_39 [i_11] [i_11 - 4])) : (((/* implicit */int) arr_39 [i_11] [i_11 - 4]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_25 = 0; i_25 < 25; i_25 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_27 = 3; i_27 < 23; i_27 += 2) 
                {
                    for (unsigned char i_28 = 2; i_28 < 21; i_28 += 3) 
                    {
                        {
                            arr_94 [i_11] [i_25] [i_11] [i_27] [i_26] [i_28] = ((_Bool) 8388607U);
                            arr_95 [i_11] [i_25] [i_26] [i_27] [i_26] [i_11] [i_26] = ((/* implicit */unsigned char) arr_53 [i_26]);
                            var_37 *= ((((/* implicit */_Bool) arr_69 [i_27 - 2] [i_11] [(signed char)6])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_88 [i_11 + 1] [i_25] [i_27] [i_27])) * (((/* implicit */int) (short)32516))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_70 [i_26] [i_11 - 2])) != (((/* implicit */int) arr_70 [i_26] [i_11 - 4]))));
                arr_96 [i_26] [i_11] [i_26] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_74 [i_11] [i_25] [i_26])) != (((/* implicit */int) arr_91 [i_11] [i_11] [i_11] [i_26] [i_26])))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_29 = 0; i_29 < 25; i_29 += 1) 
            {
                var_39 &= ((/* implicit */unsigned int) var_5);
                var_40 = ((/* implicit */unsigned long long int) arr_93 [i_11 - 3] [i_11 - 2]);
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_30 = 1; i_30 < 24; i_30 += 2) 
        {
            var_41 ^= ((/* implicit */signed char) (+(1898787890U)));
            var_42 = ((((/* implicit */_Bool) (~(15073516231755081976ULL)))) ? (((/* implicit */long long int) var_3)) : (arr_87 [i_30] [i_11] [i_30 + 1]));
            var_43 = ((/* implicit */long long int) ((arr_66 [i_11]) * (((/* implicit */unsigned int) ((/* implicit */int) ((1671523585U) == (1014340985U)))))));
            arr_102 [i_11] [i_30 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16622229619076998465ULL)));
            var_44 = ((/* implicit */long long int) arr_75 [i_11 - 4]);
        }
        arr_103 [i_11] = ((/* implicit */int) ((((arr_55 [i_11] [i_11] [i_11] [i_11] [i_11]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-8447)) : (((/* implicit */int) var_9))))) : (549755813888ULL)));
        arr_104 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_40 [i_11 - 1] [i_11 - 3]))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_31 = 0; i_31 < 18; i_31 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                var_45 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_90 [i_33] [i_32] [i_32] [i_33] [i_33] [i_33])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_92 [i_33] [(signed char)9] [(signed char)9] [(signed char)23] [i_33])))));
                var_46 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_78 [i_31] [i_32])) < (((/* implicit */int) (short)-32515)))))) != (var_4)));
            }
            for (int i_34 = 0; i_34 < 18; i_34 += 1) 
            {
                /* LoopNest 2 */
                for (short i_35 = 0; i_35 < 18; i_35 += 4) 
                {
                    for (long long int i_36 = 0; i_36 < 18; i_36 += 1) 
                    {
                        {
                            arr_125 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_75 [i_34]), (arr_74 [i_31] [i_31] [i_31])))) % (((((/* implicit */int) arr_74 [i_31] [i_31] [i_31])) | (((/* implicit */int) arr_75 [i_35]))))));
                            var_47 = min((((/* implicit */long long int) ((((/* implicit */int) (short)-32523)) % (((/* implicit */int) arr_98 [i_31] [i_32] [i_31] [i_31]))))), ((((!(((/* implicit */_Bool) var_13)))) ? (((long long int) var_11)) : (((/* implicit */long long int) arr_69 [i_31] [i_31] [i_31])))));
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_42 [i_31] [i_31] [i_34])))) | ((~(-1073741824)))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */int) ((-786440) >= ((+(min((2147483647), (((/* implicit */int) (unsigned short)53134))))))));
            }
            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_119 [i_32] [9LL] [(unsigned short)12]))))) : (((/* implicit */int) max(((unsigned short)14), (((/* implicit */unsigned short) (unsigned char)181)))))));
        }
        var_51 = ((/* implicit */short) min((((/* implicit */int) ((short) arr_105 [i_31]))), ((~(arr_86 [i_31] [i_31] [i_31])))));
        var_52 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) 2864921061328385710LL)) ? (((/* implicit */int) arr_44 [i_31] [i_31])) : (((/* implicit */int) arr_105 [i_31])))) >> ((((+(((/* implicit */int) arr_92 [i_31] [i_31] [i_31] [i_31] [i_31])))) - (65332)))))));
        var_53 *= ((/* implicit */unsigned char) ((signed char) ((_Bool) var_2)));
    }
    /* vectorizable */
    for (unsigned int i_37 = 0; i_37 < 22; i_37 += 1) /* same iter space */
    {
        var_54 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) (short)19085)))));
        arr_128 [i_37] [i_37] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_40 [i_37] [i_37]))) >> (((3714712660U) - (3714712635U)))));
    }
    for (unsigned int i_38 = 0; i_38 < 22; i_38 += 1) /* same iter space */
    {
        arr_133 [i_38] [i_38] = ((/* implicit */unsigned char) (~(min((((((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_38]))) / (arr_99 [i_38] [i_38]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [8LL] [i_38]))) != (arr_51 [i_38]))))))));
        arr_134 [i_38] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_5)) >> (((((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_36 [i_38] [i_38])) : (((/* implicit */int) arr_45 [4])))) - (47))))));
    }
    var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (-1895353973224698192LL)))) ? (((((/* implicit */_Bool) (unsigned short)6079)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)960)), (var_1)))))) / (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2004359397U))))))))))))));
}
