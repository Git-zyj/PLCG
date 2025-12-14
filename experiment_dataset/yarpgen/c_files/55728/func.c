/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55728
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
    var_14 = ((/* implicit */unsigned short) var_2);
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (var_2)))) ? (var_5) : (((/* implicit */unsigned long long int) var_4)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_0] = max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((3807075787U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86)))))) ? (((int) (-9223372036854775807LL - 1LL))) : (1206543476))));
                    var_16 &= ((/* implicit */int) var_10);
                    arr_8 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)63))))))), (((arr_2 [i_2] [i_2] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) && (((/* implicit */_Bool) -1395196808))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (int i_4 = 3; i_4 < 14; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (var_2)))), (var_6))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */int) arr_3 [i_4 - 3])) >> (((var_3) - (13155910896128732795ULL))))) : ((~(359589851)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_1))));
        arr_17 [i_0] [i_0] &= ((/* implicit */int) ((max((((-9223372036854775806LL) + (((/* implicit */long long int) ((/* implicit */int) (short)8480))))), (((/* implicit */long long int) var_10)))) - (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    }
    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
    {
        arr_21 [15LL] [i_6] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
        arr_22 [i_6] [i_6 - 1] = ((var_0) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (1003621558U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6 - 1]))) : (((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */unsigned long long int) 2198060164U)) : (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((var_2) + (((/* implicit */int) var_8))))) : (var_7)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            arr_27 [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_24 [i_6 + 1] [i_6 + 2] [i_6 + 2]);
            var_20 = ((/* implicit */_Bool) var_11);
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)193))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_22 = var_11;
                /* LoopSeq 3 */
                for (long long int i_9 = 1; i_9 < 14; i_9 += 1) /* same iter space */
                {
                    arr_34 [i_9] = ((((/* implicit */_Bool) (+(2239934932U)))) ? (((((/* implicit */_Bool) (unsigned char)224)) ? (var_3) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                    var_23 = (-(((/* implicit */int) arr_20 [i_6 + 3])));
                    arr_35 [i_6] [i_8] [i_8] [i_6] [i_6] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_6] [(short)16] [(short)16])) ? (((/* implicit */unsigned int) arr_18 [i_6 - 1] [i_6 - 1])) : (arr_30 [i_7] [12])))) == (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) arr_29 [i_7] [i_7])))));
                    var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6 + 1] [i_9 + 4] [i_9 + 3]))) / (((arr_33 [i_9]) + (((/* implicit */long long int) var_2))))));
                    var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_9 + 1] [16LL] [16LL] [i_9 + 1])) && (((/* implicit */_Bool) var_4))));
                }
                for (long long int i_10 = 1; i_10 < 14; i_10 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) arr_24 [i_6] [i_6] [i_6])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)189)))))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6 - 1] [i_6 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [(signed char)3] [i_7] [i_7])) && (var_10)))) : (((/* implicit */int) var_8))));
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_8])) || (((/* implicit */_Bool) 8608327220307658609LL)))))) : (((var_3) << (((var_7) - (2122069529245722929LL)))))));
                    var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)66))));
                }
                for (long long int i_11 = 1; i_11 < 14; i_11 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) * (0ULL)))));
                    arr_41 [i_11] [i_7] [i_11] [i_11] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1638576237U)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))))))));
                    var_31 = ((/* implicit */unsigned long long int) arr_39 [i_7] [i_7] [17ULL] [17ULL]);
                }
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_6] [i_7] [i_6 + 3] [i_6 + 2] [i_6 + 3])) ? (((/* implicit */int) var_0)) : (arr_32 [i_6 + 3] [9U] [i_8] [i_7] [i_8])));
                arr_42 [i_6] [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_39 [i_6 + 2] [i_7] [i_6 + 2] [i_8])) : (((/* implicit */int) var_9))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_46 [i_6] [i_6] [i_7] [i_12] = var_13;
                arr_47 [i_7] [i_7] = var_10;
            }
            /* LoopSeq 4 */
            for (int i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_11))));
                /* LoopSeq 3 */
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [1] [i_7] [i_13] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */unsigned int) var_4)) : (arr_52 [12LL] [i_7] [4] [i_6 - 1] [i_6 + 1])));
                    var_35 = ((/* implicit */unsigned short) var_5);
                    arr_54 [i_13] [i_7] [i_7] [i_13] [i_13] [i_14] = 491146381;
                }
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
                {
                    arr_57 [i_13] [i_13] = ((/* implicit */int) (((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)176)) - (142))))) % (((/* implicit */long long int) var_1))));
                    var_36 |= ((/* implicit */unsigned char) var_9);
                }
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_13] [i_7] [i_13] [i_16] [i_16]))) * (arr_52 [i_6] [i_6] [i_13] [i_13] [i_16])))) / (((((/* implicit */unsigned long long int) var_1)) * (var_5)))));
                    arr_60 [i_13] [i_7] [i_7] [i_7] [i_16] [(_Bool)1] = ((/* implicit */unsigned int) (-(211828525)));
                    arr_61 [i_6 + 2] [i_7] [i_13] [i_13] = ((arr_25 [i_6 + 2]) | (((((/* implicit */_Bool) (unsigned char)176)) ? (-34151183) : (((/* implicit */int) (unsigned char)183)))));
                }
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_58 [i_6] [(short)11] [i_6] [(short)11])) : (((((/* implicit */_Bool) arr_50 [i_6 + 3])) ? (((/* implicit */int) (signed char)96)) : (var_2)))));
                arr_62 [i_13] [i_7] [i_13] = ((/* implicit */long long int) arr_43 [i_6] [i_7] [i_7] [i_13]);
                var_39 &= ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
            }
            for (int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
            {
                arr_65 [i_6] [i_17] [i_17] = (((!(((/* implicit */_Bool) var_7)))) && (((-345066607) != (arr_38 [i_6] [i_17] [i_17] [i_6 - 1] [i_17]))));
                arr_66 [13U] [i_17] = ((/* implicit */int) var_6);
                /* LoopSeq 1 */
                for (signed char i_18 = 2; i_18 < 15; i_18 += 3) 
                {
                    arr_70 [i_17] [i_17] [12] = var_1;
                    var_40 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)58)) + (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_12)) : (-751472844))) : (((((/* implicit */int) arr_58 [i_6] [i_7] [i_17] [i_7])) + (((/* implicit */int) (signed char)26)))));
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                    arr_71 [i_17] [i_17] [i_17] [i_17] = ((_Bool) (unsigned char)205);
                    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1175276307)) ? ((+(var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
                var_43 = ((/* implicit */short) ((unsigned char) 7U));
            }
            for (int i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((-2118113177) + (2118113179)))));
                arr_74 [i_6] [i_19] = (~(((/* implicit */int) (!(var_10)))));
                var_45 = ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (var_2) : (var_4)))));
                var_46 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (var_4));
                var_47 = ((/* implicit */_Bool) arr_72 [i_7] [i_19]);
            }
            for (int i_20 = 0; i_20 < 18; i_20 += 1) /* same iter space */
            {
                var_48 = ((/* implicit */int) min((var_48), (((arr_63 [i_6 + 1] [i_7] [4ULL]) / (var_2)))));
                arr_78 [i_6] [i_7] [i_20] = ((((/* implicit */_Bool) 1030237844U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (var_2)))) : (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                arr_79 [i_20] [i_20] [i_20] [(unsigned short)14] = ((/* implicit */signed char) var_12);
                arr_80 [i_20] [i_20] = ((/* implicit */signed char) ((((var_5) + (var_6))) >= (((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */unsigned long long int) -211828526)) : (0ULL)))));
            }
        }
        for (short i_21 = 0; i_21 < 18; i_21 += 1) /* same iter space */
        {
            var_49 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */long long int) var_8)), (9223372036854775807LL))));
            var_50 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((long long int) var_5))))) ? (((((/* implicit */unsigned long long int) var_1)) % (max((((/* implicit */unsigned long long int) var_4)), (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0)))))));
            var_51 = ((/* implicit */int) ((unsigned char) var_8));
            arr_84 [i_6] = ((/* implicit */_Bool) ((signed char) var_0));
            var_52 = ((/* implicit */unsigned long long int) max((var_52), (var_6)));
        }
        for (short i_22 = 0; i_22 < 18; i_22 += 1) /* same iter space */
        {
            var_53 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2656391059U)) && (((/* implicit */_Bool) 1840959835)))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) 1099377410048LL)) && (((/* implicit */_Bool) arr_39 [i_6 + 3] [i_6 + 1] [i_6 + 3] [i_22]))))))) : (arr_67 [i_6] [i_6] [i_22] [i_22])));
            var_54 = min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)96))))) || (((/* implicit */_Bool) min((var_2), (((/* implicit */int) (unsigned char)83)))))))), (((1175276307) << (((((/* implicit */int) ((unsigned short) -1525096845))) - (56947))))));
            var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) var_3))));
        }
        var_56 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))) | (1055531162664960LL)));
        var_57 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)13208)) << (((1638576231U) - (1638576220U)))))) ? ((~(((/* implicit */int) var_0)))) : (var_4))))));
    }
    for (int i_23 = 0; i_23 < 22; i_23 += 1) 
    {
        arr_92 [i_23] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (_Bool)1)), (min((2979198664U), (((/* implicit */unsigned int) var_1))))))));
        arr_93 [i_23] = var_13;
        arr_94 [i_23] = ((/* implicit */_Bool) max((1638576252U), (((/* implicit */unsigned int) (unsigned char)162))));
    }
}
