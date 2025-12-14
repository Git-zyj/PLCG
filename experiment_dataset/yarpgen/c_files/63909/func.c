/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63909
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
    var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_5), (var_13)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned char)36))));
    var_18 = ((/* implicit */long long int) ((min(((+(var_1))), (((/* implicit */long long int) max((((/* implicit */unsigned int) 1136997752)), (3U)))))) == ((+(var_5)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) min(((unsigned char)220), (((/* implicit */unsigned char) (signed char)-44))))) <= (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (+(arr_3 [(unsigned char)4] [i_1]))))))) : (((int) min((var_9), (arr_2 [(signed char)10]))))));
                    var_20 &= ((/* implicit */signed char) (((+((-(var_1))))) == (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_2]) > (var_15)))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    arr_10 [(_Bool)1] [(_Bool)1] [14LL] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_1 [(short)8])) : (arr_0 [(unsigned char)5]))) << (((((/* implicit */int) var_4)) - (38138)))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_5 [(signed char)11])) ? (arr_0 [14U]) : (((/* implicit */long long int) arr_2 [10])))) : (((/* implicit */long long int) arr_2 [i_1]))));
                    arr_11 [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)42)) << (((((/* implicit */int) arr_8 [(signed char)1] [(unsigned short)5] [0])) - (196)))))) ? (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [8LL] [0ULL] [14LL])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (9223372036854775807LL))))));
                }
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    arr_14 [(unsigned short)6] [1U] [i_1] = ((/* implicit */_Bool) (signed char)-42);
                    var_22 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((int) (unsigned char)63))) & (((((var_13) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)215)) - (159)))))));
                    var_23 = ((/* implicit */unsigned char) ((unsigned int) min((arr_3 [(_Bool)1] [i_1]), (((/* implicit */int) arr_8 [(_Bool)1] [i_1] [(unsigned char)3])))));
                }
                arr_15 [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [9LL] [2U] [5LL] [13LL])))))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */long long int) -533399574)) == (var_13))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    arr_23 [18] [(_Bool)1] &= max((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_6)))));
                    arr_24 [(_Bool)1] [1U] [(unsigned char)1] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-9165)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)36)))) : (-1136997753)));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) -4400267223837117778LL);
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) max((arr_22 [i_5 - 1]), (((/* implicit */unsigned long long int) arr_25 [i_9] [1LL] [21LL] [i_5 + 2]))));
                            var_26 = ((/* implicit */short) var_5);
                        }
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                        {
                            arr_35 [(short)22] [6LL] [5U] [17U] [(unsigned char)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(6035522604810964561LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((arr_20 [(unsigned char)7] [(_Bool)1] [3LL]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) arr_33 [5U] [i_5 + 1] [13U] [i_5 + 2] [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_25 [(unsigned char)21] [23U] [1U] [(unsigned char)5])))))) : (arr_29 [i_10] [i_5 + 1])))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
                        {
                            var_28 += (~((-(2379026816U))));
                            var_29 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_37 [11U] [9LL] [(short)15] [15LL] [i_11]))));
                        }
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                        {
                            var_30 &= min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_37 [(_Bool)1] [(_Bool)1] [7U] [11U] [7LL])), (max((arr_19 [6LL]), (var_9)))))), (max((max((((/* implicit */long long int) (_Bool)1)), (1538659595608639240LL))), (((/* implicit */long long int) arr_26 [(short)17] [(unsigned char)1])))));
                            var_31 = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) (_Bool)0)))));
                            var_32 = ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)38075))))) ^ (((((/* implicit */long long int) ((/* implicit */int) min((var_14), (arr_33 [18U] [(_Bool)1] [(_Bool)1] [(short)22] [4LL]))))) ^ (min((((/* implicit */long long int) arr_18 [(signed char)16] [(unsigned char)3])), (var_5))))));
                        }
                        arr_41 [(short)10] [13] [2] [9] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_40 [10] [22] [3] [(short)3] [11U]))))))));
                    }
                }
            } 
        } 
    } 
}
