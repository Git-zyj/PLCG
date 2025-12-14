/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71588
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [11LL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (-2875398798464884275LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))) : (arr_2 [i_0] [i_0] [8ULL]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_2 [12LL] [i_1] [i_1])) ? (3492737741910113797LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))) : (((/* implicit */long long int) arr_4 [i_1])))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 22; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                arr_13 [i_2 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 2])) ? (arr_10 [i_2] [i_2 + 2]) : (arr_10 [i_2 + 2] [i_2 - 1])))) ? (arr_10 [i_2] [i_2 + 3]) : (min((arr_10 [i_2 + 1] [i_2 - 3]), (arr_10 [i_2 + 1] [i_2 - 3])))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_24 [i_2] [(signed char)21] [i_5] = ((/* implicit */short) arr_8 [i_2]);
                                var_13 = ((/* implicit */int) arr_23 [i_2] [i_3] [i_4] [i_5] [i_5] [i_6]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (long long int i_9 = 2; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) arr_18 [i_9 + 1] [i_8] [i_7] [i_3] [i_2]);
                                arr_35 [i_2] [i_3] [i_7] [i_2] [i_9] = ((/* implicit */int) 345181930U);
                                arr_36 [i_2] [i_2] [i_2] [i_7] [i_2 + 2] = ((/* implicit */_Bool) arr_8 [i_9 + 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_11);
}
