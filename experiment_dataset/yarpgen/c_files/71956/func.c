/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71956
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
    var_20 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((var_1) >> (((((/* implicit */int) arr_1 [1] [i_1])) + (30127))))))) || (((/* implicit */_Bool) var_7))));
                var_22 = ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])) - (((((/* implicit */_Bool) var_1)) ? (min((18446744073709551611ULL), (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0] [8ULL])))))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_9 [i_0] [i_0] [12U] [(unsigned char)12] [3] [i_4]))) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((~(var_8)))));
                                var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1528578713) != (((/* implicit */int) (signed char)92)))))) : ((~(1064577172U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                                arr_12 [9] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)48);
                                arr_13 [i_0] [(short)2] [4U] [i_0] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_25 *= ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (((long long int) (short)23191))));
                    arr_14 [i_1] [(unsigned char)11] [i_1] = ((/* implicit */long long int) (unsigned char)3);
                }
                for (short i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) ((((min((arr_11 [i_0]), (arr_11 [i_5]))) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((arr_10 [(short)0] [i_0] [i_1] [3] [i_5]) + (2147483647))) >> (((((/* implicit */int) arr_1 [9] [i_1])) + (30129)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-97)), (var_0))))) % (((((/* implicit */_Bool) arr_0 [i_5] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_1] [i_0]))) : (var_10)))))));
                    var_27 -= ((/* implicit */unsigned short) ((unsigned int) var_17));
                    var_28 = ((/* implicit */signed char) (unsigned char)61);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_29 |= ((/* implicit */long long int) min(((-(max((arr_9 [i_0] [5U] [i_1] [i_5] [(unsigned short)5] [i_7]), (((/* implicit */int) arr_7 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0] [(_Bool)1]), (var_1)))))))));
                                var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [5] [5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5])))))) : (arr_4 [i_6])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_0])), (arr_9 [(short)11] [i_1] [i_5] [i_6] [i_6] [i_7])))) ? (arr_4 [i_7 - 2]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_15 [i_5] [i_6] [i_5] [i_1])) - (57)))))))))));
                                arr_22 [i_0] [i_6] [i_5] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % ((-(((((/* implicit */_Bool) arr_21 [i_5] [i_5] [(unsigned char)1])) ? (((/* implicit */long long int) 3230390104U)) : (arr_11 [i_1])))))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 17378119205159112409ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_1] [i_5] [i_5]))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (1068624868550439202ULL)))));
                }
                for (short i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    var_31 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_8])), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-113))))) ? (((/* implicit */int) arr_24 [i_8])) : (arr_0 [i_0] [i_8])))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_10 [i_8] [i_1] [i_0] [i_0] [i_1]))));
                    var_33 = ((/* implicit */unsigned char) var_2);
                    arr_27 [i_8] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) (-((~(((/* implicit */int) (_Bool)1)))))));
                }
                for (int i_9 = 2; i_9 < 11; i_9 += 3) 
                {
                    var_34 = ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned long long int) (_Bool)1)), (17378119205159112412ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 516247816063194547ULL))))))), (((/* implicit */unsigned long long int) var_19))));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) >> (((((((/* implicit */_Bool) 1264984854)) ? (1068624868550439214ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (1068624868550439188ULL)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_9 - 2]))));
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) ((unsigned short) arr_31 [i_0] [i_0] [(signed char)6] [i_0])))))), (var_8))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        for (short i_11 = 1; i_11 < 9; i_11 += 3) 
                        {
                            {
                                var_37 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_1])) ? (arr_33 [i_1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) arr_9 [(unsigned char)6] [i_1] [i_1] [i_1] [(unsigned char)4] [i_1])) != (arr_6 [i_0])))))))));
                                arr_36 [i_10] = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_11])))) * (((/* implicit */int) var_14))))) | (max((min((((/* implicit */long long int) arr_31 [i_1] [(unsigned short)3] [11ULL] [i_1])), (var_7))), (((/* implicit */long long int) arr_30 [i_1] [i_1]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
