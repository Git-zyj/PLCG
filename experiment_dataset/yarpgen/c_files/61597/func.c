/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61597
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
    var_20 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_19))))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_16))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (1158009301)));
        var_22 = ((/* implicit */unsigned short) max((var_22), (arr_1 [i_0])));
        var_23 = ((/* implicit */signed char) ((unsigned short) max((arr_0 [i_0]), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) 805253053)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (!(arr_4 [i_1 - 1])));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 7; i_2 += 2) 
        {
            arr_9 [i_1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)23335)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((((/* implicit */_Bool) arr_6 [i_1 + 3])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_2 [i_1] [i_2]))))));
        }
        var_25 = ((/* implicit */short) arr_1 [i_1]);
    }
    var_26 = ((/* implicit */short) (-(max((min((-1377914441), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    for (int i_3 = 3; i_3 < 9; i_3 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                var_27 |= ((/* implicit */unsigned short) (-(693099304U)));
                var_28 = ((/* implicit */_Bool) max((((/* implicit */short) arr_16 [i_5] [i_4] [8ULL])), (arr_7 [i_4] [i_3 + 1] [i_3 - 3])));
            }
            for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3 - 3] [i_4] [(unsigned short)5]))) : (((((/* implicit */_Bool) (unsigned short)13800)) ? (1039356353460997616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (min((805253050), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65341))))))) : (((/* implicit */int) max((arr_7 [i_3 - 1] [i_3 - 1] [(unsigned short)1]), (arr_7 [i_3 + 1] [i_3 + 1] [5U]))))));
                var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_14 [i_3])), (1862329313U)));
                arr_20 [i_3] [i_4] [8ULL] [i_3] = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [(short)3])))))) - (((/* implicit */int) arr_2 [i_3] [i_3]))));
                var_31 = ((/* implicit */unsigned long long int) arr_6 [i_3 + 1]);
            }
            var_32 = (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_4 [1U])))), (((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3]))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            arr_25 [i_3] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_15 [i_3 - 2] [i_3] [i_3 - 1]);
            var_33 = ((/* implicit */short) (-(((unsigned int) (unsigned short)55571))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((17837292466349823058ULL) << (((/* implicit */int) arr_19 [i_3 - 2] [i_7] [i_3] [i_3 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1])))));
        }
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
        {
            arr_28 [i_8] [i_8] = ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) arr_14 [i_3 - 2])))));
            var_35 = ((/* implicit */int) arr_18 [i_3] [i_8] [i_8]);
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)21902))))) ? (((/* implicit */int) max((arr_21 [i_3] [i_9] [i_3 - 1]), (arr_21 [(short)7] [(short)7] [i_3 - 1])))) : (((/* implicit */int) arr_16 [i_3] [(signed char)1] [i_9]))));
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_15 [3ULL] [i_9] [i_3 - 1])) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_9]))) >= (17837292466349823058ULL)))))))) : (1574747546U)));
        }
        var_38 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) arr_30 [i_3 - 2] [i_3]))), (((unsigned long long int) ((((/* implicit */int) arr_18 [i_3] [i_3] [i_3 + 1])) & (((/* implicit */int) var_1)))))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 3; i_10 < 17; i_10 += 2) 
    {
        var_39 = var_1;
        var_40 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_19))))));
        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [6])))))));
        arr_34 [i_10] = ((/* implicit */short) arr_0 [19]);
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 1) 
        {
            for (short i_12 = 4; i_12 < 17; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_42 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (arr_0 [i_10 - 3])));
                        var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_10 - 1]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        var_43 = ((/* implicit */long long int) (!(arr_30 [i_14] [i_14])));
        arr_46 [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_36 [i_14] [i_14]))));
        var_44 = (~(((/* implicit */int) (unsigned short)55579)));
        var_45 = ((/* implicit */int) arr_23 [i_14] [i_14]);
    }
}
