/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79542
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
    var_17 = ((/* implicit */int) max((4294967281U), (((/* implicit */unsigned int) (unsigned char)255))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (+((+(2097151U)))));
        var_19 = ((/* implicit */long long int) var_15);
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) max((4292870175U), ((~(var_3)))));
        var_20 = ((/* implicit */unsigned long long int) arr_4 [12]);
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 12; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] [i_2 - 2] |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2 + 1]))));
        arr_11 [(signed char)12] &= ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_6)) + (61)))))) ^ (2097120U));
        arr_12 [i_2 + 3] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2 + 1]))));
    }
    for (long long int i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) 
            {
                var_21 = max((((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? (arr_15 [i_5 + 1]) : (var_11))), (((/* implicit */unsigned int) (short)-7930)));
                arr_19 [i_3] [i_4] [i_4] [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3])) ? (min(((~(((/* implicit */int) arr_8 [i_4])))), (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) > (((/* implicit */int) arr_13 [i_3] [i_5]))))))) : (((((/* implicit */_Bool) arr_7 [i_3 + 1])) ? (arr_4 [i_3]) : (((/* implicit */int) var_5))))));
                arr_20 [i_5] [1ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) 4292870189U)))));
            }
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) ((((/* implicit */int) (signed char)-117)) > (((/* implicit */int) var_16)))))));
                            var_23 = ((/* implicit */short) (~(((/* implicit */int) arr_26 [i_3] [i_6] [i_6] [(short)7] [i_8] [i_8]))));
                            arr_31 [i_6] [i_6] [i_8 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_6])) ? (4292870163U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_3 + 3])) > (((/* implicit */int) arr_9 [i_8 + 3]))));
                        }
                    } 
                } 
                arr_32 [i_3] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 4434726936708772053ULL)) ? (4294967282U) : (2089152316U)));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (signed char i_10 = 1; i_10 < 13; i_10 += 3) 
                    {
                        {
                            arr_37 [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_24 [(short)1] [i_9] [i_6] [7LL] [7LL]) ^ (((/* implicit */unsigned long long int) arr_27 [i_6] [i_10]))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6])))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_4] [i_4])) ? (((/* implicit */int) arr_22 [i_3] [i_3])) : (((/* implicit */int) arr_22 [i_3] [i_3])))))));
                            var_26 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (3619152058U))));
                        }
                    } 
                } 
            }
            var_27 += ((/* implicit */short) min(((-(arr_2 [i_3 + 2]))), (((/* implicit */unsigned int) (((~(8796093022207ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 1]))))))));
        }
        arr_38 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(arr_2 [(signed char)0])))))) ? (((/* implicit */unsigned long long int) arr_25 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3])) : ((-(arr_6 [i_3 + 2] [i_3 + 2])))));
    }
}
