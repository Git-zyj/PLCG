/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55047
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3 - 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_4] [i_4])) : (((/* implicit */int) (short)-1724))))) ? (((/* implicit */long long int) arr_5 [i_4] [i_1] [i_4])) : (var_8)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1]))) : (4294967295U)))) ? (((((/* implicit */_Bool) 1536)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)-1704))))) : (var_8))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30502))) : (var_5)))))));
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (-2) : (((/* implicit */int) (signed char)-91)))) : (-990311645)))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)1720))))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (short)1028)) : (((/* implicit */int) (unsigned short)14))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_2] [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (var_2))) : (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_5 = 2; i_5 < 8; i_5 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))) : (2921674216U)))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                }
                /* vectorizable */
                for (short i_6 = 2; i_6 < 8; i_6 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4476679174061545909LL)) ? (((/* implicit */int) (unsigned short)65535)) : (-1453164240)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_6])) : (856044058)))) : (arr_0 [i_6 - 1] [i_1 + 2])));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) 948011383U)) ? (arr_13 [i_0] [i_1] [i_1 + 1] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)31128))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    arr_21 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1734)) ? (((/* implicit */long long int) var_4)) : (arr_13 [i_6 + 1] [i_0] [i_1 - 1] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 8; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_4 [i_6] [i_1]) : (((/* implicit */long long int) arr_22 [i_0] [i_1 + 2] [i_1] [i_6] [i_1] [i_8]))))) ? (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_6] [i_7 - 1] [i_0] [i_8])) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) (short)-1723)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))));
                                var_19 = ((((/* implicit */_Bool) 7123978114735289433ULL)) ? (((/* implicit */long long int) 51963348U)) : (var_12));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 1; i_10 < 9; i_10 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (5389815439362593223LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)31131))) : (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_9 - 1] [i_9 - 1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1721)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 2535498333U)) : (arr_20 [i_1] [i_9] [i_10 + 1])))) ? (((((/* implicit */_Bool) (short)1721)) ? (((/* implicit */long long int) var_2)) : (-454125394265146682LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_0] [i_9] [i_0] [i_10 - 1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_9] [i_10] [i_1]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */unsigned int) -1262486204)) : (arr_30 [i_1] [i_0] [i_0] [i_10])))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_10])) ? (arr_19 [i_1] [i_1] [i_1] [i_10 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(signed char)5])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 3]))))))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-7))))) ? (((((/* implicit */_Bool) 0U)) ? (arr_20 [i_0] [i_0] [i_0]) : (arr_20 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31540)) ? (var_2) : (((/* implicit */int) (signed char)44))))))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_9 - 1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (short)-26731)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_4)))));
                        arr_33 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (856450155)))) ? (((((/* implicit */_Bool) 10439357648784290946ULL)) ? (7123978114735289433ULL) : (((/* implicit */unsigned long long int) arr_26 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) var_6)) : (arr_26 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 - 1]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        arr_37 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15)) ? (arr_25 [i_0] [i_0] [i_9] [i_1] [i_0]) : (var_2)));
                        arr_38 [i_1] [i_1] [i_1] [i_1 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 3248856254U)) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) (short)804)))) : (((((/* implicit */_Bool) -6499942081948129936LL)) ? (((/* implicit */int) arr_36 [i_0] [i_1] [i_9 + 1] [i_1] [(short)1] [i_0])) : (((/* implicit */int) var_3))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [i_1])) : (((/* implicit */int) (signed char)13))))) : (0U)));
                        arr_39 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_9 - 2])) ? (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_24 [i_0] [i_1 + 2] [i_1] [i_1 + 2] [i_11])) : (((/* implicit */int) (unsigned short)65523)))))));
                    }
                    for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1980690993)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4)))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_9])) ? (((/* implicit */unsigned long long int) -780969215563507190LL)) : (arr_19 [i_0] [i_9] [i_9] [i_12]))) : (((((/* implicit */_Bool) 12581508852775024097ULL)) ? (arr_19 [i_0] [i_1] [i_0] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8289206953252459056LL)) ? (8943659692584792741LL) : (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49977))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (7165844899379120622ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [7ULL] [i_0])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-10)) : (((((/* implicit */_Bool) -8289206953252459069LL)) ? (((/* implicit */int) (short)-1530)) : (((/* implicit */int) arr_7 [3] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4120475110U)) ? (7340032LL) : (var_12)))) ? (((((/* implicit */_Bool) arr_32 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (0LL))) : (((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_9 - 1] [i_0])))))))));
                    }
                    arr_43 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-19602)) ? (((/* implicit */int) var_1)) : (var_0)))) : (((((/* implicit */_Bool) (short)-15304)) ? (((/* implicit */long long int) 1613593667)) : (arr_34 [i_0] [i_0] [i_0] [i_1] [i_9 + 1] [i_9 - 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1928213163)) ? (arr_40 [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_18 [i_0] [i_1] [i_1]) : (var_0)))) : (((arr_14 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_19 [i_1] [i_1] [i_1] [i_9]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [8])) ? (arr_20 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_1] [i_0])) ? (var_12) : (-780969215563507190LL))) : (-8408581446690690365LL))))));
                }
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4LL)) ? (((/* implicit */int) arr_29 [i_0] [i_1] [i_1 + 3] [i_1 + 3])) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_1 + 3] [i_0]))))) ? (((((/* implicit */_Bool) var_1)) ? (var_12) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_1 + 3] [i_0])) : (((/* implicit */int) (signed char)-36))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_13 = 1; i_13 < 22; i_13 += 2) 
    {
        arr_46 [i_13 - 1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1980690993)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)4095))))) ? (((((/* implicit */_Bool) arr_44 [i_13 + 2])) ? (((((/* implicit */_Bool) 6U)) ? (var_8) : (((/* implicit */long long int) arr_45 [i_13] [i_13])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1738537700)) ? (arr_44 [i_13]) : (((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1738537700)) ? (var_0) : (arr_44 [i_13 + 1]))))));
        var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13 + 2])) ? (-936353914) : (var_0)))) ? (((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (0U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_44 [i_13 + 2]) : (((/* implicit */int) var_9)))))));
        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7197061718885898374LL)) ? (arr_44 [i_13 - 1]) : (arr_44 [i_13 - 1])))) ? (((((/* implicit */_Bool) -1905904060)) ? (((/* implicit */long long int) arr_44 [i_13 - 1])) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_13 - 1] [i_13 + 2])) ? (arr_45 [i_13 - 1] [i_13 + 2]) : (((/* implicit */int) var_10)))))));
    }
}
