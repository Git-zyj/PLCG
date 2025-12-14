/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59947
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_1] [i_0]))) << (((((arr_3 [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_7)))))))) - (1LL))))))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) (+(arr_12 [i_0] [i_0] [3] [(signed char)14] [i_4 + 3] [14] [i_0])));
                            var_14 = ((/* implicit */int) (-(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_4)) : (var_1))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */int) var_8))))))))));
                            arr_13 [i_4] [i_1] [i_4 + 2] [(short)10] [i_4] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))))) << (((((/* implicit */int) max((arr_1 [i_2 - 2]), (((/* implicit */short) arr_2 [i_4 + 2]))))) - (16154)))));
                        }
                    } 
                } 
            } 
            var_15 -= ((/* implicit */long long int) arr_0 [10LL] [i_1]);
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
            var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((1204139696) & (arr_6 [i_0] [i_1] [i_0] [i_0]))))))), (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])));
        }
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            arr_16 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) & (max((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_3 [i_0] [i_0] [i_0])))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (-(max((arr_0 [i_5] [i_5]), (max((-1204139696), (1204139696)))))));
                        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -121143258)) && (((/* implicit */_Bool) var_6))));
                        arr_22 [i_5] [i_5] [10LL] = ((/* implicit */long long int) max(((!((!(var_8))))), ((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_6] [16LL] [(signed char)19] [(unsigned char)20] [i_5]))))));
                        var_20 = ((/* implicit */long long int) ((((long long int) (~(arr_6 [(signed char)6] [i_6] [i_5] [i_0])))) == ((-(arr_3 [i_0] [5LL] [i_6])))));
                    }
                } 
            } 
            var_21 = ((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)6]);
            var_22 *= ((/* implicit */short) ((((((/* implicit */int) arr_18 [i_0] [i_5] [i_5] [1LL])) | (((/* implicit */int) min((((/* implicit */short) var_8)), (var_0)))))) >> (min(((+(arr_8 [i_0] [i_0] [10LL] [i_5] [i_5]))), (((/* implicit */long long int) arr_18 [i_5] [i_5] [(_Bool)1] [2LL]))))));
        }
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            arr_26 [i_0] [i_8] = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) arr_6 [i_8] [i_8] [i_8] [(signed char)19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_8] [i_8] [i_0])))) == (((((/* implicit */int) arr_10 [i_8])) | (((/* implicit */int) (signed char)-87)))))));
            arr_27 [i_0] [i_8] = ((/* implicit */long long int) (~(arr_12 [i_8] [1] [(unsigned char)15] [(_Bool)1] [(_Bool)1] [i_0] [i_0])));
        }
    }
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            arr_32 [i_9] [i_9] [i_9] = ((/* implicit */short) (~(arr_21 [i_10] [i_10] [i_9] [i_9])));
            /* LoopNest 3 */
            for (long long int i_11 = 1; i_11 < 18; i_11 += 4) 
            {
                for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    for (signed char i_13 = 3; i_13 < 19; i_13 += 1) 
                    {
                        {
                            arr_44 [i_9] [i_13 - 2] [i_11 + 2] [8LL] [i_13 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_9] [i_12])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((121143258) / (((/* implicit */int) arr_31 [i_9]))))) ? (((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)31))))))))));
                            arr_45 [i_9] [i_9] [i_9] = ((/* implicit */signed char) -1161853608);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((_Bool) arr_3 [(signed char)1] [i_9] [i_10])))))));
        }
        for (long long int i_14 = 1; i_14 < 19; i_14 += 2) 
        {
            arr_49 [i_9] [i_9] [i_14] = min((var_10), (max((var_1), (((/* implicit */long long int) ((-971702218) ^ (((/* implicit */int) var_5))))))));
            /* LoopNest 2 */
            for (long long int i_15 = 1; i_15 < 17; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            var_24 = (+(((/* implicit */int) ((((/* implicit */int) ((short) arr_33 [i_9] [i_9] [9ULL] [i_9]))) != (((/* implicit */int) ((121143283) == (var_4))))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max(((((+(((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_17])))) % (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7))))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_9] [i_14 + 1] [i_15 - 1])) || (((/* implicit */_Bool) arr_30 [i_9] [i_14 - 1] [i_15 - 1]))))))))));
                            var_26 = ((/* implicit */unsigned long long int) (~(((arr_12 [i_9] [i_9] [i_9] [(short)20] [i_9] [i_9] [i_9]) ^ (((((/* implicit */int) arr_7 [i_9] [i_14 - 1] [i_15 - 1] [i_9] [i_15 + 1] [i_15 - 1])) ^ (((/* implicit */int) (signed char)31))))))));
                            var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_11)))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_34 [12LL] [12LL] [12LL] [12LL])) - (1047))))))));
                            var_29 = ((/* implicit */int) ((5334452105664103164LL) - (((/* implicit */long long int) arr_56 [i_14 + 1] [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 1]))));
                        }
                        var_30 = ((/* implicit */signed char) (~(1586890882272787500LL)));
                        arr_59 [(short)0] [i_9] [(short)17] [(short)0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 2147483643))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) -1204139693)))))));
                    }
                } 
            } 
        }
        for (short i_19 = 0; i_19 < 20; i_19 += 1) 
        {
            var_31 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_15 [i_19] [i_19])))) << (((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_37 [i_9] [i_19] [i_19])) % (arr_28 [i_9])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_55 [i_9] [(signed char)2] [(_Bool)1] [(signed char)1] [(signed char)1] [i_9])) : (var_4))) : ((-(((/* implicit */int) (signed char)8)))))) - (26653)))));
            /* LoopNest 3 */
            for (long long int i_20 = 0; i_20 < 20; i_20 += 1) 
            {
                for (unsigned char i_21 = 2; i_21 < 18; i_21 += 4) 
                {
                    for (short i_22 = 0; i_22 < 20; i_22 += 2) 
                    {
                        {
                            arr_70 [i_9] [i_9] [i_9] [i_9] [18ULL] = ((/* implicit */signed char) var_0);
                            var_32 -= ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_20] [i_20] [i_20] [i_20] [i_19])) ? (var_9) : (((/* implicit */int) arr_55 [i_9] [i_19] [i_19] [i_20] [i_19] [i_22]))))) >= (arr_41 [i_19] [i_19])))), ((-((~(((/* implicit */int) arr_31 [i_21]))))))));
                            var_33 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_43 [i_21 + 2] [i_21 + 1] [i_9] [i_9] [i_21 + 1] [i_21 - 2]), ((short)23206))))));
                            var_34 = ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
            } 
        }
        var_35 ^= ((/* implicit */int) var_10);
        arr_71 [i_9] = min((max(((-(((/* implicit */int) (short)896)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) || (((/* implicit */_Bool) -121143271))))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_9] [2ULL]))))))));
        /* LoopNest 3 */
        for (signed char i_23 = 0; i_23 < 20; i_23 += 1) 
        {
            for (int i_24 = 0; i_24 < 20; i_24 += 1) 
            {
                for (unsigned char i_25 = 2; i_25 < 19; i_25 += 1) 
                {
                    {
                        arr_78 [i_9] [i_24] [i_23] [i_9] = ((/* implicit */short) min((min((arr_50 [i_25 + 1] [i_25 + 1] [i_9] [i_25 - 2]), (((((/* implicit */int) var_11)) * (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) arr_9 [i_9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))));
                        var_36 = ((/* implicit */long long int) min((var_36), ((+(max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_24]))) | (arr_73 [i_9] [(_Bool)1]))), (max((arr_64 [i_23] [i_23] [i_23]), (((/* implicit */long long int) -1204139709))))))))));
                        var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [(signed char)9] [i_25 - 2] [i_25 + 1] [i_9] [i_25])))))));
                        var_38 = ((/* implicit */long long int) arr_24 [19LL] [i_9]);
                        arr_79 [i_9] [i_9] [i_9] [14LL] [i_9] [14LL] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_33 [i_9] [(_Bool)1] [i_24] [i_25 + 1])) : (15043457134078662048ULL))))))), (2147483620)));
                    }
                } 
            } 
        } 
    }
    var_39 = ((/* implicit */int) max((((/* implicit */long long int) var_8)), (min((max((((/* implicit */long long int) var_4)), (var_1))), (((/* implicit */long long int) var_8))))));
    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (-(max(((-(var_7))), (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))))))));
    /* LoopNest 3 */
    for (signed char i_26 = 1; i_26 < 17; i_26 += 4) 
    {
        for (unsigned char i_27 = 4; i_27 < 19; i_27 += 1) 
        {
            for (long long int i_28 = 0; i_28 < 21; i_28 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_29 = 0; i_29 < 21; i_29 += 2) 
                    {
                        for (int i_30 = 3; i_30 < 18; i_30 += 2) 
                        {
                            {
                                var_41 *= ((/* implicit */short) ((min((((/* implicit */long long int) var_0)), (arr_25 [i_26 + 1] [i_26 + 3]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_25 [i_26] [i_26 + 3]))))))));
                                arr_93 [i_26] [i_26] [i_26] [i_26] [i_29] [i_27] [i_30 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_17 [i_26 + 3] [i_26 + 3] [i_26 + 2] [i_26 + 4])) >> (((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_31 = 0; i_31 < 21; i_31 += 3) 
                    {
                        arr_96 [i_27] [i_27 - 3] [5LL] [i_27] [i_28] [i_31] = ((/* implicit */short) var_11);
                        arr_97 [i_27] [i_27 + 1] [i_31] [i_27] [11] [(_Bool)1] = ((/* implicit */signed char) var_2);
                        var_42 = ((/* implicit */int) arr_88 [2LL] [2LL] [2LL] [(signed char)16]);
                    }
                    arr_98 [i_27] [i_27] [i_27] [i_26 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) (~((+(arr_25 [i_26] [i_26])))))) ? ((~(((/* implicit */int) arr_17 [i_27 - 2] [i_28] [i_28] [i_27 - 2])))) : (((((/* implicit */int) (!(var_11)))) & (((((/* implicit */_Bool) arr_84 [i_26] [i_27])) ? (arr_0 [i_26] [0]) : (var_4)))))));
                }
            } 
        } 
    } 
}
