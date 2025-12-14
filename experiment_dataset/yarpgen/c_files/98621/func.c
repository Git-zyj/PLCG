/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98621
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
    var_15 = ((/* implicit */signed char) 6U);
    var_16 = ((/* implicit */unsigned char) ((long long int) var_7));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_12);
        var_17 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525))) == (arr_0 [5ULL])))) * (((/* implicit */int) arr_1 [i_0 + 1])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) (short)31686)) << (((/* implicit */int) (unsigned short)5)))))));
            var_19 = (~(((/* implicit */int) arr_1 [i_0 + 1])));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        var_20 *= ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2]);
        /* LoopSeq 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                arr_13 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [(unsigned char)9] [i_3 - 1])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 - 1] [i_2 + 1] [(unsigned short)3])) + (((/* implicit */int) arr_10 [i_3 - 1] [i_2 - 2] [i_2])))))));
                var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (6546507830880476305LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 6546507830880476312LL)) ? (((/* implicit */unsigned int) -1669745548)) : (((((4U) & (((/* implicit */unsigned int) 7340032)))) | (((/* implicit */unsigned int) ((1228904782) & (((/* implicit */int) (signed char)123)))))))));
                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_2 + 2])) >> (((/* implicit */int) arr_11 [i_4] [i_2] [i_2 + 2])))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (short i_6 = 2; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */int) arr_1 [i_6])) > (((/* implicit */int) var_7))))) >= (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_3 [i_6 - 2] [i_6 - 1] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 1])))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~(1932362592)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_2 - 1] [i_2 + 3] [6U] [i_2 + 2] [i_3 - 1] [(unsigned short)12])))))));
                        }
                    } 
                } 
            }
            for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 - 1]))), (min((arr_0 [i_3 - 1]), (arr_0 [i_3 - 1]))))))));
                arr_20 [(unsigned char)0] [(unsigned char)0] [i_2] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)17002)))))));
            }
            arr_21 [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) ? (((unsigned int) 15U)) : (arr_0 [i_2 + 1]))));
            arr_22 [i_2] [i_3 - 1] = ((/* implicit */short) arr_15 [i_3 - 1] [i_2]);
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                arr_25 [i_2] [i_2] [i_8] [i_8] = ((/* implicit */short) -6546507830880476315LL);
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_11 [i_2 - 2] [i_8] [i_3 - 1]), (arr_11 [i_2 + 2] [i_8] [i_3 - 1])))))))));
                /* LoopSeq 4 */
                for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) arr_5 [3] [3]);
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((7U), (((/* implicit */unsigned int) var_1)))))))))))));
                        var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */int) arr_10 [i_3 - 1] [i_2 - 2] [i_2])) * (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_2 + 2] [i_3 - 1] [i_8])) && (((/* implicit */_Bool) arr_10 [i_3 - 1] [i_2 - 1] [i_2 + 1])))))))));
                        arr_30 [i_2 + 1] [i_2] [i_2] [i_2 + 1] = arr_15 [i_2] [i_2];
                    }
                    for (short i_11 = 2; i_11 < 11; i_11 += 1) /* same iter space */
                    {
                        var_31 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 45118771U)), (((unsigned long long int) ((45118795U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-31147))))))));
                        var_32 = ((/* implicit */short) max((((853964426U) >> (((((/* implicit */int) (signed char)92)) - (82))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147418112)) ? (((/* implicit */int) (_Bool)1)) : (362373206))))));
                    }
                    for (short i_12 = 2; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        var_33 = arr_0 [i_2 + 2];
                        var_34 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_8])) & (((/* implicit */int) (short)-14474))))) ? (arr_31 [i_2 + 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [9ULL] [i_12 + 1] [(unsigned short)11]) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((short) (_Bool)1)))));
                        arr_36 [i_2] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((4294967292U) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-108)))))))) || (((/* implicit */_Bool) ((unsigned long long int) min((arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_12 + 1]), (((/* implicit */long long int) arr_8 [10U] [i_2]))))))));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((arr_35 [(unsigned char)2] [i_8] [i_8] [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_8])))))))));
                        arr_37 [i_2] [i_2] [i_2] [(short)0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_3 - 1])))) ? (((int) arr_32 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2] [i_2] [i_12 - 1])) : (((/* implicit */int) ((_Bool) arr_32 [i_2 + 2] [i_3 - 1] [i_8] [i_2] [i_8] [i_12 - 1])))));
                    }
                    var_36 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((arr_35 [i_2] [i_8] [i_8] [2]) >> (((arr_15 [(short)12] [i_8]) - (3642657289570004329LL))))), (((/* implicit */long long int) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))))))))) % (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63553)) ^ (((/* implicit */int) var_1))))) ? (var_10) : (((/* implicit */unsigned long long int) min((arr_32 [i_2] [i_2] [i_2] [i_8] [i_2 + 2] [i_2]), (((/* implicit */long long int) arr_34 [i_2] [i_2] [(_Bool)1] [i_8] [i_2] [i_9] [(signed char)0])))))))));
                    var_37 = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned int) var_7)), (3581910593U))));
                    var_38 = ((/* implicit */short) min((((((((/* implicit */_Bool) arr_17 [(unsigned short)5] [i_3] [(unsigned short)5] [i_3] [i_9] [i_3 - 1] [(unsigned char)12])) ? (3ULL) : (((/* implicit */unsigned long long int) 4U)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 2] [12] [(_Bool)1]))))), ((-(min((var_10), (((/* implicit */unsigned long long int) var_2))))))));
                }
                for (int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                {
                    arr_40 [i_2] [(signed char)2] [(signed char)2] [i_2] = (-(((((/* implicit */_Bool) 3LL)) ? (((((/* implicit */_Bool) arr_26 [i_2] [i_3 - 1] [0U] [i_2] [i_3] [i_2])) ? (arr_0 [(short)7]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30064))))) : (12U))));
                    arr_41 [i_2] [i_13] [i_13] [i_2] = ((unsigned short) arr_12 [i_2]);
                    arr_42 [i_2] [i_2] [i_2] [i_2 + 3] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)0))));
                }
                for (int i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
                {
                    var_39 = min(((short)30083), ((short)32741));
                    var_40 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_4 [i_2] [i_3] [i_14]) && (((/* implicit */_Bool) 1ULL)))))));
                    arr_45 [(unsigned short)7] [(unsigned short)7] [i_8] [i_2] [(unsigned short)4] = ((/* implicit */int) ((_Bool) min((((((/* implicit */_Bool) arr_24 [i_2])) ? (((/* implicit */long long int) var_6)) : (arr_3 [i_14] [9ULL] [i_14]))), (((/* implicit */long long int) (short)-17760)))));
                }
                for (int i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
                {
                    var_41 |= ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_2] [9] [i_2] [i_2] [i_2] [i_2])) >= (((int) 3241701877U))))), (arr_48 [i_2] [i_2] [i_2] [i_2])));
                    arr_49 [i_2] [i_2] [i_2] [i_2] = ((((((/* implicit */int) arr_29 [i_2 - 1] [(signed char)1] [i_2 + 2] [i_2 + 2] [(signed char)1] [i_2 - 1])) >> (((arr_38 [i_3 - 1]) - (1092158034U))))) ^ (arr_8 [i_3] [i_2]));
                    arr_50 [i_2] = ((/* implicit */int) ((((/* implicit */int) arr_47 [i_2])) > (((((/* implicit */int) ((short) (short)-21182))) % (((/* implicit */int) arr_33 [10U] [i_3] [10U] [i_15] [i_15]))))));
                }
                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((unsigned char) (+((+(((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [(unsigned char)2] [i_2 + 2]))))))))));
                var_43 = ((/* implicit */signed char) (((+(((/* implicit */int) ((((/* implicit */int) (short)32741)) > (((/* implicit */int) (_Bool)1))))))) * (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) arr_44 [i_2] [i_2] [i_3 - 1] [(_Bool)1])) > (-1)))), (var_5))))));
            }
        }
        for (short i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)21823)))))))));
            arr_53 [i_2] [i_2 - 2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 - 1])) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_16]))))))))) | (min((((/* implicit */long long int) 1243224593)), (((arr_27 [i_16] [i_2] [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_2] [2U] [i_2] [2U])))))))));
        }
        /* LoopSeq 2 */
        for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            arr_57 [i_2] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [11] [i_2])) ? (16LL) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)12)))))))) ? (((((/* implicit */int) arr_26 [i_2 + 3] [i_2] [i_2] [i_2 + 1] [i_2 + 3] [i_2 - 1])) ^ (((/* implicit */int) arr_16 [i_2 + 3] [4LL] [i_2 + 2] [4LL] [i_2 + 3] [i_2 - 2])))) : (((((((/* implicit */int) arr_18 [i_2 + 3] [i_2] [i_2 + 1])) + (2147483647))) >> (((arr_51 [i_2 + 1]) - (4225075957U)))))));
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) 1669745564))));
        }
        for (unsigned short i_18 = 0; i_18 < 13; i_18 += 3) 
        {
            var_46 = ((/* implicit */int) min((((/* implicit */long long int) max((2147483647), (min((arr_8 [i_2] [i_2]), (((/* implicit */int) arr_55 [i_2] [i_2]))))))), (max((min((arr_3 [i_18] [i_18] [i_18]), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) min((1355284041), (arr_59 [i_18] [i_2 + 1]))))))));
            var_47 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23517)) && (((/* implicit */_Bool) arr_39 [i_2] [12ULL] [i_18] [i_2]))))) > (((/* implicit */int) (unsigned short)3946))))) * ((+(arr_8 [i_2] [(short)4])))));
            arr_61 [(unsigned short)1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_31 [4U] [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2]) / (arr_31 [(short)12] [(signed char)1] [(signed char)1] [i_2] [i_18] [(unsigned char)2] [i_18])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))))) : (min((((/* implicit */long long int) arr_31 [i_2 + 1] [i_2 + 3] [i_2 + 1] [6] [i_2 + 3] [i_2] [i_2 + 3])), (506722224511416116LL)))));
            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) var_6))));
            arr_62 [i_18] [i_2] [i_2] = ((/* implicit */unsigned int) ((min((18446744073709551611ULL), (((/* implicit */unsigned long long int) min((arr_24 [i_18]), (arr_32 [(signed char)4] [(signed char)4] [(signed char)4] [i_2] [(signed char)4] [i_2])))))) >> (((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), (arr_0 [i_2]))) - (822557163U)))));
        }
    }
    var_49 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (min((var_13), (((/* implicit */int) var_1))))));
}
