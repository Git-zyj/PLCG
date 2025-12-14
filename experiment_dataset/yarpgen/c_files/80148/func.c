/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80148
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_11 [(signed char)4] [i_0] [i_0] [i_2] [(short)15] [(short)15] [i_4] = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_11)))));
                                arr_12 [i_0] [i_0] [i_2] [i_3 - 2] [i_3 - 2] [(unsigned char)0] = ((/* implicit */long long int) var_13);
                                var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+((+(var_14)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))) : (min((((/* implicit */unsigned long long int) var_13)), (var_0)))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [(signed char)14] = ((/* implicit */unsigned int) min((var_5), (((/* implicit */int) arr_5 [i_0] [3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2811969351U)), (arr_18 [i_0])))) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [(_Bool)1])) : (((/* implicit */int) arr_16 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned short) var_4)))))) : (max((((/* implicit */long long int) (signed char)-5)), (var_14)))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_10 [(signed char)8] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_4)) : (2147483647)))))))));
                                var_19 *= ((/* implicit */unsigned char) arr_17 [(_Bool)1] [(_Bool)1] [i_1 + 2] [i_1] [i_1 + 2] [(_Bool)1] [i_6]);
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((unsigned long long int) arr_7 [14LL] [14LL] [i_2] [i_5] [i_6])), (((/* implicit */unsigned long long int) ((arr_9 [i_0] [(signed char)0] [i_6] [(signed char)0] [i_1 + 1] [(signed char)6]) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_2] [i_2] [i_1 - 2] [i_2])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_6]))))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)-127)), ((((-(var_14))) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        for (short i_8 = 2; i_8 < 12; i_8 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) 14307832029874059130ULL);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_7] [i_10])) ? (((/* implicit */int) arr_0 [i_9] [i_9])) : (((/* implicit */int) arr_0 [i_10] [i_7]))))) : (((((/* implicit */_Bool) -1042390495)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8] [(signed char)0] [16LL]))) : (arr_23 [i_10]))))))));
                            var_24 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_2)), (var_7)))) ? (((/* implicit */unsigned long long int) var_14)) : ((-(arr_10 [i_7] [i_7] [i_7] [9]))))))));
                        }
                    } 
                } 
                var_25 += ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7] [2])))))) ? (min((((/* implicit */unsigned int) arr_14 [i_8] [(signed char)5] [i_8] [(_Bool)1] [(_Bool)1])), (arr_8 [5LL] [5LL] [0U]))) : (((/* implicit */unsigned int) arr_30 [i_8 + 2] [i_8] [i_8 + 2] [i_8 - 2])))));
                arr_32 [i_7] [i_7] = ((/* implicit */unsigned int) max((((arr_7 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_7] [i_7]) * (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((long long int) min((var_7), (var_7)))))));
            }
        } 
    } 
}
