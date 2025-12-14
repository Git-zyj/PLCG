/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66059
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
    var_10 |= ((/* implicit */unsigned long long int) var_8);
    var_11 |= ((/* implicit */unsigned short) (-(-1505635729550868276LL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_4))));
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) 1505635729550868273LL);
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned long long int) (~(var_4)));
            var_13 = ((/* implicit */long long int) 10ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 1) 
        {
            arr_14 [i_1] [i_3] = ((/* implicit */unsigned long long int) var_2);
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_14 -= (unsigned short)10062;
                        var_15 = ((/* implicit */unsigned short) ((unsigned long long int) arr_11 [i_1 - 1] [i_1] [i_1 + 1]));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)6144)))) / (arr_11 [i_1 + 1] [i_1] [i_5 - 1])));
                            var_17 = ((/* implicit */unsigned short) arr_8 [10ULL] [(unsigned short)11]);
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 15744371916553295809ULL;
                            arr_23 [i_6] [i_1] [i_1] [i_3] = arr_18 [17LL] [i_1] [i_4] [i_3] [i_1] [i_1];
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((arr_2 [i_1 - 1]) ^ (arr_7 [i_5 + 2] [i_7])))));
                            var_19 = ((/* implicit */unsigned short) (-(1505635729550868273LL)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((unsigned short) arr_21 [i_1 - 1] [8] [i_5 + 2] [i_3 - 2] [(unsigned short)0]))));
                            var_21 = ((((/* implicit */_Bool) (unsigned short)65510)) ? (arr_27 [i_1 + 1] [i_3 + 2]) : (var_7));
                        }
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_1 [i_4]))));
                        var_23 = ((/* implicit */unsigned long long int) arr_19 [i_5] [13ULL] [8ULL]);
                    }
                } 
            } 
        }
        var_24 *= arr_8 [i_1] [i_1];
        /* LoopSeq 4 */
        for (long long int i_9 = 1; i_9 < 16; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                for (long long int i_11 = 3; i_11 < 17; i_11 += 3) 
                {
                    {
                        arr_37 [13ULL] [3ULL] [(unsigned short)2] [i_1] [i_9] = (((~(arr_17 [i_11] [i_11 + 1] [i_1] [i_11]))) | (((arr_17 [i_11] [i_11 + 1] [i_1] [(unsigned short)16]) | (arr_28 [i_11] [i_11 + 1] [i_11 - 3] [i_11] [i_11 - 1] [i_11 - 1]))));
                        arr_38 [17ULL] [i_1] [i_10] [i_10] = 4858319399297744494ULL;
                        arr_39 [i_1] [i_1] [i_10] = (+(18446744073709551612ULL));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_6))));
                        var_26 = ((/* implicit */unsigned short) (~(((unsigned long long int) ((unsigned short) var_8)))));
                        arr_45 [i_1] [i_1] [3LL] [i_12] [i_13] [i_1] = ((/* implicit */unsigned short) arr_27 [i_1] [i_1]);
                    }
                } 
            } 
        }
        for (long long int i_14 = 1; i_14 < 17; i_14 += 1) 
        {
            var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) var_8)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_40 [i_14] [i_14] [i_14]) <= (0ULL))))) + (4858319399297744494ULL)))));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 3; i_15 < 17; i_15 += 3) 
            {
                for (unsigned short i_16 = 2; i_16 < 16; i_16 += 4) 
                {
                    {
                        var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) (~(9ULL))))), (min((((/* implicit */unsigned long long int) 16760832)), (2036148069828603305ULL)))));
                        /* LoopSeq 3 */
                        for (int i_17 = 1; i_17 < 16; i_17 += 3) 
                        {
                            var_29 = arr_43 [i_1] [i_1] [i_14] [17ULL] [7ULL] [16ULL];
                            var_30 |= min((7ULL), (((/* implicit */unsigned long long int) -16760808)));
                            arr_55 [i_1] [i_15] [i_1] [i_16] [i_17] = ((/* implicit */long long int) 3459157440235831804ULL);
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 3) 
                        {
                            var_31 = min((max((arr_9 [i_1] [i_14] [i_14]), (((/* implicit */unsigned long long int) max(((unsigned short)10034), ((unsigned short)50086)))))), (((/* implicit */unsigned long long int) ((unsigned short) max((18446744073709551609ULL), (((/* implicit */unsigned long long int) -1505635729550868276LL)))))));
                            arr_59 [i_14] [i_1] = ((/* implicit */unsigned long long int) var_3);
                            var_32 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) 14589420242947800758ULL)));
                        }
                        for (long long int i_19 = 2; i_19 < 16; i_19 += 1) 
                        {
                            var_33 = ((unsigned short) max((14589420242947800744ULL), (((/* implicit */unsigned long long int) arr_24 [i_16 + 1] [i_19 - 1]))));
                            var_34 = ((/* implicit */unsigned short) (((+(((int) arr_43 [14ULL] [15ULL] [i_15] [i_16] [5ULL] [i_19])))) >= (((/* implicit */int) arr_1 [i_1]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_20 = 1; i_20 < 17; i_20 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) ((arr_49 [i_1] [i_1] [11ULL]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_1] [2ULL] [i_1] [i_1] [i_1])))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_22 = 1; i_22 < 16; i_22 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_23 = 0; i_23 < 18; i_23 += 3) 
                    {
                        var_36 = (+(arr_28 [i_1] [i_20] [i_21] [i_22] [i_23] [(unsigned short)4]));
                        arr_74 [i_1] [i_1] [i_1] [4LL] [i_22] [i_1] = ((/* implicit */int) (~(min(((-(9682343349602514229ULL))), ((~(arr_71 [i_23] [i_1] [i_20] [i_20] [i_1] [i_1])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_24 = 0; i_24 < 18; i_24 += 1) 
                    {
                        arr_78 [i_1] [12ULL] [i_1] [i_21] [i_22] [i_24] = ((/* implicit */long long int) ((arr_13 [i_22 + 2]) / (arr_7 [i_1] [i_1])));
                        var_37 -= (unsigned short)55452;
                        arr_79 [i_1] [i_22] [i_21] [i_1] [i_1] = arr_58 [i_1] [i_1] [i_21] [i_21] [i_20] [i_1] [i_1];
                        arr_80 [4ULL] [(unsigned short)10] |= ((/* implicit */unsigned long long int) ((arr_4 [i_20 + 1] [i_22 + 1]) == (arr_40 [i_1] [i_20 - 1] [i_22 + 1])));
                    }
                    var_38 = ((/* implicit */long long int) var_9);
                    arr_81 [i_1] [i_1] = ((/* implicit */unsigned long long int) 1922354427);
                    var_39 *= min((arr_9 [16] [i_21] [i_22 + 1]), (max((((/* implicit */unsigned long long int) -2942684132935544770LL)), (arr_9 [(unsigned short)12] [(unsigned short)12] [(unsigned short)10]))));
                }
                for (unsigned long long int i_25 = 1; i_25 < 17; i_25 += 1) 
                {
                    var_40 ^= ((((9517193937842348091ULL) | (arr_58 [(unsigned short)14] [i_1] [(unsigned short)14] [i_1 + 1] [i_1 - 1] [(unsigned short)2] [i_1 + 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                    arr_86 [i_1] [i_25] [i_21] [i_1] [i_1] [i_1] = ((/* implicit */int) max((((unsigned long long int) arr_25 [i_1] [5LL])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_1])) ? (max((arr_31 [i_20] [i_1]), (((/* implicit */long long int) (unsigned short)34949)))) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_1] [i_1] [i_1 + 1] [i_25 + 1]))))))));
                    arr_87 [i_1] [i_1] [4ULL] [i_1] [i_1] = ((unsigned short) max((var_8), (arr_6 [i_20 + 1])));
                }
                var_41 = arr_33 [i_1] [i_20] [i_20] [i_20] [16ULL] [i_20];
            }
            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_1] [16LL] [5ULL] [i_20] [16LL] [16LL])) || (((/* implicit */_Bool) 9223372036854775789LL))));
            arr_88 [i_1] [i_20] = ((/* implicit */unsigned long long int) min((arr_42 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_42 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
            var_43 = ((/* implicit */unsigned long long int) arr_52 [i_1] [i_1] [0ULL] [(unsigned short)2] [i_1]);
        }
        for (int i_26 = 0; i_26 < 18; i_26 += 1) 
        {
            var_44 = ((/* implicit */unsigned long long int) ((arr_56 [i_1 - 1]) <= ((-(((/* implicit */int) min(((unsigned short)3989), ((unsigned short)55446))))))));
            arr_91 [i_1] [12ULL] [12ULL] &= ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)65507))))))) || ((!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1]))))));
        }
    }
    for (unsigned long long int i_27 = 2; i_27 < 13; i_27 += 3) 
    {
        var_45 |= (+(max((min((((/* implicit */unsigned long long int) var_9)), (15664329032368025817ULL))), (var_7))));
        var_46 = ((/* implicit */unsigned short) 0);
        arr_94 [i_27] [i_27] = ((/* implicit */long long int) max((5717456462544402933ULL), (((/* implicit */unsigned long long int) 2942684132935544766LL))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_28 = 1; i_28 < 13; i_28 += 1) 
    {
        arr_98 [i_28] = ((/* implicit */int) ((((/* implicit */_Bool) arr_60 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])) && (((/* implicit */_Bool) arr_25 [(unsigned short)2] [(unsigned short)2]))));
        /* LoopNest 2 */
        for (unsigned short i_29 = 0; i_29 < 15; i_29 += 3) 
        {
            for (unsigned long long int i_30 = 2; i_30 < 13; i_30 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_31 = 0; i_31 < 15; i_31 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned short) var_7);
                        var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)13789)))))));
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) arr_47 [8ULL]))));
                        arr_106 [10LL] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
                        var_50 = ((/* implicit */unsigned long long int) -2942684132935544788LL);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_32 = 0; i_32 < 15; i_32 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) (+(((arr_62 [i_32]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7460))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_33 = 0; i_33 < 15; i_33 += 1) 
                        {
                            arr_111 [i_29] [i_32] [i_33] = ((/* implicit */unsigned long long int) (unsigned short)17881);
                            var_52 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_29] [12ULL] [i_32]))));
                            var_53 = ((/* implicit */unsigned short) 3857323830761750850ULL);
                        }
                        arr_112 [i_28] [i_29] [10LL] = ((((/* implicit */_Bool) arr_41 [i_29] [i_30 - 1] [i_28] [i_29])) ? (arr_8 [i_28 - 1] [i_28 + 1]) : (((/* implicit */unsigned long long int) var_9)));
                        arr_113 [(unsigned short)12] [i_29] [i_29] [i_29] = ((/* implicit */int) 8689680690456665965ULL);
                        arr_114 [i_29] = ((/* implicit */unsigned long long int) arr_61 [i_28] [i_28 + 1] [7LL] [i_30 - 2] [i_30]);
                    }
                }
            } 
        } 
        var_54 ^= ((/* implicit */unsigned long long int) arr_32 [i_28] [i_28 + 2] [13ULL]);
        /* LoopNest 2 */
        for (unsigned long long int i_34 = 0; i_34 < 15; i_34 += 1) 
        {
            for (long long int i_35 = 0; i_35 < 15; i_35 += 1) 
            {
                {
                    var_55 |= (unsigned short)49782;
                    var_56 = ((/* implicit */unsigned long long int) arr_66 [i_34] [i_34] [i_34]);
                    var_57 = ((/* implicit */unsigned short) 549739036672ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_36 = 0; i_36 < 15; i_36 += 1) 
                    {
                        for (long long int i_37 = 0; i_37 < 15; i_37 += 3) 
                        {
                            {
                                var_58 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)17899))));
                                arr_128 [i_37] [i_36] [i_35] [i_35] [i_35] [i_34] [5ULL] = ((/* implicit */unsigned short) (~(((arr_102 [i_28] [i_28] [i_35] [i_35]) << (((9223372036854775807LL) - (9223372036854775751LL)))))));
                                arr_129 [i_28] [i_28] [7ULL] [i_35] [i_36] [7ULL] [i_35] = ((/* implicit */unsigned short) arr_58 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35] [i_35]);
                                var_59 = var_8;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_38 = 0; i_38 < 11; i_38 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_39 = 1; i_39 < 9; i_39 += 3) 
        {
            var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) ((arr_5 [(unsigned short)16] [i_39 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_38] [i_38] [i_38] [i_38] [(unsigned short)16] [i_38]))))))));
            var_61 = ((/* implicit */unsigned long long int) (~((-2147483647 - 1))));
        }
        for (unsigned short i_40 = 1; i_40 < 10; i_40 += 1) 
        {
            arr_136 [i_40] [i_38] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3848))) / ((+(-6516821258872675169LL)))));
            var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) 920248302529754485ULL)) ? (11652039731515020558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15753)))));
        }
        var_63 = ((/* implicit */int) var_2);
    }
    var_64 = (~(((unsigned long long int) var_1)));
}
