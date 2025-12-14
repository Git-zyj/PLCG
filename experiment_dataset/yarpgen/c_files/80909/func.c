/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80909
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)-1)), (((arr_0 [i_0] [(unsigned short)19]) - (((/* implicit */long long int) min((((/* implicit */int) (signed char)110)), (15872))))))));
                    arr_9 [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) 8807665273830902307LL)) ? (5) : (((/* implicit */int) var_10)))))) == (((/* implicit */int) (unsigned char)232))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_16 [i_4 - 2] [i_3] [i_3] [i_4 - 2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_1 [(short)16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_4 + 1] [i_4] [i_4 - 1]))))) && (((/* implicit */_Bool) arr_7 [(unsigned char)7] [i_0]))));
                                var_19 += ((/* implicit */unsigned char) var_4);
                                var_20 = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) arr_4 [(short)17] [i_2] [23ULL])))));
                                arr_17 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) 8807665273830902300LL);
                                arr_18 [i_0] [i_1 - 2] [i_3] = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_2] [(unsigned char)3] [i_0])) ? (arr_1 [(signed char)23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned long long int) ((short) arr_12 [i_5] [i_5 - 3] [i_5] [(_Bool)1]));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) min((arr_20 [i_5 + 2]), (arr_20 [i_5 - 1])))) : (((/* implicit */int) var_3))));
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_21 [i_5])), (max((min((((/* implicit */unsigned long long int) var_12)), (35182224605184ULL))), ((~(var_4)))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))))) : (min((18446744073709551599ULL), (((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5 + 3] [i_5]))))));
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned char) arr_2 [i_5] [i_5 + 2]);
    }
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    arr_33 [i_8] [i_8] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned char) arr_11 [i_6] [i_7] [i_6])), ((unsigned char)153)));
                    arr_34 [i_6] [i_6] [14LL] [1] = arr_19 [i_6];
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        arr_38 [i_6] = ((/* implicit */int) ((_Bool) (_Bool)1));
                        arr_39 [i_6] [i_6] = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned long long int) arr_0 [(signed char)13] [i_8])), (arr_32 [i_6]))));
                        var_24 = ((/* implicit */unsigned int) min((((/* implicit */int) var_2)), ((~(((/* implicit */int) (signed char)0))))));
                    }
                    for (unsigned short i_10 = 3; i_10 < 17; i_10 += 1) 
                    {
                        arr_43 [i_6] [i_6] [i_8] [i_6] = (!(((/* implicit */_Bool) ((((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_10]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8807665273830902312LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_10] [i_7])))))))));
                        var_25 -= (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_42 [i_6] [i_7])), (var_15))))))));
                        var_26 = ((/* implicit */short) arr_14 [i_10] [i_10] [i_10 + 2] [i_10 + 1] [i_10] [i_10]);
                    }
                    /* LoopSeq 1 */
                    for (int i_11 = 2; i_11 < 16; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) arr_40 [i_6])))));
                            var_28 = ((/* implicit */long long int) (~((-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_12])) && (arr_48 [i_6] [i_11] [i_6] [i_11 + 1] [i_8] [i_8]))))))));
                        }
                        for (signed char i_13 = 3; i_13 < 15; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)9)) + (((/* implicit */int) (unsigned char)103))));
                            var_30 = ((/* implicit */unsigned int) (signed char)14);
                            arr_51 [16ULL] [i_11] [i_8] [i_6] [i_11] = ((/* implicit */long long int) (short)-22750);
                            var_31 = min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-113))))));
                        }
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_32 = ((/* implicit */short) var_5);
                            arr_54 [(_Bool)1] [i_6] [(_Bool)1] [9LL] [i_6] [i_6] = ((/* implicit */unsigned short) (unsigned char)93);
                            arr_55 [i_6] [2] [i_11] [(signed char)7] [i_7] [(unsigned short)10] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (unsigned char)0))) * (((/* implicit */int) ((_Bool) arr_52 [i_11 - 2] [i_11 - 2] [i_6] [i_7] [i_6])))));
                            arr_56 [i_8] [(signed char)13] [(_Bool)1] [i_11] [i_11 + 2] [i_6] = ((/* implicit */long long int) -1);
                        }
                        var_33 = (short)-32760;
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) var_0);
}
