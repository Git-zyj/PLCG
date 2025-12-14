/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6631
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1922844745)), (max((0U), (((/* implicit */unsigned int) (unsigned short)17818))))))) : ((~(max((var_3), (((/* implicit */unsigned long long int) (short)-17390))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (short)-18730))))), (((unsigned long long int) arr_8 [i_1] [i_1] [i_1] [i_0 + 1])));
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_5 [i_3] [i_1 + 3] [i_0 + 1]))));
                            var_14 = ((18446744073709551605ULL) | (((/* implicit */unsigned long long int) -5846083940805418082LL)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (-2147483647) : (2147483647)));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_5 + 1]))))), (((((/* implicit */unsigned long long int) arr_2 [i_5] [i_5])) | (var_6)))))));
                                var_17 ^= ((/* implicit */short) ((unsigned long long int) (unsigned char)33));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0]);
                arr_18 [i_0] [(_Bool)1] |= ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) arr_3 [i_0 - 1]))), (arr_8 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        var_18 = ((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]);
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)39)) ? ((~(((/* implicit */int) ((short) var_5))))) : (max((((/* implicit */int) var_4)), (-2147483623)))));
    }
    for (long long int i_8 = 3; i_8 < 8; i_8 += 3) 
    {
        arr_25 [i_8] [i_8 + 1] = ((/* implicit */long long int) var_10);
        var_20 ^= ((/* implicit */unsigned short) max((((arr_16 [10] [i_8 + 1] [i_8] [i_8 - 2] [i_8 - 3] [i_8 - 3] [10]) | (((/* implicit */unsigned long long int) 2147483624)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)115)) >> (((((/* implicit */int) var_4)) + (5995))))))));
        var_21 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (short)-32749)) ? (1U) : ((-(5U))))));
    }
    for (long long int i_9 = 1; i_9 < 7; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            for (unsigned short i_11 = 2; i_11 < 9; i_11 += 4) 
            {
                {
                    arr_34 [i_9] [i_10] [i_9] = ((/* implicit */long long int) var_9);
                    arr_35 [i_9] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_2)))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 6; i_12 += 1) 
                    {
                        for (short i_13 = 2; i_13 < 6; i_13 += 3) 
                        {
                            {
                                arr_41 [i_10 - 1] [i_10] [i_10] [i_12 + 1] [7] [i_12] [i_9] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_33 [(unsigned char)2] [(unsigned char)5] [0ULL] [i_12])), (var_5)))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned short)65519))))))));
                                var_22 = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 2; i_14 < 9; i_14 += 1) 
                    {
                        for (long long int i_15 = 2; i_15 < 8; i_15 += 3) 
                        {
                            {
                                arr_47 [i_9] [4] [i_10] [i_10] [i_14] [i_9] = ((signed char) ((((/* implicit */unsigned int) min((2147483624), (2147483641)))) * (max((((/* implicit */unsigned int) var_1)), (2U)))));
                                var_23 = ((/* implicit */unsigned long long int) var_0);
                                var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)228)) < (702255317))))));
                            }
                        } 
                    } 
                    arr_48 [i_11 + 1] [i_9] [i_9] [(short)3] = ((/* implicit */unsigned char) ((unsigned int) ((arr_13 [i_11] [i_9 + 2]) >> (((var_8) - (22358290130515356ULL))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_16 = 1; i_16 < 9; i_16 += 4) /* same iter space */
        {
            arr_52 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-55)) ^ ((~(((/* implicit */int) ((unsigned char) -769935997)))))));
            var_25 *= ((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) >> (((8371644733905824104ULL) - (8371644733905824086ULL)))));
            /* LoopNest 3 */
            for (unsigned int i_17 = 1; i_17 < 6; i_17 += 4) 
            {
                for (unsigned short i_18 = 2; i_18 < 8; i_18 += 3) 
                {
                    for (int i_19 = 3; i_19 < 9; i_19 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) -2495080156253588230LL);
                            var_27 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 10075099339803727512ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_9])) ? (((/* implicit */int) arr_4 [i_9])) : (((/* implicit */int) arr_4 [i_9]))))) : (((unsigned long long int) (_Bool)1))));
                            var_28 *= ((/* implicit */unsigned short) ((((arr_2 [i_16 + 1] [i_17 + 2]) < (((/* implicit */int) var_10)))) ? (((3555811390381831108LL) | (((/* implicit */long long int) 4U)))) : (((/* implicit */long long int) ((arr_2 [i_16 + 1] [i_17 + 3]) | (arr_2 [i_16 + 1] [i_17 - 1]))))));
                            var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) < (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)(-127 - 1))), (2003613393)))) : (max((((/* implicit */unsigned int) arr_15 [i_9] [1ULL] [i_18] [i_19])), (1141799499U)))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_20 = 1; i_20 < 9; i_20 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (var_7))))) | (max((var_3), (((/* implicit */unsigned long long int) (signed char)-32))))))) ? (((/* implicit */int) ((_Bool) arr_42 [i_9] [i_20 + 1] [i_20 + 1] [i_9 + 1]))) : (((/* implicit */int) var_10))));
            arr_62 [i_9] = ((/* implicit */_Bool) ((signed char) (unsigned char)127));
        }
    }
}
