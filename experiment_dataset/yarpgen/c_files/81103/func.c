/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81103
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 962072674304LL)) ? (var_3) : (((/* implicit */unsigned long long int) 57208711U)))) + (((/* implicit */unsigned long long int) var_9))))) ? ((~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_2)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(signed char)13] [i_1])) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) : (((/* implicit */int) ((4062268445U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))));
                arr_6 [i_1] = ((/* implicit */long long int) ((max((((/* implicit */long long int) arr_1 [i_1])), (arr_0 [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (arr_4 [i_0])));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 3; i_4 < 15; i_4 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_11), (min((arr_2 [i_3] [i_0]), ((_Bool)1)))));
                                var_19 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_12 [(unsigned char)8] [i_1] [i_2] [i_3] [i_1] [i_2] [i_2])))), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) - (arr_11 [i_0] [i_0] [3ULL] [i_0] [(signed char)5] [i_0]))))))));
                            }
                            var_20 -= (+(((arr_13 [i_3] [i_2] [i_1] [i_0] [i_0]) | (arr_13 [12U] [i_1] [i_2] [i_1] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) == ((((_Bool)1) ? (arr_7 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_5])))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (~(arr_16 [i_7] [i_6])));
                    var_23 = ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_10))));
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 ^= ((((/* implicit */_Bool) arr_7 [i_6] [i_8])) ? (arr_11 [i_8] [i_7] [i_5] [i_5] [i_6] [i_5]) : (((/* implicit */unsigned long long int) var_0)));
                        var_25 ^= ((/* implicit */short) arr_18 [i_6] [i_7] [i_8]);
                        arr_24 [i_7] [i_7] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7] [i_6]))) : (arr_16 [i_7] [1LL])));
                        arr_25 [i_5] [i_6] [i_5] [i_8] [i_8] = ((/* implicit */long long int) arr_19 [i_5]);
                    }
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (((_Bool)1) && ((_Bool)1))))));
                        arr_28 [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_13 [i_5] [i_5] [i_5] [i_5] [15])) % (var_13))))));
                    }
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) arr_13 [i_6] [i_7] [i_7] [i_6] [i_5])))));
                            var_28 |= ((/* implicit */_Bool) arr_21 [i_6]);
                            var_29 |= (+(arr_32 [i_6]));
                            var_30 = ((/* implicit */int) (~(arr_8 [i_5] [i_11])));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), ((!((_Bool)1)))));
                            arr_35 [(unsigned short)10] [i_5] [i_10] [i_7] [i_10] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_5] [i_10] [i_7])) >= (((/* implicit */int) arr_5 [i_6] [14U] [i_12]))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((((/* implicit */_Bool) arr_12 [i_12] [i_12] [i_10] [i_5] [i_6] [i_5] [i_5])) ? (arr_12 [i_5] [i_5] [i_6] [i_6] [i_7] [i_10] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25474)))))));
                            var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_6] [i_7])) ? (arr_10 [i_5] [i_5] [i_7] [i_7] [i_10] [13U]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_2))))));
                        }
                        var_34 += (!((!(((/* implicit */_Bool) var_13)))));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_5] [i_6])) * (((/* implicit */int) arr_3 [i_5] [i_10]))));
                        var_36 = ((/* implicit */unsigned long long int) (+(arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
                    }
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) arr_4 [i_5]);
                        var_38 += ((/* implicit */unsigned long long int) var_14);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 2; i_14 < 12; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            arr_46 [i_14] = ((/* implicit */short) arr_43 [i_14 - 2] [i_14 + 2] [i_14 - 1] [i_14 - 2] [i_14 + 1]);
                            var_39 ^= ((((/* implicit */int) arr_34 [i_14 - 2] [i_14 + 2] [i_14] [i_14 + 2] [i_7] [i_5])) ^ (((/* implicit */int) arr_34 [i_5] [i_6] [i_14 + 1] [i_14] [i_14 + 1] [i_7])));
                        }
                        var_40 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_5]))) : (arr_12 [i_5] [i_6] [i_7] [i_7] [i_7] [i_14] [i_14 - 1])))) && (((/* implicit */_Bool) var_8)));
                        var_41 = ((/* implicit */int) arr_0 [i_7]);
                    }
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        var_42 -= ((((/* implicit */_Bool) arr_1 [i_5])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) var_10)));
                        var_43 += ((/* implicit */unsigned long long int) (-(1478663884U)));
                        var_44 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32763)) ? (arr_48 [i_5] [i_7] [i_7] [i_7]) : (arr_48 [i_5] [i_6] [i_7] [i_5])));
                    }
                    var_45 = ((/* implicit */int) (+(arr_12 [(unsigned char)11] [i_5] [i_7] [i_7] [i_6] [i_7] [i_7])));
                }
            } 
        } 
        arr_51 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_38 [i_5] [5ULL] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_42 [i_5] [i_5] [5ULL])) : (((/* implicit */int) var_2))))) ? (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)68))))))));
        var_46 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_5]))));
    }
    for (long long int i_17 = 0; i_17 < 21; i_17 += 2) 
    {
        var_47 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_52 [i_17]))));
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) arr_54 [i_17] [i_17]))));
    }
    for (long long int i_18 = 0; i_18 < 12; i_18 += 4) 
    {
        var_49 += ((/* implicit */unsigned long long int) ((arr_32 [i_18]) | (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_18])))));
        var_50 = ((/* implicit */long long int) (~(min(((+(((/* implicit */int) (unsigned char)0)))), ((-(var_9)))))));
        arr_58 [i_18] = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_18] [i_18])) && ((_Bool)1)))))) % (((/* implicit */int) ((unsigned short) arr_39 [i_18] [i_18])))));
        var_51 = min(((short)-10003), (((/* implicit */short) max((min(((unsigned char)193), ((unsigned char)64))), (((/* implicit */unsigned char) (_Bool)1))))));
    }
}
