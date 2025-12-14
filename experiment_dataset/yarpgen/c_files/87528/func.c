/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87528
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
    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_6)))) ? (var_3) : (((var_10) ^ (((/* implicit */long long int) var_9)))))) > (var_10)));
    var_14 = ((/* implicit */unsigned int) 74413058960074988LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_10))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) / (((arr_2 [i_0]) | (((/* implicit */long long int) arr_1 [i_0]))))));
        arr_4 [7U] [i_0] = ((/* implicit */long long int) ((var_1) < (arr_0 [i_0] [i_0])));
    }
    for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 74413058960074988LL)) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 - 1]))), (arr_5 [i_1 - 1])));
        arr_7 [i_1 + 2] = ((/* implicit */unsigned int) min((arr_6 [i_1 + 1] [i_1 + 1]), (arr_6 [14] [i_1 + 3])));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_1 + 2]) >> (((arr_5 [i_1 + 3]) - (8964169577445382399LL)))))) ? (((var_4) & (1337581606U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -74413058960074996LL)) && (((/* implicit */_Bool) (-(arr_5 [i_1]))))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) min((-74413058960074993LL), (8588033476487013957LL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            arr_12 [17LL] [i_2 - 3] = ((/* implicit */unsigned char) var_12);
            var_17 = ((/* implicit */int) ((((/* implicit */long long int) var_4)) / (var_10)));
            var_18 &= ((/* implicit */unsigned int) var_11);
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_3] [i_3] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9191626984325016563LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 7255221502682260422ULL)) || (((/* implicit */_Bool) -41113709)))))) : (1389345846U)));
                            arr_22 [i_3] [i_3] [6U] [i_3] [i_4 + 2] [i_4] [i_5] = ((/* implicit */long long int) 1389345846U);
                            arr_23 [i_3] = ((/* implicit */unsigned int) -521461560);
                            var_19 = ((/* implicit */unsigned int) ((arr_6 [i_4 + 1] [i_1 + 2]) << (((((var_3) + (8686451625020621823LL))) - (38LL)))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_1 - 2] [i_1] [i_1 + 1] [i_1 + 2] [0])) && (((/* implicit */_Bool) 7255221502682260422ULL)))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                arr_30 [i_7] = ((((/* implicit */_Bool) 2852492168U)) ? (((((/* implicit */_Bool) (~(1389345842U)))) ? (max((2905621433U), (((/* implicit */unsigned int) var_2)))) : (max((((/* implicit */unsigned int) var_11)), (arr_25 [i_1] [i_1] [i_7]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2110926611)) + (2517414679485633150ULL)))) ? (((/* implicit */int) (signed char)-29)) : (arr_14 [0LL] [i_6] [i_7])))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((arr_13 [i_1] [(signed char)13] [(signed char)2]), (((/* implicit */unsigned long long int) min((6920608570793110024LL), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) arr_28 [(unsigned char)1])) : (var_3)))))))))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) arr_28 [i_1]);
                arr_34 [i_1] [3U] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) << (((var_6) - (1976486097U)))));
                var_23 = arr_13 [3U] [i_6] [i_6];
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 15; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_1])) ? (((/* implicit */int) ((var_10) > (var_3)))) : (arr_10 [i_1] [i_1] [i_1]))))));
                            arr_43 [i_1 + 3] [i_6] [i_1 + 3] [i_1 + 3] [i_11] [i_11] = ((/* implicit */long long int) ((arr_13 [i_6] [i_6] [i_6]) % (((/* implicit */unsigned long long int) arr_35 [i_10 + 2] [i_10 + 3] [i_1 + 1] [i_1 - 2]))));
                            arr_44 [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_1] [i_1 + 3]))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-9223372036854775807LL - 1LL)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    arr_47 [i_12] = ((/* implicit */unsigned long long int) (~(var_6)));
                    var_26 *= ((/* implicit */signed char) var_9);
                    var_27 = (+(((((/* implicit */_Bool) arr_16 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9))));
                    arr_48 [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_12] [1LL] [i_12] [i_12] [i_12] [i_12])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62)))))) ? (var_12) : (arr_45 [i_12]));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (signed char)64))));
                }
            }
            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(1492320136U))))));
            var_30 = ((/* implicit */long long int) 79941132);
        }
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */int) -1856953714677223630LL);
            arr_51 [i_1] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_49 [i_1]), (((/* implicit */long long int) var_11))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((-733551116) + (2147483647))) >> (((arr_31 [i_1 - 2] [i_1 - 2] [(unsigned char)17]) - (479140065U)))))) : (min((arr_18 [i_1] [i_1] [i_1] [i_1] [i_13] [3ULL] [i_13]), (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) arr_45 [i_13]))));
            arr_52 [i_13] [i_13] = ((/* implicit */unsigned char) -6169689406523192076LL);
        }
    }
    var_32 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) max((var_9), (var_9)))) + (max((-8157963431116857545LL), (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) var_6))));
}
