/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59085
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
    var_15 = ((/* implicit */unsigned short) var_1);
    var_16 = ((/* implicit */long long int) var_1);
    var_17 = ((/* implicit */long long int) ((signed char) min(((+(var_4))), (min((((/* implicit */long long int) var_8)), (var_9))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) arr_1 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_2 [(unsigned char)13] [(unsigned char)13]);
        arr_5 [i_0] = ((arr_2 [i_0 + 2] [i_0]) >= (arr_2 [i_0 - 1] [7LL]));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)415)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (13918216754665290111ULL)));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (var_2))) : (((unsigned long long int) arr_7 [i_2] [8LL])));
                    var_20 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(16142246761711115046ULL))))));
                }
            } 
        } 
        arr_14 [i_1] = var_7;
        var_21 += ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) (unsigned short)46075)));
        /* LoopNest 3 */
        for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_22 [(_Bool)1] [i_5] [8U] [8U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (4302388717838696925LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_23 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_5] [i_4 - 1] [i_4 - 1])) ? (arr_19 [i_4 + 1] [i_5] [i_4 + 1] [i_4 - 2]) : (((/* implicit */unsigned long long int) arr_8 [i_4 + 1] [i_4 - 1]))));
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4 - 2]))));
                        var_23 = ((/* implicit */_Bool) (signed char)63);
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 3; i_7 < 13; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 1; i_8 < 12; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_8 + 1] [i_8])) ^ (var_2))))));
                        arr_34 [i_7] [2LL] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) arr_33 [i_8 - 1] [i_8 - 1] [i_8 - 1]))), ((-(((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) | (-8079246644405897084LL)))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */_Bool) var_5)) ? (4302388717838696924LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (4302388717838696924LL)))))) ? (((((/* implicit */_Bool) ((unsigned char) 4398046511103ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)65535)))) : (arr_24 [i_7 - 1]))) : (((/* implicit */unsigned long long int) 4294967295U)))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_30 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 13918216754665290127ULL)))) != (max((17592186044416LL), (var_4))))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [i_7] [(signed char)10])), ((unsigned short)60669)))))))));
            arr_35 [i_7] = ((/* implicit */long long int) max(((~((+(((/* implicit */int) (unsigned char)135)))))), (((/* implicit */int) min((max(((_Bool)1), (arr_25 [i_7] [i_7 - 3]))), (arr_26 [(_Bool)1] [i_8 + 1] [2LL]))))));
            arr_36 [i_7] [(unsigned char)4] = ((((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4302388717838696910LL)))))) > (((arr_28 [0LL] [0LL] [0LL] [i_8]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [(_Bool)1] [i_8 + 1] [11LL]))))))) ? (((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) arr_24 [i_8 + 1])) ? (-4302388717838696911LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (var_4))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_27 [(unsigned short)9] [13ULL]))))))));
        }
        for (signed char i_11 = 1; i_11 < 13; i_11 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) var_11)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) / (var_4))))));
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_28 [(unsigned char)11] [(unsigned char)11] [(_Bool)1] [(unsigned short)11])), ((unsigned short)127)))), (var_5))))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_12 = 1; i_12 < 12; i_12 += 1) /* same iter space */
        {
            arr_42 [i_7] = ((/* implicit */unsigned long long int) var_8);
            var_29 = ((/* implicit */_Bool) (+(201357305U)));
            /* LoopNest 2 */
            for (long long int i_13 = 3; i_13 < 12; i_13 += 1) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_47 [(unsigned short)6] [(unsigned char)5] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
                        arr_48 [i_7] [i_7] [i_7] [i_14 - 1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 875437381011901702ULL)) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) arr_45 [i_7] [i_7] [(unsigned char)0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_7])) - (((/* implicit */int) var_0))))) : (min((var_9), (((/* implicit */long long int) var_6)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_15 = 1; i_15 < 12; i_15 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [2LL] [i_7 - 3])))))) ? (((/* implicit */long long int) 4093609985U)) : (max((-5354833193568452294LL), (((/* implicit */long long int) arr_28 [i_7] [i_7] [i_7 - 3] [i_7])))))));
            arr_53 [i_7] [5U] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3792722322U)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (signed char)-86)))))));
            arr_54 [i_7] [(signed char)2] = arr_25 [i_7] [i_15 + 2];
            var_31 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7] [i_7 - 1] [i_7 - 3])) && (((/* implicit */_Bool) arr_29 [i_7 - 3] [i_7 - 1] [i_7 - 2]))))), (((unsigned long long int) 17571306692697649918ULL)));
        }
        arr_55 [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)50))))) - ((+(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 3; i_17 < 13; i_17 += 2) 
            {
                for (unsigned short i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    {
                        arr_62 [(unsigned char)10] [8LL] [i_17] [i_7] = (_Bool)1;
                        arr_63 [i_7 - 3] [(unsigned char)8] [i_7 + 1] [i_7 - 2] [i_7] = ((/* implicit */unsigned int) (((((~(arr_46 [i_7] [i_17 - 3] [i_17 - 2]))) + (9223372036854775807LL))) >> (((((((((/* implicit */_Bool) arr_30 [i_7 - 3] [(_Bool)0] [i_7 - 3] [8LL])) ? (((((/* implicit */_Bool) var_2)) ? ((-9223372036854775807LL - 1LL)) : (3327242520215594700LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_39 [i_7] [(unsigned short)8] [(unsigned short)4]))))))) - (-9223372036854775762LL))) + (95LL)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_19 = 1; i_19 < 8; i_19 += 2) 
    {
        var_32 = (unsigned short)7970;
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 10; i_20 += 2) 
        {
            for (long long int i_21 = 1; i_21 < 8; i_21 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_46 [i_21] [1U] [i_21 - 1]), (8796093022207LL)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_46 [i_21] [i_21] [i_21 + 1]) : (arr_46 [i_21] [(_Bool)1] [i_21 + 2]))) : (max((arr_46 [i_21] [(_Bool)1] [i_21 + 1]), (arr_46 [i_21] [(unsigned short)6] [i_21 - 1])))));
                        var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_19] [i_19])) ? (((((/* implicit */_Bool) arr_64 [i_19] [i_19 + 1])) ? (2ULL) : (((/* implicit */unsigned long long int) arr_66 [i_19])))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (unsigned char)0)), (var_4))) - (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_35 += ((/* implicit */long long int) arr_50 [i_19] [5U]);
                        var_36 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-77))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_17 [i_19 + 1] [i_19 - 1] [i_19 + 2])) - (50874)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        for (unsigned short i_25 = 4; i_25 < 9; i_25 += 2) 
                        {
                            {
                                arr_81 [i_21] = ((/* implicit */signed char) var_10);
                                var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) 4093609991U)))))) <= (((((/* implicit */_Bool) (unsigned char)211)) ? (((((/* implicit */_Bool) arr_20 [6ULL] [6ULL] [i_21 - 1] [i_21 - 1])) ? (201357310U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58830)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)13))) | (7932865577386054540LL)))) ? (arr_68 [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))));
        var_40 = arr_11 [9ULL] [i_19];
        arr_82 [0LL] [1ULL] = ((/* implicit */_Bool) arr_2 [6U] [(_Bool)1]);
    }
}
