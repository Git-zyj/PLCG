/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59959
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (-972733057)))), (var_0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_15 *= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) (short)-32748))))) ? (972733057) : (max((((/* implicit */int) (short)-32748)), (-972733057))))), (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32737))) & (11176318531759503609ULL)))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */short) min((arr_3 [i_1 - 2] [i_1 - 2] [i_1]), (((/* implicit */unsigned long long int) var_7))));
                }
                arr_10 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((((-972733057) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) ^ (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_3]))))) >= (((arr_11 [i_3]) ? (10969099074133915215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3])))))));
        var_17 = ((/* implicit */signed char) (short)(-32767 - 1));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 18446744073709551615ULL))));
        arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= ((-9223372036854775807LL - 1LL))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_19 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))));
            var_20 = ((/* implicit */unsigned long long int) (short)32747);
        }
        for (long long int i_6 = 3; i_6 < 22; i_6 += 4) 
        {
            var_21 += ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                arr_25 [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_4] [i_4 + 1] [i_6 + 1])) + (((/* implicit */int) arr_23 [i_7] [i_4] [i_4] [i_4]))));
                /* LoopSeq 1 */
                for (signed char i_8 = 2; i_8 < 21; i_8 += 4) 
                {
                    var_22 = ((/* implicit */short) (~(arr_17 [i_8 - 2] [i_6 - 1])));
                    arr_28 [i_4] [i_4] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) var_4))));
                    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_4] [i_6] [i_7]))));
                }
                var_24 = ((/* implicit */unsigned int) arr_21 [i_4] [i_6] [i_6]);
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_23 [i_4] [i_7] [i_4] [i_7]))))))));
            }
        }
        for (signed char i_9 = 2; i_9 < 21; i_9 += 3) 
        {
            var_26 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_17 [i_4] [i_9]))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) & (((min((7270425541950048002ULL), (((/* implicit */unsigned long long int) var_7)))) << (((((((/* implicit */_Bool) 34326183936LL)) ? (((/* implicit */int) arr_21 [10U] [i_4 - 3] [10U])) : (((/* implicit */int) arr_21 [2ULL] [i_9] [i_9 + 1])))) - (32010)))))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 22; i_10 += 4) 
            {
                for (signed char i_11 = 3; i_11 < 21; i_11 += 4) 
                {
                    {
                        arr_39 [i_9] [i_4] [i_11] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_4] [10] [i_4]))))) ? (arr_37 [(signed char)6] [i_11 - 3] [i_11] [i_10] [(signed char)6] [i_10 - 1]) : (min((((/* implicit */unsigned long long int) arr_21 [i_4] [(signed char)6] [i_4])), (arr_37 [i_11 - 2] [i_11 - 2] [i_11 + 2] [i_11] [i_10 + 1] [i_10 - 1]))));
                        var_27 = ((/* implicit */short) min((((var_1) ? (arr_26 [i_4 - 1]) : (arr_26 [i_4 - 2]))), (min((arr_26 [i_4 + 1]), (arr_26 [i_4 + 1])))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~(max((((/* implicit */unsigned int) (short)-30233)), (max((((/* implicit */unsigned int) (signed char)-1)), (3111839852U))))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 21; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                {
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_13] [i_13] [i_13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_23 [i_13] [i_13] [i_13] [i_4]))))) ? (((/* implicit */int) arr_27 [i_13] [i_13] [i_13] [i_12 - 1] [i_12] [i_13])) : (max((arr_40 [i_13]), (arr_40 [i_13])))))) >= (max((arr_17 [i_4 - 1] [i_4 + 3]), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) var_9))))))))))));
                    var_30 = ((/* implicit */short) max(((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (var_0)))))), (((/* implicit */int) max((((/* implicit */short) arr_33 [i_4])), (var_10))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_4])) + (2147483647))) << (((((/* implicit */int) arr_19 [i_14] [i_12] [i_14])) - (65)))))) ? (arr_45 [i_4] [i_12] [i_4] [i_14]) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                        var_32 = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */int) arr_16 [i_4])) : (arr_40 [i_4])));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_15 = 3; i_15 < 20; i_15 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4882)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) var_9)), (min((arr_26 [i_15]), (((/* implicit */unsigned long long int) (short)30231))))))));
        /* LoopSeq 3 */
        for (long long int i_16 = 3; i_16 < 20; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    for (signed char i_19 = 2; i_19 < 21; i_19 += 3) 
                    {
                        {
                            arr_63 [i_16] [i_16] [i_16] [8ULL] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)25427)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_17] [i_16 + 1]))) : (((unsigned int) arr_51 [i_18] [i_16 - 1]))));
                            var_35 -= ((/* implicit */short) 9223372036854775807LL);
                        }
                    } 
                } 
            } 
            arr_64 [i_15] [i_15] [i_15 - 3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [6])) << ((((~(-972733057))) - (972733049)))))) + (3147315637U)));
            /* LoopNest 2 */
            for (signed char i_20 = 0; i_20 < 23; i_20 += 4) 
            {
                for (signed char i_21 = 3; i_21 < 22; i_21 += 2) 
                {
                    {
                        arr_69 [i_21] [i_20] [i_16] [i_15 + 2] = ((/* implicit */short) (-(((unsigned long long int) arr_40 [i_20]))));
                        arr_70 [i_15] [i_15] = ((/* implicit */_Bool) max((18446744073709551615ULL), ((~(var_6)))));
                        arr_71 [i_15] [i_15] [i_15] [i_15] [i_21 - 2] [i_15] = ((/* implicit */unsigned int) var_2);
                        var_36 = var_11;
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), ((~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_15] [i_16] [i_20] [i_20] [i_15] [i_15])) ? (((/* implicit */int) (short)-28617)) : (((/* implicit */int) var_1))))) * ((~(12001206736518487489ULL)))))))));
                    }
                } 
            } 
        }
        for (long long int i_22 = 1; i_22 < 21; i_22 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_23 = 0; i_23 < 23; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_24 = 3; i_24 < 22; i_24 += 4) 
                {
                    for (int i_25 = 2; i_25 < 21; i_25 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) * (((((/* implicit */_Bool) arr_26 [i_23])) ? (arr_48 [i_23] [i_15 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32748)))))));
                            arr_81 [i_25] [i_25] |= ((/* implicit */signed char) arr_47 [i_15 - 1] [i_15 - 2] [i_15 - 1] [i_25] [i_15 - 1] [i_24 - 3]);
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) 9043415715292274247LL)) ? (((/* implicit */int) ((((/* implicit */int) arr_55 [i_23])) >= (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_27 [i_22] [i_23] [i_22 + 1] [i_22 - 1] [5U] [i_22]))));
                            var_40 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_15] [i_15] [i_15] [i_15])) << (((-1340760272) + (1340760290)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : ((-(arr_76 [i_15] [i_15] [i_15] [i_25] [i_24] [i_15])))));
                            arr_82 [i_15] [i_15 + 2] [i_22] = ((/* implicit */short) arr_65 [i_15 - 3] [6LL] [i_24 - 2] [i_25 + 2]);
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_58 [i_15] [i_22] [i_22] [i_23])) & (((/* implicit */int) arr_30 [i_15]))))));
            }
            arr_83 [i_22] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_22] [i_22] [i_22]))) >= (arr_41 [i_22 + 1] [i_15])))) >= (((/* implicit */int) (short)32747)))))));
            arr_84 [i_15] [i_22] [i_22] = ((/* implicit */unsigned short) arr_19 [i_22] [i_22] [i_22]);
        }
        for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_27 = 1; i_27 < 21; i_27 += 1) 
            {
                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)12))))), (max((((/* implicit */unsigned int) arr_61 [i_27] [i_27] [i_15] [i_15] [i_15] [i_15] [i_15])), (arr_72 [i_15])))))), ((-(-1LL))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 0; i_28 < 23; i_28 += 1) 
                {
                    for (unsigned short i_29 = 1; i_29 < 20; i_29 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned long long int) max((var_43), (max((((((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (max((((/* implicit */unsigned long long int) arr_16 [(signed char)8])), (var_12))) : (((((/* implicit */_Bool) arr_73 [0ULL] [i_26] [i_26])) ? (var_12) : (16069205085234442695ULL))))), (((/* implicit */unsigned long long int) ((min((arr_52 [i_27 + 1] [i_15]), (((/* implicit */long long int) (short)8192)))) - (arr_29 [(signed char)18]))))))));
                            var_44 &= ((/* implicit */long long int) arr_41 [i_26] [i_27 + 1]);
                            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) max((min((((/* implicit */int) var_1)), ((-(((/* implicit */int) arr_56 [i_15])))))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)2)) <= (((1340760253) - (((/* implicit */int) (unsigned short)4872))))))))))));
                            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) ((((((/* implicit */_Bool) max((arr_32 [16ULL] [16ULL]), (((/* implicit */unsigned short) arr_33 [(short)6]))))) ? (2ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1340760247)) ? (((/* implicit */int) arr_19 [10LL] [i_27 - 1] [i_29 + 1])) : (((/* implicit */int) var_1))))))))));
                            arr_97 [i_29] [i_28] [i_27] [i_27] [i_15] [i_15] = ((/* implicit */long long int) 7223478796588202401ULL);
                        }
                    } 
                } 
                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)-12342)) <= (((/* implicit */int) arr_96 [i_27 - 1] [i_27])))) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_20 [(signed char)14])), (arr_43 [14] [i_26] [14]))), (((/* implicit */unsigned int) arr_20 [6ULL]))))) : (11223265277121349216ULL))))));
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [i_15 - 3] [i_26] [i_27] [(_Bool)1] [i_27 + 2] [i_27]))))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_77 [i_26] [i_27 + 2] [i_26] [i_15 - 3])))) : (((/* implicit */long long int) (~(arr_77 [i_15] [i_27 + 1] [i_27 - 1] [i_15 + 1]))))));
            }
            arr_98 [i_15] [i_26] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_15] [i_15] [i_15] [i_15] [8ULL] [i_15]))) - (((4611686018427385856ULL) + (312807975089984591ULL))))), (((((((/* implicit */_Bool) arr_87 [i_15] [i_26] [i_26] [i_15 + 3])) ? (((/* implicit */unsigned long long int) 9223372036854775804LL)) : (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96)))))));
        }
    }
}
