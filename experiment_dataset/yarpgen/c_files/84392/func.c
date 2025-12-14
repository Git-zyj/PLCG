/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84392
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_3 [5]))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(min((((/* implicit */int) arr_7 [i_1] [i_3])), (arr_6 [i_1] [i_1] [i_1])))))))))));
                    var_17 = ((/* implicit */unsigned int) arr_5 [i_1]);
                    var_18 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 12751128020600504LL))))), (arr_6 [i_3] [i_3] [i_3])));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        arr_13 [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)164)), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_1] [i_1]), (((/* implicit */unsigned char) (signed char)120)))))) : (max((((/* implicit */unsigned int) arr_8 [(unsigned char)7] [(unsigned char)7])), (325693144U)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_5 = 2; i_5 < 18; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [(unsigned short)5])) || (((/* implicit */_Bool) arr_11 [i_4 - 2] [i_5] [i_5] [i_5]))));
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_5 + 1] [i_5] [i_5 - 1] [1U] [i_5]))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_5 + 1] [i_5 - 1] [i_4] [i_2]))) / (arr_11 [(unsigned char)2] [i_5 - 2] [i_5 + 1] [i_4 + 1])))));
                            var_22 = ((/* implicit */unsigned int) (~(12751128020600504LL)));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */int) arr_17 [i_6] [i_3] [i_1]);
                            var_24 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_15 [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 2] [i_4] [i_4 + 1] [i_4 - 1])))), ((-(((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1] [i_6] [i_4 + 1] [i_6] [i_4 + 1] [i_4 - 2]))))));
                            arr_20 [i_1] [i_1] [i_3] [i_4] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-8966)) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_3] [(unsigned short)13]))) - ((+(var_13)))))) ? (max((max((((/* implicit */long long int) arr_6 [i_3] [i_4] [18U])), (arr_17 [i_1] [6U] [i_6]))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_4])) / (((/* implicit */int) arr_15 [i_6] [(short)6] [i_6] [i_3] [i_6] [i_1] [i_1]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-8315009718328175415LL)))) ? (((/* implicit */int) (unsigned short)57131)) : (((/* implicit */int) min((arr_14 [i_1] [i_2] [i_3] [i_1] [i_2]), (arr_14 [i_1] [i_2] [i_3] [i_4] [i_6]))))))));
                        }
                    }
                    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_2] [i_3]))));
                        arr_25 [i_7] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */short) (unsigned char)91)), (arr_12 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]))), (max((arr_12 [i_2] [i_2] [(unsigned char)13] [i_3] [i_7 - 2] [18LL]), (arr_12 [i_1] [i_3] [i_7 + 1] [i_7] [i_7 - 2] [i_7])))));
                        var_26 = ((/* implicit */signed char) max((((/* implicit */int) arr_7 [i_1] [i_1])), (min((arr_24 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]), (((/* implicit */int) (short)-31737))))));
                    }
                }
            } 
        } 
        var_27 = arr_8 [i_1] [i_1];
        var_28 = max((min((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_1]))), (((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_1])));
    }
    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
    {
        arr_29 [i_8] &= ((/* implicit */unsigned char) arr_23 [i_8] [i_8] [i_8] [i_8]);
        arr_30 [i_8] = arr_28 [i_8] [i_8];
    }
    var_29 = ((/* implicit */unsigned short) (+(min((max((var_6), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_12))))));
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)51)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) var_8))))) && (((/* implicit */_Bool) (unsigned char)141))));
}
