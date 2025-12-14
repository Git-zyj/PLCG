/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71045
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
    var_17 = ((/* implicit */short) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) -3448912285175930552LL))));
                        arr_12 [i_0] [i_1] |= ((/* implicit */short) (-(((/* implicit */int) ((short) (unsigned short)8519)))));
                    }
                } 
            } 
        } 
        var_19 ^= ((/* implicit */_Bool) min((((var_1) % (((/* implicit */unsigned long long int) (+(var_0)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_20 = ((/* implicit */signed char) arr_13 [i_4]);
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(arr_13 [i_4])));
        var_21 = ((/* implicit */long long int) (+((~(arr_13 [i_4])))));
        arr_16 [(signed char)9] = ((/* implicit */short) var_9);
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+((-((~(var_10))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 3) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9223372036854775796LL)) ? (arr_21 [i_6 - 1] [i_6 + 1] [i_6 - 1]) : (arr_21 [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                var_24 = ((/* implicit */unsigned long long int) var_3);
                var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                var_26 = ((/* implicit */long long int) ((arr_18 [i_6 - 1] [i_6 + 1] [4ULL]) << (((arr_18 [i_5] [i_6 - 1] [i_6]) - (1454688638U)))));
            }
            arr_22 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)239)) + (((/* implicit */int) (unsigned short)8506))));
        }
        for (short i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
        {
            var_27 &= ((/* implicit */signed char) (+(((/* implicit */int) (!(var_5))))));
            var_28 -= ((/* implicit */unsigned long long int) ((max((arr_13 [i_4]), (((/* implicit */unsigned int) arr_17 [i_7] [i_4])))) % (max((arr_13 [i_4]), (((/* implicit */unsigned int) var_8))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                var_29 = ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_3)) - (56))));
                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [4LL] [i_7] [(signed char)2] [i_4]))) - (arr_21 [i_8] [i_7] [i_4]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4]))))))));
            }
            for (int i_9 = 1; i_9 < 13; i_9 += 2) 
            {
                var_31 = ((/* implicit */short) (+(var_10)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_9] [i_10])))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4])) * (((/* implicit */int) arr_28 [i_9 + 2] [i_9] [i_9 - 1] [3LL])))))));
                        var_34 = ((/* implicit */unsigned char) ((unsigned int) arr_27 [i_9] [i_9] [i_9] [i_9 - 1]));
                    }
                    for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_35 &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_24 [i_9 + 1])) + (((/* implicit */int) (unsigned short)8506)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8527))) != (var_13))))));
                        var_36 = ((/* implicit */short) arr_28 [i_12] [i_10] [i_9] [(_Bool)1]);
                        arr_43 [i_9] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57029)) ? (arr_17 [i_4] [i_4]) : (((/* implicit */int) ((unsigned char) var_5)))));
                        arr_44 [i_4] [i_4] [i_9] [i_10] [i_9] [i_12] = ((/* implicit */unsigned long long int) arr_14 [i_9 + 2]);
                        arr_45 [i_4] [i_9] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9])) && (((/* implicit */_Bool) arr_23 [i_4] [i_9 + 1] [i_4]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_49 [i_9] [i_7] [i_9] [i_10] [i_13] = ((/* implicit */signed char) ((var_16) == (((/* implicit */int) (unsigned short)8519))));
                        var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_46 [i_4] [i_7] [i_9] [i_10] [i_4])) ? (((/* implicit */int) arr_28 [i_13] [i_10] [i_9] [i_7])) : (var_2))) ^ ((+(((/* implicit */int) (unsigned short)57007))))));
                        arr_50 [i_9] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_4] [i_7] [i_9] [i_9 + 1] [i_9])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)24486))))) : ((((_Bool)0) ? (14052397531461026974ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56988)))))));
                        arr_51 [i_4] [i_7] [i_7] [i_10] [(unsigned char)0] [i_9] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_47 [(short)5])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))));
                        arr_52 [i_9] [i_9] [i_9 + 2] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_7] [i_9 + 1] [i_10] [i_13])) | (((/* implicit */int) (short)29624))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_4] [i_9] [i_4] [i_4]))) : (var_0)));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_7] [i_9 + 1] [8LL] [i_10] [i_10] [i_14])) ? (((int) arr_34 [i_9] [i_10] [i_9 + 1] [(signed char)10] [i_9])) : (((/* implicit */int) ((((/* implicit */int) arr_54 [i_4] [i_9] [i_9] [i_14])) >= (((/* implicit */int) var_15)))))));
                        var_39 -= var_11;
                        arr_56 [i_4] [i_7] [(short)6] [i_10] [i_9] = ((/* implicit */short) var_2);
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24472)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6)))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) arr_14 [i_9 - 1]))));
                    }
                    arr_57 [i_10] [i_9] [i_10] [i_9 + 1] [i_9] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) < (arr_48 [i_4] [i_7] [i_7] [i_7] [i_9 - 1])));
                }
                var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_7] [i_9] [i_4] [i_4]))) & (min((((arr_48 [i_4] [i_4] [i_7] [i_7] [i_9]) | (((/* implicit */unsigned long long int) arr_17 [i_4] [i_4])))), (((/* implicit */unsigned long long int) 2880846829U))))));
            }
        }
        for (short i_15 = 4; i_15 < 13; i_15 += 3) 
        {
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_15 - 1] [(signed char)0] [(signed char)0] [i_15 - 1])) ? (arr_21 [i_4] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55)))))) - (((((/* implicit */_Bool) arr_46 [i_15] [i_15 - 4] [i_15 + 1] [i_15 - 1] [i_4])) ? (arr_23 [i_4] [i_4] [i_15 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_15 - 2] [i_4] [i_4] [i_4])) & (((/* implicit */int) (signed char)3)))))))));
            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((((-(arr_37 [(unsigned char)12] [i_4] [i_15] [i_15] [i_4]))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)61929))))))) : (((/* implicit */long long int) (-(-745485511))))));
        }
    }
}
