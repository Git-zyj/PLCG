/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66377
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_14 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((862864835493136949LL), (arr_6 [i_1])))) ? (-7832553216823725208LL) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_6 [4LL])))))));
                    arr_7 [i_0] [4LL] [i_0] = arr_3 [i_0] [13LL];
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-3381976376766097684LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_0] [i_3] [(signed char)7] [(signed char)13])) ? (arr_6 [i_0]) : (arr_6 [i_4])))) ? (var_9) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [(signed char)14] [(signed char)14] [i_2] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))))))));
                            arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_0] [i_4 + 1] = var_10;
                            var_16 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [0LL] [i_0] [i_0 + 1] [i_3] [i_3] [i_3 - 1]))) | (4503599627370495LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [(signed char)1] [3LL] [i_0 + 2] [8LL] [i_1] [i_3 + 2]))))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_3 + 2] [(signed char)11] [i_0] [i_0])) < (((/* implicit */int) arr_5 [i_3 - 1] [i_5] [i_5] [i_0]))));
                            var_18 += ((/* implicit */signed char) (-((-(((/* implicit */int) arr_5 [10LL] [i_1] [i_1] [i_2]))))));
                            var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 4503599627370495LL)) ? (((/* implicit */int) arr_12 [i_1] [i_1 + 3] [2LL] [2LL] [i_1 + 3] [8LL] [i_1 + 3])) : ((-(((/* implicit */int) (signed char)-104))))));
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) arr_5 [0LL] [2LL] [i_2] [i_2])) + (95))))) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [(signed char)8] [i_1 + 1] [i_2] [i_2])) != (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 + 2] [i_2]))))))))));
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */int) arr_17 [i_1] [(signed char)11])) - ((~(((/* implicit */int) arr_17 [(signed char)0] [i_3])))))) % (((/* implicit */int) max((arr_10 [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0])) || (((/* implicit */_Bool) (signed char)-32))))))))));
                        }
                        /* LoopSeq 4 */
                        for (long long int i_7 = 3; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            var_22 = ((((/* implicit */_Bool) max((var_8), (arr_19 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_3), ((signed char)85))))) : ((~(var_10))));
                            var_23 = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(var_10)))))) + (((((/* implicit */_Bool) (~(arr_8 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))) ? (((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 + 1] [i_2]))))));
                        }
                        for (long long int i_8 = 3; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            arr_23 [7LL] [i_1] [i_1] [(signed char)13] [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) min(((signed char)0), ((signed char)-32)))))));
                            arr_24 [i_0] [i_0] [i_2] [i_3] [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)0), (min((var_12), ((signed char)0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_8] [(signed char)3] [i_8 - 2] [i_8] [i_8 - 2] [i_8 + 1] [i_8 + 1])) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((signed char) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_3 [i_0] [i_8];
                        }
                        for (long long int i_9 = 3; i_9 < 14; i_9 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-115))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0])))))));
                            var_25 = ((/* implicit */signed char) ((((((long long int) (signed char)-32)) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1 + 2] [i_1 - 1]))) : ((-(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))))) + (28LL)))));
                        }
                        for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_31 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) max((((long long int) arr_21 [14LL] [i_1 + 3] [i_1] [14LL] [i_0] [i_1 - 1])), (((/* implicit */long long int) max((var_3), ((signed char)30))))));
                            var_26 = (~(min((1952244076561169565LL), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-841169827128652145LL))))));
                        }
                        arr_32 [i_0] [i_1] [i_1] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_0 - 1]), (((/* implicit */long long int) (signed char)83))))) ? (min((arr_20 [i_0] [i_1] [(signed char)5] [(signed char)5] [i_0] [i_1]), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_3] [i_3 + 1] [i_0] [i_3 + 1])))) : (((/* implicit */long long int) (-((-(((/* implicit */int) var_2)))))))));
                        arr_33 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)77)) ? (arr_29 [i_0 + 2] [i_0] [i_0] [i_3] [i_3 - 1] [i_3 - 1]) : (arr_15 [i_0]))), (4534333989443702371LL)));
                    }
                    for (long long int i_11 = 1; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        arr_38 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [(signed char)14] [5LL])))))))))) : ((~(max((arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]), (2092066229790022232LL)))))));
                        arr_39 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_11 - 1])) : (((/* implicit */int) arr_9 [i_0 + 3]))))) ? (min((min((arr_14 [i_11] [i_11] [i_0] [i_11] [14LL] [i_11]), (-4503599627370495LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_30 [10LL] [(signed char)13] [i_2] [i_1] [i_0]))))))) : (var_13)));
                        arr_40 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_0] [i_1] [(signed char)7]);
                    }
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        arr_45 [i_0] [2LL] [2LL] [2LL] [2LL] [i_12] = min((var_10), ((+((~(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        arr_46 [i_0] [i_1] [13LL] [i_2] [i_12] = ((/* implicit */signed char) ((long long int) min((((357036428559506859LL) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0]))))), (arr_27 [i_0] [(signed char)4] [i_0] [(signed char)3] [(signed char)8]))));
                    }
                    var_27 = ((/* implicit */signed char) (~(arr_6 [i_1])));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) var_0);
    var_29 = var_7;
    var_30 = min((var_12), (((/* implicit */signed char) ((min((((/* implicit */long long int) (signed char)-7)), (-4503599627370495LL))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-2092066229790022233LL)))))));
}
