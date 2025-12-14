/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83799
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)29)) <= (((/* implicit */int) (signed char)4))));
                                arr_14 [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)29))) / (9223372036854775791LL)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [11LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_0))) ^ (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [(signed char)0] [i_0 - 1] [i_2])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (arr_9 [i_0] [i_1] [i_1] [i_0] [i_1]))))))));
                    arr_16 [i_0] [(unsigned short)4] [i_2] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_8 [i_0] [i_1] [(signed char)0] [(unsigned short)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))))) : (-9223372036854775807LL));
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((min((9223372036854775807LL), (((/* implicit */long long int) (signed char)125)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) < (((/* implicit */int) arr_1 [i_0 + 1] [(signed char)3]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [(signed char)11] [(signed char)11])) / (((/* implicit */int) var_5))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) / ((-9223372036854775807LL - 1LL))))))));
                                var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) arr_19 [i_0] [(unsigned short)18] [(unsigned short)18] [i_0])))), ((!(((/* implicit */_Bool) arr_9 [i_0] [i_6 + 1] [i_6 + 3] [i_0 + 1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (unsigned short i_8 = 4; i_8 < 11; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                arr_32 [i_7] [i_7] [10LL] [i_7] [i_7] [i_7] = ((long long int) ((((/* implicit */_Bool) arr_23 [i_7] [i_8 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_23 [i_8] [i_8 - 4])));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > ((+(((/* implicit */int) (signed char)49))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        for (signed char i_13 = 1; i_13 < 11; i_13 += 4) 
                        {
                            {
                                arr_39 [i_7] [i_13] [i_12] [(signed char)3] [(signed char)10] [0LL] [i_12] = var_6;
                                var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62128)) / (((/* implicit */int) (signed char)-5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [13LL] [i_7] [i_7]))) : (max((((/* implicit */long long int) (signed char)-20)), (arr_5 [i_8 + 1] [i_9] [i_13 + 1])))))));
                                arr_40 [i_13] [i_13] = (signed char)13;
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) min((var_19), (((long long int) var_10))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
    var_21 = ((/* implicit */unsigned short) var_9);
}
