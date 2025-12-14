/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73885
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
    var_14 &= ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_2 [(short)4] = ((/* implicit */short) max((3908298315U), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_10)) << (((((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) + (14005))) - (26))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(((unsigned int) arr_1 [i_0 + 1] [i_0 - 1]))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) ((short) arr_0 [i_0]));
                    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) arr_6 [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5)))))) ^ (var_13)));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_13 [i_3] [i_4])))));
            arr_17 [i_4] [i_4 + 1] = ((unsigned short) ((((/* implicit */int) (short)-21941)) == (((/* implicit */int) arr_7 [i_3] [i_3] [6LL] [i_4]))));
        }
        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~((+(((/* implicit */int) (short)-21941)))))))));
            /* LoopSeq 2 */
            for (short i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
            {
                var_18 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_7 [i_3] [i_6 + 1] [i_6] [i_6 + 4])))) ? (((/* implicit */int) max((arr_7 [i_3] [i_6 + 4] [i_6] [i_6 + 1]), (arr_7 [(signed char)1] [i_6 + 1] [i_6 + 4] [i_6])))) : (((/* implicit */int) arr_7 [i_3] [i_6 + 3] [i_6] [i_6 + 3]))));
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_8 [i_5] [i_5] [i_6 + 4]) + (4294967295U)))), (arr_23 [i_3] [i_3] [i_3] [i_3])));
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) min((arr_21 [i_3] [i_3]), (((/* implicit */short) arr_7 [(unsigned char)0] [i_5] [i_6] [(short)8]))))), (((((((/* implicit */int) (short)-30154)) + (2147483647))) >> (((((/* implicit */int) var_11)) - (106))))))))));
                    arr_28 [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_5] [i_6] [i_7])) : (((/* implicit */int) var_9))))) ? (min((((/* implicit */long long int) (unsigned char)81)), (-874561986764763466LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((2657299011U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-7566))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_6]))))))));
                    arr_29 [i_3] [i_5] [i_6] = ((/* implicit */signed char) ((((((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3])) < (((/* implicit */int) arr_11 [i_3])))) ? (((/* implicit */int) ((arr_23 [i_7] [i_6 + 1] [i_6] [i_5]) != (arr_23 [i_6] [i_6 + 1] [i_5] [i_5])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20551)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9136996602949250399LL)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 6776586621578441603LL)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (_Bool)1))))))));
                    var_20 = ((/* implicit */signed char) arr_1 [i_7] [i_5]);
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_33 [i_6] [i_6] [i_7] [i_6] [i_6] [i_3] = ((/* implicit */short) var_4);
                        var_21 = ((/* implicit */unsigned int) var_5);
                        var_22 = ((/* implicit */short) var_3);
                    }
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        arr_37 [i_3] [i_3] [i_6] [i_3] [i_9] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((max((((/* implicit */long long int) (signed char)-39)), (-4573193796007989014LL))) + (58LL)))))), (var_13)));
                        arr_38 [i_9] [i_3] [i_6] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((3098458124866000551LL), (((/* implicit */long long int) (unsigned char)28))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_6 + 3] [i_6 - 1])) < (arr_30 [i_6 + 1] [i_6 + 4] [i_6 + 1] [i_6] [i_6]))))) : (((((/* implicit */_Bool) 386668981U)) ? (((/* implicit */long long int) 1349523371)) : (-8597526763518433839LL)))));
                        var_23 = ((/* implicit */int) max(((_Bool)1), ((_Bool)0)));
                        arr_39 [i_3] [i_6] [i_6] [i_3] [i_9] = ((/* implicit */unsigned short) ((short) (signed char)10));
                    }
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                {
                    arr_42 [i_3] [i_5] [i_6] [i_10] [i_10] [i_6] = ((((/* implicit */long long int) ((((/* implicit */_Bool) 6776586621578441621LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_5]))) - (4208216742694974965LL))));
                    var_24 ^= ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_3] [i_5] [i_6]))) ? (-6776586621578441634LL) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10]))) - (var_0))));
                }
                /* LoopSeq 2 */
                for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    var_25 += ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_5] [i_6]))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_2))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_5] [i_6 - 1] [i_6 + 3])) ? (arr_44 [i_3] [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_12] [i_12]) : (arr_44 [i_6] [i_6 - 1] [i_6] [i_6 + 2] [i_6] [i_12])));
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        arr_50 [i_3] [i_5] [i_5] [(signed char)8] [i_6] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) 4573193796007989004LL))));
                        arr_51 [i_3] [i_5] [i_6] [i_12] [i_13] = ((/* implicit */unsigned short) arr_13 [i_3] [i_3]);
                        var_28 -= ((/* implicit */_Bool) ((arr_9 [i_6 + 4] [i_6 + 1] [i_6 + 1] [i_6 + 1]) / (((/* implicit */int) ((short) (unsigned short)58189)))));
                        var_29 = ((/* implicit */long long int) ((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_6] [i_6 + 2] [i_6] [i_6 + 4] [i_6] [i_6])))));
                    }
                    var_30 *= ((/* implicit */unsigned char) ((short) var_1));
                    var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22707))) : (arr_31 [i_6 - 1] [i_5] [i_6] [i_12] [i_12])));
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_5] [i_12])) ^ (((/* implicit */int) arr_48 [i_3]))))) : (((((/* implicit */_Bool) (short)-24431)) ? (((/* implicit */unsigned long long int) var_0)) : (var_7))))))));
                }
            }
            for (short i_14 = 1; i_14 < 8; i_14 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-5984686607007497552LL))))));
                arr_55 [i_3] [i_14] [i_5] [i_14] = ((/* implicit */unsigned short) arr_52 [i_14 + 1]);
                arr_56 [i_3] [i_14] [i_14] [i_3] = ((/* implicit */short) var_0);
                arr_57 [i_3] [i_14] [i_5] [i_14] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_6 [i_3] [i_5]) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-46))))), ((unsigned char)255)))));
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 3) 
        {
            for (long long int i_16 = 1; i_16 < 11; i_16 += 4) 
            {
                {
                    arr_64 [i_16] [i_15] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_20 [i_15 - 1] [i_16] [i_16 + 1])) & (((/* implicit */int) arr_20 [i_15 + 1] [i_15 + 1] [i_16 + 1]))))));
                    arr_65 [i_15] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_15 - 2] [i_15 - 1] [i_16 + 1])) / (((/* implicit */int) (unsigned char)255))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (short)16322))) < (933698083U))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_3] [i_3] [i_15 + 3] [i_16])))))));
                    var_34 += ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_61 [i_15] [i_15] [i_15] [i_3])) > (((/* implicit */int) var_9)))))) / (max((var_7), (((/* implicit */unsigned long long int) arr_59 [i_3])))))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((var_13) >> (((var_7) - (736349038965839629ULL))))) : (((/* implicit */unsigned long long int) var_5)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_2))))) ? (((/* implicit */int) (signed char)111)) : (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (short i_17 = 0; i_17 < 19; i_17 += 2) 
    {
        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            {
                arr_70 [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((4294967274U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-32361)))))))))));
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(18394832847368834899ULL)))) ? (((/* implicit */int) min((((/* implicit */short) var_12)), (var_10)))) : (((/* implicit */int) ((((/* implicit */int) arr_69 [i_18])) > (((/* implicit */int) arr_69 [i_17])))))));
                /* LoopSeq 1 */
                for (unsigned short i_19 = 0; i_19 < 19; i_19 += 1) 
                {
                    var_37 -= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)34)))))))) : (max((((/* implicit */int) (unsigned short)0)), (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) arr_73 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) var_3))))))));
                    /* LoopSeq 2 */
                    for (long long int i_20 = 2; i_20 < 18; i_20 += 2) 
                    {
                        var_38 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_68 [i_17] [(short)6] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_17] [i_17]))) : (((((/* implicit */_Bool) arr_67 [i_17])) ? (((/* implicit */unsigned int) arr_67 [i_17])) : (var_1)))))));
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 9223414605290218934ULL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)-84))))))) ? (((/* implicit */int) ((unsigned char) 7531928698435718895LL))) : (((/* implicit */int) arr_69 [i_17]))));
                        arr_76 [i_17] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (+(-3224755023707405564LL)));
                    }
                    for (int i_21 = 0; i_21 < 19; i_21 += 4) 
                    {
                        var_40 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)511)) << (((((/* implicit */int) (unsigned short)3305)) - (3305)))));
                        arr_80 [i_17] [i_17] [i_18] [i_17] = ((/* implicit */_Bool) arr_66 [i_17] [i_18]);
                        arr_81 [i_17] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_17]))) & (var_6))))));
                    }
                }
                var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            }
        } 
    } 
}
