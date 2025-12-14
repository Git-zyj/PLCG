/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60635
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
    var_16 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)12875)) : (((/* implicit */int) (short)-14201))))) ^ (var_11))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) arr_2 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (2471051762365799855LL))))));
            var_19 = ((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */int) var_13)) - (100)))));
            var_20 = ((/* implicit */unsigned short) 2620588143748560322ULL);
            var_21 = ((/* implicit */long long int) (-(18446744073709551615ULL)));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) < (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1128473133U)))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) max((min((-2471051762365799855LL), (((/* implicit */long long int) (short)-64)))), (((/* implicit */long long int) 4294967293U))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    {
                        var_24 = ((/* implicit */short) 2471051762365799847LL);
                        var_25 ^= ((/* implicit */unsigned long long int) var_4);
                    }
                } 
            } 
        }
        /* LoopSeq 4 */
        for (int i_5 = 2; i_5 < 9; i_5 += 2) 
        {
            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_5]), (arr_2 [i_5 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5 - 2] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)123))))) : (arr_13 [i_0] [i_0] [i_5]))))));
            var_27 = ((/* implicit */short) var_11);
        }
        /* vectorizable */
        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 3) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_4 [i_6] [i_6]))));
            var_29 = ((/* implicit */unsigned int) var_14);
            var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 9; i_7 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_10)) ? (0LL) : (((/* implicit */long long int) 0U)))));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0 - 3])))))));
        }
        for (int i_8 = 2; i_8 < 9; i_8 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 4294967266U)) : (2620588143748560322ULL))), (((/* implicit */unsigned long long int) (unsigned short)51258))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2471051762365799855LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)-124)), (var_7))))) : (min((4294967293U), (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_15 [i_0]))))))));
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551593ULL)))) ? (((/* implicit */unsigned int) (+(866522744)))) : (1924291206U))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122)))));
                            var_35 = ((/* implicit */_Bool) 2471051762365799848LL);
                        }
                    } 
                } 
            } 
        }
        var_36 = max((max((((/* implicit */long long int) max((2147483647), (-866522745)))), (max((((/* implicit */long long int) 2147483647)), (-2471051762365799863LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) : (max((((/* implicit */int) (signed char)116)), (2147483647)))))));
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0 + 1] [0LL] [i_0 + 1] [i_0 + 1] [i_0 - 1]))) : (arr_1 [i_0 - 2])))) ? ((-(((/* implicit */int) var_7)))) : ((((!(((/* implicit */_Bool) 32U)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0])))))))));
    }
    for (short i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        var_38 = (((~(((/* implicit */int) ((14U) > (((/* implicit */unsigned int) arr_35 [(unsigned short)8] [(unsigned short)8]))))))) < ((-((~(((/* implicit */int) var_0)))))));
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            for (short i_14 = 3; i_14 < 15; i_14 += 3) 
            {
                for (unsigned int i_15 = 2; i_15 < 12; i_15 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) max(((unsigned short)2004), ((unsigned short)48194)));
                        var_40 = ((/* implicit */unsigned int) max((((/* implicit */int) var_15)), ((+(866522719)))));
                        var_41 ^= ((/* implicit */unsigned short) 2147483647);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_16 = 2; i_16 < 15; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_17 = 3; i_17 < 14; i_17 += 3) 
            {
                for (unsigned int i_18 = 0; i_18 < 16; i_18 += 1) 
                {
                    for (int i_19 = 2; i_19 < 12; i_19 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((signed char) ((arr_48 [(short)7]) + (arr_51 [i_18] [i_18] [i_18] [i_18]))))), (arr_48 [i_16])));
                            var_43 ^= ((/* implicit */int) ((max((arr_38 [i_17 + 1] [i_17 - 2] [i_17 - 3]), (((/* implicit */unsigned long long int) var_1)))) / (((/* implicit */unsigned long long int) (+(9223372036854775800LL))))));
                            var_44 = (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))) ? ((+(arr_48 [i_19 + 1]))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_19 + 4] [i_18])) % (((/* implicit */int) arr_44 [i_18] [i_18]))))) ? (max((((/* implicit */unsigned long long int) 4294967293U)), (arr_47 [i_12]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2471051762365799863LL)) ? (-8742144517188778660LL) : (((/* implicit */long long int) 2147483647))))))));
                        }
                    } 
                } 
            } 
            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) arr_37 [i_16 + 1])))) : (((((/* implicit */_Bool) max((-866522720), (((/* implicit */int) arr_55 [i_16]))))) ? (((/* implicit */int) (short)28672)) : ((+(((/* implicit */int) var_0))))))));
            var_46 *= ((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)73)))) & (((((/* implicit */_Bool) (-(arr_35 [i_12] [i_12])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))));
            var_47 ^= ((((/* implicit */_Bool) ((arr_54 [i_16] [i_16] [i_16 + 1] [i_16] [i_12] [i_16] [i_16]) >> (((0) % (((/* implicit */int) var_12))))))) ? (((max((arr_49 [i_12] [i_12] [8U]), (((/* implicit */unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2328398652124671845LL)) == (11262873626501488907ULL))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((arr_40 [i_12] [i_12] [i_16]) >= (var_11))))))));
        }
        var_48 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_47 [i_12])));
        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) -866522720)) ? (6) : (((/* implicit */int) (short)0))));
    }
    /* LoopNest 2 */
    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 1) 
    {
        for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 1) 
        {
            {
                var_50 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)121))))))) ? (-1965702842) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_20] [i_20])))))))));
                var_51 = ((/* implicit */unsigned int) (~((-2147483647 - 1))));
            }
        } 
    } 
    var_52 = ((/* implicit */unsigned long long int) (~(min((2147483647), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
}
