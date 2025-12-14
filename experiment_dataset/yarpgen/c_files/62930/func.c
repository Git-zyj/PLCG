/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62930
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
    for (short i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) min((18446744073709551600ULL), (((/* implicit */unsigned long long int) 1683125936))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)235))))) ? (((/* implicit */long long int) var_3)) : ((~(-2009271811355121170LL)))));
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1 - 2])) ? (((arr_4 [i_0 + 1] [i_1]) ? (4232066716958537125ULL) : (((/* implicit */unsigned long long int) 3831985255U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_0 [2LL]) : (((/* implicit */int) var_7)))))));
                    arr_12 [i_0 + 1] [i_0 + 1] [i_2 - 2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(3831985254U))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        var_12 |= ((/* implicit */_Bool) var_6);
                        var_13 = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_1]);
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)1] [i_4])) ? (2009271811355121170LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (-2185356840439693303LL) : (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_4]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) arr_13 [(unsigned char)12] [i_3] [i_3] [i_2 + 1] [i_2] [i_1] [i_0]);
                        var_16 = ((/* implicit */unsigned char) -2009271811355121170LL);
                    }
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    var_17 ^= ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)37)));
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_1 + 1])) : ((~(min((arr_19 [i_0] [i_1 - 1]), (((/* implicit */unsigned int) var_4)))))))))));
                        var_19 = ((/* implicit */unsigned char) (short)(-32767 - 1));
                        var_20 = ((/* implicit */long long int) (signed char)-24);
                    }
                    for (int i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 8315738135188198070LL))));
                        arr_25 [2LL] [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_8] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_8] [i_0] [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)128)), (arr_1 [i_0 + 1]))))))) : (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */long long int) arr_9 [i_2 - 1] [i_8] [i_0])) : (min((41784159057141651LL), (((/* implicit */long long int) (signed char)48))))))));
                        arr_26 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7413935745928003896LL)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned short)57344))));
                        arr_27 [(unsigned short)12] [i_1] [(unsigned short)12] [i_6] [i_1] = ((/* implicit */short) (~((+(arr_9 [i_0] [i_1] [i_0])))));
                    }
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned int) arr_21 [i_0] [i_0])), (arr_10 [i_0] [i_1] [i_2] [i_9])))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (_Bool)1))));
                    }
                }
                var_24 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])))), (((/* implicit */int) (signed char)38)))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0 - 1] [7LL] [i_2 - 3])), (3110181129396078256LL)))))))));
            }
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                for (long long int i_11 = 1; i_11 < 13; i_11 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) arr_20 [i_10] [i_10] [i_10] [i_0 - 1] [i_1] [i_10] [i_0]);
                        var_26 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3498446459070605161LL)) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_1] [i_10] [i_11])) : (((/* implicit */int) (unsigned short)38850))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 2035432114)) : (750331074U)))))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 540431955284459520LL)) ? (min((arr_9 [i_0] [(_Bool)1] [i_0]), (((/* implicit */int) (unsigned short)41582)))) : (((/* implicit */int) (unsigned char)38))))));
    }
    for (short i_12 = 1; i_12 < 14; i_12 += 1) /* same iter space */
    {
        arr_38 [(signed char)6] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
        var_28 = ((/* implicit */long long int) (signed char)-62);
    }
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
    {
        for (long long int i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            for (unsigned char i_15 = 1; i_15 < 14; i_15 += 4) 
            {
                {
                    var_29 = (-(((((/* implicit */_Bool) max((arr_43 [i_13] [i_14]), (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) var_2)) : (min((arr_45 [i_14]), (970659918))))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_45 [i_13])) : (min((((((/* implicit */_Bool) (signed char)4)) ? (3172567852U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))))), (((/* implicit */unsigned int) var_8))))));
                }
            } 
        } 
    } 
    var_31 = min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) (unsigned short)11)), (3785680387689060558LL))))));
}
