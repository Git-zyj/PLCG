/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87084
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
    for (signed char i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_1 [i_0])))), ((-(((/* implicit */int) arr_1 [i_0 + 2]))))));
        var_20 -= ((/* implicit */long long int) 4100860062U);
        var_21 -= ((/* implicit */long long int) (+(((/* implicit */int) ((arr_0 [(_Bool)1]) < (arr_0 [0LL]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) (_Bool)0);
            arr_5 [i_0 + 3] [i_0] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) arr_0 [i_0])));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) max(((unsigned char)243), (((/* implicit */unsigned char) (signed char)-12))))) >= (((/* implicit */int) ((_Bool) (signed char)20))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_0 [i_0])))), (((((/* implicit */int) (unsigned char)128)) > ((((_Bool)1) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_9 [i_0]))))))));
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0]);
        }
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
        {
            arr_14 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_12 [i_0] [i_0 - 2] [i_0])), (max(((~(-6616627014555446375LL))), (((/* implicit */long long int) arr_2 [i_0 + 3]))))));
            var_23 = (~(((unsigned long long int) (_Bool)0)));
            var_24 = ((_Bool) (+(((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)11))))));
        }
    }
    for (long long int i_4 = 2; i_4 < 12; i_4 += 4) 
    {
        var_25 += ((signed char) ((long long int) -5101949686696678051LL));
        var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))));
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_17 [(_Bool)1] [11ULL]))));
            /* LoopNest 3 */
            for (long long int i_6 = 1; i_6 < 12; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_29 [i_4] [(unsigned char)6] [(unsigned char)6] [i_7] [(unsigned char)1] = (((~(arr_21 [i_8 + 1] [i_6 - 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_19 [i_8 - 2])))));
                            arr_30 [i_4 + 1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_20 [i_4 - 2]))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_9 = 4; i_9 < 12; i_9 += 3) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((unsigned char) (((~(2413679387U))) << (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_26 [i_9 + 1] [i_4 - 1] [i_9 + 1] [i_4 - 2] [i_4 - 1]))))))))));
            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (arr_31 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) arr_15 [i_4] [i_4])))))) << ((((~(((/* implicit */int) arr_18 [i_4])))) + (15767)))));
        }
        var_30 += ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-127)) / (-1179901381)))), (((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1ULL)))))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [(_Bool)1] [i_10] [i_10])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
        var_32 ^= (_Bool)1;
        arr_35 [i_10] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (7371643496050727050LL) : (((/* implicit */long long int) arr_15 [i_10] [i_10]))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_11 = 2; i_11 < 24; i_11 += 4) 
    {
        var_33 = ((/* implicit */unsigned char) ((-8582143304660602455LL) / ((+(arr_37 [23LL] [i_11])))));
        arr_38 [i_11] = ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_40 [5LL] [i_12])) ? (arr_36 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [(signed char)15]))))))))));
        arr_42 [i_12] [i_12] = ((/* implicit */signed char) arr_41 [8LL]);
        arr_43 [i_12] = ((/* implicit */_Bool) (+(arr_36 [i_12])));
    }
    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
    {
        arr_46 [4LL] [4LL] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) arr_19 [i_13])) - (min((((/* implicit */long long int) arr_4 [(unsigned char)9] [(unsigned char)9])), (5617128108291071812LL)))))));
        var_35 -= ((/* implicit */unsigned int) ((((_Bool) 505372916770042864LL)) ? ((-((~(arr_3 [i_13]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_13])) ? (arr_0 [i_13]) : (arr_17 [i_13] [i_13]))))));
        arr_47 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((-2494944033707739883LL) & (((/* implicit */long long int) ((/* implicit */int) arr_22 [9LL]))))) / (((/* implicit */long long int) arr_0 [i_13]))))) % (12281794987450651523ULL)));
    }
    var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (18446744073709551614ULL)));
    /* LoopSeq 3 */
    for (long long int i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
    {
        var_37 -= ((/* implicit */unsigned char) (+(((arr_49 [(signed char)23]) * (max((((/* implicit */long long int) (_Bool)0)), (-19LL)))))));
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 24; i_15 += 2) 
        {
            var_38 = ((/* implicit */signed char) (unsigned char)127);
            /* LoopNest 2 */
            for (unsigned int i_16 = 2; i_16 < 23; i_16 += 4) 
            {
                for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 3) 
                {
                    {
                        arr_58 [i_17] [i_17] [i_16 - 1] [(unsigned char)2] = ((/* implicit */unsigned char) ((signed char) ((_Bool) ((-9201578291049819411LL) & (arr_37 [i_14] [i_14])))));
                        arr_59 [i_17 + 4] [i_14] [i_17] [i_17] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_53 [22LL] [22LL])) / (((/* implicit */int) arr_53 [i_17] [i_17]))));
                        var_39 = ((long long int) max((((((/* implicit */unsigned long long int) 70931694131085312LL)) | (17670807798931079672ULL))), (min((((/* implicit */unsigned long long int) arr_51 [i_16])), (9687028560407522747ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 24; i_18 += 4) 
                        {
                            var_40 += (_Bool)1;
                            arr_63 [i_14] [i_15] [16] [i_17] [i_17] [i_18] = ((/* implicit */long long int) (((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) / (-6908472896865109466LL))))) == (((max((((/* implicit */long long int) arr_52 [i_15] [i_15] [i_15])), (-6215649977268025402LL))) - (arr_60 [i_17 + 1] [i_17] [i_17] [i_16] [i_17] [(unsigned short)14] [i_16 + 1])))));
                        }
                        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (signed char)112))));
                    }
                } 
            } 
            var_42 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (0ULL)))) ? (((((/* implicit */int) (unsigned short)3163)) % (((/* implicit */int) arr_53 [9LL] [i_15])))) : (((((/* implicit */_Bool) arr_57 [0LL] [i_14] [i_15])) ? (((/* implicit */int) arr_52 [i_15] [i_14] [i_14])) : (((/* implicit */int) arr_55 [i_15] [i_14] [i_15])))))) % (((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)248)) || (((/* implicit */_Bool) -6298346724908956061LL)))), (arr_50 [(unsigned char)12]))))));
            var_43 += ((/* implicit */_Bool) arr_37 [i_14] [17LL]);
            var_44 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_57 [10LL] [i_15] [10LL])) ? (arr_57 [i_14] [i_14] [i_15]) : (arr_57 [(signed char)14] [i_14] [(unsigned char)0]))) * (0LL)));
        }
        arr_64 [i_14] = ((/* implicit */unsigned char) ((unsigned long long int) (~(min((arr_57 [i_14] [i_14] [i_14]), (arr_60 [i_14] [22LL] [i_14] [i_14] [i_14] [(_Bool)1] [i_14]))))));
        var_45 = ((/* implicit */int) arr_57 [i_14] [i_14] [(unsigned char)22]);
    }
    for (long long int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_21 = 1; i_21 < 23; i_21 += 3) 
            {
                for (unsigned long long int i_22 = 4; i_22 < 22; i_22 += 2) 
                {
                    {
                        var_46 ^= ((/* implicit */short) arr_52 [i_22] [i_22] [i_21 + 1]);
                        var_47 -= max((((/* implicit */signed char) (((+(18446744073709551614ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_21 - 1] [i_21 - 1] [i_21 + 1])))))), (((signed char) (~(((/* implicit */int) arr_66 [i_20]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            arr_77 [i_20] [i_21] [i_21] [i_20] = ((/* implicit */_Bool) min(((-(((arr_73 [(signed char)2] [i_20] [(signed char)17]) - (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_20]))))))), (((/* implicit */long long int) (unsigned char)226))));
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (-(arr_49 [i_19]))))));
                            arr_78 [i_21] [i_20] [5LL] [i_20] [i_20] [i_23] [i_23] = ((/* implicit */signed char) arr_72 [i_23] [(unsigned char)6] [i_21] [i_20] [(unsigned short)7] [i_19]);
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_49 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)121)), (((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_22 + 1] [i_22 - 4] [i_21 - 1]))) * (0LL)))));
                            arr_82 [i_19] [i_20] [i_21] [i_22 - 2] [i_24] = ((/* implicit */long long int) arr_79 [i_19] [i_19] [i_20] [i_20] [i_21] [3ULL] [i_24]);
                            arr_83 [(signed char)5] [i_22 + 1] [i_21 + 1] [i_21] [i_20] [i_20] [i_19] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_67 [i_22 - 3])))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) == (arr_62 [i_21 + 1]))))));
                            arr_84 [i_21] [i_22 - 4] [i_19] [i_21] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)-75)))) ? (((/* implicit */int) ((short) arr_72 [i_22 - 1] [i_24] [i_24] [(_Bool)1] [i_24] [(_Bool)1]))) : (((/* implicit */int) arr_72 [i_22 + 2] [i_24] [i_24] [i_24] [i_24] [i_24]))));
                        }
                        for (unsigned char i_25 = 0; i_25 < 24; i_25 += 2) 
                        {
                            arr_88 [i_19] [i_21] [i_21] [23ULL] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_86 [i_21 + 1])) / (((/* implicit */int) arr_86 [i_21 - 1]))))));
                            var_50 = (~(((/* implicit */int) ((arr_62 [i_22 + 1]) > (((/* implicit */long long int) ((arr_36 [i_20]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                            arr_89 [i_20] [i_20] [i_20] [i_19] [i_21] [i_25] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_71 [i_21]))));
                            var_51 = ((/* implicit */unsigned int) (~(((unsigned long long int) arr_80 [i_22 - 2] [i_21 - 1] [(_Bool)1] [i_21] [(_Bool)0] [(_Bool)0]))));
                            arr_90 [i_21] [i_20] [i_21] [4U] [i_21] = (i_21 % 2 == 0) ? (((/* implicit */unsigned int) ((int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_86 [i_20]))) * (arr_61 [i_21]))) | (((/* implicit */unsigned long long int) ((((arr_60 [19U] [19U] [i_21] [(signed char)13] [i_21 + 1] [19U] [i_25]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_56 [i_21] [(signed char)8])) - (50188)))))))))) : (((/* implicit */unsigned int) ((int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_86 [i_20]))) * (arr_61 [i_21]))) | (((/* implicit */unsigned long long int) ((((arr_60 [19U] [19U] [i_21] [(signed char)13] [i_21 + 1] [19U] [i_25]) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_56 [i_21] [(signed char)8])) - (50188))) + (33039))))))))));
                        }
                        arr_91 [i_19] [i_19] [i_21 - 1] [i_22] [i_21 - 1] [i_21] = ((/* implicit */_Bool) max((((((((/* implicit */int) arr_51 [i_19])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) >> (((16407061334053180214ULL) - (16407061334053180212ULL))))))), (((/* implicit */int) (signed char)109))));
                    }
                } 
            } 
            var_52 += ((((_Bool) arr_73 [i_20] [i_20] [i_20])) ? (arr_36 [i_19]) : (((/* implicit */unsigned int) ((int) ((arr_69 [i_20]) / (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_19] [i_19] [i_20]))))))));
            var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) max((10ULL), (((/* implicit */unsigned long long int) (signed char)-51)))))));
            arr_92 [i_19] [i_20] = arr_54 [i_19] [i_19];
        }
        var_54 ^= ((/* implicit */short) (signed char)-122);
    }
    for (long long int i_26 = 0; i_26 < 24; i_26 += 2) /* same iter space */
    {
        var_55 = arr_73 [i_26] [i_26] [i_26];
        var_56 ^= arr_62 [i_26];
    }
    var_57 = ((/* implicit */unsigned char) var_18);
}
