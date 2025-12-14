/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62528
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = arr_1 [4ULL];
        arr_2 [i_0] [(signed char)8] = ((/* implicit */unsigned int) ((signed char) ((unsigned char) var_6)));
        var_19 = ((/* implicit */unsigned char) 1640450335U);
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_6 [(signed char)5] = ((/* implicit */unsigned long long int) ((unsigned int) var_17));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2447310888U)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (signed char)-91))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-91))));
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_16))));
                        arr_16 [i_1] [i_2] [i_3] = ((/* implicit */long long int) arr_14 [i_1] [i_2]);
                    }
                } 
            } 
            var_23 = ((/* implicit */int) (unsigned char)222);
        }
        for (signed char i_5 = 2; i_5 < 16; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) (!((_Bool)1)));
                arr_23 [(signed char)4] [i_5 - 2] [i_5 - 2] [i_5 - 2] = ((/* implicit */unsigned short) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))));
                var_25 = ((/* implicit */unsigned int) (unsigned char)185);
                var_26 = ((/* implicit */unsigned char) var_4);
                arr_24 [i_1] = ((/* implicit */unsigned long long int) -1332101988);
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned int) arr_22 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [7]);
                arr_29 [14LL] [(unsigned short)8] [i_5 + 2] [14ULL] = ((/* implicit */unsigned int) ((arr_8 [i_1] [i_5 + 2] [i_5]) >> (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_6)))))));
                /* LoopSeq 4 */
                for (unsigned int i_8 = 2; i_8 < 15; i_8 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) arr_9 [(signed char)13] [i_5 + 1]))))) / (13563555546884476834ULL)));
                    var_29 = (-(0ULL));
                }
                for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_8 [i_5 + 2] [i_5 - 1] [i_5 + 2]) : (arr_8 [i_5] [i_5 - 1] [(unsigned char)3])));
                    arr_37 [i_1] [i_5] [(signed char)0] [i_9] = ((/* implicit */unsigned short) ((22U) | (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                    arr_38 [i_1] [i_1] [i_5] [(unsigned short)2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775807LL)) || (((/* implicit */_Bool) (unsigned char)222)))))) / (var_0)));
                }
                for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) arr_11 [i_1] [(signed char)3] [i_7] [i_1]);
                    var_33 = ((/* implicit */_Bool) ((((_Bool) (unsigned char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_39 [i_1] [7ULL])));
                }
                for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 2) /* same iter space */
                {
                    arr_43 [i_1] [i_5] [i_7] [i_1] [i_11] = ((/* implicit */signed char) (+((-(9223372036854775807LL)))));
                    arr_44 [i_1] [i_5 - 2] [i_7] [(_Bool)1] [i_1] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)213)) && (((/* implicit */_Bool) (signed char)-94)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((4294967295U) == (4294967281U))))));
                    arr_45 [i_1] [i_5] [i_7] [i_11 + 1] = ((/* implicit */unsigned char) (!(arr_14 [i_1] [i_5 + 2])));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_7])) || (((_Bool) var_3))));
                }
            }
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
            {
                arr_50 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [0ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (9223372036854775801LL))))));
                arr_51 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_32 [i_1] [i_5] [i_1]))))))) * (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)48))))), (((arr_47 [i_1] [i_1] [i_12] [i_12]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48)))))))));
                var_35 = ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) max((arr_17 [i_12]), (((/* implicit */int) arr_19 [i_5]))))) : (max((arr_11 [i_1] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11]), (((/* implicit */unsigned long long int) var_0))))));
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [(_Bool)0] [i_5 - 1]))));
                arr_55 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_5 + 1])) ^ (((/* implicit */int) (signed char)-12))));
            }
            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-91))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5 + 1] [i_5 + 1] [i_5 - 1]))) + (4294967289U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_5 + 1] [i_5 + 1] [i_5 - 1])))))));
            arr_56 [i_5] [i_5] = ((/* implicit */short) (-(max((arr_11 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4188107015718357141ULL)) || (((/* implicit */_Bool) arr_39 [i_1] [i_1])))))))));
        }
        /* vectorizable */
        for (signed char i_14 = 2; i_14 < 16; i_14 += 4) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned int) arr_54 [i_1] [i_14] [i_14] [12]);
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    {
                        arr_66 [i_1] [i_1] = ((/* implicit */short) arr_34 [i_1] [i_14] [i_1] [i_1]);
                        var_39 = ((/* implicit */unsigned short) (+(((unsigned int) arr_12 [i_1] [i_1] [i_1] [0LL]))));
                        var_40 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_41 = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_14 + 1])) <= (((/* implicit */int) arr_27 [i_14 - 1]))));
                        var_42 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_1] [i_14] [i_15] [i_1]))));
                    }
                } 
            } 
            arr_67 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
        }
    }
    var_43 = ((/* implicit */long long int) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (17923724668408702880ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))));
}
