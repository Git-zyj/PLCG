/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69261
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) 6437569747966177935ULL);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                arr_9 [i_0] = (+(1062646107U));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(1062646101U))))));
            }
            var_20 -= ((/* implicit */long long int) (unsigned char)5);
        }
        for (long long int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */long long int) var_3);
            var_21 = ((/* implicit */unsigned int) (+(7439132532414530592ULL)));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & (var_5)))) ? (arr_5 [i_0] [i_3 - 2] [i_0]) : (var_6)))) ? (min((13816972683188049337ULL), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) 3566750179U)))))) : (arr_3 [i_0] [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    arr_19 [i_0] [i_3 - 1] [i_4] [i_0] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_18 [i_0 + 2] [i_0 + 1] [i_3 + 1] [i_4]) <= (arr_18 [i_0 - 1] [i_0 - 1] [i_3 - 1] [i_5]))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(345912910U))))));
                }
                for (long long int i_6 = 1; i_6 < 10; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) min((var_23), ((-(min((3232321189U), (((/* implicit */unsigned int) (unsigned char)40))))))));
                        var_24 *= var_16;
                        var_25 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)164));
                        arr_28 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_26 [i_0 + 1] [i_0] [i_4] [i_6] [i_7 - 2]), (arr_26 [i_0] [i_0] [i_4] [i_0] [i_7 + 1])))) ? (arr_26 [i_7 - 1] [i_0] [i_4] [i_0] [i_0 + 2]) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_26 [i_0] [i_0] [i_4] [i_6] [i_7 + 3])))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_31 [i_0 - 1] [i_0 - 1] [i_4] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_6] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) * (((/* implicit */unsigned long long int) var_11))))))) ? (-8712603739608762158LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 1])))));
                        arr_32 [i_0] [i_0] [i_0] [i_6 - 1] [i_8] = ((/* implicit */unsigned char) ((7439132532414530591ULL) | (((/* implicit */unsigned long long int) 6696857941265653402LL))));
                        arr_33 [i_3 - 2] [i_3 - 2] [i_0] [i_6 - 1] = ((/* implicit */long long int) ((arr_21 [i_0] [i_0 + 2] [i_6] [i_6]) / ((-(arr_21 [i_0] [i_0 + 2] [i_4] [i_6 + 1])))));
                    }
                    var_26 *= var_2;
                }
                /* LoopSeq 1 */
                for (unsigned int i_9 = 2; i_9 < 12; i_9 += 3) 
                {
                    arr_37 [i_0] [i_0] [i_0] [i_9 - 1] = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0]);
                    arr_38 [i_0] [i_0 + 1] [i_3 + 1] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    arr_41 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned long long int) arr_17 [i_0]);
                    arr_42 [i_0 - 1] [i_0 - 1] [i_4] [i_0] [i_10] = arr_39 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 2];
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) var_16))));
                    var_28 -= ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 2061390606U)) : (9147254230256837813ULL)));
                }
            }
            for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_12 = 2; i_12 < 12; i_12 += 3) 
                {
                    var_29 = var_17;
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        arr_51 [i_0] [i_3] [i_11] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_13)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_3 + 2] [i_11] [i_12] [i_12])) ? (((/* implicit */long long int) 3256142029U)) : (var_15)))) ? (((unsigned long long int) arr_24 [i_0 - 1] [i_3] [i_11] [i_0 - 1] [i_13] [i_13])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2061390616U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (-877947078685971313LL))))))));
                        arr_52 [i_0] [i_0] [i_12] [i_11] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(arr_11 [i_0] [i_3])));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        arr_56 [i_3] [i_12 + 1] [i_3] [i_3] [i_3] |= arr_27 [i_3 + 3] [i_3];
                        var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((4109711687245819004ULL), (((/* implicit */unsigned long long int) 1038825296U))))) ? (max((((/* implicit */unsigned long long int) -915266960003829822LL)), (1871095856540175605ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 2639826571U))))) <= (((/* implicit */unsigned long long int) ((((var_13) / (((/* implicit */long long int) 3256142027U)))) % (((((/* implicit */_Bool) arr_6 [i_3] [i_11] [i_12])) ? (var_10) : (var_17))))))));
                        var_31 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 2061390616U)) || (((/* implicit */_Bool) 560074232112412402ULL)))))), (arr_26 [i_0] [i_3] [i_0] [i_0] [i_14])));
                        arr_57 [i_0] [i_0] [i_3 - 2] [i_11] [i_12 + 1] [i_14] = var_16;
                    }
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        arr_62 [i_0 + 1] [i_3 + 2] [i_3 + 2] [i_0] [i_3 + 2] = ((/* implicit */unsigned int) var_17);
                        arr_63 [i_0] [i_3] = var_17;
                    }
                    for (long long int i_16 = 3; i_16 < 12; i_16 += 3) 
                    {
                        arr_66 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_15 [i_0] [i_11] [i_16])));
                        var_32 ^= ((/* implicit */unsigned long long int) (+(min((arr_23 [i_0 + 1] [i_3 + 2]), (var_15)))));
                        arr_67 [i_0] [i_3 - 1] [i_11] [i_3 - 1] [i_16 - 2] [i_0] [i_11] = var_1;
                    }
                    var_33 = ((((/* implicit */_Bool) var_17)) ? (6696857941265653402LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1438355715U)), (arr_61 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0])))))))));
                }
                for (unsigned int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((unsigned int) ((arr_3 [i_3] [i_3 + 1]) & (arr_3 [i_3] [i_3 + 1])))))));
                    var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_3])) < (((/* implicit */int) arr_7 [i_3])))))) < (2466577402361974690LL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
                    {
                        var_36 = min((((/* implicit */long long int) var_6)), (654960102031239632LL));
                        arr_72 [i_0] [i_3 - 2] [i_0] = ((/* implicit */long long int) arr_55 [i_3 - 2] [i_11] [i_0]);
                    }
                    for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) /* same iter space */
                    {
                        arr_75 [i_0] [i_0] [i_11] [i_3 + 3] [i_3 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_17)));
                        var_37 = var_8;
                    }
                    arr_76 [i_3] [i_3 - 1] [i_11] &= ((/* implicit */long long int) 1114853556U);
                }
                for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 1) 
                {
                    arr_79 [i_0] [i_3 - 1] [i_3] [i_3] [i_3 - 1] = ((/* implicit */long long int) 2543379134818568211ULL);
                    arr_80 [i_0] [i_11] [i_3 + 2] [i_3 + 1] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) arr_58 [i_20 + 1] [i_20 + 1] [i_11] [i_3 + 1] [i_0 - 1]);
                    arr_81 [i_0] [i_20] [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 3981710175U);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 13; i_22 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) arr_61 [i_0] [i_3] [i_11] [i_0] [i_21] [i_0]))));
                        arr_89 [i_0] [i_3 - 1] [i_11] [i_0] [i_3 + 1] [i_3] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0] [i_0] [i_0]))) ? (var_1) : (((/* implicit */unsigned long long int) -1209031647954073471LL))));
                        arr_90 [i_0] [i_0] [i_11] [i_21] [i_22] [i_22] [i_3 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) ((arr_69 [i_0 + 2] [i_0 + 2] [i_11] [i_21] [i_22] [i_11]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_3] [i_11] [i_0]))))));
                        var_39 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))) : (1185099186037678498LL))));
                    }
                    for (long long int i_23 = 0; i_23 < 13; i_23 += 4) /* same iter space */
                    {
                        arr_93 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) 5350024884723615527LL);
                        arr_94 [i_11] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11030574826495416094ULL)) ? (var_2) : (arr_43 [i_0 + 1] [i_0 + 1] [i_21])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1));
                    }
                    arr_95 [i_21] [i_21] &= 2466577402361974698LL;
                    arr_96 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (-(-1333612299462746418LL)));
                }
                arr_97 [i_0] [i_0] [i_3 + 1] [i_11] = 2812671944U;
                arr_98 [i_11] [i_0] [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (min((var_5), (((/* implicit */unsigned long long int) arr_7 [i_0]))))))) << (((/* implicit */int) var_9))));
                arr_99 [i_0] [i_0] [i_3] = ((((unsigned long long int) arr_1 [i_0] [i_0])) >> (((var_5) - (3678893643838379046ULL))));
            }
            arr_100 [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)133);
            arr_101 [i_0] = ((/* implicit */unsigned long long int) var_15);
        }
        arr_102 [i_0] = min((max((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1])), ((~(var_1))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) -1180602590643825963LL)), (var_1))) > (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) var_6))))))));
    }
    for (long long int i_24 = 1; i_24 < 11; i_24 += 1) /* same iter space */
    {
        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((561389642U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))))))));
        arr_106 [i_24] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1180602590643825963LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (8602898634356888718LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 16491826147562093187ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) : (2015190061U))))));
    }
    /* vectorizable */
    for (long long int i_25 = 1; i_25 < 11; i_25 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 4) 
        {
            arr_111 [i_25 - 1] [i_25 - 1] = ((/* implicit */unsigned long long int) (-(((long long int) -91897234816811062LL))));
            arr_112 [i_26] [i_25] = ((/* implicit */unsigned int) var_10);
        }
        var_41 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_25 - 1] [6LL] [i_25 - 1] [6LL] [i_25 - 1])) || (((/* implicit */_Bool) var_5))));
        arr_113 [i_25] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_25 - 1])) ? (var_10) : (((/* implicit */long long int) arr_17 [6ULL]))));
    }
    /* vectorizable */
    for (long long int i_27 = 1; i_27 < 11; i_27 += 1) /* same iter space */
    {
        arr_117 [i_27 + 1] = ((/* implicit */unsigned int) (unsigned char)212);
        arr_118 [i_27] = ((/* implicit */long long int) (((-(952232805U))) * (var_11)));
    }
    var_42 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)242));
}
