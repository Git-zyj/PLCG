/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85301
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)84)), (-7795458735568459300LL)))))) ? (((/* implicit */int) arr_6 [i_0] [(signed char)13] [i_1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)0))))))));
                    var_11 = ((((/* implicit */_Bool) min(((-(623322375U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 1] [i_0])))))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])), (((((/* implicit */int) (unsigned char)116)) & (((/* implicit */int) arr_0 [(unsigned short)5]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)53)))))) : ((-9223372036854775807LL - 1LL)))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)9202)), (4871193997815548575ULL)))) ? (((/* implicit */unsigned long long int) 4032617242U)) : (max((10582981281334280481ULL), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1 + 1] [i_1]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_3 - 2] [i_3] [i_3 - 1] [i_3]))));
                        arr_11 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [(signed char)16]))));
                    }
                    for (unsigned int i_4 = 3; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        arr_14 [i_4] [i_4 - 2] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 466442277U)))))));
                        var_14 = (~(((((/* implicit */_Bool) (+(var_5)))) ? ((+(-7795458735568459300LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))));
                        var_15 = ((((/* implicit */_Bool) arr_10 [i_4])) ? (159687424007272900LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9202))));
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3))))) ? (max((((/* implicit */long long int) arr_10 [i_1 - 1])), (-159687424007272901LL))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0]))))))))));
                        arr_18 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1])), (((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))))) ? (((/* implicit */unsigned long long int) 8070450532247928832LL)) : (9296031428202875287ULL)));
                        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_5])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7680)))))) ? ((+(1633350267U))) : (max((((/* implicit */unsigned int) (unsigned short)7680)), (2661617029U))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_6 = 2; i_6 < 9; i_6 += 4) 
    {
        arr_23 [i_6 + 1] [i_6 + 1] = 712516264U;
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 2]))) & ((+(var_6))))))));
    }
    for (signed char i_7 = 1; i_7 < 8; i_7 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_8 = 2; i_8 < 7; i_8 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                arr_34 [i_7] [i_8] [i_7] [4U] = ((/* implicit */unsigned int) arr_8 [i_7] [i_7] [i_8] [i_9]);
                var_19 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
            }
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                arr_37 [i_7 + 2] [i_8 + 2] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(var_4)))) - (((((/* implicit */_Bool) arr_28 [i_7] [i_10])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                /* LoopNest 2 */
                for (long long int i_11 = 3; i_11 < 7; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        {
                            arr_42 [(unsigned short)2] [4LL] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)23951)))));
                            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_21 [i_7 + 1]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((4239136953092492751LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)42))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 2; i_13 < 7; i_13 += 1) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_6 [i_7] [i_8] [i_8] [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    var_23 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (9150712645506676329ULL)))));
                }
            }
            for (signed char i_14 = 1; i_14 < 7; i_14 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) != (9296031428202875287ULL))))));
                var_25 = ((/* implicit */unsigned long long int) ((arr_15 [i_14] [i_14 + 1] [i_14] [i_14 - 1]) - (arr_15 [i_14] [i_14] [i_14] [i_14 - 1])));
                /* LoopSeq 1 */
                for (unsigned short i_15 = 3; i_15 < 8; i_15 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((unsigned int) ((((/* implicit */_Bool) arr_31 [(unsigned char)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_7]))) : (var_8))))));
                    var_27 = ((/* implicit */unsigned char) (unsigned short)0);
                }
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 3; i_17 < 9; i_17 += 4) 
                    {
                        {
                            var_28 &= ((/* implicit */unsigned long long int) 2035703312U);
                            var_29 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (0U)))));
                            arr_54 [i_7] [i_8] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_26 [i_7] [i_7]))) : (((long long int) arr_38 [i_7 + 2] [i_8] [i_16] [i_17 - 3]))));
                        }
                    } 
                } 
                arr_55 [i_7] [(unsigned char)0] [i_14] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)143)))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) -7581267154092752893LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_29 [i_14 + 2]))))));
            }
            arr_56 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */long long int) var_3))));
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -112603326209115384LL)) ? (arr_45 [i_7 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
            arr_57 [i_7] [9U] [i_8] = ((/* implicit */unsigned int) ((var_6) + (((/* implicit */long long int) arr_32 [i_7 + 1] [i_7 + 1] [i_8] [i_8 - 2]))));
        }
        for (unsigned char i_18 = 1; i_18 < 8; i_18 += 2) 
        {
            var_31 = ((/* implicit */signed char) (~(max((((long long int) (-9223372036854775807LL - 1LL))), (((/* implicit */long long int) max(((signed char)6), (arr_61 [i_18]))))))));
            arr_62 [4U] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9296031428202875287ULL)) ? (2420459922417869247LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_18]))))) : (((/* implicit */int) ((unsigned short) max((9150712645506676329ULL), (((/* implicit */unsigned long long int) (signed char)-112))))))));
            arr_63 [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
        }
        arr_64 [i_7] = ((long long int) 274869518336LL);
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 15; i_19 += 2) 
    {
        var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_19] [i_19] [i_19] [i_19])) ? ((+(var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (3273825959U))))));
        var_33 = ((/* implicit */unsigned int) (signed char)-119);
        var_34 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [(unsigned char)18] [i_19] [i_19] [i_19]))));
        var_35 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_67 [i_19]));
        var_36 |= ((signed char) 588113730145383469LL);
    }
    for (long long int i_20 = 1; i_20 < 21; i_20 += 2) 
    {
        var_37 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_5) + (7581267154092752892LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) min((arr_68 [i_20] [(unsigned char)21]), (((/* implicit */unsigned char) (signed char)-34)))))))));
        arr_70 [i_20] [i_20] = ((/* implicit */unsigned char) var_6);
        /* LoopNest 2 */
        for (long long int i_21 = 1; i_21 < 23; i_21 += 2) 
        {
            for (int i_22 = 2; i_22 < 23; i_22 += 2) 
            {
                {
                    var_38 -= ((unsigned int) min((((/* implicit */long long int) (unsigned short)26121)), (arr_69 [i_21 + 1] [i_21 + 1])));
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_22 - 2] [i_22 + 1]))))))))));
                    var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                }
            } 
        } 
        arr_75 [i_20] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_72 [i_20 - 1] [21U] [i_20 + 2])) ? (((/* implicit */int) arr_68 [i_20 + 1] [i_20 + 3])) : (((/* implicit */int) arr_68 [i_20 + 3] [i_20 + 1]))))));
        /* LoopSeq 1 */
        for (signed char i_23 = 0; i_23 < 24; i_23 += 2) 
        {
            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_73 [i_20 + 2] [i_20 + 3] [i_20 + 2]), (((/* implicit */long long int) var_9))))) ? (((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_71 [i_20] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (arr_71 [i_20] [i_23]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_68 [i_20 + 3] [i_20 + 2])))))));
            arr_78 [(unsigned char)3] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 712516264U)) ? (var_6) : (var_8)))))))) * (min((((/* implicit */long long int) 0U)), (-588113730145383470LL)))));
            var_42 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
        }
    }
}
