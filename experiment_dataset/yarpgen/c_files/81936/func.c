/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81936
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [8ULL] [i_1] [i_1] [5U] = ((/* implicit */unsigned int) ((signed char) arr_6 [i_1] [i_2 - 1] [(signed char)6]));
                    arr_9 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_2 - 1]);
                    var_16 = ((/* implicit */unsigned int) ((arr_1 [i_2]) == (((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_0] [(short)5])))) & (((/* implicit */int) arr_7 [i_2]))))));
                    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [1] [i_1] [(signed char)2])) ? ((((+(((/* implicit */int) arr_6 [(unsigned char)7] [(unsigned char)7] [8U])))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) >= (134029392)))))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2])) == (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((unsigned long long int) ((4294967290U) - (((/* implicit */unsigned int) var_8))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        var_19 *= ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) arr_11 [i_3])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4])) && (((/* implicit */_Bool) var_4))))) >> (((((((((/* implicit */_Bool) arr_11 [i_3])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_6)))) - (-9223372036854775794LL))) + (35LL)))));
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                arr_16 [i_3] = ((/* implicit */unsigned short) arr_11 [(unsigned char)12]);
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((arr_15 [i_3 + 3] [i_3 + 4] [i_4 - 2] [i_5]) / (var_14))))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_14 [i_4 - 2] [i_4 - 2] [i_4 - 2]))) * (((((/* implicit */int) (unsigned short)44163)) * (((/* implicit */int) (_Bool)0))))));
                    var_23 = ((/* implicit */unsigned int) (((-(var_2))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2702)))));
                    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2687)) >> (((((((/* implicit */_Bool) -985557014)) ? (4194303ULL) : (((/* implicit */unsigned long long int) var_14)))) - (4194301ULL)))));
                }
            }
            for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */long long int) var_14)) % (arr_11 [i_3 + 1]))))));
                arr_21 [i_4] [i_4] [i_4] = ((/* implicit */int) arr_19 [i_3] [i_4] [i_7]);
            }
            for (unsigned int i_8 = 2; i_8 < 16; i_8 += 2) 
            {
                arr_24 [i_4] = ((/* implicit */short) ((((((/* implicit */int) arr_17 [i_3 + 4] [i_4 + 1] [i_4 - 1] [i_8 + 2])) + (2147483647))) >> (((var_6) + (1568945999)))));
                arr_25 [10ULL] [(unsigned short)14] [i_8 + 3] [i_8] = ((/* implicit */unsigned short) arr_23 [i_3] [i_3] [i_8 - 2]);
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)239))));
                arr_26 [i_3 + 1] [12U] [i_3 - 1] = ((/* implicit */int) arr_22 [i_8] [i_8 + 3] [i_4 - 1] [i_3]);
            }
            arr_27 [(signed char)4] [i_4 - 1] = ((/* implicit */short) (-(((arr_18 [i_3] [(unsigned short)10] [i_3] [8U]) / (((/* implicit */int) arr_13 [i_3]))))));
        }
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_2)) ? (arr_12 [i_3] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))))))))));
            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_9])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
            /* LoopSeq 2 */
            for (int i_10 = 1; i_10 < 17; i_10 += 4) 
            {
                arr_34 [(signed char)5] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) > (((((/* implicit */long long int) ((/* implicit */int) var_15))) & (var_13)))));
                arr_35 [i_3 + 3] [i_3 - 1] [i_3] [(short)15] = ((/* implicit */signed char) (-(((/* implicit */int) arr_28 [i_3]))));
            }
            for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                var_29 = ((/* implicit */int) (((+(arr_12 [i_11] [i_3]))) - ((+(3612876146U)))));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) -134029413))));
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                arr_41 [18] [i_12] [18] = (+(((((/* implicit */_Bool) 4194303ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_12])))));
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) 4194275ULL)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) var_9);
                    arr_46 [i_3 + 3] [(signed char)11] [(signed char)11] [i_12] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_10 [(unsigned char)18])) >> (((((/* implicit */int) var_10)) + (17730))))));
                }
                for (unsigned long long int i_14 = 2; i_14 < 18; i_14 += 4) /* same iter space */
                {
                    arr_49 [i_3 + 3] [i_12] = ((/* implicit */int) ((((((/* implicit */int) (short)32748)) == (((/* implicit */int) (unsigned short)62848)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255)))))));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_8))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57864)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2687))) : (4194309ULL))))));
                    var_35 = ((/* implicit */unsigned short) ((arr_29 [i_9] [i_12] [i_15]) >= (((/* implicit */unsigned long long int) ((0U) / (((/* implicit */unsigned int) 924746224)))))));
                    var_36 = ((/* implicit */unsigned short) ((unsigned char) arr_48 [i_12] [i_3 + 1] [i_3 + 2]));
                }
            }
            for (signed char i_16 = 0; i_16 < 19; i_16 += 3) 
            {
                var_37 = ((arr_38 [i_3] [i_3] [i_3] [(signed char)18]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62854))));
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((unsigned int) var_13)))));
            }
            for (unsigned char i_17 = 3; i_17 < 18; i_17 += 4) 
            {
                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_42 [i_17] [11ULL] [i_9] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)13545))))))));
                arr_57 [i_17] [i_9] [6ULL] = ((/* implicit */unsigned long long int) ((int) arr_55 [i_3 + 4] [i_3 - 1] [i_3 - 1]));
                var_40 = ((/* implicit */unsigned char) 807603706);
            }
        }
        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            arr_60 [i_18] = ((/* implicit */unsigned short) (~(var_7)));
            arr_61 [i_3] = ((/* implicit */short) (+(arr_18 [i_3 + 4] [i_3 + 4] [i_3 + 4] [i_3])));
            arr_62 [i_3] = ((/* implicit */signed char) ((arr_11 [i_3 + 4]) + (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_3 + 3] [i_3 + 3] [i_3 + 3])))));
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (-(arr_30 [i_3] [i_3] [i_3 + 2] [i_18]))))));
        }
    }
    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65524)) ? (1998096944U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_19] [i_19 - 1]))))) <= (max((((/* implicit */unsigned int) arr_64 [i_19 - 1] [i_19 - 1])), (3U)))))) == (-1677714665)));
        arr_66 [i_19] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_63 [i_19 - 1])) ? (((/* implicit */unsigned int) arr_63 [i_19 - 1])) : (var_11))));
        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) -6))));
        var_44 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) (unsigned char)28)), (((((/* implicit */int) (unsigned short)56741)) - (arr_63 [i_19])))))));
        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) arr_65 [(unsigned short)13] [i_19 - 1]))));
    }
    /* vectorizable */
    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
    {
        arr_69 [i_20] [i_20 - 1] = ((/* implicit */short) ((((var_0) <= (1014917969))) || (((11506744000056723408ULL) == (18446744073705357322ULL)))));
        arr_70 [i_20] = ((/* implicit */short) ((((((/* implicit */int) arr_64 [i_20 - 1] [i_20 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_64 [i_20 - 1] [i_20 - 1])) + (18980)))));
    }
    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 4) 
    {
        var_46 = ((/* implicit */unsigned char) ((((21U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) arr_71 [i_21])) : (((int) 807603706))));
        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) arr_71 [i_21]))));
    }
    var_48 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
}
