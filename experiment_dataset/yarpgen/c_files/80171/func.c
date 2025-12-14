/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80171
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_5 [i_0 + 2])))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2] [i_0 + 1])) ? (((/* implicit */int) var_0)) : (arr_5 [i_0 + 1]))) : (arr_5 [i_0 - 1])));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) max((arr_6 [i_0] [i_1] [i_3]), (((/* implicit */int) var_4))))))));
                                arr_14 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_1))));
                                arr_15 [i_3] [i_3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_2 + 1] [i_0 + 3]);
                                arr_16 [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_1] [i_2 + 4] [i_4])) : (var_6))))))), ((((!(((/* implicit */_Bool) arr_1 [i_3])))) ? (min((var_7), (var_5))) : (var_5)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    arr_20 [i_5] [i_0 + 3] [i_0 + 3] = arr_8 [i_0] [i_1] [i_0] [i_0 - 1];
                    arr_21 [i_0 + 3] [i_1] [i_5 + 4] [i_1] = ((/* implicit */int) ((unsigned char) var_1));
                    arr_22 [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_10))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (var_2)))))));
                    arr_23 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_5] [i_1] [i_1] [i_0] [i_0])) < (((/* implicit */int) var_4)))))) : (var_7))), (var_7)));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_26 [(unsigned char)10] [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_5 [i_0])), (min((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_5] [i_6]))))), (arr_3 [i_0 - 1] [i_1] [i_0 - 1])))));
                        arr_27 [i_6] [i_1] [i_6] = ((/* implicit */unsigned char) var_9);
                        arr_28 [i_1] [i_1] [i_5 + 2] [i_6] [i_6] = ((/* implicit */unsigned char) var_4);
                        arr_29 [(unsigned char)0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(min((var_5), (min((var_7), (((/* implicit */unsigned long long int) var_6))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_32 [i_0] [i_7] = ((/* implicit */unsigned char) (+(21ULL)));
                        arr_33 [i_0] [i_0] [i_5 + 2] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_0 + 1] [i_5 + 2] [i_7] [i_7] [i_7]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            arr_36 [i_7] [i_1] [i_5] [i_7] [i_8] = ((/* implicit */signed char) ((unsigned long long int) arr_18 [i_8 + 1] [i_8 + 1] [i_0 + 1] [i_0 + 1]));
                            arr_37 [i_0] = ((/* implicit */unsigned char) var_6);
                            arr_38 [i_1] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0)))));
                            arr_39 [i_0] [i_1] [i_0] [i_7] [i_7] [i_8] [i_8 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_5] [i_8 - 1] [i_5] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_5 + 1]))) : (((((/* implicit */_Bool) var_7)) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        }
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    arr_43 [i_0 + 3] [i_9] [i_9] = ((/* implicit */int) max((min(((~(var_7))), (((/* implicit */unsigned long long int) (signed char)-17)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0 + 3] [i_0 + 3])) || (((/* implicit */_Bool) var_6)))))));
                    arr_44 [(unsigned char)12] [(unsigned char)12] [i_9] = ((/* implicit */signed char) ((unsigned char) arr_6 [i_0 + 4] [i_0 + 4] [i_0 + 1]));
                }
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)60)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 1) 
    {
        arr_47 [i_10 + 1] [i_10] = var_0;
        arr_48 [i_10] = var_10;
        arr_49 [i_10] = arr_17 [i_10];
    }
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) min((min((var_2), (var_4))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))))), (var_8)));
}
