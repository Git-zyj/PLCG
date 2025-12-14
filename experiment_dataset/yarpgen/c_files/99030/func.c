/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99030
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
    var_13 = ((((max((var_9), (((/* implicit */long long int) (short)32756)))) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) * (((/* implicit */long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)224))))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), ((!(((/* implicit */_Bool) var_5))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_7)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_11 [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_0)), (var_4)))) && (((/* implicit */_Bool) var_10))))), ((+(min((var_12), (((/* implicit */unsigned long long int) var_3)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                arr_14 [(_Bool)1] [i_2] [i_3 + 2] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)7311)) >= (((/* implicit */int) (unsigned short)65535)))))));
                arr_15 [i_1] [i_1] [i_1] = (unsigned char)243;
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((((/* implicit */_Bool) var_12)) && (var_1))))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        var_16 ^= ((/* implicit */unsigned char) ((unsigned long long int) var_2));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_4))))))));
                    }
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                {
                    arr_25 [i_6] [i_2] [i_6] = ((((/* implicit */int) var_1)) == (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_8)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 1) 
                    {
                        arr_30 [i_1] [i_2] [i_3 - 1] [i_1] [i_6] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_9))))));
                        var_19 ^= ((/* implicit */short) (-((+(((/* implicit */int) var_1))))));
                        arr_31 [i_1] [i_2] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (var_12))))));
                    }
                    for (long long int i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6359)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((unsigned char) var_4)))));
                        var_21 ^= ((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL)));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 1) 
                    {
                        var_22 = (!(((/* implicit */_Bool) (unsigned short)19968)));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
                        arr_37 [i_2] [i_6] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)0))));
                    }
                    for (long long int i_10 = 3; i_10 < 23; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) var_10)))))))));
                        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                        var_26 *= 7404671662562411780ULL;
                    }
                    var_27 = ((/* implicit */unsigned char) ((var_12) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-29579)))))));
                    /* LoopSeq 3 */
                    for (long long int i_11 = 3; i_11 < 20; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_9))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(((/* implicit */int) (short)-11859)))))));
                        arr_42 [i_1] [4LL] [i_1] [(short)10] [i_1] &= ((/* implicit */_Bool) (unsigned char)10);
                    }
                    for (unsigned char i_12 = 2; i_12 < 23; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((var_1) && (((/* implicit */_Bool) var_0))));
                        var_31 ^= ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                        arr_46 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)99)) ? (5994521350864639807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (var_12)))))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((long long int) (+(10867799072757198580ULL))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_33 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) != (var_12)));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((long long int) var_4)) ^ (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))))));
                    }
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                {
                    arr_54 [i_1] = ((/* implicit */long long int) (short)15131);
                    var_36 ^= ((((/* implicit */_Bool) var_2)) ? (4805793795679238616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15131))));
                    var_37 = (!(((/* implicit */_Bool) var_11)));
                }
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                    {
                        arr_60 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)12] [i_1] |= ((/* implicit */_Bool) var_10);
                        arr_61 [i_15] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2983808718883672979LL)) ? (5994521350864639807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))))) - (((8589934528LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        arr_62 [i_15] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)219))));
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                    {
                        var_38 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4110699109078239460ULL)))))) + (11183927229077538386ULL)));
                        var_39 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) / ((~(((/* implicit */int) var_0))))));
                        arr_66 [i_1] [i_15] [i_15] [i_1] = ((/* implicit */_Bool) ((long long int) var_0));
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (8611005591607886396LL))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                    }
                    for (unsigned char i_18 = 2; i_18 < 21; i_18 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89)))));
                        var_42 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) ? (((long long int) (short)29579)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_3))))))));
                    }
                    var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0)))))));
                }
                var_44 ^= ((/* implicit */unsigned char) (-(var_2)));
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                arr_71 [i_19] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) var_7);
                var_45 -= (((!(((/* implicit */_Bool) (unsigned char)166)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) var_4)) - (((/* implicit */int) var_1))))))) : ((((+(var_9))) / (min((((/* implicit */long long int) var_10)), (-1020665883562755387LL))))));
                var_46 = ((/* implicit */_Bool) (unsigned char)255);
                /* LoopSeq 3 */
                for (long long int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_21 = 3; i_21 < 20; i_21 += 1) 
                    {
                        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)86)), (var_3))))))))));
                        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_11))))), (var_4)))))))));
                        arr_78 [i_1] [i_21] [i_21] [i_20] [i_21] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_5))))));
                    }
                    var_49 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) var_12))), (((((/* implicit */int) (short)-29579)) % (((/* implicit */int) (short)29590))))));
                    var_50 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((short) var_11)), (((/* implicit */short) (unsigned char)0))))), (((((/* implicit */_Bool) var_4)) ? (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23923)))))));
                    arr_79 [i_1] [i_1] [i_19 - 1] [i_20] [i_20] [i_1] = ((/* implicit */long long int) var_4);
                    var_51 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_6))))))));
                }
                for (short i_22 = 1; i_22 < 21; i_22 += 1) 
                {
                    var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) ((unsigned long long int) max((var_2), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)255)))))))));
                    var_53 -= ((/* implicit */short) (-((-((~(var_2)))))));
                    var_54 = ((/* implicit */_Bool) max((var_54), (((((/* implicit */int) ((min((((/* implicit */unsigned long long int) -2768712937866969632LL)), (var_12))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) < (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (signed char)-46)))))))));
                }
                for (unsigned char i_23 = 0; i_23 < 24; i_23 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_24 = 2; i_24 < 21; i_24 += 1) 
                    {
                        var_55 = ((/* implicit */_Bool) var_12);
                        var_56 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (short)6070)))));
                        var_57 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1LL)) * ((((_Bool)1) ? (13825472415731986161ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        var_58 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                        var_59 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_7)))))));
                    }
                    var_60 = ((/* implicit */signed char) var_9);
                    var_61 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)94)) ? (5994521350864639808LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                var_62 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (long long int i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    var_63 = ((/* implicit */long long int) max((var_63), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                    var_64 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) var_12)))));
                }
                var_65 -= ((/* implicit */unsigned char) (-((-(var_9)))));
                /* LoopNest 2 */
                for (long long int i_27 = 0; i_27 < 24; i_27 += 1) 
                {
                    for (long long int i_28 = 1; i_28 < 23; i_28 += 1) 
                    {
                        {
                            arr_99 [i_28] [i_28] [i_25] [i_28] [(short)8] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (7456781113547988314LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_100 [4ULL] [i_27] [i_28] [i_25] [i_28] [5LL] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8))));
                            var_66 *= var_3;
                            var_67 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)94)))))));
                            var_68 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                        }
                    } 
                } 
            }
            arr_101 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)236))));
            var_69 = ((/* implicit */long long int) ((min((((/* implicit */long long int) (unsigned char)0)), (-2059304405126409765LL))) == (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        }
        arr_102 [(signed char)23] = ((/* implicit */unsigned short) (~(((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        var_70 ^= ((((/* implicit */_Bool) var_12)) ? (min((-1945918239538038208LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
    }
    /* LoopSeq 3 */
    for (long long int i_29 = 2; i_29 < 12; i_29 += 1) 
    {
        var_71 = ((/* implicit */unsigned short) var_9);
        var_72 = ((/* implicit */unsigned short) min((var_72), (((/* implicit */unsigned short) (!(((max((((/* implicit */unsigned long long int) var_0)), (var_2))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), ((unsigned char)239))))))))))));
    }
    for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) /* same iter space */
    {
        arr_107 [i_30] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned long long int) var_8)), (var_12))));
        arr_108 [i_30] = ((/* implicit */unsigned long long int) var_3);
        /* LoopSeq 2 */
        for (unsigned char i_31 = 1; i_31 < 18; i_31 += 1) 
        {
            arr_111 [i_30 - 1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_4))))) ? (min((((/* implicit */long long int) (unsigned char)127)), (-3171758353024314416LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))));
            arr_112 [i_30] |= ((/* implicit */unsigned long long int) max((max((((((/* implicit */int) var_1)) << (((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_11)))))), (((/* implicit */int) var_10))));
        }
        for (long long int i_32 = 0; i_32 < 20; i_32 += 1) 
        {
            var_73 = ((/* implicit */short) var_1);
            arr_115 [i_32] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 1152921229728940032LL)) ? (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-16)), (var_8))))))));
        }
        arr_116 [(signed char)16] = ((/* implicit */_Bool) min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_9))) | (((/* implicit */int) (!((_Bool)0)))))))));
    }
    for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_34 = 1; i_34 < 19; i_34 += 1) 
        {
            for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
            {
                for (unsigned long long int i_36 = 2; i_36 < 16; i_36 += 1) 
                {
                    {
                        var_74 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) max((((/* implicit */short) var_0)), (var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1125899906580480ULL)))))))));
                        arr_127 [i_33] [i_33] [i_35 - 1] [i_36] = min((var_1), ((!(((/* implicit */_Bool) (unsigned char)0)))));
                        var_75 -= ((/* implicit */_Bool) ((((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_11)))))));
                        var_76 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
        } 
        var_77 *= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_1))))))));
    }
    var_78 = ((/* implicit */unsigned char) var_12);
}
