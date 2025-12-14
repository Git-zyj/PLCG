/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69099
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
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (short)-28283))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) var_11));
        var_13 -= ((/* implicit */_Bool) var_0);
        arr_4 [i_0] = ((((((/* implicit */int) min((((/* implicit */short) var_8)), ((short)18883)))) + (((/* implicit */int) var_11)))) << (((((((/* implicit */int) var_7)) * (((/* implicit */int) arr_2 [i_0 + 1])))) - (25210))));
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((5827249786997969721ULL), (arr_1 [i_1] [i_1 - 1])))) ? (min((17360261023873396525ULL), (((/* implicit */unsigned long long int) arr_2 [i_1 + 1])))) : (min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) -1462479835)) : (arr_1 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    arr_15 [i_1] [i_2 - 1] [i_3] [i_3] = ((/* implicit */int) (unsigned short)42784);
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        var_14 -= ((/* implicit */unsigned short) ((min((arr_2 [i_1 - 1]), (arr_2 [i_1 + 1]))) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */int) (short)0)) < (((/* implicit */int) var_2)))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 2; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_1] [i_2] [i_1 - 1] [i_2] [i_5] = ((/* implicit */unsigned short) 18446744073709551614ULL);
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((short) min((((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_2] [i_3] [i_4] [i_5] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_4]))) : (2ULL))), (((/* implicit */unsigned long long int) arr_17 [(_Bool)1] [i_4] [i_3]))))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((((((/* implicit */_Bool) -1476684593)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_1 [i_1] [i_1]))) & (((/* implicit */unsigned long long int) min((arr_7 [i_4]), (((/* implicit */unsigned int) arr_9 [i_1] [i_2] [(_Bool)1]))))))) + (((((((/* implicit */unsigned long long int) -1476684593)) ^ (var_1))) ^ (((/* implicit */unsigned long long int) ((1874806842U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 1] [i_3] [i_4]))))))))))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((min((((/* implicit */unsigned long long int) arr_7 [i_4])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7192))) - (arr_19 [(short)6] [i_2] [i_3] [i_2] [i_5]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (var_5) : (arr_18 [(short)0] [i_4] [i_3]))) : (((/* implicit */int) var_3)))))))));
                            arr_21 [i_1] [i_2] [i_3] [i_1] [7] [i_5 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_1] [i_1 + 1] [i_2 - 2] [i_1])), (7803877455185192830ULL)))) ? (((arr_13 [i_1 - 1] [i_1 + 1] [i_2] [i_1]) ^ (arr_13 [i_1] [i_1 + 1] [i_2] [i_1]))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_1 + 1] [i_2 - 1] [i_1])) ? (var_5) : (arr_13 [6U] [i_1 + 1] [(unsigned short)2] [i_1])))));
                        }
                        for (short i_6 = 2; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_2] [i_3] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1874806842U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) var_7)), (arr_16 [i_1] [i_2] [i_3] [i_3] [i_4] [i_6])))))) == ((~(arr_1 [i_1] [i_1])))));
                            var_18 += ((/* implicit */unsigned int) ((var_4) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1476684599)) ? (arr_16 [i_1] [7] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) -633301783))))) : (min((1048484546855381359ULL), (3339487862903684232ULL)))))));
                            var_19 -= ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (short)0))));
                            arr_25 [i_1] [i_1] [i_3] [i_4] [i_6] = ((((((((/* implicit */int) var_8)) > (((/* implicit */int) (signed char)21)))) ? (arr_18 [i_2 + 1] [i_1] [i_6 - 1]) : (((/* implicit */int) ((((/* implicit */int) arr_2 [10ULL])) >= (arr_6 [i_1])))))) % (((/* implicit */int) var_2)));
                        }
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_2))));
                        arr_26 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-40)) <= (633301768))))) + (min((var_4), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1]))))));
                        var_21 = ((/* implicit */_Bool) (((+(((10821469342932337750ULL) + (arr_1 [(signed char)6] [i_3]))))) % (((/* implicit */unsigned long long int) 1476684599))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_33 [(_Bool)1] [i_2] [i_3] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (2420160447U)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)0)) : (-1)))))) ? (min((min((((/* implicit */int) var_11)), (var_5))), (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_0), (var_11))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_16 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [5U]))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((arr_17 [i_2 + 1] [0U] [i_3]) ? (((/* implicit */int) arr_17 [i_2 - 1] [6U] [i_7])) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) 396945846U)) ? (((/* implicit */int) arr_17 [i_2 - 2] [(signed char)10] [i_8])) : (((/* implicit */int) arr_17 [i_2 - 1] [(_Bool)1] [i_2 - 1])))))))));
                        }
                        var_24 *= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_11 [i_2] [i_3] [(_Bool)1])), (min((((/* implicit */unsigned int) (unsigned short)45976)), (var_6))))), (396945837U)));
                        arr_34 [i_1 + 1] [i_1] [i_3] = ((/* implicit */unsigned int) ((short) var_6));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 11; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_9))));
                                var_26 = ((/* implicit */unsigned int) min((arr_0 [i_1] [(unsigned short)14]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (arr_32 [i_1] [1U] [i_3] [i_9] [i_10])))))))));
                                arr_40 [i_1] [3] [i_3] [i_3] [i_9] [i_9] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) min((arr_38 [i_1] [i_3] [i_9] [i_10]), (((/* implicit */unsigned short) arr_9 [0U] [i_2] [i_3]))))) ? (((/* implicit */int) arr_28 [i_2] [i_1] [i_2] [i_2])) : ((+(((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                }
            } 
        } 
        var_28 = ((/* implicit */short) ((unsigned long long int) arr_38 [i_1] [(unsigned short)6] [(_Bool)1] [(unsigned short)11]));
        var_29 -= ((/* implicit */short) ((-633301768) + (805021611)));
    }
}
