/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96532
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0 - 1]) - (arr_0 [i_0 + 2])));
        var_13 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32407)) ? (942432378) : (-942432378))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)64)))) : (((((/* implicit */unsigned int) arr_3 [i_0])) / (var_12))))))));
        arr_5 [i_0] = ((/* implicit */int) ((unsigned long long int) ((unsigned int) 1099507433472ULL)));
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -942432351)) ? (((var_2) - (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) max(((unsigned short)16384), (((/* implicit */unsigned short) arr_7 [i_1] [i_1]))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) -942432378)), (4282472899889601728LL)))) ? (max((var_2), (((/* implicit */int) (unsigned char)247)))) : (var_1)))));
        var_16 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned char)4)) ^ (((/* implicit */int) var_8)))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_14 [i_1] [i_1] [i_3] [i_1] = ((signed char) var_1);
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_17 [i_4] [i_1] = ((/* implicit */long long int) ((_Bool) ((unsigned int) (unsigned short)589)));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_3] [i_1] [i_4] [i_5] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) var_8))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(arr_11 [i_3 + 1] [i_3 + 1]))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */short) ((int) ((((((/* implicit */_Bool) var_5)) ? (-942432369) : (((/* implicit */int) arr_6 [13])))) == ((-(((/* implicit */int) arr_6 [i_1])))))));
                            arr_24 [i_1 + 1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */short) (!(((_Bool) ((((/* implicit */int) (unsigned short)64947)) >> (((((/* implicit */int) arr_19 [i_2] [i_3] [i_1])) - (31484))))))))) : (((/* implicit */short) (!(((_Bool) ((((/* implicit */int) (unsigned short)64947)) >> (((((((/* implicit */int) arr_19 [i_2] [i_3] [i_1])) - (31484))) + (35917)))))))));
                            arr_25 [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) min((((var_10) / (((/* implicit */int) ((var_12) < (((/* implicit */unsigned int) -942432379))))))), (((/* implicit */int) ((unsigned char) (~(var_1)))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)62)))))) : (((((((var_3) + (2147483647))) << (((558824131) - (558824131))))) / (min((var_3), (((/* implicit */int) (_Bool)1))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            arr_28 [i_1] [i_1] [i_1] [i_1] [4] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) max((min((arr_9 [i_1 + 1] [i_2 + 1] [i_2 - 2]), (((/* implicit */int) ((short) var_4))))), (((((/* implicit */_Bool) ((arr_26 [i_7] [i_1] [i_3] [i_4] [i_2 + 2]) ? (((/* implicit */int) var_8)) : (var_3)))) ? (((arr_10 [i_3 + 2] [i_3 + 2] [i_3]) / (942432378))) : (arr_9 [i_2] [i_2] [i_2])))));
                            var_20 -= ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46968)) ? (arr_8 [i_3] [i_7]) : (((/* implicit */unsigned long long int) -926758228))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_13 [i_1] [i_3] [i_7])))) : (((((/* implicit */_Bool) arr_27 [1] [i_2] [i_2] [i_2] [1])) ? (51931841U) : (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))));
                            arr_29 [i_1] [(signed char)17] [8LL] [i_3 + 2] [i_3] [i_4] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((long long int) (!(((/* implicit */_Bool) (unsigned short)64946))))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_3 + 1] [i_4] [i_1 - 1] [i_4] [i_3 - 1])))));
                            arr_30 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((signed char) var_6))) >= (min((354212122), (((/* implicit */int) var_0))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)14336)) : (((/* implicit */int) (signed char)125))))) ? (((((/* implicit */_Bool) 675017855U)) ? (-942432379) : (213978099))) : (((/* implicit */int) arr_26 [i_3 - 1] [i_2 - 2] [i_3] [i_3 - 1] [i_1 + 1])))) + (942432404)))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            var_21 += ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_10)) ? (arr_9 [i_1] [(unsigned char)18] [i_3 + 2]) : (arr_10 [i_1] [i_1] [i_1 - 1]))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_1))))))) >> (((((arr_10 [i_1 + 1] [(unsigned char)15] [i_8]) << (((((/* implicit */int) min((arr_22 [i_3] [9U] [i_3] [i_2] [i_1 - 1]), (((/* implicit */short) arr_23 [i_1] [i_1 - 1] [i_3 + 1] [i_4] [i_8] [i_2] [i_8]))))) + (31928))))) - (1032162880)))));
                            var_22 = (~(((((/* implicit */int) (unsigned char)191)) >> (((((var_7) | (((/* implicit */unsigned long long int) var_12)))) - (11832381539282819372ULL))))));
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((var_9) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)448)) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1])))))));
                        arr_38 [i_1 + 1] [i_1] [i_2] [i_2] [i_3 + 2] [i_1] = ((/* implicit */signed char) arr_32 [i_1 + 1] [i_2 - 2] [i_3] [i_9] [i_2] [13ULL] [i_1]);
                        var_24 = ((/* implicit */unsigned int) ((((var_6) + (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))) | (((arr_16 [i_1 + 1] [i_2 - 2] [i_3 + 1] [i_9]) ^ (arr_16 [i_1 - 1] [i_2 - 2] [i_9] [i_9])))));
                    }
                }
            } 
        } 
        arr_39 [i_1] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */int) ((unsigned char) var_0))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (arr_9 [i_1] [i_1] [i_1]))))));
    }
    /* LoopSeq 2 */
    for (signed char i_10 = 1; i_10 < 20; i_10 += 4) 
    {
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((1179537775U), (((/* implicit */unsigned int) arr_42 [i_10 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_10 - 1] [i_10])))))))) : ((((((_Bool)1) ? (((/* implicit */int) arr_41 [i_10] [i_10])) : (var_3))) * (min((((/* implicit */int) arr_42 [i_10])), (2038517764)))))));
        var_26 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_41 [i_10] [20LL])) ? (((/* implicit */int) max(((signed char)-41), (arr_42 [i_10 - 1])))) : (942432378)))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_46 [i_11] [10LL] &= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_11])))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (var_7))) : (((/* implicit */unsigned long long int) ((int) arr_34 [i_11] [i_11] [i_11] [i_11]))))), (((/* implicit */unsigned long long int) arr_27 [i_11] [i_11] [i_11] [i_11] [i_11]))));
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            var_27 = ((/* implicit */int) max((max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (240ULL))), (((/* implicit */unsigned long long int) ((int) arr_10 [(signed char)8] [i_11] [i_12]))))), (((/* implicit */unsigned long long int) min((1814115382), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_2 [i_11] [i_12 + 1]) : (((/* implicit */int) arr_15 [i_12] [i_11] [i_11])))))))));
            arr_49 [i_11] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (_Bool)1))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                {
                    var_28 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_13])) ? (((/* implicit */int) ((signed char) 2614421045U))) : (((/* implicit */int) (unsigned short)64958))))));
                    arr_55 [i_11] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */int) ((unsigned char) arr_54 [i_11] [i_11] [i_13] [i_14])))))) ? (((/* implicit */long long int) var_9)) : (var_6)));
                }
            } 
        } 
        var_29 += ((/* implicit */signed char) 1253029796);
        arr_56 [i_11] [i_11] = ((((/* implicit */_Bool) -1253029773)) ? (arr_21 [i_11] [i_11] [(short)22] [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */int) ((unsigned short) (+(arr_52 [i_11]))))));
    }
}
