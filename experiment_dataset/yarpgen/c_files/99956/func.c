/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99956
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            arr_7 [i_0] = ((((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 2]))))) : (min((var_10), (((/* implicit */long long int) -770757476)))));
            var_12 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])) % (134086656))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1 + 1]))) : (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (4837725115003633944ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))))))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_10 [(unsigned char)13] = ((((/* implicit */_Bool) ((arr_1 [i_2] [i_0]) ? (((var_2) & (arr_8 [(unsigned char)1] [i_0] [i_0]))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_11)))), ((!(((/* implicit */_Bool) var_9)))))))) : ((-((~(8992772730110733359ULL))))));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((arr_15 [i_5] [i_3 + 2] [i_0]) & (arr_15 [i_5] [i_3 - 1] [i_2]))))));
                            var_14 -= var_0;
                        }
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_4] [16LL])) + ((+((+(((/* implicit */int) var_3)))))))))));
                            arr_24 [i_0] [i_2] [i_2] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) (short)6896)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (11222053239937280797ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */short) (signed char)21)), ((short)0)))))))));
                            arr_25 [i_0] [i_0] [i_3] [i_2] [i_6] [i_6] [8] |= (_Bool)1;
                            arr_26 [i_4] [i_2] [i_4] [i_0] [i_6] &= ((/* implicit */int) max(((-(var_1))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)36)) - (var_2))))))));
                            var_16 = ((/* implicit */unsigned char) (-(max((2147483647), (((/* implicit */int) (unsigned char)3))))));
                        }
                        arr_27 [i_3] [i_3 - 1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_3] [i_2]))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_30 [i_3] [i_4] [i_2] [i_3] [i_7 + 1] [i_2] [i_0] = ((((long long int) (unsigned char)29)) <= (((/* implicit */long long int) ((/* implicit */int) var_5))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (max((arr_4 [i_3 + 4] [i_7 + 1]), (((/* implicit */unsigned char) (_Bool)0))))));
                            var_18 *= ((/* implicit */long long int) arr_0 [i_7 + 1] [i_2]);
                            arr_31 [i_3] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1189518636U), (((/* implicit */unsigned int) (short)32767))))) ? (((/* implicit */int) (signed char)-64)) : (var_2)));
                        }
                        for (short i_8 = 2; i_8 < 19; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((1457242473) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-14))) + (var_10)))))))))));
                            var_20 = ((/* implicit */signed char) (((!(arr_11 [i_3] [i_3 + 2]))) ? (max((((/* implicit */unsigned int) arr_11 [i_3] [i_3 + 1])), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (arr_0 [i_3] [i_3 - 1])))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_36 [i_3] [i_9] [i_4] [i_3] [(_Bool)1] [i_3] = ((/* implicit */signed char) var_5);
                            arr_37 [i_0] [i_2] [i_9] [i_4] [i_9] |= ((/* implicit */long long int) 1292787418);
                        }
                        var_21 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) arr_16 [i_3] [i_3 + 4] [i_3] [i_3 + 2] [i_3] [i_3 + 4] [i_3])) ? (var_2) : (((/* implicit */int) var_3))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (unsigned short i_11 = 2; i_11 < 18; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            arr_48 [i_0] [i_2] [i_11 + 2] [i_12] = ((/* implicit */unsigned char) ((unsigned short) var_7));
                            arr_49 [(_Bool)1] [i_10] [i_12] [i_11] [i_12] [i_0] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_3)), (max((var_11), (((/* implicit */unsigned long long int) arr_8 [i_12] [i_2] [i_2])))))), (((/* implicit */unsigned long long int) ((var_2) & ((+(((/* implicit */int) arr_0 [i_2] [(_Bool)1])))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_13 = 3; i_13 < 18; i_13 += 4) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) arr_23 [i_13 - 2] [i_0] [i_13 + 1] [i_0] [i_13 + 1])))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_47 [i_13] [i_0] [(signed char)16] [i_0] [(short)12] [i_0] [i_0])) ^ (((/* implicit */int) (short)9447))))))));
            var_23 = ((/* implicit */long long int) min((((arr_13 [i_13 + 1] [i_0] [i_13 - 2]) & (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_13 + 1])) ? (4294967273U) : (((/* implicit */unsigned int) -134086657)))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_5))))) / ((+(((/* implicit */int) var_0)))))))));
            arr_52 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (4294967272U)))) % (7224690833772270806ULL))) >= (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_46 [i_0] [i_0])) + (arr_19 [i_0] [(_Bool)1] [i_13])))))));
        }
        var_24 -= ((/* implicit */short) min(((+(((5312161693830436233LL) / (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) (+(var_2))))));
        /* LoopSeq 3 */
        for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_57 [i_0] [i_0] [i_14] [i_15] = ((/* implicit */unsigned char) min((4294967284U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-64)) : (arr_19 [i_0] [i_14] [i_15]))) != (((/* implicit */int) max((var_5), ((_Bool)1)))))))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15572)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)55))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) ((short) 4294967289U))), (((((/* implicit */int) (unsigned char)180)) ^ (((/* implicit */int) (unsigned short)49560))))))));
                    var_27 = max((((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (-2LL))))), (7LL));
                }
            }
            /* vectorizable */
            for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                arr_63 [i_14] |= ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)28796))))));
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (-(arr_42 [i_0] [i_14] [i_17] [i_18]))))));
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((var_9) / (((/* implicit */int) var_7)))) * (((/* implicit */int) ((signed char) arr_28 [i_14] [i_0]))))))));
                }
            }
            arr_67 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_11), (var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) : (var_10))) : (((/* implicit */long long int) 4261412864U)))) <= (((/* implicit */long long int) ((/* implicit */int) max((max((var_6), (((/* implicit */unsigned short) var_8)))), (((/* implicit */unsigned short) arr_65 [i_0] [i_0] [i_14] [i_0]))))))));
            var_30 = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) 4294967295U))), ((~(var_9)))));
            arr_68 [i_0] [i_0] [i_14] = ((/* implicit */unsigned short) min(((+(min((((/* implicit */long long int) (unsigned char)234)), (5487574681256043964LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0]))) : (arr_21 [i_0] [i_14] [i_0] [i_14] [i_0]))) >= (((/* implicit */unsigned int) (-(arr_40 [(short)4] [i_0] [i_14] [i_14])))))))));
        }
        for (unsigned int i_19 = 0; i_19 < 20; i_19 += 4) 
        {
            arr_73 [i_19] [i_19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17592186044415LL)) ? (((/* implicit */int) arr_5 [i_0] [i_19] [i_19])) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1)))))))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max(((-(-8LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)23548)))))))) >= (min((((/* implicit */unsigned long long int) arr_47 [i_0] [i_19] [i_19] [i_19] [i_19] [i_19] [i_0])), (var_11))))))));
            arr_74 [i_0] |= ((/* implicit */signed char) 812617613581504713LL);
        }
        /* vectorizable */
        for (signed char i_20 = 4; i_20 < 19; i_20 += 3) 
        {
            arr_79 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_69 [(short)2] [i_20] [i_20])) ? (((/* implicit */int) arr_5 [i_20 - 2] [i_20 - 2] [i_20 - 2])) : (((/* implicit */int) var_6))));
            arr_80 [i_0] [i_0] [i_20] = ((/* implicit */int) (-(var_11)));
            arr_81 [i_20] [i_20 - 3] [i_20 - 3] = (+((-(((/* implicit */int) arr_46 [i_20] [i_20])))));
        }
        arr_82 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((var_9) / (((/* implicit */int) var_7))))))), (((max((((/* implicit */long long int) var_2)), (-812617613581504714LL))) >> (((((((/* implicit */int) var_6)) - (((/* implicit */int) var_7)))) - (1467)))))));
        var_32 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_50 [(unsigned short)6] [i_0])), (((((/* implicit */_Bool) (unsigned char)126)) ? (2047LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    }
    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (max((min((((/* implicit */int) var_3)), (var_2))), ((~(var_2))))) : (max((((((/* implicit */int) (unsigned short)49560)) << (((((/* implicit */int) var_7)) - (18816))))), (((((/* implicit */_Bool) var_6)) ? (var_2) : (var_2))))))))));
}
