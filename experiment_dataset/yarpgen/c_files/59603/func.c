/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59603
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
    var_16 = var_15;
    var_17 = min((var_6), (5071989396305769948LL));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_18 = ((long long int) -5293232653317447338LL);
                        var_19 = arr_7 [i_3] [i_2] [i_0] [i_0];
                        arr_11 [i_1] [i_2] [i_1] = ((((-7777915486086492106LL) + (9223372036854775807LL))) >> (((-484738860422482651LL) + (484738860422482660LL))));
                        var_20 = (+(arr_8 [15LL] [i_2] [5LL] [15LL]));
                        arr_12 [0LL] [i_2] [i_1 - 2] [i_1] [i_0] = ((long long int) arr_1 [i_0 + 2]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_19 [14LL] [i_2] [i_2] [i_1] [8LL] = arr_3 [i_4] [i_1 - 2];
                                var_21 = arr_7 [i_0] [i_0] [i_0 - 1] [i_0];
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_0] [7LL] = (~(arr_16 [i_1 + 1] [i_0 + 1]));
                }
            } 
        } 
        arr_21 [i_0] [i_0 + 2] = ((((/* implicit */_Bool) arr_6 [i_0 - 2])) ? (var_10) : (arr_6 [i_0 - 1]));
        var_22 |= 3122686645805609472LL;
        var_23 = arr_14 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [12LL];
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_28 [i_8] [i_7] [i_7] [i_6] [i_7] [i_0] = ((/* implicit */long long int) ((7777915486086492110LL) < (1070168891741174154LL)));
                        var_24 = ((/* implicit */long long int) min((var_24), (((arr_25 [i_6] [i_6]) / (arr_25 [i_6] [i_6])))));
                        arr_29 [i_7] [i_6] [14LL] [i_6] [i_8] = ((((((/* implicit */_Bool) 5071989396305769921LL)) ? (arr_18 [i_0] [i_0] [i_0]) : (-595190500615224264LL))) / (-5071989396305769942LL));
                    }
                    arr_30 [i_7] = var_0;
                }
            } 
        } 
    }
    for (long long int i_9 = 4; i_9 < 8; i_9 += 4) 
    {
        var_25 = ((arr_3 [i_9] [i_9 - 1]) - (arr_3 [i_9] [i_9 - 1]));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            arr_36 [i_10] [5LL] = (~((-(-7804885888179909033LL))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    arr_42 [i_10] [i_11] [1LL] [i_10] = ((((/* implicit */_Bool) arr_33 [i_9 + 1] [i_9 - 3])) ? (arr_39 [i_9 - 1] [i_10] [i_11] [9LL]) : (((((/* implicit */_Bool) var_13)) ? (605233617022670710LL) : (-3837086833701489860LL))));
                    arr_43 [i_12] [i_10] [i_10] [i_9] = ((/* implicit */long long int) ((arr_32 [i_9] [i_9 - 2]) >= (arr_32 [i_9] [i_9 - 1])));
                    var_26 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1]))));
                }
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_27 = ((/* implicit */long long int) min((var_27), (var_9)));
                    arr_46 [i_13] [i_13] [i_10] [i_10] [i_9] [i_9 + 3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5071989396305769946LL))));
                    arr_47 [i_10] [i_9] [i_9] [i_10] [i_9] [i_10] = 9223372036854775807LL;
                }
                for (long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    var_28 = (+(((arr_24 [i_9] [i_10] [i_11] [i_10]) - (arr_10 [i_9] [7LL] [7LL] [i_14] [i_9]))));
                    arr_50 [i_9] [i_10] [i_14] = (~(-1070168891741174140LL));
                    var_29 = ((long long int) var_12);
                    arr_51 [i_14] [i_10] [i_10] [5LL] = (~(arr_8 [i_9] [i_9] [i_9 - 4] [7LL]));
                }
                for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_30 ^= ((long long int) 5071989396305769946LL);
                        arr_57 [i_9] [0LL] [i_9] [i_10] [0LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10])) ? (arr_45 [i_11] [i_11] [7LL] [i_9]) : (arr_31 [i_9]))))));
                        arr_58 [i_10] = ((((/* implicit */_Bool) arr_23 [i_9 + 3] [i_9 - 2])) ? (arr_23 [i_9 - 3] [i_9 - 3]) : (arr_23 [i_9 - 3] [i_9 - 3]));
                    }
                    var_31 = ((((/* implicit */_Bool) arr_5 [i_9 - 2] [i_9] [i_9 - 2])) ? (arr_34 [8LL] [i_9]) : (arr_24 [4LL] [i_10] [i_11] [14LL]));
                    arr_59 [i_9] [i_10] [i_10] [i_10] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_9] [i_9 - 4])) || (((/* implicit */_Bool) arr_16 [i_9] [i_9 - 2]))));
                }
            }
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(5071989396305769948LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_52 [i_10] [i_10]), (6847289408669540908LL)))) ? (((((/* implicit */_Bool) arr_45 [i_9] [i_9 + 2] [i_10] [i_10])) ? (arr_48 [i_10] [i_10] [i_9] [i_9]) : (-9027427348962640156LL))) : (((arr_16 [i_9] [i_9]) ^ (-1LL))))))));
            /* LoopNest 3 */
            for (long long int i_17 = 3; i_17 < 10; i_17 += 1) 
            {
                for (long long int i_18 = 2; i_18 < 10; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        {
                            arr_66 [i_19] |= ((((/* implicit */_Bool) (-(-4479168806131641573LL)))) ? (((((/* implicit */_Bool) arr_37 [i_9])) ? (arr_37 [i_19]) : (arr_37 [i_9]))) : (((arr_37 [i_9]) & (arr_37 [i_9]))));
                            arr_67 [5LL] [i_10] [i_17] [i_17] [i_18] [i_10] = ((((/* implicit */_Bool) ((long long int) -5071989396305769925LL))) ? (arr_0 [i_10]) : (((long long int) ((((/* implicit */_Bool) arr_52 [i_10] [i_19])) ? (-1849701276586729589LL) : (var_12)))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_20 = 2; i_20 < 7; i_20 += 2) 
    {
        arr_71 [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_56 [i_20] [i_20 + 1]))));
        /* LoopNest 2 */
        for (long long int i_21 = 1; i_21 < 8; i_21 += 2) 
        {
            for (long long int i_22 = 0; i_22 < 10; i_22 += 1) 
            {
                {
                    arr_77 [i_21] = ((((/* implicit */_Bool) ((long long int) 5996026907992992640LL))) ? (-5996026907992992638LL) : (arr_76 [i_22] [i_20]));
                    arr_78 [i_21] [i_21 + 2] [i_21] [i_21 + 2] = arr_76 [i_21] [i_22];
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_23 = 2; i_23 < 8; i_23 += 3) 
        {
            for (long long int i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                for (long long int i_25 = 0; i_25 < 10; i_25 += 3) 
                {
                    {
                        arr_86 [i_20] [i_25] [i_20] [i_25] [i_20] = (~(arr_64 [i_24] [i_23 + 2] [i_23] [i_23] [i_20 + 3]));
                        arr_87 [i_25] = arr_61 [i_25];
                        var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_26 = 0; i_26 < 10; i_26 += 4) 
        {
            for (long long int i_27 = 1; i_27 < 9; i_27 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_28 = 1; i_28 < 7; i_28 += 4) 
                    {
                        for (long long int i_29 = 1; i_29 < 9; i_29 += 4) 
                        {
                            {
                                arr_97 [i_20] [i_26] [i_28 + 3] [i_29] = arr_85 [i_26] [i_27] [i_28] [7LL];
                                arr_98 [i_20] [i_20] [i_29] = ((((/* implicit */_Bool) arr_96 [i_20 - 1] [i_26] [i_20 - 1])) ? (arr_96 [i_20 - 1] [i_29] [i_29]) : (arr_96 [i_20 - 1] [8LL] [i_20]));
                                var_34 = -1071332093502485199LL;
                                arr_99 [i_29 - 1] [i_29] [i_28] [7LL] [i_20] [i_20] [i_20] = ((((/* implicit */_Bool) arr_64 [i_20 + 1] [i_27 - 1] [i_28] [i_28 + 2] [i_29 + 1])) ? (arr_15 [i_29 - 1] [i_28 - 1] [i_27 + 1] [i_27 + 1] [i_26]) : (arr_48 [i_27 + 1] [i_20 - 2] [i_20] [i_20]));
                                arr_100 [i_20 + 2] [i_20 + 2] [i_27 - 1] [i_20 + 2] = ((((/* implicit */_Bool) 595190500615224264LL)) ? ((-(var_12))) : (arr_39 [i_20] [i_26] [i_20] [i_29 - 1]));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1499228342547027219LL)) && (((/* implicit */_Bool) arr_31 [i_20]))));
                    var_36 = ((long long int) arr_91 [i_20 - 2] [i_27 + 1]);
                }
            } 
        } 
    }
}
