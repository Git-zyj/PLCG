/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96345
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
    var_14 |= ((/* implicit */unsigned short) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned long long int) var_12);
            var_15 = ((/* implicit */unsigned short) var_8);
            arr_6 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)226))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_16 = ((/* implicit */int) (unsigned char)153);
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)29);
            /* LoopSeq 1 */
            for (unsigned short i_3 = 4; i_3 < 20; i_3 += 4) 
            {
                var_17 = ((/* implicit */unsigned int) -5983628255178246248LL);
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                /* LoopSeq 4 */
                for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) 988464860);
                        var_20 -= ((/* implicit */long long int) var_10);
                        var_21 = var_11;
                        arr_21 [i_0] [i_2] [i_3 + 1] [i_4] [i_5] = ((/* implicit */unsigned short) var_11);
                        var_22 |= -988464879;
                    }
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (unsigned char)52))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_25 [i_2] [i_3 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)36))));
                    var_24 = ((/* implicit */unsigned char) (-(-1076902764)));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 2620295255297829996LL))));
                        arr_28 [i_0] [i_2] [3] [i_2] [i_7] = ((/* implicit */short) var_2);
                        arr_29 [i_2] [i_3] = ((/* implicit */signed char) var_9);
                    }
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) (-(-885052420)));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)32745)))))));
                        arr_34 [i_0] [i_0] [i_2] [i_0] [i_8] = ((/* implicit */unsigned int) var_2);
                        arr_35 [i_0] [i_0] [i_3] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)15679))));
                    }
                    arr_36 [i_2] = ((/* implicit */short) (~(var_10)));
                }
                for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    var_28 = (+(988464862));
                    arr_40 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) (-(-9223372036854775787LL)));
                }
                for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    arr_45 [i_0] [i_0] |= var_4;
                    var_29 -= ((/* implicit */int) var_6);
                }
                var_30 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)227))));
            }
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (unsigned short i_12 = 1; i_12 < 22; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        {
                            arr_54 [i_2] [i_2] [i_11] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (~(var_12)));
                            arr_55 [i_12] [i_12 + 1] [i_2] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                            arr_56 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (short)20969);
                            arr_57 [i_0] [i_12] [i_0] |= ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            var_31 = ((/* implicit */_Bool) var_3);
            var_32 -= ((/* implicit */unsigned int) var_8);
        }
        var_33 = ((/* implicit */int) 2237664657U);
        /* LoopSeq 3 */
        for (unsigned long long int i_15 = 4; i_15 < 22; i_15 += 4) /* same iter space */
        {
            arr_62 [(signed char)10] [(signed char)10] = ((/* implicit */_Bool) (+(4096711913U)));
            arr_63 [i_15] = ((/* implicit */long long int) (unsigned short)15669);
        }
        for (unsigned long long int i_16 = 4; i_16 < 22; i_16 += 4) /* same iter space */
        {
            arr_66 [i_0] [i_16 + 1] [i_16] = ((/* implicit */int) var_13);
            /* LoopSeq 1 */
            for (short i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                var_34 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1989838157U))));
                arr_71 [i_0] [14LL] [i_0] [i_0] = var_4;
            }
        }
        for (unsigned long long int i_18 = 4; i_18 < 22; i_18 += 4) /* same iter space */
        {
            arr_74 [i_0] [i_18] [i_18 - 4] = ((/* implicit */unsigned char) var_8);
            /* LoopSeq 3 */
            for (short i_19 = 1; i_19 < 20; i_19 += 4) 
            {
                var_35 = ((/* implicit */unsigned char) var_6);
                arr_78 [i_19] [(short)12] [i_19] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)174))));
                arr_79 [i_0] [i_0] [i_19] [(unsigned char)11] = ((/* implicit */unsigned short) var_7);
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) var_8);
                            arr_85 [i_19] [i_19] [i_19] [i_0] [(unsigned char)10] [i_21] [i_0] = (unsigned char)199;
                            arr_86 [i_19 + 3] [3ULL] [i_19 - 1] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) (-(var_2)));
                            var_37 = ((/* implicit */unsigned char) (+(var_9)));
                        }
                    } 
                } 
            }
            for (unsigned int i_22 = 1; i_22 < 21; i_22 += 4) 
            {
                var_38 = ((/* implicit */short) var_11);
                arr_90 [i_22] = ((/* implicit */signed char) var_13);
                var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) var_4))));
                arr_91 [i_0] [(unsigned short)0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-36);
                arr_92 [(unsigned short)8] [i_18 - 2] [i_22] = ((/* implicit */short) (unsigned short)49023);
            }
            for (int i_23 = 0; i_23 < 23; i_23 += 1) 
            {
                var_40 -= ((/* implicit */long long int) (unsigned char)174);
                arr_95 [i_0] [i_0] [i_23] = var_4;
            }
        }
    }
    for (short i_24 = 4; i_24 < 23; i_24 += 4) 
    {
        arr_100 [i_24 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
        arr_101 [i_24] [i_24] = ((/* implicit */signed char) (~((-(var_12)))));
        var_41 = ((/* implicit */_Bool) (unsigned short)49023);
    }
    /* vectorizable */
    for (short i_25 = 0; i_25 < 10; i_25 += 4) /* same iter space */
    {
        arr_105 [i_25] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
        arr_106 [i_25] = ((/* implicit */short) (+(((/* implicit */int) (short)21571))));
    }
    for (short i_26 = 0; i_26 < 10; i_26 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_27 = 2; i_27 < 7; i_27 += 4) 
        {
            arr_111 [i_27] = ((/* implicit */signed char) (-(((/* implicit */int) min(((short)32737), (var_4))))));
            arr_112 [i_26] [i_26] [(unsigned char)0] = ((/* implicit */int) (+(var_11)));
            arr_113 [i_26] = ((/* implicit */unsigned short) (signed char)1);
            var_42 = ((/* implicit */long long int) (unsigned char)127);
        }
        /* vectorizable */
        for (long long int i_28 = 0; i_28 < 10; i_28 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_29 = 1; i_29 < 8; i_29 += 2) 
            {
                var_43 = ((/* implicit */unsigned char) var_3);
                var_44 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)57))));
                var_45 = var_12;
                /* LoopSeq 3 */
                for (short i_30 = 2; i_30 < 8; i_30 += 3) 
                {
                    var_46 = ((/* implicit */unsigned long long int) (unsigned char)11);
                    arr_123 [i_26] [i_28] [i_28] [i_28] [i_28] [i_30] = -1856055851;
                    var_47 -= ((/* implicit */_Bool) -2147483626);
                    /* LoopSeq 4 */
                    for (unsigned int i_31 = 1; i_31 < 9; i_31 += 4) 
                    {
                        arr_128 [i_28] [i_28] [i_31 - 1] = ((/* implicit */signed char) var_2);
                        var_48 = ((/* implicit */long long int) (unsigned char)35);
                    }
                    for (int i_32 = 0; i_32 < 10; i_32 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_0)))))))));
                        var_50 -= ((/* implicit */signed char) var_1);
                    }
                    for (long long int i_33 = 2; i_33 < 9; i_33 += 4) 
                    {
                        arr_135 [9] [i_28] [i_28] [i_28] [2LL] [i_28] = ((/* implicit */unsigned long long int) (~(1856055851)));
                        var_51 = ((/* implicit */long long int) var_8);
                        arr_136 [i_28] [i_28] [i_29 - 1] [i_30] [i_33 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)242))));
                    }
                    for (short i_34 = 2; i_34 < 8; i_34 += 1) 
                    {
                        arr_140 [i_28] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        arr_141 [i_26] [i_28] [i_29] [i_30] [i_28] = ((/* implicit */short) (+(var_9)));
                        arr_142 [i_28] [i_28] [i_28] [i_28] [i_26] [i_28] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                        var_52 = ((/* implicit */unsigned short) (signed char)-31);
                    }
                    arr_143 [i_26] [i_28] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                }
                for (unsigned int i_35 = 1; i_35 < 9; i_35 += 4) 
                {
                    arr_146 [i_26] [i_26] [i_29] [i_26] |= ((/* implicit */long long int) (unsigned char)186);
                    arr_147 [i_28] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                }
                for (unsigned char i_36 = 4; i_36 < 9; i_36 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_37 = 0; i_37 < 10; i_37 += 1) 
                    {
                        var_53 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)35))));
                        arr_153 [i_37] [i_36 - 2] [i_28] [i_29] [i_28] [i_26] [(signed char)7] = ((/* implicit */unsigned short) (-(var_11)));
                        arr_154 [i_28] = var_8;
                        var_54 = ((/* implicit */signed char) (-(var_10)));
                        var_55 = ((/* implicit */unsigned char) (+(var_2)));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_38 = 3; i_38 < 7; i_38 += 3) 
                    {
                        var_56 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)80))));
                        var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) var_1))));
                    }
                    for (unsigned short i_39 = 0; i_39 < 10; i_39 += 4) 
                    {
                        arr_160 [i_28] [(unsigned char)2] [(unsigned char)2] [i_28] [(unsigned char)2] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)158))))));
                        arr_161 [i_26] [i_28] [i_28] [i_26] [i_36] [i_28] [i_39] = ((/* implicit */_Bool) (+(988464843)));
                    }
                    for (short i_40 = 0; i_40 < 10; i_40 += 4) 
                    {
                        arr_164 [i_26] [i_28] [(unsigned short)2] [i_26] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                        arr_165 [i_26] [i_26] [i_26] [i_28] [i_26] = ((/* implicit */unsigned long long int) (short)21571);
                        var_58 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)85))));
                    }
                }
            }
            for (short i_41 = 2; i_41 < 7; i_41 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_42 = 4; i_42 < 8; i_42 += 2) 
                {
                    var_59 -= ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                    arr_173 [i_28] [i_28] = ((/* implicit */int) (signed char)27);
                }
                for (signed char i_43 = 0; i_43 < 10; i_43 += 4) 
                {
                    arr_176 [i_28] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)255))));
                    /* LoopSeq 3 */
                    for (unsigned short i_44 = 0; i_44 < 10; i_44 += 2) /* same iter space */
                    {
                        arr_179 [i_28] [i_28] [i_41] [(signed char)9] [i_28] = ((/* implicit */unsigned char) var_10);
                        arr_180 [i_44] [i_28] [i_44] [i_44] [i_44] [i_44] = ((/* implicit */unsigned char) 1858787056U);
                        var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) (unsigned char)14))));
                        arr_181 [i_26] [i_26] [i_28] [i_26] [1LL] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                    }
                    for (unsigned short i_45 = 0; i_45 < 10; i_45 += 2) /* same iter space */
                    {
                        arr_184 [i_28] [(signed char)2] [i_28] [i_28] [i_26] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)21844))));
                        var_61 = ((/* implicit */short) min((var_61), (var_4)));
                        arr_185 [i_43] [i_28] [i_43] [i_43] = ((/* implicit */long long int) (~(8U)));
                    }
                    for (unsigned short i_46 = 0; i_46 < 10; i_46 += 1) 
                    {
                        arr_189 [i_26] [i_26] [i_28] [i_26] [i_26] [0LL] [i_46] &= ((/* implicit */int) var_2);
                        arr_190 [i_26] [i_26] [i_28] [i_26] [i_26] [i_26] [7] = var_8;
                    }
                    arr_191 [i_26] [i_28] [i_26] [i_28] = ((/* implicit */int) (short)-30273);
                }
                for (unsigned short i_47 = 0; i_47 < 10; i_47 += 1) 
                {
                    arr_195 [i_28] [i_41] &= ((/* implicit */_Bool) 1761997369);
                    arr_196 [i_28] [i_41] [i_28] [i_28] = ((/* implicit */long long int) var_3);
                    arr_197 [(short)9] [i_28] [i_28] [i_47] [i_47] = ((/* implicit */long long int) (_Bool)1);
                }
                /* LoopSeq 1 */
                for (short i_48 = 0; i_48 < 10; i_48 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_49 = 3; i_49 < 9; i_49 += 2) 
                    {
                        arr_205 [i_49] [i_49 - 1] [i_49 - 2] [0LL] [0LL] [i_28] = ((/* implicit */unsigned int) (+(-8000014281195413599LL)));
                        var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) 13U))));
                    }
                    arr_206 [i_26] [i_28] [i_28] = ((/* implicit */signed char) -2147483626);
                }
            }
            for (unsigned long long int i_50 = 0; i_50 < 10; i_50 += 1) 
            {
                arr_210 [i_28] [i_28] = ((/* implicit */int) (-(149462026U)));
                arr_211 [i_28] [i_26] [(unsigned char)8] [i_28] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)124))));
                arr_212 [i_28] [i_28] [i_50] = ((/* implicit */long long int) var_5);
                arr_213 [i_28] [i_28] = ((/* implicit */long long int) (+(14385605214461365109ULL)));
                var_63 = ((/* implicit */int) var_7);
            }
            var_64 = ((/* implicit */signed char) min((var_64), (((/* implicit */signed char) (unsigned char)85))));
        }
        for (long long int i_51 = 0; i_51 < 10; i_51 += 1) 
        {
            arr_218 [i_51] [i_51] = ((/* implicit */unsigned char) var_6);
            var_65 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)29))));
            arr_219 [(short)3] [i_51] = (unsigned char)147;
            /* LoopSeq 1 */
            for (long long int i_52 = 0; i_52 < 10; i_52 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_53 = 0; i_53 < 10; i_53 += 3) 
                {
                    var_66 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (2147483620)));
                    arr_225 [i_26] |= ((/* implicit */unsigned long long int) min((max((var_11), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)13)), (var_0))))));
                    var_67 -= ((/* implicit */unsigned int) (-(2073213259)));
                }
                for (short i_54 = 4; i_54 < 8; i_54 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_55 = 1; i_55 < 8; i_55 += 2) 
                    {
                        var_68 = ((/* implicit */long long int) var_6);
                        var_69 = ((/* implicit */_Bool) var_4);
                    }
                    for (unsigned char i_56 = 1; i_56 < 7; i_56 += 4) 
                    {
                        arr_235 [i_26] [i_26] [i_52] [i_54] |= ((/* implicit */unsigned char) (short)-725);
                        var_70 = ((/* implicit */unsigned long long int) min((var_70), (((/* implicit */unsigned long long int) var_6))));
                        arr_236 [i_56] [i_51] [i_54] [(signed char)5] [i_51] [i_51] [i_26] = ((/* implicit */long long int) var_8);
                        var_71 = -1856055852;
                        arr_237 [i_26] [i_51] [i_52] [i_54] [i_26] [5LL] [i_51] = (-(((/* implicit */int) (unsigned char)15)));
                    }
                    for (long long int i_57 = 2; i_57 < 8; i_57 += 4) 
                    {
                        arr_241 [i_26] [i_26] [i_51] [i_51] [i_52] [i_54] [i_54] = 67092480;
                        var_72 = ((/* implicit */signed char) min((var_72), (((/* implicit */signed char) 1516141288U))));
                        arr_242 [i_51] [i_51] = ((/* implicit */long long int) 1516141288U);
                    }
                    /* LoopSeq 1 */
                    for (int i_58 = 1; i_58 < 9; i_58 += 3) 
                    {
                        arr_247 [i_51] [i_51] [i_52] [i_51] [9U] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (short)-6953)))), (2073213259)));
                        var_73 ^= ((/* implicit */long long int) -803834085);
                        var_74 -= ((/* implicit */signed char) (~(min((var_11), (((/* implicit */long long int) 1856055826))))));
                    }
                }
                for (unsigned int i_59 = 4; i_59 < 8; i_59 += 1) 
                {
                    arr_250 [i_59] [i_51] [i_52] [i_51] [i_26] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) var_3)), (min((((/* implicit */unsigned int) (short)-6953)), (1073217536U)))))));
                    arr_251 [i_51] [i_51] [i_51] [7LL] [i_51] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_3)), (3614969347646050867ULL))), (((/* implicit */unsigned long long int) -9223372036854775801LL))));
                }
                var_75 -= ((/* implicit */short) var_3);
            }
        }
        arr_252 [i_26] = min((max((((/* implicit */unsigned long long int) (_Bool)1)), (3225536100025052112ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_1)))));
        arr_253 [i_26] = ((/* implicit */unsigned long long int) (unsigned char)110);
    }
}
