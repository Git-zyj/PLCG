/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58178
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
    var_19 *= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [22ULL] [i_2] = ((/* implicit */unsigned char) min((max((-435823874), (((/* implicit */int) (signed char)96)))), (((/* implicit */int) arr_2 [i_2]))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */unsigned int) var_8)) : (2450068853U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [(unsigned char)15] [i_1]))))) : (min((arr_3 [i_2]), (((/* implicit */long long int) var_6))))))) || (((/* implicit */_Bool) max((arr_5 [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned char) (signed char)-97)))))));
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), (max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned char) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))));
                        arr_19 [i_6] [i_5] [i_4] [i_3 - 2] = ((/* implicit */unsigned int) ((var_1) ^ (((/* implicit */unsigned long long int) -8159386674690246377LL))));
                        arr_20 [i_3 + 1] [(signed char)6] [i_5] [7ULL] = ((/* implicit */short) ((((/* implicit */int) var_9)) > (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_3]))))));
                    }
                } 
            } 
            arr_21 [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1844898443U)))) ? (arr_9 [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3 + 2] [i_3 - 1] [i_3 - 1] [(_Bool)1] [i_3 + 2] [(_Bool)1])))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_29 [i_3] [i_4] [i_7] [i_3] [i_7] = ((/* implicit */signed char) var_12);
                            arr_30 [i_7] [i_3] [i_8] [i_7] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_22 [i_3] [i_3 - 2]))));
                        }
                        var_23 *= ((/* implicit */unsigned long long int) ((var_0) < (arr_3 [i_3 + 2])));
                    }
                } 
            } 
        }
        arr_31 [i_3] = ((/* implicit */unsigned char) arr_14 [i_3] [i_3] [i_3 - 1] [i_3]);
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        var_24 ^= ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-97)) > (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_8)))) ? (((/* implicit */unsigned long long int) ((1773792183U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146)))))) : (max((5ULL), (((/* implicit */unsigned long long int) arr_33 [i_10])))))) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)251)))) * (((((/* implicit */int) arr_33 [i_10])) >> (((2763631105526203324LL) - (2763631105526203309LL)))))))) % (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)216)) << (((((((/* implicit */int) arr_32 [i_10])) + (63))) - (24)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_10]))) : (max((((/* implicit */long long int) (signed char)-117)), (var_10)))))));
    }
    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        arr_36 [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((_Bool) (unsigned short)36042))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)7)))))) >> (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_26 = ((/* implicit */int) max((var_26), (((((((((var_4) & (arr_34 [10U]))) / ((~(((/* implicit */int) arr_38 [i_11] [i_12])))))) + (2147483647))) >> (((max((arr_3 [i_11]), (((/* implicit */long long int) (signed char)-15)))) - (7250507200016839052LL)))))));
            arr_40 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)8)) ^ (((/* implicit */int) (_Bool)1))));
            arr_41 [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) max((0ULL), (((/* implicit */unsigned long long int) 268435455))));
        }
        for (unsigned char i_13 = 1; i_13 < 12; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)24))) ^ (281474976710655LL))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)-435))))))) ^ (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) arr_4 [i_13 + 2] [i_13 + 2] [i_14] [i_15])))))))));
                        var_28 = ((/* implicit */signed char) ((((14971179580072360494ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)254)))))) << (((min((1773792183U), (((/* implicit */unsigned int) var_18)))) - (1612890789U)))));
                        arr_49 [i_15] [i_11] [3LL] [i_11] [i_11] = ((/* implicit */unsigned long long int) (signed char)-96);
                        arr_50 [i_14] [i_14] [i_11] [3U] [i_14] [i_14] = ((/* implicit */signed char) arr_46 [i_11] [i_11] [i_14] [8] [i_11] [i_11]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_16 = 2; i_16 < 11; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    {
                        arr_56 [i_16] [(unsigned char)0] [i_16] [i_16] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (signed char)-78))))) && (((/* implicit */_Bool) arr_47 [i_11] [i_13] [i_11] [2ULL] [i_16])))) ? (max((((/* implicit */unsigned long long int) (unsigned char)58)), (5552214797518684308ULL))) : (5552214797518684308ULL)));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_17]))) : (max((3812310637162858087LL), (((/* implicit */long long int) var_9)))))))))));
                        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)11)) == (var_5))))) != (((((/* implicit */long long int) ((/* implicit */int) arr_33 [(signed char)11]))) ^ (arr_43 [i_11] [i_11] [i_11])))))), (7247077782285275620LL)));
                    }
                } 
            } 
            arr_57 [i_11] [i_11] [i_13 - 1] = ((/* implicit */unsigned int) max((min((-7247077782285275597LL), (((/* implicit */long long int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (signed char)-102))))))), (((/* implicit */long long int) ((arr_43 [i_11] [i_11] [i_13 - 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_11] [i_13] [i_13 + 1] [i_13] [i_11]))))))));
        }
        var_31 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-435))) : (arr_37 [i_11] [i_11]))))) % (min((((/* implicit */unsigned long long int) arr_33 [13ULL])), (var_1)))));
        var_32 = ((/* implicit */unsigned char) (+(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (9856074501702296898ULL))), (((/* implicit */unsigned long long int) var_16))))));
    }
    var_33 = ((/* implicit */int) min((max((((((/* implicit */_Bool) var_16)) ? (5552214797518684297ULL) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_8)) : (8692059984492961962LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (((9767105832087556939ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) 2113929216)), (var_7)))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 1410382779)) : (max((((/* implicit */long long int) -10)), (8692059984492961962LL)))))));
}
