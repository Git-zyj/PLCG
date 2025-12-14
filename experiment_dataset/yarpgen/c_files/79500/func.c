/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79500
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [(unsigned short)8] [i_2] [(signed char)3] = (short)26951;
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((var_16), (arr_0 [i_3 - 1]))) > (((/* implicit */unsigned int) (-(arr_10 [i_3] [5] [i_2] [i_3] [i_1] [i_2])))))))) != (((((/* implicit */_Bool) max((-242004105), (-242004105)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 242004105)) ? (((/* implicit */int) (short)-18927)) : (((/* implicit */int) (signed char)-87))))) : (max((var_16), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_2]))))))));
                        arr_13 [i_0] [i_2] [i_0] [(short)10] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                        var_18 *= ((/* implicit */unsigned long long int) ((min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) min((var_14), (((/* implicit */short) var_13))))))) < (((arr_2 [i_0]) / (((((/* implicit */_Bool) -242004123)) ? (((/* implicit */int) (short)-9)) : (-242004111)))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3 - 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) 2572378464U)))));
                    }
                } 
            } 
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_6 [i_0] [i_0] [i_0])))));
            var_20 |= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_4 [2ULL] [i_1] [i_1] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (var_16))) : (((/* implicit */unsigned int) (-(arr_2 [i_0])))))));
        }
        arr_15 [(short)2] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (+((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_4] [i_5])) >= (min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_13))))))), ((((((~(3369030721968227116LL))) + (9223372036854775807LL))) >> (((arr_10 [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5 + 1] [(short)5] [i_5 - 1]) - (1606045998)))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        for (short i_7 = 2; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (((~((-(arr_20 [i_0] [i_0] [i_0]))))) <= (((((/* implicit */_Bool) 21)) ? (arr_22 [i_5 - 1] [i_5 - 1] [i_5] [i_5] [(short)14] [13LL]) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [(short)5] [i_0] [i_0] [i_0]))))));
                                arr_27 [i_0] [i_0] [i_0] [i_5 + 1] [i_6] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_26 [i_0] [i_4] [i_5 + 1] [i_6 - 1] [i_7])) : (((/* implicit */int) (signed char)31))))) ? (-639250271102077595LL) : (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) var_15)) ? (max((2742317139795235005LL), (((/* implicit */long long int) arr_0 [i_6 - 1])))) : (min((((/* implicit */long long int) (signed char)-84)), (-913295044775913298LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 3) 
                    {
                        for (signed char i_11 = 1; i_11 < 14; i_11 += 2) 
                        {
                            {
                                arr_40 [i_0] [i_11] [i_0] [i_9] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_22 [i_10] [i_10] [i_10 - 1] [i_11 + 2] [i_11] [i_11 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_8] [i_9] [i_11 - 1])) ? (((/* implicit */int) arr_26 [i_0] [i_8] [i_9] [i_10] [i_10])) : (((/* implicit */int) var_7)))))))) ? ((~(((/* implicit */int) arr_26 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1])))) : (((((/* implicit */_Bool) arr_22 [i_8] [i_10 + 1] [i_10 + 2] [i_11 + 1] [i_11 + 2] [i_11 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_36 [i_9] [i_10 + 2] [i_10 - 1] [i_9]))))));
                                var_23 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) arr_6 [i_11 + 2] [i_10 + 1] [i_9]))), (((((/* implicit */_Bool) (unsigned short)45010)) ? (((/* implicit */unsigned long long int) 1813976232U)) : (arr_21 [i_10 - 1] [i_10 - 2] [i_11] [i_11 - 1] [i_11 + 2])))));
                                var_24 *= ((/* implicit */short) min((4287326306669686543ULL), (((/* implicit */unsigned long long int) (signed char)122))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        for (int i_13 = 2; i_13 < 15; i_13 += 2) 
                        {
                            {
                                var_25 |= ((/* implicit */unsigned short) max((((arr_22 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13]) | (arr_22 [i_13 - 1] [i_13 - 2] [i_13 - 2] [i_13 + 1] [i_13 - 1] [i_13]))), (arr_22 [i_13 + 1] [i_13 - 2] [i_13 - 1] [i_13 - 2] [i_13] [i_13])));
                                var_26 |= ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_10 [i_13 - 2] [0] [i_13 - 1] [(short)9] [i_13] [(short)9]), (arr_10 [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13 + 1] [i_13] [i_13])))) ? (min((((/* implicit */int) arr_6 [i_13 + 1] [i_13 + 1] [i_13 + 1])), ((+(((/* implicit */int) var_5)))))) : ((~(((/* implicit */int) arr_46 [i_13 + 1] [i_12] [i_13 + 1]))))));
                                arr_47 [i_12] [i_8] [i_12] [i_8] [i_8] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_17))))));
                                var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_0] [i_13 - 2] [i_9])), (arr_5 [i_9] [i_13 + 1] [i_13 - 2] [i_13 - 1])))), (((((/* implicit */_Bool) arr_0 [i_13 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_13] [i_13 + 1] [i_9]))) : (arr_0 [i_13 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            arr_52 [i_14] [i_14] |= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_41 [i_15] [i_15] [i_14] [i_14] [i_15] [i_15])) < (((/* implicit */int) arr_37 [i_14] [i_15] [i_15] [i_15] [i_14])))))));
            var_29 = ((/* implicit */unsigned int) ((long long int) max((14159417767039865073ULL), (((/* implicit */unsigned long long int) 262143U)))));
            arr_53 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) (signed char)122))), (min(((unsigned short)45096), (((/* implicit */unsigned short) var_3))))))) ? (((/* implicit */int) ((arr_5 [i_15] [i_15] [i_14] [i_14]) == (((/* implicit */int) (short)-21394))))) : (((/* implicit */int) var_3))));
        }
        for (int i_16 = 1; i_16 < 12; i_16 += 3) 
        {
            var_30 -= ((/* implicit */unsigned long long int) var_3);
            /* LoopSeq 3 */
            for (signed char i_17 = 2; i_17 < 12; i_17 += 3) 
            {
                var_31 -= ((signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) != (14159417767039865073ULL))))) + (var_15)));
                var_32 -= ((/* implicit */int) var_17);
                var_33 = ((/* implicit */signed char) ((short) ((long long int) 4287326306669686535ULL)));
            }
            for (signed char i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                var_34 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (arr_31 [i_14])))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_39 [i_14] [i_16 + 2] [i_18] [i_14] [i_16 + 4] [i_16] [i_14]))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_14] [i_14] [i_14] [i_14]))) <= (arr_1 [i_14])))))))));
                arr_62 [i_16 + 3] = ((/* implicit */short) var_0);
            }
            for (long long int i_19 = 4; i_19 < 15; i_19 += 2) 
            {
                arr_66 [(short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-74))))) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [6LL] [i_14]))));
                var_35 |= ((/* implicit */unsigned int) arr_33 [(short)11]);
            }
        }
        for (signed char i_20 = 1; i_20 < 15; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                for (signed char i_22 = 1; i_22 < 15; i_22 += 2) 
                {
                    {
                        arr_76 [14LL] [14LL] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_36 [i_22 + 1] [i_22 - 1] [i_22 - 1] [i_20 - 1])) && (((/* implicit */_Bool) arr_36 [i_22] [i_22 - 1] [i_22 - 1] [i_20 + 1]))))));
                        var_36 = ((/* implicit */unsigned long long int) arr_44 [i_21]);
                    }
                } 
            } 
            var_37 -= ((/* implicit */long long int) (((-(((/* implicit */int) (short)-1)))) - (((/* implicit */int) min((arr_38 [i_14] [i_14] [i_14] [i_14] [i_20 - 1]), (arr_18 [i_14] [i_14] [i_14] [i_14]))))));
            var_38 -= ((/* implicit */short) arr_17 [i_14] [i_14] [i_20]);
            var_39 = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) arr_64 [i_14] [i_14] [i_20]))), (max((((/* implicit */unsigned int) max((((/* implicit */int) arr_50 [i_14])), (arr_17 [i_14] [i_14] [i_20])))), (arr_0 [i_14])))));
        }
        var_40 = ((/* implicit */int) ((long long int) ((long long int) var_7)));
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 16; i_23 += 3) 
        {
            for (signed char i_24 = 0; i_24 < 16; i_24 += 3) 
            {
                {
                    arr_84 [i_14] [i_23] [i_24] = ((/* implicit */long long int) 18334593053460591920ULL);
                    /* LoopNest 2 */
                    for (unsigned int i_25 = 0; i_25 < 16; i_25 += 2) 
                    {
                        for (short i_26 = 3; i_26 < 15; i_26 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */int) ((signed char) arr_75 [i_14]));
                                var_42 = ((/* implicit */long long int) (short)-10728);
                            }
                        } 
                    } 
                    var_43 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) (signed char)83))))))));
                }
            } 
        } 
        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_59 [(unsigned short)2] [i_14] [i_14] [i_14])))) ? (2226567803408664856LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((long long int) 14159417767039865078ULL)))))));
        arr_90 [i_14] [i_14] = var_1;
    }
    for (short i_27 = 0; i_27 < 12; i_27 += 3) 
    {
        var_45 ^= ((/* implicit */short) arr_19 [i_27] [i_27] [i_27]);
        var_46 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_27]))) ? (((/* implicit */unsigned long long int) (~(var_16)))) : (min((arr_20 [i_27] [i_27] [i_27]), (((/* implicit */unsigned long long int) (signed char)47)))))));
        var_47 -= ((/* implicit */short) arr_2 [i_27]);
        arr_93 [i_27] = ((/* implicit */int) ((((((unsigned long long int) arr_6 [i_27] [i_27] [i_27])) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (var_16)))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)83)))))));
    }
    /* LoopNest 2 */
    for (signed char i_28 = 2; i_28 < 6; i_28 += 2) 
    {
        for (short i_29 = 2; i_29 < 6; i_29 += 2) 
        {
            {
                arr_101 [i_29 + 4] = ((/* implicit */short) ((unsigned long long int) ((long long int) (short)-15238)));
                var_48 *= ((/* implicit */unsigned long long int) ((unsigned short) (short)15237));
                var_49 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((signed char) (unsigned short)55957))))) != ((+(min((((/* implicit */long long int) (signed char)-1)), (2142437273737286775LL)))))));
            }
        } 
    } 
}
