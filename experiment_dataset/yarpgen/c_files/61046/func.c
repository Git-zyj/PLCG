/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61046
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
    var_14 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_3))) - (((((/* implicit */_Bool) (short)-26819)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-21726))))) ? (((/* implicit */int) min((var_6), (var_10)))) : (((((/* implicit */int) var_13)) % (((/* implicit */int) var_9)))))) - (2450)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) min((min((((/* implicit */int) var_2)), ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)7])) : (((/* implicit */int) arr_6 [i_1] [i_2])))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) min((var_1), (var_4))))))));
                    arr_8 [i_0] [i_2] &= var_6;
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            var_16 ^= ((/* implicit */short) ((unsigned long long int) ((9657776574739341865ULL) & (arr_11 [i_0] [i_1 - 1] [i_1] [i_2] [i_3] [i_1 - 1]))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 17850048502471531317ULL))));
                        }
                        var_18 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) var_0))))), (min((((/* implicit */short) var_9)), (min((((/* implicit */short) arr_3 [i_1] [i_1])), (var_6)))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 2; i_5 < 23; i_5 += 1) /* same iter space */
                        {
                            arr_19 [12ULL] [i_1] [i_2] [i_5] [i_5] [i_5] [i_5] = min((arr_5 [i_1] [7ULL] [i_5]), (((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) var_6)))))));
                            var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
                        }
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 23; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [(short)15] [i_3] [i_6] [(short)15] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_6 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [20ULL] [i_1] [i_6 + 1]))) : (18413474895608190592ULL)));
                            arr_24 [i_0] [15ULL] [i_1] [i_3] = var_9;
                            var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25012))) : (16022497662610785920ULL)));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_2] [i_1 + 1] [i_1] [i_1] [i_1 + 2] [i_1 - 1] |= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [20ULL] [i_0] [i_0]);
                        arr_28 [i_1] [i_1] = ((/* implicit */short) (~((-(((/* implicit */int) var_11))))));
                        var_21 = var_11;
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_1 + 2] [(short)19] [i_1] [i_1 + 1] [i_1] = ((/* implicit */short) 19ULL);
                        var_22 = ((/* implicit */unsigned long long int) var_9);
                        arr_32 [i_1] [i_1] [i_8] [i_1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-64)) & (((/* implicit */int) (signed char)-60))));
                        arr_33 [i_0] [i_1] [i_1] [(short)1] [(short)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((((/* implicit */int) arr_3 [i_1] [i_1])) ^ (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0]))))))));
                    }
                    var_23 = ((/* implicit */unsigned char) min((min((((/* implicit */short) ((((/* implicit */int) (unsigned char)232)) != (((/* implicit */int) arr_0 [i_0]))))), ((short)-25324))), (((/* implicit */short) ((((2113929216ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))))));
                    var_24 &= min((min((((/* implicit */unsigned long long int) var_12)), (arr_17 [i_1] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) ((unsigned long long int) 370094534532478268ULL));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                arr_42 [i_9] [i_10] [i_11] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_36 [i_9] [i_9]))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_9] [i_9] [i_9] [i_9] [6ULL] [i_9] [i_9])))))));
                            arr_48 [i_9] [i_9] [i_9] [i_9] [(unsigned char)13] = ((/* implicit */signed char) ((_Bool) arr_14 [i_9] [i_10] [i_10] [7ULL] [i_12] [13ULL] [i_13]));
                            var_27 = ((arr_30 [i_13] [i_13] [i_9] [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                        }
                    } 
                } 
                var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_9])) - (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_21 [(short)17] [i_11] [i_11] [i_11] [i_11])) ? (18446744073709551608ULL) : (arr_29 [i_9] [i_11] [(_Bool)1] [i_11] [(_Bool)1] [i_11])))));
            }
            for (short i_14 = 1; i_14 < 16; i_14 += 2) 
            {
                arr_51 [i_10] [i_10] [i_14] [i_9] = ((((/* implicit */_Bool) (unsigned char)255)) ? (11023474524475507306ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_9] [i_9] [i_9]))));
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)6537)) ? ((~(((/* implicit */int) (short)-6145)))) : (((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)13))))));
                var_30 = ((/* implicit */unsigned char) min((var_30), (((unsigned char) ((((/* implicit */_Bool) 8521215115264ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_39 [i_10])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        {
                            var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)18306)) ? (((/* implicit */int) arr_2 [i_9] [i_14 - 1])) : ((+(((/* implicit */int) var_2))))));
                            arr_57 [i_9] [i_9] [i_9] [i_14] [i_15] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_9] [i_14])) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) arr_12 [i_10] [i_10] [i_10] [i_10] [i_10] [(signed char)4]))))));
                            arr_58 [i_9] [i_9] [i_9] [i_9] [(short)6] [(short)6] [i_9] = ((/* implicit */short) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_43 [i_14 + 2] [i_14] [i_14] [i_14 + 1]))));
                        }
                    } 
                } 
            }
            for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
            {
                arr_62 [i_9] [i_9] = ((/* implicit */unsigned long long int) var_4);
                var_32 = ((/* implicit */signed char) ((((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9] [i_9]))))) ? (((/* implicit */int) (short)24989)) : (((/* implicit */int) arr_3 [i_9] [i_9]))));
            }
            for (signed char i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 4) 
                {
                    var_33 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9] [(short)6] [i_18] [i_19])) && (((/* implicit */_Bool) arr_38 [i_10] [i_18])))) || (((/* implicit */_Bool) var_11))));
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_3 [(short)18] [i_18])) ? (arr_59 [i_9] [(unsigned char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                    var_35 = ((short) arr_55 [i_9] [(signed char)9] [i_18] [i_19] [i_19] [i_19 + 1] [i_19 + 1]);
                    var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_9] [i_19 - 1] [i_19] [i_19 + 1] [i_19] [i_19] [i_19 + 1])) ? ((+(((/* implicit */int) (short)25223)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_40 [i_19] [(short)2] [i_9])))))));
                }
                arr_69 [i_9] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) arr_11 [i_9] [i_10] [i_18] [i_18] [i_18] [i_18]);
                arr_70 [i_9] = var_0;
            }
            arr_71 [(short)6] [(short)0] [(unsigned char)0] |= ((/* implicit */signed char) ((1122290258076336488ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25639)))));
            var_37 = ((/* implicit */signed char) (~(4611686018158952448ULL)));
            arr_72 [i_9] [i_9] [i_10] = ((/* implicit */unsigned char) ((_Bool) arr_10 [i_9] [i_10]));
            var_38 = ((/* implicit */short) (-(((/* implicit */int) (short)-1))));
        }
        var_39 = ((/* implicit */short) max((var_39), (((short) ((((/* implicit */_Bool) (short)26821)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))));
        arr_73 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_61 [i_9]))));
    }
    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 4) 
    {
        var_40 = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_5)))));
        arr_78 [i_20] = ((/* implicit */unsigned long long int) var_1);
    }
}
