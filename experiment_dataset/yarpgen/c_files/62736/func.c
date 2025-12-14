/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62736
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
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((((((/* implicit */_Bool) var_9)) ? (arr_0 [i_1 - 1] [i_0 - 1]) : (arr_0 [i_1 - 1] [i_1 - 1]))) & (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)46123)))))))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_0), (arr_5 [i_0] [i_1] [i_1 + 1]))), (arr_0 [i_0 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) var_13)) : (max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32758))) : (arr_2 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 19; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */short) max((max((((/* implicit */int) (!(var_11)))), (arr_1 [i_3]))), (((/* implicit */int) (short)15895))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+((-(max((((/* implicit */unsigned int) arr_8 [i_2] [i_2])), (arr_0 [i_2] [i_2 + 3]))))))))));
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_2)) & (((/* implicit */int) var_10)))))))));
                /* LoopSeq 4 */
                for (short i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((var_4), ((-(arr_0 [i_3] [i_2 + 1]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] [i_5] [i_3] [i_3] [i_4] [i_5] [i_6 - 2] |= ((/* implicit */signed char) var_8);
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_7))));
                                var_21 = (unsigned short)46123;
                                arr_19 [i_6 - 3] [i_5] [i_4] [i_2 + 1] [i_2 + 1] = ((/* implicit */long long int) arr_4 [i_2] [i_3]);
                                arr_20 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_4] [i_2 + 2] = ((/* implicit */signed char) min((((((/* implicit */int) var_3)) - (((/* implicit */int) ((unsigned short) var_13))))), (((/* implicit */int) max((((unsigned char) var_1)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_2]))))))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((int) (((!(((/* implicit */_Bool) arr_2 [i_2])))) && (((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_4])))));
                }
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    arr_25 [i_2 + 2] [i_3] [i_2 + 2] [i_2 + 2] = max((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (arr_2 [i_2 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */int) var_12)) : (arr_15 [i_2 - 4] [i_3] [i_3] [i_7] [i_7])))))), (((((/* implicit */_Bool) arr_22 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7])))))) : (arr_9 [i_2 - 4]))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7]))) % (arr_2 [i_7]))))));
                    var_23 -= ((/* implicit */signed char) (+(((int) ((((/* implicit */int) arr_10 [i_2 - 2] [i_3] [i_3])) * (((/* implicit */int) (unsigned short)3072)))))));
                    var_24 = max((max((arr_3 [i_3] [i_3] [i_2 + 3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2 - 3] [i_3] [i_3] [i_7] [i_7])) ? (((/* implicit */int) arr_7 [i_7])) : (var_7)))))), (max((((/* implicit */unsigned long long int) (unsigned short)19401)), (arr_23 [i_3]))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    var_25 |= ((/* implicit */_Bool) ((arr_15 [i_2 + 1] [i_3] [i_3] [i_2 + 1] [i_8]) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38084))) <= (18446744073709551614ULL))))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_5 [i_2 - 2] [i_3] [i_8]))));
                    arr_28 [i_3] [i_8] = ((/* implicit */unsigned long long int) var_11);
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_5))));
                        var_29 = ((/* implicit */signed char) arr_7 [i_3]);
                        arr_33 [i_8] [i_9] = ((/* implicit */short) ((var_7) & (((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 4] [i_9 + 1]))));
                    }
                    for (int i_10 = 2; i_10 < 20; i_10 += 4) 
                    {
                        arr_37 [i_2 - 3] [i_3] [i_8] [i_10 - 1] = ((/* implicit */unsigned short) (signed char)-10);
                        arr_38 [i_2] [i_2] [i_2 - 3] [i_2 + 3] = ((/* implicit */unsigned short) arr_5 [i_2] [i_3] [i_2]);
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) var_4))));
                        arr_39 [i_2 - 4] [i_3] [i_8] [i_10 - 1] = ((/* implicit */unsigned int) var_6);
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((int) (!(((/* implicit */_Bool) arr_17 [i_2 - 3] [i_2 - 3] [i_2 + 1] [i_2 - 3] [i_2 + 2]))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        for (int i_12 = 3; i_12 < 20; i_12 += 1) 
                        {
                            {
                                arr_45 [i_3] [i_3] [i_8] [i_11] [i_12] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) var_7)) ^ (arr_3 [i_12] [i_8] [i_8])))));
                                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_2] [i_3] [i_8] [i_11]))) : (var_13))))))));
                                arr_46 [i_12] = ((/* implicit */unsigned int) (-(arr_23 [i_2 - 2])));
                            }
                        } 
                    } 
                }
                for (short i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    arr_49 [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                    arr_50 [i_2] [i_13] [i_3] [i_13] = ((/* implicit */unsigned short) ((arr_47 [i_2 + 3] [i_2 - 3] [i_13] [i_2 - 4]) - (((((/* implicit */_Bool) arr_1 [i_2 + 3])) ? (var_13) : (((/* implicit */unsigned int) arr_1 [i_2 + 3]))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) var_5))));
}
