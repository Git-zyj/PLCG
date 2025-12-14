/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93820
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) ((unsigned int) max(((-(6460597180792726315ULL))), (((/* implicit */unsigned long long int) ((unsigned short) 16069998004738234756ULL))))));
            var_14 = ((/* implicit */long long int) arr_1 [i_0]);
            var_15 = ((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_0]) : (arr_4 [i_0]))) | (min((arr_3 [i_0] [i_0] [i_0]), (arr_4 [i_1]))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))) | (7062008756864798442LL)));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_1 [i_2]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_12 [i_5 - 1] [i_5 + 1] [i_5 - 1]))));
                            var_19 = ((/* implicit */unsigned long long int) (~(2079965295)));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(short)0] [i_0] [i_5 - 2])) ? (((((/* implicit */_Bool) var_12)) ? (arr_14 [i_0] [i_2] [i_5] [2U] [i_7] [i_7]) : (((/* implicit */unsigned int) arr_4 [i_0])))) : (arr_16 [2U] [2U] [i_5 - 1] [i_6] [i_7])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_8 = 4; i_8 < 8; i_8 += 2) 
            {
                var_21 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((0U) | (32767U)))) | ((-(var_1)))));
                var_22 = ((/* implicit */unsigned char) var_8);
                /* LoopSeq 2 */
                for (long long int i_9 = 4; i_9 < 9; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((arr_21 [i_8 - 3] [i_8 + 2] [i_8 - 1] [i_9 - 2]) * (arr_21 [i_8 - 4] [i_8 - 3] [i_8 + 1] [i_9 + 1])));
                        var_24 = ((/* implicit */int) min((var_24), ((~(((/* implicit */int) var_8))))));
                        var_25 = ((/* implicit */_Bool) (~(-2856842324038792556LL)));
                    }
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_26 &= ((/* implicit */unsigned int) arr_19 [i_0] [i_0] [(unsigned short)4] [i_9]);
                        var_27 = ((/* implicit */short) var_11);
                        var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2])) ? ((-(((/* implicit */int) (unsigned short)8344)))) : ((-(arr_4 [i_11])))));
                    }
                    for (unsigned short i_12 = 2; i_12 < 7; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 0U)) / (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))))));
                        var_30 -= ((/* implicit */long long int) (+(arr_3 [i_9] [9U] [i_9 - 4])));
                    }
                    var_31 = ((/* implicit */signed char) arr_16 [i_0] [(unsigned short)10] [1] [i_8 - 1] [i_9 + 2]);
                }
                for (long long int i_13 = 4; i_13 < 9; i_13 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */signed char) arr_28 [i_8 + 3] [i_13 - 3] [i_13 - 1]);
                    var_33 = ((/* implicit */signed char) (-((+(2234932492U)))));
                    /* LoopSeq 4 */
                    for (unsigned char i_14 = 1; i_14 < 8; i_14 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_8))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (67108863U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                        var_35 = ((/* implicit */unsigned short) ((((unsigned int) var_9)) ^ (((((/* implicit */unsigned int) arr_17 [i_0] [i_2] [5ULL] [5ULL] [(unsigned short)6] [(unsigned short)6])) ^ (arr_16 [i_0] [3LL] [i_0] [8LL] [i_14])))));
                        var_36 = ((/* implicit */unsigned char) arr_23 [i_13]);
                    }
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_13 - 2] [i_13])) ? (((/* implicit */int) ((short) arr_13 [i_2]))) : (((/* implicit */int) ((((/* implicit */_Bool) -1429282014278845079LL)) || (((/* implicit */_Bool) (signed char)79)))))));
                        var_38 = ((/* implicit */long long int) ((arr_19 [i_8 - 4] [i_8 - 4] [i_13 - 4] [i_13]) ^ (arr_19 [i_8 - 4] [i_15] [i_13 - 4] [i_13 + 1])));
                    }
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */signed char) ((arr_24 [i_8 - 2] [i_8 + 1] [i_8 - 1] [i_8 + 3] [i_8 - 4] [i_8 - 4]) / (((/* implicit */long long int) var_12))));
                        var_40 = ((/* implicit */unsigned long long int) arr_36 [i_0] [i_2] [i_8 + 1] [i_8] [i_13] [i_16]);
                    }
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned short) arr_25 [i_0] [i_17] [0U] [i_0]);
                        var_42 = ((/* implicit */unsigned char) arr_17 [i_0] [i_2] [i_8] [i_2] [4ULL] [i_8]);
                        var_43 = ((/* implicit */short) arr_42 [i_0] [i_13] [i_8] [5U] [i_17] [i_2] [i_8]);
                        var_44 = ((/* implicit */unsigned char) var_10);
                    }
                    var_45 = ((/* implicit */unsigned short) arr_15 [i_0] [i_2] [i_8] [i_13]);
                }
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        {
                            var_46 = 967416128U;
                            var_47 = ((/* implicit */short) ((signed char) (signed char)0));
                            var_48 = ((/* implicit */unsigned short) ((arr_18 [i_2] [i_2] [i_2] [i_8 + 1] [i_18] [4LL] [i_18]) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (short)23556)))))));
                            var_49 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)32))));
                        }
                    } 
                } 
                var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_8 + 1] [i_8 - 3] [i_8 - 3] [i_8]))));
            }
            for (long long int i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_21 = 1; i_21 < 9; i_21 += 4) 
                {
                    var_51 = ((/* implicit */unsigned long long int) ((unsigned int) 2115449737U));
                    var_52 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1093600951)) || (((/* implicit */_Bool) 1818478014)))))) | (((long long int) arr_25 [i_0] [i_0] [i_20] [i_21 + 2]))));
                    var_53 = ((/* implicit */unsigned short) ((-711096014) | (((((/* implicit */int) arr_36 [i_20] [i_20] [i_20] [i_20] [i_20] [10U])) / (((/* implicit */int) (unsigned char)5))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        var_54 = ((/* implicit */long long int) arr_33 [i_0] [i_0] [i_0] [i_0]);
                        var_55 = ((/* implicit */unsigned int) arr_31 [i_21 - 1] [i_20]);
                        var_56 = (-(((/* implicit */int) ((unsigned char) (unsigned char)3))));
                    }
                }
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    var_57 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_0] [i_2] [i_20] [i_23]))) | (((((/* implicit */_Bool) 2376746068971316859ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4148))) : (63U)))));
                    var_58 |= ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)62)) ^ (1818478014)))));
                    var_59 = ((/* implicit */unsigned short) ((int) arr_13 [i_20]));
                }
                for (unsigned int i_24 = 3; i_24 < 9; i_24 += 3) 
                {
                    var_60 = ((/* implicit */long long int) ((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_20] [i_24] [i_24 - 3] [i_24 + 1] [i_24] [i_24 + 1] [i_24 - 1])))));
                    var_61 = ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0]);
                    var_62 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_20] [i_24]))) / (2376746068971316859ULL)))));
                    var_63 = ((/* implicit */int) (unsigned short)65535);
                }
                for (signed char i_25 = 4; i_25 < 10; i_25 += 2) 
                {
                    var_64 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 6790362354137995706LL)) || (((/* implicit */_Bool) var_1))))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)13)) || (((/* implicit */_Bool) arr_60 [i_2] [i_0] [i_2] [i_2] [i_0])))))));
                    var_65 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)247)) + (((/* implicit */int) (unsigned short)63488))));
                }
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 11; i_26 += 1) 
                {
                    for (unsigned int i_27 = 1; i_27 < 10; i_27 += 3) 
                    {
                        {
                            var_66 = ((/* implicit */signed char) (~(((/* implicit */int) arr_68 [i_26] [9] [i_27] [i_20] [i_27 + 1] [i_0] [i_2]))));
                            var_67 = ((/* implicit */short) ((unsigned short) arr_47 [i_0] [i_0] [i_20] [i_26]));
                            var_68 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) * (var_4))))));
                            var_69 = ((/* implicit */unsigned int) var_10);
                        }
                    } 
                } 
            }
            var_70 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [i_0] [i_2] [(short)10] [i_2] [i_2]))) + (((((/* implicit */_Bool) 2449788947U)) ? (var_6) : (var_12)))));
        }
        for (unsigned char i_28 = 0; i_28 < 11; i_28 += 1) /* same iter space */
        {
            var_71 = ((/* implicit */unsigned long long int) max((var_71), (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0]))));
            var_72 = ((/* implicit */long long int) min((var_72), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((0ULL) - (((/* implicit */unsigned long long int) 2932277601U)))))) <= ((-(((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
        }
        var_73 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */int) ((6683665U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0])))))), ((~(((/* implicit */int) (unsigned short)65535)))))));
    }
    for (unsigned short i_29 = 0; i_29 < 19; i_29 += 1) 
    {
        var_74 = ((/* implicit */unsigned char) (~(((min((arr_73 [i_29] [i_29]), (arr_74 [i_29] [i_29]))) * (max((((/* implicit */unsigned int) (_Bool)0)), (arr_73 [i_29] [i_29])))))));
        var_75 = ((/* implicit */long long int) (-(((arr_74 [i_29] [i_29]) | (((arr_74 [i_29] [i_29]) * (((/* implicit */unsigned int) arr_72 [i_29]))))))));
        var_76 ^= ((arr_73 [i_29] [2]) & (((((/* implicit */_Bool) arr_73 [i_29] [i_29])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_73 [i_29] [i_29]))));
    }
    var_77 = ((/* implicit */unsigned short) (~(max((((((/* implicit */_Bool) var_3)) ? (var_11) : (var_4))), (var_7)))));
}
