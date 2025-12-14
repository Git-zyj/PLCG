/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89237
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((((((/* implicit */int) (signed char)20)) * (((/* implicit */int) arr_12 [10])))) - (((/* implicit */int) ((signed char) 2147483647))))) < (((((((/* implicit */_Bool) (signed char)18)) ? (arr_13 [i_3] [i_3]) : (((/* implicit */int) (signed char)22)))) | (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_6 [i_3] [i_1] [i_1])))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [(unsigned short)4] [i_4] [i_3] [i_1] |= ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) arr_6 [i_3] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) : (arr_15 [i_4] [i_3] [i_0] [i_3] [i_0]))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) > (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_10 [i_0] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))), (-1LL))))));
                            var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [0LL] [i_3] [i_2] [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) (signed char)(-127 - 1))))))))) > (((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_3] [i_4 + 1] [i_4 + 2] [i_4 + 2])) ? (arr_15 [i_4 + 2] [i_3] [i_4 - 1] [i_4 + 2] [i_4 + 2]) : (arr_15 [i_4 + 2] [i_3] [i_4 + 2] [i_4 + 1] [i_4 + 2])))));
                            var_14 &= ((/* implicit */int) ((long long int) (+(2720528655497121279ULL))));
                            var_15 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4 + 2] [i_3] [i_4])) ? (arr_14 [i_0] [i_0] [i_4 + 2] [i_3] [i_4 + 2]) : (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)20)) || (((/* implicit */_Bool) arr_13 [i_3] [i_4 + 2]))))), (arr_9 [i_0] [i_3] [i_0])))))));
                        }
                        arr_19 [i_0] = ((/* implicit */unsigned long long int) max((max((((var_11) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (unsigned short)64030))))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)3569)))))));
                    }
                    arr_20 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_13 [i_0] [i_1])) + (max((((((/* implicit */_Bool) 12299086592589231757ULL)) ? (8642003591588266537LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)15108)))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */short) var_9);
                        arr_23 [i_0] [(unsigned short)6] [i_5] [i_5 + 1] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((unsigned char) -1LL)), (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) arr_6 [(unsigned short)6] [i_1] [i_5]))))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5 + 1] [0] [i_2] [0] [i_0])) && (((/* implicit */_Bool) 2060059751)))))));
                        arr_24 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 - 3]))) < (min((10LL), (-26LL))))))));
                    }
                    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        arr_29 [i_0] = ((/* implicit */short) (unsigned char)177);
                        var_17 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [12] [12] [i_2])) : (((/* implicit */int) var_0))))), (max((-26LL), (((/* implicit */long long int) (signed char)-1))))))) | (((var_9) << (((((/* implicit */int) arr_2 [i_6 + 1])) + (13152)))))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        var_18 = ((signed char) ((unsigned long long int) arr_11 [i_7] [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 3] [i_7 - 3]));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_1))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 26LL))));
                        var_21 &= ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0])) ^ (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_7] [i_0] [i_2]))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 12; i_11 += 3) 
                        {
                            {
                                arr_44 [i_11] [i_10] [i_0] [i_8 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_43 [i_0] [2ULL] [i_9]))))))) * (min((-1LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(signed char)8] [(signed char)8] [i_0] [(short)4]))) < (arr_14 [i_0] [i_8 - 1] [i_8 - 1] [i_0] [i_8 - 1]))))))));
                                arr_45 [i_9] [i_0] [i_9] [i_9] [i_11 - 2] [i_9] [i_11 - 1] = ((/* implicit */int) var_3);
                                arr_46 [i_0] [i_8 - 1] [i_9] [i_10] [i_0] [i_0] = ((/* implicit */unsigned int) arr_26 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [11ULL]);
                                arr_47 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 127U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) -2013566362))))) < (((/* implicit */int) var_4)))))) : (max((343251286U), (((/* implicit */unsigned int) arr_37 [i_11 + 1] [i_11 - 2] [i_10]))))));
                            }
                        } 
                    } 
                    var_22 -= (-(((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_13]))) > (((((/* implicit */_Bool) arr_53 [i_12])) ? (var_6) : (12456619941621308496ULL)))));
                    arr_58 [i_13] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((11120231616136407981ULL) == (((/* implicit */unsigned long long int) -2318991438080457215LL))));
                    var_24 = ((/* implicit */signed char) arr_49 [i_12] [i_12]);
                    var_25 = ((/* implicit */signed char) arr_53 [i_12]);
                }
            } 
        } 
        var_26 = ((/* implicit */short) arr_52 [i_12] [i_12] [i_12]);
        arr_59 [i_12] [i_12] = ((/* implicit */unsigned short) ((((int) var_0)) > (((/* implicit */int) ((signed char) 12456619941621308509ULL)))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
        arr_62 [i_15] = ((/* implicit */unsigned int) var_11);
        arr_63 [i_15] = ((/* implicit */short) (+(((/* implicit */int) arr_49 [i_15] [i_15]))));
    }
    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_7))))))) ? (max((((((/* implicit */int) var_4)) + (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) 9087122860922756887ULL)) || (((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_29 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (var_1)));
    var_30 += ((/* implicit */unsigned char) (signed char)-18);
}
