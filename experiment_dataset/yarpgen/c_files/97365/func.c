/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97365
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((var_1) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (var_9)))))) : (var_0)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [5ULL] [i_2] = ((/* implicit */unsigned int) (short)32016);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 783583410)) ? (var_10) : (var_7)))) ? (((/* implicit */long long int) -783583410)) : (((((/* implicit */_Bool) var_5)) ? (-4606107191768639124LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32016))))))), (((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_5)))))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */long long int) min((922755445U), ((-(min((((/* implicit */unsigned int) arr_10 [i_4] [i_3] [i_0] [i_0])), (arr_4 [i_4] [i_3])))))));
                            var_13 = ((/* implicit */unsigned long long int) var_3);
                            var_14 += ((/* implicit */short) arr_14 [i_4] [i_3] [i_2] [i_1] [i_0]);
                            var_15 = ((/* implicit */signed char) arr_8 [i_0] [(short)8] [i_3] [i_4 - 1]);
                        }
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((min((((long long int) (signed char)-57)), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) (short)32016))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((max((var_3), (((/* implicit */long long int) var_6)))) == (((((-1LL) + (9223372036854775807LL))) >> (((var_5) + (7751315319103026821LL)))))))))));
                            arr_19 [i_0] = ((/* implicit */short) var_0);
                            var_17 = max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_8)));
                        }
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [2LL])), (var_1)))) && (((/* implicit */_Bool) min((arr_4 [i_2] [i_6]), (((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_6])))))));
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_6])) ? (((/* implicit */int) var_8)) : (arr_3 [i_3] [i_3] [i_3]))))));
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775805LL)) ? (((((/* implicit */_Bool) 7039469027055302498LL)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29435))) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)56)) % (783583410)))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 3096788070U)) ? (((/* implicit */int) arr_2 [i_7])) : (var_4))), (((((/* implicit */int) var_8)) << (((var_10) - (2891589550U))))))))));
                        arr_24 [i_0] [i_1] [i_2] [(unsigned short)9] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551599ULL))))) & (((/* implicit */int) ((((/* implicit */_Bool) 922755445U)) || (((/* implicit */_Bool) var_4)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 8; i_8 += 2) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1752070550);
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = (-(max((arr_26 [(signed char)0] [i_8]), (((/* implicit */int) arr_5 [i_8 + 2])))));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((arr_2 [i_0]), (arr_2 [i_2])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-4606107191768639147LL)))));
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_22 *= ((/* implicit */short) ((((/* implicit */int) ((_Bool) max((2020363000U), (((/* implicit */unsigned int) var_9)))))) >> (((max((((/* implicit */unsigned long long int) arr_31 [i_0] [i_1] [i_1] [i_9] [i_0])), (((((/* implicit */_Bool) (unsigned short)36085)) ? (((/* implicit */unsigned long long int) -4606107191768639093LL)) : (var_0))))) - (13840636881940912523ULL)))));
                            arr_37 [i_0] [i_10] [i_10] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)221))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) & (var_3)))))) ? (((/* implicit */int) (unsigned short)36079)) : (((/* implicit */int) ((min((((/* implicit */long long int) var_6)), (-4606107191768639093LL))) == (((((/* implicit */_Bool) var_5)) ? (-4606107191768639147LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16647))))))))));
                            var_23 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (_Bool)1)), (arr_30 [i_0] [(short)10] [6] [i_0] [0LL])))))), ((~((+(4606107191768639125LL)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 3; i_11 < 10; i_11 += 3) 
                        {
                            var_24 = ((/* implicit */int) ((unsigned short) arr_23 [1] [i_0] [i_2] [i_2] [i_1] [i_0]));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) 2911398133U)))))));
                        }
                        for (short i_12 = 3; i_12 < 9; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_15 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12 - 3] [i_2] [i_2] [i_1]) ^ (arr_34 [i_1] [i_12 - 1] [i_12 - 3] [i_1] [i_1] [i_1])))) < ((~(arr_39 [i_0] [i_0] [(unsigned short)1] [i_0] [i_12])))));
                            arr_45 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) -9181391693025221605LL);
                        }
                    }
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) ((((unsigned long long int) ((signed char) 4606107191768639092LL))) << (((((((/* implicit */_Bool) (unsigned char)35)) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)34)), (arr_40 [i_0] [i_1] [i_0] [i_0] [i_13]))))))) - (15679930317010799185ULL)))));
                        arr_48 [i_0] [i_1] = ((/* implicit */unsigned char) (unsigned short)29450);
                        arr_49 [i_2] [9LL] [i_2] [i_2] [i_2] = max((((/* implicit */unsigned long long int) ((-4606107191768639091LL) != (((/* implicit */long long int) arr_26 [i_1] [i_13]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [6LL] [i_0] [i_2] [i_1] [i_2] [(_Bool)1] [6LL])) ? (((/* implicit */int) (unsigned char)221)) : (var_9)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (16ULL))))));
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_1] [i_0] [i_1] [i_2] [i_2] [i_2] [i_14])) || (((/* implicit */_Bool) 4398046511103LL))))) >> ((-(18446744073709551587ULL)))))), (max((var_1), (((/* implicit */unsigned long long int) 2147483647))))));
                            arr_52 [4] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_11 [6U] [i_1] [i_1])) : (((/* implicit */int) var_6))))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) (short)11684);
                            var_30 = ((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (var_9)))) ? (min((arr_1 [i_0] [i_15]), (((/* implicit */int) (short)11684)))) : ((-(arr_1 [i_0] [i_1]))));
                        }
                    }
                }
            } 
        } 
        var_31 *= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (unsigned short)14770)), (((unsigned long long int) arr_30 [5] [i_0] [5] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_7))))))));
    }
    /* vectorizable */
    for (short i_16 = 2; i_16 < 22; i_16 += 3) 
    {
        arr_61 [i_16] [i_16] = ((/* implicit */unsigned short) arr_59 [i_16]);
        var_32 = ((/* implicit */_Bool) ((unsigned int) arr_60 [i_16 - 2] [i_16 + 1]));
        var_33 = ((/* implicit */short) (+(var_9)));
    }
    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) var_3))), (var_5)))) || (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29454)))))) >= (min((((/* implicit */long long int) var_9)), (var_3)))))));
    /* LoopSeq 1 */
    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) 
    {
        arr_66 [(unsigned short)2] = ((/* implicit */unsigned char) 4606107191768639125LL);
        arr_67 [i_17] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))) * (var_1))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)50765)) ? (arr_62 [i_17]) : (((/* implicit */long long int) arr_63 [i_17])))), (((/* implicit */long long int) (+(((/* implicit */int) (short)11017)))))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_65 [i_17] [i_17]))))) * (min((((/* implicit */unsigned long long int) arr_62 [i_17])), (var_1))))));
    }
}
