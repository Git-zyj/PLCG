/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67528
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8881422820289790067LL)))))) == ((+(arr_3 [i_0] [i_0])))));
        var_14 = (+((-(7411225942623214360ULL))));
        var_15 = ((/* implicit */unsigned long long int) max((((int) max((-1801969032), (485181190)))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-42)), ((unsigned short)28616))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) 2147483620)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)5)))) >> (((arr_5 [i_1] [(unsigned char)3]) - (1156122623718945947LL)))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 15; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) -8881422820289790068LL);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            arr_14 [14ULL] [i_2] [i_4] [(unsigned short)0] [i_5] [i_2] [i_3] = ((/* implicit */short) ((int) var_4));
                            var_18 = ((/* implicit */_Bool) ((((var_7) != (((/* implicit */long long int) 1)))) ? (((/* implicit */long long int) 1135525905U)) : ((-(-8881422820289790048LL)))));
                            var_19 -= ((/* implicit */signed char) var_2);
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(arr_12 [i_6] [i_6] [(signed char)14] [i_6] [i_1])))) - (var_0)));
                arr_17 [i_1] [i_6] [5] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 8881422820289790067LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (11035518131086337268ULL)));
            }
            for (int i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) (+(arr_2 [i_2] [i_1])));
                var_22 = ((/* implicit */_Bool) (unsigned short)24095);
                arr_22 [i_1] [(signed char)11] [(signed char)11] [i_1] = ((arr_7 [i_1] [i_2] [i_7 - 1]) ? (arr_15 [i_7 + 1] [i_7 + 1]) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_7 - 1])));
            }
            arr_23 [i_2] = ((/* implicit */unsigned int) var_7);
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                var_23 = ((/* implicit */_Bool) var_7);
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)17054)) < (arr_18 [i_1] [i_2] [i_2])));
            }
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) arr_26 [i_2]);
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) 8881422820289790067LL);
                    arr_34 [i_1] [i_2] [i_9] [(signed char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29164)) ? (((/* implicit */int) (short)12814)) : (((/* implicit */int) (short)-32748))));
                }
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned int) 11035518131086337264ULL);
                    /* LoopSeq 3 */
                    for (long long int i_12 = 2; i_12 < 17; i_12 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217727LL)) ? (((/* implicit */int) (unsigned short)16032)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_7)) ? (var_2) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15037)) ? (((/* implicit */int) (unsigned short)16032)) : (((/* implicit */int) (unsigned short)15037))))))))));
                        arr_42 [i_1] [i_9] [i_9] [8] [(short)12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) 8881422820289790087LL)) ? (((unsigned long long int) (unsigned short)31)) : (7049863141703072559ULL)));
                        arr_43 [i_1] [(unsigned short)11] [i_9] [i_9] [i_11] [i_9] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)9)))));
                        var_29 = ((((/* implicit */int) (unsigned short)13)) + (((((/* implicit */_Bool) 8881422820289790083LL)) ? (((/* implicit */int) (short)4811)) : (((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_11])))));
                        var_30 = ((/* implicit */unsigned char) (-(1623353498)));
                    }
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        arr_47 [i_1] [i_2] [(unsigned short)17] [i_9] [i_9] [i_11] [i_13] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (485181206) : (((/* implicit */int) (signed char)114))))));
                        var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)145))));
                        arr_48 [i_9] [i_9] [(short)15] [i_9] [(unsigned char)11] = ((/* implicit */int) ((((/* implicit */_Bool) 11396880932006479046ULL)) ? (arr_12 [i_13] [i_9] [i_9] [i_9] [i_1]) : (var_12)));
                        arr_49 [i_1] [i_1] [i_9] [i_1] [i_1] = 11396880932006479046ULL;
                        arr_50 [i_1] [i_11] |= ((/* implicit */long long int) (-(((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_53 [i_1] [i_9] = ((/* implicit */unsigned char) (~(18446744073709551615ULL)));
                        var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (7049863141703072556ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_1] [i_2] [i_9] [i_11] [i_11] [i_14])))));
                    }
                    var_33 = ((/* implicit */signed char) 2780718628395917742ULL);
                }
                for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                {
                    arr_57 [i_1] [i_9] [i_1] [i_9] = ((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)-22)));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -485181189)) ? ((-(((/* implicit */int) (short)-4788)))) : (((/* implicit */int) (unsigned char)165))));
                }
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15037)) - (((/* implicit */int) (signed char)126)))))));
                    var_36 = ((((/* implicit */_Bool) ((arr_36 [(signed char)13] [(signed char)13] [i_9] [i_1] [i_1] [i_1]) ? (11396880932006479072ULL) : (((/* implicit */unsigned long long int) var_2))))) || (((/* implicit */_Bool) 11396880932006479067ULL)));
                    arr_61 [i_1] [i_9] [i_2] [i_16] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 7049863141703072558ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_3 [i_2] [i_1])));
                }
            }
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                var_37 ^= ((/* implicit */unsigned short) arr_4 [i_1] [i_2]);
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) (unsigned short)1)) : (2147483647)));
            }
        }
        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            var_39 = (~(((/* implicit */int) (unsigned short)65535)));
            var_40 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))));
        }
        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -400263583))));
            arr_74 [i_19] = ((/* implicit */int) var_1);
        }
        for (short i_20 = 2; i_20 < 17; i_20 += 1) 
        {
            var_42 = (+(2147483647));
            var_43 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)0))));
        }
        arr_77 [i_1] = ((((/* implicit */long long int) var_8)) % ((+(var_11))));
    }
    var_44 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((652859946), (-485181193)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((+(7049863141703072569ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
}
