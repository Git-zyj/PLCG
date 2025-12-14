/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99158
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
    var_16 = var_7;
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((3648546404U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))), (min((8884094549963548406ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))));
    var_18 = ((/* implicit */signed char) (((_Bool)0) ? (6LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_9))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_1] [i_2] [i_2])) ^ (((/* implicit */int) (unsigned short)23)))) << (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)152))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */long long int) -2072102871))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_1)), (var_11)))) : (max((-5322464517499242032LL), (((/* implicit */long long int) (_Bool)0)))))))))));
            var_22 = ((/* implicit */_Bool) var_6);
        }
        var_23 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */int) ((arr_5 [i_1] [i_1] [i_1]) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) : (var_3))), (max((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)-16083)))))))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (signed char)-76)) : (var_2)));
            arr_12 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(((arr_6 [i_3] [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) var_0))))))))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_15 [(unsigned char)2] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_4]))) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 122670128)) : (var_12)))));
            arr_16 [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)21720)) : (((/* implicit */int) arr_3 [i_1]))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_19 [i_1] = ((/* implicit */signed char) ((arr_9 [i_5] [i_1] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) ((1313031079) != (((/* implicit */int) arr_3 [i_1]))))))));
            var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */signed char) arr_5 [i_1] [i_1] [i_1])), (arr_17 [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) 534199907U)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_6 [i_5] [i_1] [i_1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5])))));
            arr_20 [(_Bool)0] = ((/* implicit */short) arr_13 [i_1] [i_5] [i_5]);
        }
        /* LoopSeq 1 */
        for (short i_6 = 2; i_6 < 23; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    for (int i_9 = 1; i_9 < 23; i_9 += 2) 
                    {
                        {
                            arr_31 [i_7] [i_6 + 2] [i_9] [i_7] [i_9] [(unsigned char)17] [i_6] = ((/* implicit */signed char) arr_24 [i_8] [i_6 - 2] [i_7]);
                            var_26 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)152))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) - (((((/* implicit */_Bool) arr_25 [i_1] [i_7])) ? (((/* implicit */long long int) ((arr_26 [i_7] [i_6] [i_7]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (var_15)))));
                        }
                    } 
                } 
            } 
            arr_32 [i_1] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_1)))), (2072102870)))) ? (((/* implicit */unsigned long long int) (+(var_13)))) : (arr_6 [i_1] [i_6] [i_6 + 1])));
        }
    }
    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
    {
        arr_36 [i_10] [(signed char)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_5 [(signed char)0] [(signed char)0] [i_10])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_3 [i_10])) ? (arr_29 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */int) arr_17 [i_10] [i_10] [i_10]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_10] [(signed char)2] [i_10])) || (((/* implicit */_Bool) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [(unsigned char)1] [i_10]))))))))) : (((((/* implicit */_Bool) (+(arr_6 [i_10] [i_10] [i_10])))) ? (((/* implicit */int) ((-7LL) == (-7LL)))) : ((+(((/* implicit */int) var_4))))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((14LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))))))) || (((/* implicit */_Bool) arr_22 [i_10]))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10])) ? (arr_29 [i_10] [i_10] [i_10] [i_10]) : (arr_29 [i_10] [i_10] [i_10] [i_10])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_17 [i_10] [i_10] [i_10])), (var_1)))) : (((/* implicit */int) ((unsigned char) arr_28 [i_10] [i_10] [i_10] [i_10])))));
        var_30 = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
    {
        var_31 *= min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_11]))))), (min((arr_24 [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) min((6189214203813500585LL), (((/* implicit */long long int) var_10))))))));
        var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)46)) - (33))))) < (((/* implicit */int) (signed char)(-127 - 1)))))), (arr_23 [i_11] [i_11] [20ULL])));
    }
}
