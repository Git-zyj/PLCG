/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83233
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
    var_20 ^= ((/* implicit */int) ((unsigned int) var_9));
    var_21 = ((/* implicit */short) min((var_21), (var_3)));
    var_22 = ((/* implicit */short) var_0);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_4 [(short)15] = ((/* implicit */unsigned char) ((short) min((((/* implicit */long long int) ((unsigned int) (short)31531))), (var_4))));
        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [(short)13] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))) ? (((int) arr_0 [i_0])) : ((+(var_16)))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)31531)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) var_15))))))) ? (min((((/* implicit */long long int) arr_5 [i_1] [i_1])), (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (1501068815))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_2 + 1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_1])) == (((/* implicit */int) arr_1 [i_1]))))) + (((/* implicit */int) ((_Bool) arr_5 [i_2] [(short)7])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [(signed char)12])) : (((/* implicit */int) arr_1 [(unsigned char)19]))))) ? (((/* implicit */int) arr_6 [i_2 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) arr_8 [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        for (short i_5 = 3; i_5 < 19; i_5 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_3] [i_1] [i_5 - 1] [i_4 - 1] = ((/* implicit */long long int) arr_12 [i_1]);
                                var_25 = ((/* implicit */long long int) (~(arr_16 [(unsigned char)8] [(unsigned char)8] [i_2 + 2] [i_4])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_6 = 3; i_6 < 17; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_8 [i_2 + 1] [i_2])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_10), (var_13)))) > (((unsigned long long int) var_5)))))));
                        var_27 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (max((204137620), (((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) ((arr_18 [i_1] [6] [i_3] [i_3] [i_3] [i_6 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))))));
                        var_28 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_6 - 2] [i_2] [i_2 + 1] [i_2]))))), ((+(arr_19 [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_6 - 2])))));
                        /* LoopSeq 4 */
                        for (short i_7 = 2; i_7 < 18; i_7 += 3) 
                        {
                            arr_25 [i_7] [i_6] [i_6] [i_6] [2] = ((/* implicit */unsigned long long int) (((~(arr_11 [i_2 + 2] [i_6 - 2] [3LL] [i_7 + 2]))) >= (((/* implicit */long long int) var_6))));
                            var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 - 1])) ? ((-(var_4))) : (((((/* implicit */_Bool) arr_10 [19] [19] [i_3])) ? (((/* implicit */long long int) arr_18 [i_1] [i_2] [i_3] [i_6] [i_1] [i_1])) : (arr_22 [i_1] [i_3])))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3] [(unsigned short)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [5] [i_7]))) : (var_10)))) ? (((arr_16 [i_1] [i_7] [i_3] [i_6]) + (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [(unsigned short)4])) || ((_Bool)1)))))))));
                            var_30 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1])) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) 2147483647))))))) << (((max((((long long int) 18)), (((/* implicit */long long int) (~(arr_5 [i_2] [i_1])))))) - (596557410LL)))));
                            arr_26 [i_7] = ((/* implicit */_Bool) (-((~(((unsigned long long int) var_7))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            arr_30 [i_1] [i_2 + 2] [i_1] [(_Bool)1] [i_6] [(unsigned char)18] [i_8] = ((/* implicit */int) (short)30868);
                            arr_31 [i_6] [i_3] [i_2] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_21 [i_1] [i_1]) ? (arr_16 [i_1] [i_3] [i_6] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) max((var_18), (((/* implicit */int) arr_1 [i_8]))))) : (((var_19) ^ (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)18524)))))));
                        }
                        for (signed char i_9 = 2; i_9 < 18; i_9 += 3) 
                        {
                            arr_34 [i_3] [i_1] = ((/* implicit */unsigned long long int) var_5);
                            var_31 = ((/* implicit */unsigned long long int) ((min((var_1), (((/* implicit */long long int) var_16)))) >= (max((((/* implicit */long long int) ((int) (unsigned char)65))), (((long long int) arr_14 [(unsigned char)16] [i_2 + 1] [0LL] [i_2 + 2]))))));
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_32 ^= ((/* implicit */short) (~((-((+(((/* implicit */int) (signed char)32))))))));
                            var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_11 [i_1] [i_6 - 1] [i_2] [i_2 - 1]) != (arr_11 [i_1] [i_6 - 3] [i_2] [i_2 - 1]))))));
                        }
                        arr_37 [i_1] [i_2 + 2] [(signed char)11] [(unsigned char)17] [i_3] [14LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) | (arr_36 [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2])))) ? (((((/* implicit */_Bool) arr_36 [i_2 + 2] [5U] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2])) ? (arr_36 [i_2] [(unsigned char)10] [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_6 - 2])))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                        var_35 = (-(((((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_2] [i_1] [i_11] [i_2 + 2] [i_2] [i_11])))))) ? (((/* implicit */int) arr_33 [i_1] [11LL] [i_2 + 1] [i_2 + 1] [i_3] [(short)6] [i_1])) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) var_7)))))));
                        var_36 += ((/* implicit */signed char) ((max((arr_16 [i_1] [i_2] [i_3] [i_11]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_1] [i_2] [i_2] [(short)16] [i_11])) ? (((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_15))))))) ^ (((/* implicit */unsigned long long int) var_13))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_35 [i_13] [i_12] [i_12] [i_12] [(unsigned short)5] [i_2 - 1] [(unsigned short)5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_2] [i_2] [9LL] [i_12] [i_2] [i_2]))) : (arr_16 [i_1] [(short)4] [i_2 + 1] [i_12]))));
                                arr_48 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 6803785340121890987LL)) ? (((/* implicit */int) arr_2 [i_2 + 2] [i_2 + 1])) : (((((/* implicit */_Bool) var_8)) ? (176806523) : (((/* implicit */int) var_15))))))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_12)))) : (((unsigned int) var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
    {
        var_39 = var_1;
        var_40 = min((var_1), (((arr_22 [i_14] [i_14]) / (arr_22 [i_14] [i_14]))));
    }
    var_41 = ((/* implicit */unsigned long long int) var_2);
}
