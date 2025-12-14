/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57726
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_4 [i_0] [i_2]);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) 536870904U))));
                            var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (var_9) : (((/* implicit */unsigned long long int) arr_11 [i_4] [i_1])))))));
                            var_18 *= ((/* implicit */unsigned short) (+(var_10)));
                            arr_15 [i_0] [i_3 + 1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28520)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_2 [i_3 + 1])));
                            arr_16 [i_0] [i_1] [i_1] [6U] [i_4] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [11]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_19 -= ((unsigned short) (unsigned short)28520);
                            var_20 *= (unsigned short)28520;
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1] [i_3] [i_3] [i_3 - 2])) * (((/* implicit */int) (!(((/* implicit */_Bool) 1587795442))))))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */int) var_1)) < (var_12))))));
                        }
                        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) var_0)))) : ((+(var_14)))));
                        var_24 = ((/* implicit */int) min((var_24), (var_8)));
                        var_25 += ((/* implicit */_Bool) (+(arr_1 [i_1])));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~((-2147483647 - 1)))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((6772410918773469125ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [i_7] [i_8] [i_7]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))))));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned int) (unsigned short)63)))));
            }
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
            {
                var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)65472))) - (((/* implicit */int) arr_21 [i_0] [i_0] [i_7] [i_7] [i_9] [i_9] [i_9]))));
                /* LoopSeq 3 */
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [(_Bool)1] [i_10] [i_9])) ? (var_3) : (arr_28 [i_0] [i_0] [i_7]))))));
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((1410729010) | (((/* implicit */int) (unsigned short)45007)))) << (((arr_6 [i_7]) - (14231038192769015611ULL))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_25 [10ULL] [0ULL] [i_11]))) <= (((/* implicit */int) var_7)))))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)37024)))))));
                    }
                    var_34 |= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */int) arr_9 [i_10])) : (((/* implicit */int) arr_34 [i_0] [i_7] [i_7] [i_0] [i_7])))));
                    var_35 ^= ((/* implicit */int) arr_4 [i_0] [i_0]);
                }
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    var_36 = ((/* implicit */int) var_1);
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) arr_30 [18] [18] [18] [i_12] [i_12] [i_7]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_0))));
                        arr_41 [i_0] [i_13] [i_12] [i_9] [i_7] [0ULL] [i_0] = ((/* implicit */int) arr_9 [i_7]);
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) var_14))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_40 &= ((/* implicit */int) var_13);
                        arr_44 [i_0] [i_7] [i_9] [i_12] [14ULL] = (~(arr_13 [i_0]));
                        var_41 = (-(arr_25 [2ULL] [i_12] [i_12]));
                        arr_45 [i_0] [(unsigned short)14] [5U] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_0] [i_0] [(_Bool)1] [i_0]));
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_14] [i_14])) ? (((/* implicit */int) arr_4 [i_12] [i_7])) : (((/* implicit */int) arr_4 [i_0] [i_9])))))));
                    }
                    arr_46 [i_0] [i_9] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_7] [i_0]))) : (arr_8 [i_12] [i_7] [i_9] [i_12])));
                    var_43 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_9]))) ? (((/* implicit */unsigned int) ((int) -1111970405))) : (arr_19 [i_9] [(unsigned char)10] [i_9] [i_7] [i_9] [i_9] [(unsigned short)4])));
                }
                for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    var_44 |= ((/* implicit */unsigned char) var_13);
                    var_45 += ((/* implicit */unsigned char) ((int) arr_10 [(_Bool)1] [i_9] [i_0] [i_0]));
                }
            }
            for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
            {
                var_46 = ((/* implicit */unsigned short) arr_50 [i_0] [2ULL] [i_0] [i_0]);
                var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) - (arr_17 [i_0] [i_7] [i_16] [(unsigned short)6])))) ? (((/* implicit */int) (unsigned short)28524)) : (((/* implicit */int) arr_3 [i_0] [i_7]))));
                var_48 &= ((/* implicit */unsigned long long int) ((var_3) > (arr_14 [i_0] [i_7] [i_16] [i_16] [i_0] [i_0] [i_7])));
            }
            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65501)) <= (((/* implicit */int) arr_35 [i_0] [(unsigned short)16] [i_7] [i_7] [i_7])))))));
            /* LoopSeq 1 */
            for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                var_50 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1736594699)) ? (((/* implicit */int) arr_7 [i_0] [i_7] [i_7] [i_17])) : (arr_30 [i_0] [i_0] [i_7] [i_17] [i_17] [i_17])));
                var_51 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_17])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            }
        }
        arr_56 [(unsigned char)3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)28498)) ? (((/* implicit */int) (unsigned short)54220)) : (800554380)));
        /* LoopSeq 1 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_60 [i_18] [i_18] [i_0] = ((/* implicit */_Bool) (-(var_10)));
            var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) ((((/* implicit */_Bool) -462403583)) || (((/* implicit */_Bool) var_6)))))));
        }
    }
    for (int i_19 = 0; i_19 < 17; i_19 += 3) 
    {
        var_53 ^= ((/* implicit */unsigned short) var_3);
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
        {
            for (unsigned char i_21 = 0; i_21 < 17; i_21 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 3) 
                    {
                        for (unsigned short i_23 = 2; i_23 < 14; i_23 += 2) 
                        {
                            {
                                var_54 ^= min((min((arr_68 [i_23 + 3] [i_23] [i_23] [i_20] [(unsigned char)14] [i_23]), (arr_68 [i_23 + 3] [i_23 + 3] [(unsigned short)12] [i_23] [i_23] [i_23 - 2]))), (max((arr_68 [i_23 + 3] [(unsigned char)16] [16ULL] [i_21] [i_23] [i_23 + 3]), (((/* implicit */unsigned short) var_13)))));
                                var_55 -= ((/* implicit */unsigned long long int) ((var_9) <= (((/* implicit */unsigned long long int) var_5))));
                                var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) arr_36 [i_19] [i_21] [i_22] [(_Bool)1]))));
                            }
                        } 
                    } 
                    arr_72 [i_19] [i_20] [7] = (i_19 % 2 == zero) ? (((/* implicit */unsigned short) ((((var_6) >> (((arr_50 [i_19] [i_19] [19U] [i_19]) - (1110798360U))))) + (((((/* implicit */int) ((unsigned short) var_6))) - ((-(((/* implicit */int) var_0))))))))) : (((/* implicit */unsigned short) ((((var_6) >> (((((arr_50 [i_19] [i_19] [19U] [i_19]) - (1110798360U))) - (3064423264U))))) + (((((/* implicit */int) ((unsigned short) var_6))) - ((-(((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_24 = 0; i_24 < 23; i_24 += 3) /* same iter space */
    {
        var_57 |= ((/* implicit */signed char) var_13);
        var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_7)))))));
    }
    for (unsigned char i_25 = 0; i_25 < 23; i_25 += 3) /* same iter space */
    {
        arr_78 [i_25] &= ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)37012)))) + (max((((/* implicit */int) arr_75 [i_25] [i_25])), (arr_74 [6])))));
        arr_79 [i_25] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_74 [(signed char)14])))));
    }
    var_59 = ((/* implicit */unsigned char) ((min((((/* implicit */int) ((-1470041735) <= (((/* implicit */int) var_7))))), ((-(var_8))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (var_5) : (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) min((var_4), (var_4)))) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 4) 
    {
        for (unsigned int i_27 = 2; i_27 < 16; i_27 += 2) 
        {
            {
                var_60 += ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (unsigned short)52698)) - (52696))));
                var_61 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_64 [i_26])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) arr_64 [i_27]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_26])) && (((/* implicit */_Bool) arr_64 [i_27 + 1])))))));
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 17; i_28 += 4) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 3) 
                    {
                        {
                            arr_93 [i_26] [i_26] [i_27 + 1] [(unsigned char)5] [7] [i_29] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
                            var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) var_2)) + (1142631838U)))) && (((/* implicit */_Bool) ((((-1087205975) - (((/* implicit */int) (unsigned char)96)))) - (((/* implicit */int) (unsigned short)11))))))))));
                            arr_94 [i_26] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((int) (unsigned char)196)))));
                            var_63 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_68 [i_27 - 2] [i_27] [i_27] [i_27] [i_27 - 1] [i_27])) << (((((/* implicit */int) ((unsigned char) arr_6 [i_27]))) - (59))))) + (min((((((/* implicit */_Bool) arr_49 [10] [(_Bool)1])) ? (arr_11 [i_28] [i_28]) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
