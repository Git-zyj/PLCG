/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90821
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
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) 1445216953)))));
    var_16 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_1 [i_1 - 1] [i_1 - 1]) || (((/* implicit */_Bool) var_3))))), (min((9223372036854775787LL), (((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 - 1])))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    arr_8 [i_0] [(short)0] [(short)0] = ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_2]))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (arr_6 [i_1 - 1] [i_2 + 1] [i_2 + 1])))) : (((((/* implicit */_Bool) 81428800U)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1522730063U)))) : (((long long int) var_6)))));
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) 1522730054U))), (-1445216972)));
                }
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_3 [5ULL] [0LL]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                                var_21 ^= ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_14 [i_1 - 1] [i_3] [i_3] [i_1] [i_0] [i_1 - 1]), (((/* implicit */unsigned long long int) 4213538484U)))))));
                }
                arr_16 [i_1] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)2))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 2) 
    {
        arr_21 [i_6] = arr_12 [(_Bool)1] [i_6 + 1] [(_Bool)1];
        arr_22 [i_6] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(1845968260U)))))) ^ (min((arr_15 [i_6] [i_6] [18U] [i_6 + 1] [i_6 - 1] [i_6 - 1]), (((/* implicit */long long int) arr_13 [i_6]))))));
        arr_23 [i_6] [i_6 - 1] = (+(min((((/* implicit */unsigned int) -1445216961)), (arr_20 [i_6 - 1]))));
        arr_24 [i_6 - 1] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))), ((+(arr_6 [i_6 - 1] [i_6 - 1] [i_6 - 1])))));
    }
    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) (short)7216))), (max((((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_7])), (2185140177182979650ULL)))));
        var_24 &= ((/* implicit */long long int) 16U);
        arr_27 [i_7] [i_7] |= ((/* implicit */signed char) max(((-(((/* implicit */int) ((signed char) var_9))))), (((/* implicit */int) max((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 12405576017788589254ULL)))))))));
        var_25 = ((/* implicit */signed char) ((unsigned char) (signed char)-112));
    }
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_31 [i_8] [i_8])), (17802138592838888820ULL)))) || (var_9)));
            arr_33 [i_9] [21ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_31 [(unsigned short)21] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)572)))) : (((unsigned int) arr_31 [i_8] [i_9]))));
            /* LoopNest 2 */
            for (short i_10 = 2; i_10 < 22; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 1445216938)) ? (((/* implicit */int) arr_35 [i_8] [i_8])) : (((/* implicit */int) var_5)))))), ((-(6041168055920962361ULL)))));
                        var_28 = ((/* implicit */_Bool) max((min((arr_31 [i_8] [i_8]), (((/* implicit */unsigned int) arr_30 [i_8] [i_8] [i_8])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4248555228U)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_12 = 3; i_12 < 21; i_12 += 2) 
            {
                var_29 = ((/* implicit */_Bool) ((unsigned long long int) max((arr_39 [i_12] [i_12] [i_12] [i_12 - 1] [i_12 - 1] [i_12]), (var_13))));
                var_30 += ((/* implicit */unsigned long long int) var_2);
                var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 6041168055920962362ULL)) && (((/* implicit */_Bool) (signed char)86)))) || (((/* implicit */_Bool) 6041168055920962362ULL))));
            }
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                arr_46 [i_8] [i_8] [i_13] [i_13] = ((/* implicit */int) ((signed char) (+(arr_40 [i_13] [i_13 - 1] [i_13]))));
                /* LoopSeq 2 */
                for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    arr_49 [i_8] [i_9] [i_13] [i_13 - 1] = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)21)))) || (((/* implicit */_Bool) max((-1445216977), (((/* implicit */int) ((((/* implicit */_Bool) 1445216962)) && (((/* implicit */_Bool) var_5)))))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_52 [i_8] [i_9] [i_13] [i_13] [i_15] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0))))), (((((/* implicit */_Bool) 17802138592838888800ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (18446744073709551608ULL)))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((1972741873U) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((unsigned int) arr_38 [i_8] [i_9] [(short)19] [11ULL] [i_15])) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_8] [(unsigned short)17])))));
                        arr_53 [i_13] [i_9] [i_13] [i_14] [i_15] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13] [i_9] [i_13]))) : (7866266960574039448ULL)))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        var_34 ^= ((/* implicit */_Bool) ((signed char) (-(((((/* implicit */int) (unsigned char)187)) * (((/* implicit */int) (_Bool)1)))))));
                        var_35 = ((/* implicit */unsigned int) ((((_Bool) 6041168055920962362ULL)) ? (((((/* implicit */int) arr_44 [i_13] [i_13] [i_13])) % (((/* implicit */int) var_8)))) : (((/* implicit */int) min((arr_44 [i_13] [i_13] [i_13]), (arr_44 [i_13] [i_13] [i_13]))))));
                        var_36 = ((/* implicit */long long int) arr_44 [i_13] [i_13] [i_13]);
                        arr_58 [22ULL] [i_13] [19U] = ((/* implicit */unsigned int) ((unsigned long long int) 4354898187421949166LL));
                    }
                    var_37 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_10)) >= (((/* implicit */int) (unsigned char)201))))));
                }
                /* vectorizable */
                for (unsigned int i_17 = 1; i_17 < 21; i_17 += 3) 
                {
                    var_38 += ((/* implicit */short) var_10);
                    arr_61 [i_17] [i_13] [i_9] [i_13] [i_8] = ((((arr_47 [(signed char)10] [i_13] [i_13] [i_8]) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) / (arr_47 [i_17 + 2] [i_13] [i_13] [i_13 - 1]));
                }
                var_39 += ((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) arr_30 [i_8] [i_9] [i_13])) && ((_Bool)1)))))));
                var_40 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)37207)), (257036219)))) ? (-1708694179109181709LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (var_3)))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1])) || (((/* implicit */_Bool) arr_57 [i_13 - 1] [i_13] [i_13] [i_13] [i_13 - 1])))))));
            }
        }
        for (long long int i_18 = 1; i_18 < 22; i_18 += 3) 
        {
            arr_65 [i_18] [i_18] = ((/* implicit */long long int) max((var_8), (((/* implicit */short) ((var_13) >= (((/* implicit */unsigned int) arr_36 [i_18 + 1] [i_18] [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1])))))));
            var_41 = ((/* implicit */_Bool) max((var_41), (((((/* implicit */_Bool) (unsigned char)27)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_31 [i_8] [i_18])) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) arr_45 [i_8] [i_18] [i_8])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_8] [i_8] [i_8] [i_8]))))))))))));
            arr_66 [i_8] [i_18 - 1] [i_18] = ((/* implicit */unsigned long long int) ((signed char) max((((((/* implicit */_Bool) var_13)) ? (0U) : (arr_37 [(unsigned char)13] [i_18] [i_18] [(short)6] [i_8] [i_8]))), (max((((/* implicit */unsigned int) (signed char)-123)), (4150323972U))))));
            var_42 = ((/* implicit */unsigned char) 2260141278U);
        }
        arr_67 [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_35 [i_8] [i_8])), (min((((/* implicit */unsigned int) arr_48 [i_8] [i_8] [(signed char)4])), ((-(2034825989U)))))));
        /* LoopNest 3 */
        for (unsigned int i_19 = 0; i_19 < 23; i_19 += 3) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned int i_21 = 1; i_21 < 20; i_21 += 4) 
                {
                    {
                        var_43 = ((/* implicit */signed char) ((min((((/* implicit */int) arr_42 [i_21 + 3] [i_21 + 3] [i_21 + 2] [i_21 + 3])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-25839)) : (((/* implicit */int) var_11)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_13)))))))));
                        arr_78 [i_19] [i_20] [i_20] [i_21 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (short)-25839))))))));
                        arr_79 [i_8] [i_19] [i_20] [i_20] = ((/* implicit */long long int) max((arr_71 [i_21]), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned char)20)))))))));
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_8] [i_19] [i_8] [i_21] [i_21 + 2] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_8] [i_21 - 1] [i_21 + 2]))) : (arr_39 [i_8] [i_20] [(unsigned char)2] [i_20] [i_21 - 1] [(unsigned char)2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_44 [i_8] [i_21 + 1] [i_21 + 3]), (((/* implicit */short) var_12)))))) : (((7ULL) & (((/* implicit */unsigned long long int) -260351332945911177LL)))))))));
                    }
                } 
            } 
        } 
        var_45 = ((/* implicit */_Bool) min((var_45), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (short)-25839)) : (arr_36 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (arr_36 [i_8] [(_Bool)1] [i_8] [i_8] [i_8] [i_8]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 2) /* same iter space */
    {
        var_46 ^= ((/* implicit */_Bool) ((arr_81 [i_22]) / (arr_81 [i_22])));
        var_47 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 2225072130U))))));
        var_48 = ((/* implicit */short) ((unsigned int) arr_51 [i_22] [i_22] [i_22] [i_22] [i_22] [10U]));
    }
}
