/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95558
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
    var_14 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(arr_15 [i_1 - 2]))));
                                var_15 = min((min((((/* implicit */long long int) (~(var_7)))), (6352780025174829211LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (4294967295U)))));
                                var_16 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1] [i_3]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)236), (((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))))) : (((((/* implicit */_Bool) -6352780025174829212LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) : (0ULL)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (max((var_9), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0])))))))));
                    arr_17 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) >= (var_13))))) == (((3300372057406570333LL) >> (((((/* implicit */int) arr_8 [i_0])) + (86))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (int i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_18 += ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_26 [i_7] [i_6] [i_5] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_5] [i_6] [i_7])))), ((~(((/* implicit */int) arr_26 [i_7] [i_6] [i_5] [i_0]))))));
                        arr_27 [i_0] [i_5] [i_0] = arr_22 [i_0] [i_5] [i_6] [i_7];
                        var_19 += ((/* implicit */unsigned char) (((~(arr_19 [10ULL] [i_0 + 1]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((6352780025174829202LL) & (-6352780025174829211LL)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)5)) >= (var_11)))) : (((/* implicit */int) var_2)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((arr_0 [(unsigned short)6]) >> (((((/* implicit */int) (signed char)-89)) + (133)))))) ? (((((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << (((755608907) - (755608907))))) : (((/* implicit */int) min((arr_3 [(short)2]), ((signed char)103)))))))))));
    }
    for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        var_21 *= ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (unsigned char)245)))));
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((max((min((((/* implicit */unsigned long long int) -755608907)), (10807559126998766918ULL))), (((/* implicit */unsigned long long int) arr_28 [i_8])))), (((/* implicit */unsigned long long int) 755608907)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 22; i_12 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_9])))))));
                        var_24 = ((/* implicit */unsigned short) ((unsigned int) arr_35 [i_9] [i_11] [i_10] [i_12 - 1]));
                        var_25 -= ((/* implicit */unsigned short) (~(arr_35 [i_11] [i_11] [i_11] [i_11])));
                    }
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        arr_45 [i_11] = ((/* implicit */long long int) (!(((var_11) >= (((/* implicit */int) var_1))))));
                        arr_46 [i_13] [i_11] [i_11] [i_9] [i_8] = ((/* implicit */unsigned short) arr_28 [i_8]);
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned short)4))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_8] [i_8] [i_11])) || (((/* implicit */_Bool) var_9))));
                    }
                    var_28 += ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : (-6352780025174829212LL)));
                    var_29 = ((/* implicit */unsigned long long int) 1979865660801800686LL);
                }
                for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_10)))))) | (-6298903196341155331LL)));
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_40 [i_8] [i_8] [i_9] [i_9] [i_10] [i_14]))))) | (min((((/* implicit */unsigned long long int) var_1)), (2733812490604398741ULL)))))) ? (((/* implicit */int) ((arr_31 [i_10]) == (((/* implicit */long long int) (+(2147483647))))))) : (((/* implicit */int) (((~(arr_31 [i_14]))) != (((/* implicit */long long int) (+(var_6))))))))))));
                }
                for (unsigned int i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    var_32 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20)) % (((/* implicit */int) (unsigned short)31178))))), (13204601997008383240ULL)))));
                    var_33 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)34359)) : (((/* implicit */int) arr_29 [i_8])))) <= (((((/* implicit */int) (signed char)-127)) & ((~(((/* implicit */int) (unsigned char)19))))))));
                    var_34 = ((/* implicit */long long int) arr_28 [i_8]);
                    arr_52 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)5))));
                }
                for (long long int i_16 = 1; i_16 < 20; i_16 += 2) 
                {
                    var_35 = ((/* implicit */signed char) ((unsigned int) arr_37 [i_8] [i_9] [i_10] [i_16] [i_10]));
                    var_36 += ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_54 [i_16 - 1] [i_9] [i_10] [i_16]))))));
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned long long int) -537408168))))) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_42 [i_9] [i_8] [i_9] [i_16] [i_9] [i_8] [i_16 + 2]))))) : ((~(((/* implicit */int) arr_42 [i_8] [i_9] [i_10] [i_16] [i_10] [i_10] [i_16 - 1])))))))));
                    var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_8] [i_9] [i_10] [i_16] [i_8])) ? (arr_28 [i_16 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_8] [i_8]))))))));
                }
            }
            /* LoopSeq 2 */
            for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
                    {
                        {
                            arr_65 [i_8] [i_9] [i_17] [i_19] [i_19] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((unsigned long long int) max((-1656805166), (((/* implicit */int) (unsigned char)10))))))));
                            var_39 += ((/* implicit */unsigned short) ((max(((-(arr_43 [i_17] [i_17] [i_17] [i_17] [i_8]))), (((/* implicit */int) arr_42 [i_8] [i_9] [i_17] [i_19] [i_19] [i_19] [i_19])))) + ((+(((/* implicit */int) arr_64 [i_8] [i_17] [i_17] [i_18] [i_17] [i_18] [i_17]))))));
                            arr_66 [i_8] [i_9] [i_19] [i_18] [i_19] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_38 [i_8] [i_9] [i_17] [i_17] [i_18] [i_19]), (arr_48 [i_8] [i_9])))) ? (((/* implicit */int) ((signed char) arr_35 [i_8] [i_9] [i_18] [i_19]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 7058649904652657326ULL))))))), (((/* implicit */int) var_4))));
                            var_40 = arr_54 [i_17] [i_17] [i_17] [i_17];
                        }
                    } 
                } 
                arr_67 [i_17] = ((/* implicit */unsigned int) min((((min((((/* implicit */long long int) var_0)), (-7603305297614103117LL))) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)50161))))))), (max((-7504055914325676463LL), (9223372036854775807LL)))));
                /* LoopSeq 2 */
                for (long long int i_20 = 1; i_20 < 21; i_20 += 4) 
                {
                    var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_53 [i_8] [i_20 + 2]), (((/* implicit */unsigned char) ((signed char) 7504055914325676452LL))))))));
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((unsigned long long int) -537408155))))) && (((/* implicit */_Bool) ((unsigned char) (signed char)63)))));
                }
                for (unsigned short i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    var_43 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_1)))));
                    var_44 += ((/* implicit */signed char) ((((((/* implicit */long long int) -537408168)) != (((long long int) arr_36 [i_8] [i_8])))) ? (((/* implicit */int) arr_63 [i_8] [i_21] [i_8] [i_9] [i_8])) : ((-(((/* implicit */int) arr_48 [i_8] [i_8]))))));
                }
            }
            for (long long int i_22 = 0; i_22 < 23; i_22 += 2) 
            {
                var_45 *= ((/* implicit */unsigned short) (!((((+(((/* implicit */int) (signed char)-123)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                /* LoopSeq 2 */
                for (long long int i_23 = 1; i_23 < 20; i_23 += 2) 
                {
                    arr_79 [i_8] [i_23] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_44 [i_9] [i_23 - 1] [i_23] [i_23 + 3])), ((unsigned char)255)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (1958645667448907118ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((-537408168) == (((/* implicit */int) (unsigned short)65509))))))))));
                    var_46 = ((/* implicit */unsigned char) max(((((-(119312566U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (1527621854) : (arr_77 [i_23] [i_23] [i_9] [i_23] [i_8])))))), (((/* implicit */unsigned int) var_0))));
                }
                for (unsigned char i_24 = 0; i_24 < 23; i_24 += 3) 
                {
                    arr_82 [i_24] [i_22] [i_24] [i_24] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_24] [i_22] [i_22] [i_9] [i_8] [i_8]))) + (4352635034042204833LL)))) ? (537408138) : ((-(((/* implicit */int) arr_76 [i_8] [i_24] [i_22] [i_24]))))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                    var_47 = ((/* implicit */unsigned char) ((unsigned int) var_6));
                    var_48 &= ((min((((/* implicit */unsigned long long int) arr_29 [i_24])), (12024580980839163744ULL))) & (((/* implicit */unsigned long long int) 966658268U)));
                    arr_83 [i_22] [i_24] [i_22] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1656805144)) ? (2319694185U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (min(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (unsigned short)59484)) ? (((/* implicit */int) var_12)) : (-1656805129))))) : (-1527621838)));
                    var_49 ^= (~(((unsigned long long int) arr_35 [i_8] [i_8] [i_8] [i_8])));
                }
            }
            arr_84 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */int) ((max((var_7), (((/* implicit */int) (unsigned short)0)))) >= (((/* implicit */int) arr_29 [i_8]))))), (min(((+(1656805156))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)45914)) : (-1527621855)))))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            arr_89 [i_25] [i_25] = ((/* implicit */unsigned int) var_1);
            /* LoopNest 3 */
            for (unsigned int i_26 = 1; i_26 < 20; i_26 += 1) 
            {
                for (long long int i_27 = 1; i_27 < 22; i_27 += 1) 
                {
                    for (short i_28 = 0; i_28 < 23; i_28 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((var_8), ((signed char)63)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_55 [i_27] [i_25]))))) : (max((var_13), (((/* implicit */unsigned int) arr_73 [i_8] [i_8] [i_8]))))))));
                            var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((signed char) var_12))))) < ((+(6291456U))))))));
                            var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) arr_43 [i_26 + 2] [i_27] [i_27] [i_27] [i_8]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_29 = 3; i_29 < 20; i_29 += 1) 
            {
                for (unsigned int i_30 = 1; i_30 < 22; i_30 += 1) 
                {
                    for (unsigned short i_31 = 0; i_31 < 23; i_31 += 4) 
                    {
                        {
                            var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)53)) == (((/* implicit */int) var_4)))))));
                            var_54 *= ((/* implicit */signed char) 18446744073709551615ULL);
                        }
                    } 
                } 
            } 
            var_55 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
        }
    }
    var_56 = ((/* implicit */unsigned char) ((var_9) >> (((var_6) - (2145507375U)))));
    var_57 = ((/* implicit */unsigned short) (~(6291456U)));
    var_58 = ((/* implicit */long long int) (+((-(((int) var_9))))));
}
