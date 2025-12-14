/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86336
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
    var_20 = ((/* implicit */unsigned short) var_14);
    var_21 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((arr_0 [i_0 - 1]) < (arr_0 [i_0 - 1])));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-10534)) || (((/* implicit */_Bool) var_5))))) | (((((/* implicit */_Bool) (short)-10560)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_16))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
            var_24 = ((/* implicit */unsigned long long int) ((short) var_17));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
        }
        for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_4 = 2; i_4 < 8; i_4 += 4) 
                {
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)109))));
                    arr_15 [i_0] [(short)3] [i_2 + 3] [i_3] [i_0] = ((/* implicit */_Bool) var_2);
                }
                var_25 = ((((/* implicit */_Bool) (-(6199157717349310842ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (3728569763478185097LL));
                /* LoopSeq 2 */
                for (long long int i_5 = 1; i_5 < 8; i_5 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) ((_Bool) ((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_2 + 2] [i_2 + 2]));
                    var_27 = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_2 - 1] [i_2 + 3] [i_3] [(unsigned char)10] [i_0]);
                    var_28 = ((/* implicit */_Bool) ((((6290515402267548013ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11362020047500608767ULL)) ? (3728569763478185097LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14))))))));
                    var_29 = ((/* implicit */unsigned long long int) ((var_18) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_3] [i_0] [i_5 + 1] [i_5] [i_5])))));
                }
                for (unsigned short i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_9)))));
                    arr_22 [i_2] [i_2 + 2] [4U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_9 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((arr_17 [i_3]) == (((/* implicit */long long int) arr_3 [i_2] [i_3] [i_0]))))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_3]))));
                    /* LoopSeq 4 */
                    for (int i_7 = 3; i_7 < 9; i_7 += 2) 
                    {
                        arr_27 [i_0] = ((/* implicit */unsigned long long int) (+(arr_24 [i_3] [i_6] [(short)4] [i_3] [i_6 - 1] [i_6] [i_3])));
                        arr_28 [i_0] [i_2 - 1] [i_3] [i_3] [i_6 - 2] [i_6] [i_6 - 2] = ((/* implicit */signed char) (unsigned char)3);
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        arr_31 [i_0 + 1] [i_0] [i_8] = ((/* implicit */unsigned short) var_17);
                        var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_2] [i_2] [i_2 + 3] [i_2] [i_2]))));
                    }
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_35 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) (short)-10570)) : (((/* implicit */int) (signed char)-121))))) : (arr_13 [i_0] [i_0] [i_0] [i_0])));
                        arr_36 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0 + 1] [i_2 - 1] [i_3] [i_6] [i_9])))))));
                        var_31 = ((((/* implicit */_Bool) arr_20 [i_0 + 1] [8LL] [i_0 - 1] [i_6] [i_9])) ? (((/* implicit */int) arr_9 [i_2] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_2 - 1])));
                        arr_37 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0] = var_15;
                    }
                    for (unsigned int i_10 = 2; i_10 < 10; i_10 += 1) 
                    {
                        arr_42 [0LL] [i_2 - 1] [i_2] [i_2] [i_0] [i_6 + 1] [i_2] = ((/* implicit */unsigned char) -2147483630);
                        var_32 = ((/* implicit */short) arr_2 [i_6] [i_6 + 1]);
                    }
                }
                arr_43 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8154027209972583899LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) : (15258024879825208753ULL)));
            }
            for (long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
            {
                arr_47 [i_0] [i_0 - 1] = ((/* implicit */int) var_2);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        {
                            arr_55 [i_0] [i_2 + 3] [i_2] [i_11] [i_12] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((long long int) var_5)) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 2086957340572646395ULL))))));
                            var_33 = ((/* implicit */int) 15421641548625901924ULL);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_0] [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) arr_33 [i_0] [i_0] [i_0 + 1]))));
                        }
                    } 
                } 
            }
            for (long long int i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) 9196405890874432070ULL);
                    var_36 = ((/* implicit */unsigned long long int) arr_52 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]);
                }
                for (short i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                {
                    arr_64 [i_0] [i_2 + 1] [i_0] [i_14] [i_16] = ((/* implicit */long long int) var_12);
                    var_37 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
                }
                for (long long int i_17 = 1; i_17 < 8; i_17 += 3) 
                {
                    arr_68 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) (~(var_15)));
                    var_38 = ((/* implicit */unsigned long long int) (~(arr_24 [i_2] [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_2])));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (arr_41 [i_2] [i_2 + 2])));
                }
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_2 + 1])) && (((/* implicit */_Bool) arr_54 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 + 3] [i_2 + 2]))));
                /* LoopSeq 1 */
                for (int i_18 = 4; i_18 < 10; i_18 += 2) 
                {
                    arr_73 [i_0] [i_0] [i_0] [i_14] [(signed char)6] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ ((~(((/* implicit */int) arr_7 [i_14] [i_14] [i_14]))))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_65 [i_0 - 1])) ? (var_10) : (var_15)));
                }
                arr_74 [i_0] = ((/* implicit */short) ((_Bool) 5196142048061403308LL));
                arr_75 [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_12));
            }
            var_42 = ((/* implicit */unsigned int) var_19);
            var_43 = ((/* implicit */long long int) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_0 - 1] [i_0]))) : (arr_30 [8LL] [i_2 + 2] [i_2] [8LL] [i_2])));
            var_44 = ((/* implicit */signed char) arr_19 [i_0] [i_0] [i_2] [(unsigned short)5]);
            arr_76 [i_0] = ((/* implicit */_Bool) ((15258024879825208765ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26892)))));
        }
        var_45 = ((/* implicit */unsigned char) var_12);
        arr_77 [i_0] = ((/* implicit */int) arr_66 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]);
    }
    for (int i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
    {
        arr_80 [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 1551945074U)) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */int) (short)10570)) < (((/* implicit */int) (short)-17645))))) : (((((/* implicit */_Bool) arr_78 [i_19])) ? (((/* implicit */int) arr_79 [i_19])) : (((/* implicit */int) var_17))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_19])) ? (arr_78 [i_19]) : (((/* implicit */unsigned long long int) var_10))))) ? (max((var_19), (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_79 [i_19]))))) : ((+(((((/* implicit */_Bool) -3687629119783969236LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        /* LoopSeq 3 */
        for (short i_20 = 3; i_20 < 23; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 25; i_21 += 3) 
            {
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    {
                        var_46 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(arr_88 [i_19] [i_19] [i_19] [i_19] [i_19])))) && (((/* implicit */_Bool) (short)-10560)))))));
                        var_47 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)93))));
                    }
                } 
            } 
            arr_90 [i_19] [i_20 + 2] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_85 [i_20 - 3] [i_20 + 2] [i_20 - 3])) / (((/* implicit */int) arr_85 [i_20] [i_20] [i_20 - 3]))))));
            arr_91 [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) min((min((var_15), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) arr_82 [i_19] [i_20 - 3]))))) : (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_19] [i_19]))) : (var_11))) * (((/* implicit */unsigned long long int) max((1438949781U), (4294967295U))))))));
        }
        for (unsigned short i_23 = 0; i_23 < 25; i_23 += 4) /* same iter space */
        {
            arr_95 [i_19] = ((/* implicit */_Bool) arr_78 [i_19]);
            arr_96 [i_19] [i_19] = ((/* implicit */_Bool) (unsigned short)34145);
            var_48 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_89 [i_19] [0LL] [i_19] [i_19])), (((((/* implicit */_Bool) (unsigned short)32640)) ? (var_14) : (var_4)))))) | (9223372036854775808ULL)));
            var_49 = ((/* implicit */unsigned short) ((signed char) arr_89 [i_23] [i_19] [i_19] [i_23]));
        }
        for (unsigned short i_24 = 0; i_24 < 25; i_24 += 4) /* same iter space */
        {
            var_50 = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_98 [i_19] [i_19]))) < (var_5)))) / ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)19499)))))) == (((/* implicit */int) arr_82 [i_19] [i_24]))));
            arr_99 [i_19] [i_24] = ((/* implicit */unsigned char) -666208846);
            arr_100 [i_19] [i_24] [i_24] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_81 [i_19] [i_24])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) | ((~(min((((/* implicit */long long int) arr_97 [i_19] [i_19] [i_24])), (var_15)))))));
        }
    }
    for (int i_25 = 0; i_25 < 25; i_25 += 2) /* same iter space */
    {
        var_51 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)22702)), (((((/* implicit */_Bool) arr_81 [i_25] [i_25])) ? (var_4) : (((/* implicit */long long int) var_19))))));
        /* LoopNest 2 */
        for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 4) 
        {
            for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 2) 
            {
                {
                    arr_110 [i_25] = min((min((((/* implicit */unsigned long long int) (short)22722)), (((((/* implicit */_Bool) var_18)) ? (3188719193884342853ULL) : (((/* implicit */unsigned long long int) 836213937)))))), (((/* implicit */unsigned long long int) var_17)));
                    var_52 = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_28 = 0; i_28 < 25; i_28 += 2) /* same iter space */
    {
        var_53 = ((/* implicit */signed char) var_13);
        arr_114 [i_28] = arr_85 [i_28] [i_28] [i_28];
    }
    var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1716737577)) ? (((/* implicit */int) (unsigned short)19511)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_1)))))))) : (((((/* implicit */_Bool) 2743022249U)) ? (((/* implicit */int) max((var_9), ((unsigned short)19527)))) : (((/* implicit */int) var_17))))));
}
