/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90924
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [(_Bool)1] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_8)))));
        var_17 += ((((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) arr_1 [0LL] [i_0])))) : ((~(var_15))))) & (((/* implicit */int) ((short) (~(arr_0 [8ULL]))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_1 [6LL] [i_0]))));
        var_19 = ((/* implicit */int) ((_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */long long int) var_5)) : (var_10)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((short) ((arr_5 [i_1]) == (((/* implicit */int) arr_4 [i_1])))));
        var_20 = ((/* implicit */unsigned int) ((_Bool) arr_4 [i_1 + 2]));
        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_1 + 2]))));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            var_22 = ((((int) arr_9 [3LL] [i_3 - 1])) - (((((/* implicit */int) (unsigned short)65532)) * (((/* implicit */int) arr_9 [5LL] [i_3 - 1])))));
            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_2])) | (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) arr_8 [i_2]))), ((unsigned short)3))))));
            var_24 = ((/* implicit */int) var_10);
            arr_12 [i_2] [(unsigned char)20] |= ((/* implicit */unsigned int) var_6);
        }
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_12);
    }
    /* LoopSeq 3 */
    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                arr_21 [i_5] = (~(arr_15 [i_4] [i_4]));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1465971195)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_15 [10] [(short)5])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_4]))))) : (((((/* implicit */long long int) var_5)) - (arr_17 [16]))))) < (max((((/* implicit */long long int) ((arr_18 [11LL] [11LL] [11LL]) >= (((/* implicit */int) arr_16 [i_4]))))), (max((((/* implicit */long long int) (unsigned short)65532)), (arr_17 [18]))))))))));
            }
            var_26 = (+(((((/* implicit */int) (unsigned short)1)) >> (((((/* implicit */int) arr_16 [(short)12])) - (16676))))));
        }
        var_27 ^= ((/* implicit */int) ((((/* implicit */int) ((min((var_0), (((/* implicit */unsigned long long int) (unsigned short)0)))) < (((/* implicit */unsigned long long int) -3260274497526279236LL))))) >= (((/* implicit */int) (short)18518))));
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_8 = 2; i_8 < 10; i_8 += 2) 
        {
            arr_26 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3260274497526279235LL)))) ? (arr_17 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8] [i_8] [(unsigned char)14])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-(arr_15 [i_7] [i_7])))));
            var_28 *= arr_11 [i_7] [i_8] [i_7];
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) ((int) min((var_15), (((/* implicit */int) arr_11 [i_9] [i_9] [i_9])))))) ? ((-((~(((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7] [i_9] [4ULL] [4ULL])) && (((arr_24 [i_7]) > (var_6))))))));
                arr_31 [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) min((var_12), (var_2)))) << (((arr_14 [i_7]) - (9032663255471739858LL)))));
            }
            arr_32 [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65531)) && (((/* implicit */_Bool) (unsigned short)56746)))))));
            var_30 += ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_14 [i_9])))) ? (((3260274497526279235LL) >> (((1207038170) - (1207038119))))) : (((/* implicit */long long int) ((unsigned int) var_4)))))) || (((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)8789))))))));
        }
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) (+(((int) (-(((/* implicit */int) arr_10 [i_7])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_14 = 1; i_14 < 8; i_14 += 1) 
                        {
                            arr_45 [(short)0] [i_7] [i_14] = ((/* implicit */unsigned long long int) arr_4 [i_12]);
                            arr_46 [(short)1] [(short)0] [(short)1] [i_7] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_7] [i_13] [i_12 + 1] [i_14 + 2])) ? (((((/* implicit */int) arr_4 [i_13])) + (((/* implicit */int) var_2)))) : (1207038197)));
                            arr_47 [i_7] [i_7] [i_13] [i_13] [i_14] = ((/* implicit */unsigned short) (((_Bool)0) ? (((arr_0 [i_7]) & (((/* implicit */long long int) 1207038170)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8793)) ? (((/* implicit */int) arr_10 [i_7])) : (((/* implicit */int) arr_11 [i_7] [i_11] [i_12])))))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_15))) << (((arr_18 [i_7] [(signed char)17] [17ULL]) - (106648758)))));
                        }
                        var_33 *= ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)4)), (-1207038170)));
                    }
                } 
            } 
        } 
    }
    for (short i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
    {
        arr_52 [(short)10] [2LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((~((-(((/* implicit */int) var_16)))))) : (arr_18 [i_15] [i_15] [i_15])));
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 3; i_16 < 10; i_16 += 3) 
        {
            arr_56 [i_16] [i_16] = ((/* implicit */unsigned char) var_11);
            var_34 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_14 [i_15])) ? (min((3260274497526279236LL), (6846262462181979754LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
        }
        arr_57 [(unsigned short)7] [(unsigned short)7] = ((/* implicit */long long int) (+(arr_27 [i_15] [i_15] [i_15])));
        /* LoopSeq 2 */
        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            arr_61 [i_17] [i_17] [(short)9] = (unsigned short)65531;
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 3) 
            {
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    {
                        var_35 *= min((((/* implicit */long long int) (+(((/* implicit */int) arr_62 [i_18 - 1]))))), (((var_7) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21))))));
                        var_36 ^= var_7;
                    }
                } 
            } 
            var_37 += ((((/* implicit */_Bool) ((short) arr_2 [10ULL]))) && (((_Bool) arr_15 [14ULL] [(unsigned short)7])));
            var_38 = ((/* implicit */unsigned int) arr_18 [13U] [i_17] [i_17]);
            var_39 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_10 [i_17]))))));
        }
        /* vectorizable */
        for (signed char i_20 = 1; i_20 < 8; i_20 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_21 = 0; i_21 < 11; i_21 += 1) 
            {
                var_40 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [(unsigned char)8] [i_20 - 1])) / (((int) var_0))));
                var_41 &= ((short) var_0);
                var_42 = ((/* implicit */long long int) var_2);
            }
            arr_73 [(unsigned short)1] [i_15] [i_15] = ((/* implicit */unsigned long long int) arr_40 [i_15] [(short)7] [i_15] [i_15]);
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 4) 
            {
                var_43 += ((/* implicit */long long int) (-(((var_2) ? (var_8) : (((/* implicit */int) var_9))))));
                /* LoopSeq 3 */
                for (int i_23 = 3; i_23 < 9; i_23 += 2) 
                {
                    var_44 = ((/* implicit */short) arr_18 [i_20 - 1] [i_23 + 2] [i_22]);
                    var_45 = ((/* implicit */unsigned short) arr_44 [i_22] [i_20 + 1] [i_20 + 3] [i_22]);
                    var_46 = ((/* implicit */short) (~(((/* implicit */int) arr_39 [i_22] [i_20 - 1] [i_22] [i_22]))));
                }
                for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) 
                {
                    arr_83 [i_24] [i_22] [i_15] [i_15] = ((/* implicit */long long int) var_13);
                    var_47 = ((/* implicit */int) ((((((/* implicit */long long int) var_15)) / (var_6))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_24])))))));
                    arr_84 [i_15] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_74 [i_20] [i_24]))) / (var_10))));
                }
                for (short i_25 = 0; i_25 < 11; i_25 += 2) 
                {
                    var_48 = ((((/* implicit */_Bool) arr_14 [i_15])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)));
                    var_49 = ((/* implicit */int) max((var_49), ((-(arr_35 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 - 1])))));
                    arr_87 [i_15] = ((/* implicit */unsigned short) (-(var_8)));
                }
                arr_88 [i_15] = ((/* implicit */long long int) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)4)) > (((/* implicit */int) (signed char)67))))))));
            }
        }
    }
}
