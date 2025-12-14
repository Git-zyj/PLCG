/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91940
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_12 = (-(arr_3 [i_0]));
                            var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 3] [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (arr_3 [i_0])))))))) : (min((max((var_3), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((short) var_9))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_0] [i_3] = ((/* implicit */long long int) max((((arr_8 [i_2 - 4]) / (arr_5 [(unsigned char)1] [(unsigned short)17] [i_2 - 3] [(unsigned short)17]))), (((/* implicit */unsigned long long int) var_2))));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_9))))))))));
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                            }
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) min((var_16), ((-(((arr_8 [i_1]) * (((/* implicit */unsigned long long int) var_7))))))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    arr_19 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))));
                    var_17 = ((int) max((((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_5] [i_5])), ((~(3756771540U)))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) ((unsigned int) arr_13 [i_0] [i_1] [i_5] [i_5] [i_6] [i_7] [i_7]))));
                                arr_25 [i_5] [i_1] [i_5] [i_1] [4ULL] = ((/* implicit */unsigned int) arr_12 [i_1] [i_5] [i_5]);
                                var_18 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 1909137762U)) / (4570264562009398118ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6 - 2] [i_6])))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_8 = 2; i_8 < 22; i_8 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (3756771540U) : (((/* implicit */unsigned int) arr_12 [i_8 - 1] [i_8 - 2] [i_8 - 1]))))))));
                    var_20 = ((/* implicit */long long int) ((arr_20 [i_1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168)))));
                }
                for (int i_9 = 1; i_9 < 23; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 23; i_11 += 4) 
                        {
                            {
                                arr_36 [i_1] = ((/* implicit */long long int) arr_28 [i_1] [i_10]);
                                arr_37 [i_11] [i_11] [i_9 - 1] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned int) var_8)), (arr_21 [i_0] [i_1] [i_1] [i_0] [i_1] [i_11 - 1]))))), (arr_28 [i_10] [i_11 - 1])));
                                var_21 = ((/* implicit */long long int) min((var_21), ((~(((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [i_0] [(unsigned char)18] [17ULL]) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3)))))))));
                                arr_38 [i_0] [i_1] [i_9 + 1] [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_11))))) << (((max((var_7), (((/* implicit */int) arr_22 [i_0] [i_0])))) - (661409302))))), (((((((/* implicit */_Bool) 538195755U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) | ((-(((/* implicit */int) var_2))))))));
                                arr_39 [i_0] [(unsigned short)5] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_10)), (var_6))) | (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_9 + 1] [i_10] [i_11])) ^ (((/* implicit */int) arr_32 [i_0] [i_1] [i_9 + 1] [i_10] [i_11 + 1])))))));
                            }
                        } 
                    } 
                    arr_40 [i_0] [(_Bool)0] [i_0] = ((/* implicit */short) max((((((((/* implicit */int) arr_29 [i_1] [i_1] [i_9 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_29 [i_0] [14] [i_9 + 1])) + (16463))))), (((/* implicit */int) ((((/* implicit */int) arr_29 [i_0] [i_0] [i_9 + 1])) == (((/* implicit */int) arr_29 [i_1] [i_9] [i_9 + 1])))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_27 [i_9 + 1] [17] [17])) ^ (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_1] [i_9 - 1])))) | (((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_1] [i_1] [i_9 - 1])) ? (((/* implicit */int) arr_27 [i_0] [i_1] [i_9])) : (((/* implicit */int) arr_27 [i_0] [i_1] [i_9 - 1]))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            {
                var_23 = ((/* implicit */long long int) var_10);
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_12]) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 13876479511700153520ULL)) ? (arr_4 [i_12]) : (arr_4 [i_13]))) : (max((arr_4 [i_12]), (arr_4 [i_12])))));
            }
        } 
    } 
}
