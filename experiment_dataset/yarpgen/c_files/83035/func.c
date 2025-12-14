/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83035
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) var_6);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
        arr_6 [(short)9] = ((/* implicit */signed char) 4294967295U);
    }
    var_17 = ((/* implicit */unsigned char) (~(var_9)));
    var_18 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        for (short i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            {
                arr_13 [i_1] [i_2] [8U] = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_1] [i_1]))));
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            arr_18 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8377532574865242975ULL)) ? (8377532574865242975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((var_3) < ((+(((/* implicit */int) var_16))))))) : (((/* implicit */int) arr_9 [i_1] [i_2 - 2]))));
                            arr_19 [i_1] [i_2] [i_1] [(unsigned char)4] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) arr_12 [i_3 + 2] [i_1])), (0ULL))), (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_1))))));
                            arr_20 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) arr_9 [i_1] [i_1]);
                            arr_21 [i_1] [i_1 + 3] [i_2] [i_1] [(signed char)17] [i_4] = ((/* implicit */int) var_9);
                        }
                    } 
                } 
                arr_22 [i_1] [i_2] [i_2 - 2] = ((/* implicit */unsigned char) (((~(2342579194U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)80)))) || (((((/* implicit */long long int) var_5)) < (3029339774191348603LL)))))))));
                arr_23 [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2]))) / (min((21ULL), (((/* implicit */unsigned long long int) var_0)))))))));
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    arr_26 [i_1] [17ULL] [i_5] = ((/* implicit */short) var_11);
                    arr_27 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(short)11] [i_5])) ? (var_8) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_7 [13ULL])))), ((-2147483647 - 1)))))));
                    arr_28 [i_1] [i_2 + 1] [i_2 - 2] = ((((unsigned int) (~(((/* implicit */int) arr_17 [i_1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1 + 2] [i_5] [i_1])))))));
                    arr_29 [i_1] = ((/* implicit */int) max((((/* implicit */long long int) var_14)), (max((-3323241400177538620LL), (((/* implicit */long long int) (short)4))))));
                    arr_30 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (-(((/* implicit */int) max((arr_17 [i_1]), (((/* implicit */short) var_10))))))))));
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                {
                    arr_33 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 + 3])) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) arr_7 [i_1 - 2]))));
                    arr_34 [i_1] [i_1] = ((/* implicit */unsigned long long int) 1952388101U);
                    arr_35 [i_1] [i_2] [8] = ((/* implicit */short) var_9);
                    arr_36 [i_1] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) var_6)) ? (arr_25 [i_1 + 1] [9] [i_2] [9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1 + 2]))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 3) 
                    {
                        arr_41 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -3323241400177538610LL)) ? (((/* implicit */int) (signed char)24)) : ((+(((/* implicit */int) (_Bool)1))))));
                        arr_42 [i_1] [i_2] [i_6] [i_7 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        arr_43 [i_1 + 1] [i_1] [i_1 + 2] [i_1] = ((/* implicit */signed char) -1864627194424255437LL);
                    }
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (((-(var_12))) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
}
