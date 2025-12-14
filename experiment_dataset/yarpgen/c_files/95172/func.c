/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95172
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
    for (int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 6; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 4; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((max((var_4), (((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) var_18)))))));
                        var_21 &= ((/* implicit */unsigned long long int) min((692289808), (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-106))))), (arr_3 [i_1 + 1] [i_1] [4ULL]))))));
                    }
                } 
            } 
            var_22 |= var_1;
        }
        for (int i_4 = 1; i_4 < 7; i_4 += 2) 
        {
            var_23 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((unsigned long long int) arr_8 [i_0 + 1] [i_4] [i_0 - 2])) + (((/* implicit */unsigned long long int) var_5)))))));
            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)121)))), (((((/* implicit */_Bool) arr_7 [i_4] [i_0])) ? (((/* implicit */int) var_2)) : (-143897808)))))), (((((/* implicit */_Bool) 2140721410)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2077))) : (14026538274372530378ULL)))));
            /* LoopSeq 3 */
            for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_5 - 1] [i_5 - 1]))))) != ((-(139611588448485376ULL)))));
                arr_13 [i_0 - 1] [i_4] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483647))));
            }
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 7; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            arr_22 [i_0 - 2] [(signed char)6] [i_4] = ((/* implicit */short) max((max(((+(((/* implicit */int) (signed char)-123)))), (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) 13662339528926316848ULL)))))));
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (signed char)-117)) == (((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [0ULL]))))), (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) (signed char)-92)))))))));
                        }
                    } 
                } 
                var_27 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_15 [i_4 - 1])) ? (((/* implicit */int) arr_15 [i_4 - 1])) : (((/* implicit */int) arr_15 [i_4 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4 + 3])))))));
            }
            for (int i_9 = 4; i_9 < 9; i_9 += 4) 
            {
                arr_27 [9ULL] [i_0 + 1] [i_4] = ((/* implicit */int) var_8);
                arr_28 [i_0] [i_0] [i_9] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0 + 1] [(short)2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-2))))), ((-(18307132485261066237ULL)))));
                var_28 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) arr_18 [i_0])))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_29 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((signed char) -2147483647))) != (((/* implicit */int) (signed char)-117))))) > (((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) arr_25 [i_0])))))));
                    var_30 = ((/* implicit */int) 18446744073709551595ULL);
                }
            }
            arr_31 [i_4] [i_4] = ((/* implicit */signed char) ((((arr_23 [i_4] [7] [i_4]) < (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 312542547250156153ULL)))))) < (139611588448485384ULL))))) : (((((/* implicit */_Bool) min((18307132485261066245ULL), (((/* implicit */unsigned long long int) arr_29 [i_4]))))) ? (((/* implicit */unsigned long long int) 1902416897)) : ((-(5577719443175079599ULL)))))));
        }
        arr_32 [(signed char)2] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)13932)) ? (10453185220328279486ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1978743470)) ? (arr_9 [i_0 + 2] [i_0]) : (((/* implicit */int) (short)24576))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0]))) != (412316860416ULL)))))));
    }
    for (int i_11 = 3; i_11 < 22; i_11 += 4) 
    {
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(167932392)))) ? (((/* implicit */int) arr_34 [i_11 - 1])) : (min((((/* implicit */int) var_1)), (arr_35 [i_11 + 2]))))) * (((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1841440778))))) : (-1978743458))))))));
        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)27232)) + ((-(((/* implicit */int) (short)13927)))))))));
    }
    for (short i_12 = 1; i_12 < 21; i_12 += 1) 
    {
        var_33 = ((/* implicit */signed char) (+((+(var_4)))));
        var_34 = arr_36 [(signed char)5];
        var_35 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) arr_38 [i_12] [(short)21])) ? (((/* implicit */int) (short)16380)) : (arr_35 [i_12 - 1]))), (arr_37 [i_12]))), (var_14)));
        arr_40 [i_12 + 1] = ((/* implicit */short) (+((+(8168606959408631004ULL)))));
    }
    for (signed char i_13 = 2; i_13 < 9; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                {
                    arr_48 [i_13] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */int) var_0)) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)18)))))));
                    arr_49 [i_13] [(signed char)3] [i_13] = ((/* implicit */int) ((412316860416ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31)))));
                    var_36 = (~(((((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (signed char)-126)) : (arr_37 [i_13 - 2]))) | (2147483647))));
                    /* LoopSeq 3 */
                    for (short i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        arr_52 [i_16] [i_13] [i_15] [i_13 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_38 [i_13 - 2] [i_13])))) ? (((((/* implicit */_Bool) max(((short)-28), (((/* implicit */short) (signed char)3))))) ? (((((/* implicit */_Bool) (short)9710)) ? (412316860421ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20671))))) : (((/* implicit */unsigned long long int) (+((-2147483647 - 1))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_45 [i_13 + 1] [i_14] [i_15] [i_16]), (((/* implicit */short) var_2))))))))));
                        var_37 = ((/* implicit */short) min((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (2305843009213693920ULL))) : (((/* implicit */unsigned long long int) (-(var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-18295)) != (((/* implicit */int) arr_39 [i_13] [i_13 + 1])))))));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_35 [i_13])))) ? ((-(((/* implicit */int) ((short) var_16))))) : (arr_37 [i_15])));
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_34 [i_13 - 1])) > (((/* implicit */int) var_15))))), (min((0), (((/* implicit */int) arr_34 [i_13 + 2])))))))));
                    }
                    for (unsigned long long int i_17 = 3; i_17 < 10; i_17 += 4) 
                    {
                        arr_55 [i_17] [i_17] [i_15] [i_17] = ((/* implicit */int) (signed char)39);
                        var_40 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-58))));
                    }
                    for (int i_18 = 2; i_18 < 9; i_18 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */int) (signed char)127)) + (582730570))))), (((((/* implicit */_Bool) (-(-1448621008)))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-40)), ((short)18)))) : (((/* implicit */int) max(((short)-13506), (((/* implicit */short) arr_39 [i_13] [i_14])))))))));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)5640)) * (((/* implicit */int) (short)14422))))), (((((/* implicit */_Bool) arr_51 [i_13 + 1])) ? (7745027863990227287ULL) : (12233238061189101426ULL)))))) ? (max(((-(((/* implicit */int) (short)-14445)))), (((/* implicit */int) arr_34 [i_13 - 2])))) : (((/* implicit */int) var_15))));
                        arr_59 [i_13] [i_14] [i_15] [8ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_57 [i_13] [3ULL] [5ULL] [i_18]))));
                    }
                    var_43 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned long long int) var_17)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_19 = 1; i_19 < 10; i_19 += 1) 
        {
            var_44 = ((/* implicit */short) arr_33 [i_13] [(short)13]);
            arr_62 [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)4215))));
            var_45 ^= ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_36 [i_13])) : (0ULL))), (((/* implicit */unsigned long long int) (short)-27107)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_42 [i_13 + 1] [i_13 + 1])))))))));
            arr_63 [(signed char)6] [i_19] = -1987171798;
            var_46 = ((/* implicit */int) (short)16362);
        }
        for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 3) 
        {
            var_47 = ((((/* implicit */_Bool) ((arr_36 [i_20]) - (arr_36 [i_13 + 1])))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58))))));
            arr_66 [i_20] = ((/* implicit */int) (signed char)-59);
        }
        arr_67 [i_13 - 2] = ((/* implicit */signed char) min(((+(69818988363776ULL))), (((/* implicit */unsigned long long int) min(((short)14453), (((/* implicit */short) arr_47 [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 1])))))));
        arr_68 [i_13] [i_13] = var_5;
        var_48 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 676983572))));
    }
    var_49 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-127))))) & (10701716209719324311ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((1697890649), (((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) var_4)) ? ((+(8388608))) : ((-(var_5))))));
    var_50 = ((/* implicit */unsigned long long int) var_15);
    var_51 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) -6597969)) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32755))))), (((/* implicit */unsigned long long int) var_5)))) << (((((((var_19) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18782))))) ^ (((((/* implicit */_Bool) (signed char)27)) ? (7745027863990227287ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))) - (14120938620655952268ULL)))));
}
