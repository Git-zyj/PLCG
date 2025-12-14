/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61272
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
    var_14 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_15 -= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)9281)))))));
                arr_8 [4U] [i_1] [i_1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    var_16 *= ((/* implicit */short) var_2);
                    arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (!(((var_7) != (var_3)))));
                }
                arr_13 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)1))));
            }
            for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                arr_16 [(short)1] [i_1] &= ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28766))));
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_4])))) == (((/* implicit */int) arr_5 [i_4 - 1] [i_4 + 1] [i_1 + 2]))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        var_17 &= ((/* implicit */unsigned short) (short)28777);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */int) arr_18 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)11])))))));
                        arr_22 [i_0] [i_1] [i_0] [i_4] [i_6] [i_6] [i_1 - 2] = (+(arr_10 [i_4] [i_4] [i_0] [i_0]));
                    }
                    for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)9281)) ? ((-(10U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28777)) ? (((/* implicit */int) (short)28777)) : (((/* implicit */int) (short)0)))))));
                        arr_27 [i_5] [i_4] [i_4] [i_5] [i_7] [i_4] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                        var_19 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((arr_0 [i_1]) < (((/* implicit */unsigned long long int) 33553920U)))));
                        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_5]) : (((/* implicit */unsigned long long int) arr_23 [10ULL] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    /* LoopSeq 2 */
                    for (short i_8 = 3; i_8 < 17; i_8 += 4) 
                    {
                        arr_30 [i_5] [i_5] [(short)16] [i_5] [i_8] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_8 - 3] [i_4] [i_0] [i_0]))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_8] [i_5] [i_4] [i_4] [i_1] [i_1] [i_0])) & (((/* implicit */int) (short)25544))))) : (var_1)));
                        arr_31 [i_0] [i_1 + 1] [i_8] [i_5] [i_8] = ((((/* implicit */_Bool) 7418269005739781175ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-21195)))))) : (arr_23 [i_8] [i_5] [(short)6] [i_4] [i_1] [i_0]));
                    }
                    for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_34 [i_0] [i_1] [i_4] [i_5] [i_9] = ((/* implicit */unsigned int) arr_32 [i_1 - 2] [i_1] [i_4 + 1]);
                        arr_35 [(short)16] [i_4] [i_5] [(unsigned short)9] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_1 - 2] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9794))) : (arr_10 [i_4 + 1] [i_4 - 1] [i_1 - 2] [i_1 - 1])));
                        var_22 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (13896307809294608691ULL))))));
                        arr_36 [i_9] [i_5] [i_4 + 1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7003)) ? (17294606238976447477ULL) : (((/* implicit */unsigned long long int) 4261413385U))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((14952394077308614727ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22892))) : (((((/* implicit */_Bool) (short)22279)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54145))) : (36665964U)))));
                    arr_39 [i_10] [i_4 + 1] [(short)2] [(short)16] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0])))))));
                }
                for (unsigned int i_11 = 2; i_11 < 17; i_11 += 2) 
                {
                    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_4 + 1]))));
                    var_25 = ((/* implicit */unsigned long long int) ((14712495195600313321ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048)))));
                }
                for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    var_26 = ((unsigned int) var_1);
                    var_27 += ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (short)-8192)) ? (745529192465309924ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24679))))));
                    arr_45 [i_12] [i_1 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_1 - 1] [i_1] [i_4 - 1]))));
                }
            }
            for (unsigned int i_13 = 4; i_13 < 14; i_13 += 3) 
            {
                var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_1 + 2] [i_1 - 2])) ? (arr_40 [i_13 - 3] [i_1 + 2] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((unsigned int) var_4)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 3; i_14 < 16; i_14 += 3) 
                {
                    arr_51 [i_0] [i_0] [i_0] [i_0] [(short)10] [i_0] = ((/* implicit */unsigned int) var_0);
                    arr_52 [i_0] [i_1] [i_13] [(short)12] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (short)-32750))));
                    var_29 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)32337))))) : (((unsigned int) var_13))));
                }
            }
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                var_30 = ((/* implicit */short) 508548042U);
                var_31 = ((/* implicit */unsigned short) (-(arr_19 [i_0] [i_0] [i_1 + 1] [i_15])));
                arr_55 [i_0] [i_15] [i_15] = ((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_1 - 1] [i_0] [i_0]);
            }
            /* LoopSeq 1 */
            for (unsigned short i_16 = 4; i_16 < 17; i_16 += 2) 
            {
                arr_59 [i_0] [i_1] [i_16 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_1 - 2] [i_1 + 2] [i_1] [i_1 - 2] [i_16] [i_16])) != (((/* implicit */int) arr_38 [i_1] [i_1 + 2] [i_16] [i_16] [i_16 - 3] [i_16]))));
                /* LoopSeq 2 */
                for (unsigned short i_17 = 3; i_17 < 17; i_17 += 3) /* same iter space */
                {
                    var_32 += ((/* implicit */unsigned int) arr_48 [i_0] [i_0] [i_1] [i_0] [i_16 + 1] [i_1]);
                    arr_64 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_16 - 3] [i_17 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_53 [i_17] [i_16 - 2] [i_17 - 1] [i_1 + 1])) : (((/* implicit */int) arr_53 [i_17] [i_16 - 2] [i_17 + 1] [i_1 + 2]))));
                    var_33 |= ((unsigned long long int) arr_54 [i_0] [i_0] [i_0] [i_0]);
                }
                for (unsigned short i_18 = 3; i_18 < 17; i_18 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 2; i_19 < 15; i_19 += 3) 
                    {
                        arr_70 [i_0] [i_0] [i_16 - 1] = ((/* implicit */short) (-(((((/* implicit */int) arr_2 [i_18])) & (((/* implicit */int) arr_9 [i_18]))))));
                        arr_71 [i_0] [i_1] [i_16 - 3] [i_16] [11U] [i_19 - 2] [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_16] [i_16]))));
                    }
                    arr_72 [i_0] [i_0] [i_0] [i_1] [i_0] [i_18] = ((/* implicit */unsigned short) arr_63 [i_16] [i_18] [i_18] [i_16 - 3] [i_16]);
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_53 [i_1] [i_1 + 1] [i_1] [i_1])) / (((/* implicit */int) (unsigned short)3))));
                    var_35 = var_10;
                    arr_73 [i_18] [i_16 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1563)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28766))) : (1169464127U))))));
                }
                var_36 += ((/* implicit */unsigned long long int) (unsigned short)23757);
                var_37 = ((/* implicit */unsigned long long int) var_6);
            }
            var_38 |= var_1;
        }
        for (short i_20 = 2; i_20 < 16; i_20 += 4) 
        {
            var_39 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_4))))));
            var_40 += ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_20] [i_20 - 2] [6U]));
            arr_76 [i_20] [(unsigned short)10] [i_0] = ((/* implicit */unsigned long long int) arr_32 [i_20 + 1] [i_20 - 1] [i_20 + 1]);
        }
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_57 [5ULL] [i_0] [i_0])) - ((+(17701214881244241694ULL)))));
        arr_77 [i_0] = arr_3 [i_0] [i_0];
    }
    for (unsigned int i_21 = 2; i_21 < 9; i_21 += 4) 
    {
        var_42 = ((/* implicit */unsigned long long int) var_0);
        var_43 -= ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (short)-4304)))));
    }
    var_44 = ((/* implicit */short) 14952394077308614727ULL);
}
