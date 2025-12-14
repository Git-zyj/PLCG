/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88920
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_0])) + (((/* implicit */int) min((arr_4 [i_1 - 1] [i_1 + 3] [i_0]), (arr_4 [i_1 + 4] [i_1 + 4] [i_0]))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) max((var_7), (arr_2 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) (short)3038)), (0U)))));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_12 [i_2] [i_3] [i_2] = 6987740841521057222LL;
            arr_13 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-18436)) : (((/* implicit */int) arr_6 [i_2] [(unsigned char)6])))) == (((/* implicit */int) arr_7 [i_2] [i_2])))))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */short) arr_7 [0LL] [0LL])), ((short)-18423))))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 24; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            arr_23 [i_2] [i_3] [10U] [i_2] [i_2] = ((/* implicit */unsigned int) var_1);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [i_6] [6U] [i_2] [14LL] [i_2])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_15 [i_2] [i_2] [17U] [i_2])))) << (((max((arr_14 [(unsigned char)3] [i_5]), (((/* implicit */long long int) (short)-18436)))) - (6701380774565421658LL)))))) ? ((~(((/* implicit */int) max((arr_18 [i_2] [(short)18] [i_2] [i_2] [i_6]), (arr_15 [i_2] [8U] [i_5] [i_2])))))) : ((+((-(((/* implicit */int) arr_21 [i_4]))))))));
                        }
                    } 
                } 
                arr_24 [i_2] [i_2] [(unsigned char)19] = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) min((((((/* implicit */_Bool) arr_10 [i_2])) || (((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) var_14))))))) << (((((((/* implicit */int) max((((/* implicit */short) arr_7 [i_2] [i_2])), (arr_9 [i_4])))) | (((((/* implicit */int) (short)-18431)) ^ (((/* implicit */int) arr_9 [(short)5])))))) - (25083)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) min((((((/* implicit */_Bool) arr_10 [i_2])) || (((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) var_14))))))) << (((((((((/* implicit */int) max((((/* implicit */short) arr_7 [i_2] [i_2])), (arr_9 [i_4])))) | (((((/* implicit */int) (short)-18431)) ^ (((/* implicit */int) arr_9 [(short)5])))))) - (25083))) + (141))))));
            }
        }
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_23 += ((/* implicit */short) max((min((((/* implicit */long long int) (short)18431)), (126100789566373888LL))), (((/* implicit */long long int) (+(((/* implicit */int) (short)18430)))))));
            var_24 ^= ((/* implicit */unsigned int) ((short) (~(1041869749U))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 3; i_8 < 24; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_8 - 1])) - (((/* implicit */int) arr_9 [i_11]))));
                            arr_38 [i_2] [i_8] [(short)14] [(short)14] [i_11] = ((/* implicit */unsigned int) ((short) arr_16 [i_8 - 3] [(unsigned char)7] [(short)4] [i_10]));
                            var_26 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_6 [(unsigned char)16] [i_8 + 1]))));
                        }
                    } 
                } 
            } 
            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [(short)12] [(short)12] [(unsigned char)18] [i_2])) + (((/* implicit */int) (short)-1))));
            var_28 = ((/* implicit */unsigned int) var_10);
            var_29 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [(short)22] [(short)22] [(short)14] [i_2]))));
        }
        for (long long int i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            var_30 = ((/* implicit */short) arr_48 [i_14]);
                            arr_52 [i_12] [i_12] [i_2] [i_12] [i_15] = min((((/* implicit */short) (unsigned char)0)), ((short)18435));
                            var_31 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-18437))) / (max((((/* implicit */unsigned int) arr_49 [i_13] [i_13] [(unsigned char)20])), (arr_19 [i_2] [(short)7] [i_13] [i_14] [i_15] [(short)8]))))), (((/* implicit */unsigned int) ((unsigned char) arr_9 [(short)13])))));
                            arr_53 [8LL] [i_2] [6U] [i_14] [i_15] [i_15] = ((/* implicit */long long int) max((arr_47 [i_2] [i_13]), ((~(arr_47 [i_2] [i_2])))));
                        }
                        for (long long int i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) min((((short) arr_41 [i_12] [i_13])), (((/* implicit */short) var_2))));
                            arr_56 [i_16] [i_14] [i_2] [i_12] [i_2] = ((/* implicit */unsigned char) (+(arr_19 [i_2] [i_12] [18U] [i_13] [(unsigned char)16] [i_16])));
                        }
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            arr_59 [i_2] [i_12] [(unsigned char)9] [i_2] [(short)3] = ((/* implicit */unsigned int) (unsigned char)34);
                            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_54 [(unsigned char)6] [i_14] [i_14] [i_13] [(unsigned char)23] [i_2]))));
                        }
                        arr_60 [i_2] [i_12] [(short)19] [(short)8] [i_2] = ((/* implicit */unsigned char) arr_29 [i_13] [i_13]);
                        var_34 += ((/* implicit */short) arr_55 [i_2] [i_2] [(short)9]);
                        /* LoopSeq 2 */
                        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 3) 
                        {
                            arr_63 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
                            var_35 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_15), (((/* implicit */short) arr_11 [3LL] [i_14]))))) >> ((((~(arr_41 [i_13] [13U]))) - (1059444002U))))) & (((/* implicit */int) ((short) 3253097560U)))));
                        }
                        for (unsigned int i_19 = 0; i_19 < 25; i_19 += 3) 
                        {
                            var_36 *= ((/* implicit */unsigned int) arr_18 [i_19] [i_2] [i_2] [(short)15] [i_2]);
                            var_37 = max((min((-1LL), (((/* implicit */long long int) (short)737)))), (((/* implicit */long long int) (+((+(((/* implicit */int) arr_64 [i_2] [i_2]))))))));
                            var_38 = ((/* implicit */long long int) min((var_0), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))))));
                            var_39 += ((/* implicit */short) ((long long int) (~(((/* implicit */int) arr_25 [(unsigned char)2] [i_14] [(unsigned char)2])))));
                        }
                        arr_67 [(unsigned char)8] [i_13] [(unsigned char)8] [(short)4] [i_2] |= ((/* implicit */short) var_11);
                    }
                } 
            } 
            arr_68 [i_2] [i_2] [i_12] = ((/* implicit */short) (-(((/* implicit */int) arr_62 [i_2] [i_2] [i_2] [i_12] [i_2]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 3) 
        {
            for (long long int i_21 = 1; i_21 < 22; i_21 += 3) 
            {
                {
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_37 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_2] [i_20] [(short)21] [i_21]), (arr_37 [i_21 + 1] [i_20] [i_21] [9U] [i_2] [22LL] [17U])))) < (((/* implicit */int) ((((/* implicit */int) arr_37 [i_21 + 1] [(short)19] [(short)19] [i_21] [i_20] [(short)5] [(unsigned char)19])) == (((/* implicit */int) arr_37 [i_21 + 1] [(unsigned char)1] [i_20] [(unsigned char)1] [i_21] [9U] [7U])))))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (+(((/* implicit */int) ((short) (unsigned char)12))))))));
                    var_42 += ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [(unsigned char)3]))));
                    var_43 = ((unsigned char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_2] [i_2])) || (((/* implicit */_Bool) arr_8 [(unsigned char)11]))))), (arr_25 [i_2] [8U] [i_2])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_22 = 0; i_22 < 25; i_22 += 3) 
        {
            var_44 = arr_10 [(short)17];
            arr_75 [i_2] [(short)18] [i_2] &= ((/* implicit */unsigned int) (unsigned char)40);
        }
    }
    /* LoopSeq 4 */
    for (short i_23 = 0; i_23 < 22; i_23 += 3) 
    {
        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((((((((/* implicit */long long int) ((((/* implicit */int) var_15)) + (((/* implicit */int) arr_74 [i_23] [21LL] [i_23]))))) & ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_42 [(unsigned char)17] [i_23] [i_23]))))) - (94))))))));
        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)-26050)), (max((arr_32 [i_23] [(short)24] [i_23]), (((/* implicit */unsigned int) var_5)))))))));
        var_47 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [(short)22] [i_23] [i_23] [i_23] [(short)22])) ? (arr_14 [i_23] [i_23]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_23] [i_23] [i_23] [i_23] [i_23]))))) <= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)40)))))));
        arr_79 [12LL] [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_72 [22LL] [i_23] [(short)0]))));
    }
    for (short i_24 = 0; i_24 < 13; i_24 += 3) 
    {
        /* LoopNest 2 */
        for (short i_25 = 0; i_25 < 13; i_25 += 3) 
        {
            for (unsigned char i_26 = 1; i_26 < 9; i_26 += 3) 
            {
                {
                    arr_88 [i_24] [i_24] [i_24] [(short)10] &= ((/* implicit */unsigned char) -1698238631298737401LL);
                    arr_89 [i_24] [i_24] = ((/* implicit */unsigned int) arr_57 [i_26 + 3] [i_26] [i_26 + 3] [i_26] [i_24]);
                    arr_90 [i_25] [i_24] = ((/* implicit */short) arr_87 [i_24] [(short)3]);
                    /* LoopNest 2 */
                    for (short i_27 = 0; i_27 < 13; i_27 += 3) 
                    {
                        for (short i_28 = 3; i_28 < 11; i_28 += 3) 
                        {
                            {
                                var_48 = ((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_37 [i_28 - 2] [i_24] [i_28 - 2] [i_26 + 3] [i_28] [i_25] [i_24]))))), (arr_37 [i_28 - 2] [i_28 - 2] [i_28 - 2] [i_26 + 3] [i_26] [(short)2] [3U])));
                                arr_95 [i_24] [(unsigned char)4] [i_26] [i_24] [(unsigned char)7] [12U] [12U] = ((/* implicit */unsigned int) (!((((-(((/* implicit */int) (short)-5)))) > (((/* implicit */int) ((arr_31 [(short)13] [(short)13] [i_26]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_24] [i_26]))))))))));
                                var_49 = ((/* implicit */short) max((var_49), (((short) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (947362400524415349LL)))))));
                                var_50 ^= ((/* implicit */unsigned char) (+(8486605117431581104LL)));
                                var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)30)) + (((/* implicit */int) min((var_1), ((unsigned char)39)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_52 *= arr_61 [i_24] [i_24] [i_24] [(short)4] [(short)16];
    }
    for (unsigned int i_29 = 0; i_29 < 17; i_29 += 3) 
    {
        var_53 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)11)) | (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)11293), (arr_62 [i_29] [i_29] [i_29] [i_29] [i_29])))))))));
        arr_99 [(unsigned char)9] [i_29] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_47 [i_29] [i_29]) & (arr_47 [i_29] [i_29]))))));
        var_54 = ((/* implicit */short) ((((/* implicit */int) (short)8205)) + (((/* implicit */int) (short)12318))));
        var_55 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_44 [i_29])) - (((/* implicit */int) arr_62 [i_29] [(short)8] [i_29] [i_29] [(unsigned char)10]))))));
    }
    /* vectorizable */
    for (short i_30 = 0; i_30 < 15; i_30 += 3) 
    {
        var_56 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_4)) + (((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (short i_31 = 0; i_31 < 15; i_31 += 3) 
        {
            for (unsigned char i_32 = 0; i_32 < 15; i_32 += 3) 
            {
                {
                    arr_110 [(unsigned char)4] [i_30] [i_30] [i_30] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_47 [i_31] [i_32]))));
                    var_57 = ((/* implicit */unsigned char) -5837546171299642767LL);
                }
            } 
        } 
    }
}
