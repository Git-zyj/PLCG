/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85120
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) ((arr_0 [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_4 [i_0] = ((((/* implicit */_Bool) (unsigned short)33520)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41411))) : (15354742163188857190ULL));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 7; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 7; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) (unsigned short)41417);
                        var_14 = ((/* implicit */signed char) (unsigned short)15);
                        arr_14 [i_1] [i_1] [i_3 + 2] [(signed char)3] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32015)) >> (((((/* implicit */int) arr_13 [i_1])) + (7241))))))))) : (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32015)) >> (((((((/* implicit */int) arr_13 [i_1])) + (7241))) - (6357)))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */short) (unsigned short)32017);
        var_15 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1]))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [(unsigned short)8] [i_5])) : (((/* implicit */int) arr_6 [(unsigned short)0] [(unsigned short)0]))));
        var_17 ^= ((/* implicit */_Bool) ((int) (short)10));
        /* LoopNest 2 */
        for (unsigned char i_6 = 4; i_6 < 9; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (var_5)));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        arr_27 [i_5] [i_8] [i_5] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -292131157910216830LL)) ? (var_4) : (arr_22 [i_8] [7]))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10088)))));
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            arr_31 [i_5] [6LL] [i_5] [i_8] [(unsigned short)0] [i_5] = ((/* implicit */_Bool) (signed char)-17);
                            arr_32 [i_9] [i_8] [i_7] [i_8] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                            arr_33 [i_5] [i_6] [(_Bool)0] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) - (292131157910216829LL)));
                        }
                        for (int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                        {
                            arr_38 [i_7] [i_8] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5] [i_6] [i_6 + 1] [i_8] [i_10])) || (((/* implicit */_Bool) 0ULL))));
                            var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_16 [i_5]) - (((/* implicit */int) (short)28195))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)255)))) : (((623465763) - (((/* implicit */int) arr_28 [i_5] [i_6] [i_7] [i_8] [i_6]))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            arr_43 [i_11] [i_8] [i_8] [i_7] [i_7] [i_8] [i_5] = ((/* implicit */long long int) 202085027);
                            var_20 = ((/* implicit */signed char) var_1);
                        }
                    }
                    var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((14697091284627259900ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((_Bool) (unsigned short)33516)))));
        var_23 = ((/* implicit */int) max((var_23), ((~(((/* implicit */int) (signed char)0))))));
        arr_46 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (412316860416LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28189)))));
        /* LoopSeq 4 */
        for (short i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            arr_49 [i_12] = ((/* implicit */int) ((255) >= (((/* implicit */int) (short)2491))));
            var_24 = ((/* implicit */int) ((arr_48 [i_12]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28)))));
            var_25 = ((/* implicit */int) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_12])))));
            var_26 ^= (-(((/* implicit */int) (short)260)));
            var_27 = ((/* implicit */int) max((var_27), (((int) 292131157910216823LL))));
        }
        for (int i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (+(-4129272976066884757LL)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
            var_29 = ((-989499475) | (((/* implicit */int) (unsigned char)201)));
        }
        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
        {
            var_30 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)14))));
            arr_56 [i_12] = ((/* implicit */short) 242);
            /* LoopNest 3 */
            for (unsigned char i_16 = 3; i_16 < 10; i_16 += 4) 
            {
                for (long long int i_17 = 3; i_17 < 10; i_17 += 1) 
                {
                    for (long long int i_18 = 1; i_18 < 10; i_18 += 2) 
                    {
                        {
                            var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4685591693869856509ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned char) (short)-256)))));
                            var_33 = (i_12 % 2 == 0) ? (((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) arr_58 [i_16])) : (((/* implicit */int) arr_47 [i_12])))) + (2147483647))) >> (((arr_50 [i_12] [i_17 - 3] [i_12]) - (7450613936812073548ULL)))))) : (((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) arr_58 [i_16])) : (((/* implicit */int) arr_47 [i_12])))) + (2147483647))) >> (((((arr_50 [i_12] [i_17 - 3] [i_12]) - (7450613936812073548ULL))) - (5932052572677189283ULL))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_12] [(unsigned char)10] [i_19])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_12] [i_12] [i_19])) ? (((((/* implicit */_Bool) arr_45 [(signed char)6] [i_19])) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) (unsigned char)63)))) : (((/* implicit */int) (unsigned char)134))));
        }
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-242), (var_6)))) ? (((/* implicit */long long int) var_11)) : (var_7)));
    var_37 = ((/* implicit */int) max((292131157910216824LL), (var_4)));
}
