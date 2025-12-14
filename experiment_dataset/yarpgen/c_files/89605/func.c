/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89605
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [8ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)61043))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) -6972817965280916325LL)) / (304114641766040211ULL)))))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2] [i_3 - 1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(signed char)1] [(signed char)1] [i_2 + 2] [3LL] [i_3 - 2]))) : (arr_7 [i_2 - 1] [i_2] [i_3 - 1] [i_3]))) : (min((((/* implicit */long long int) ((int) arr_7 [i_0] [(signed char)9] [i_3 - 2] [i_4]))), (((arr_7 [i_0] [i_2] [i_3 - 2] [i_4]) << (((((arr_4 [i_3] [i_1]) + (3531918793045667221LL))) - (47LL)))))))));
                                arr_14 [0LL] [i_0] [i_1] [0LL] [(unsigned char)18] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 1])) ? (min((2269468579U), (((/* implicit */unsigned int) var_4)))) : (max((((/* implicit */unsigned int) (unsigned char)63)), (2025498717U))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
                                arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_2 [i_2] [i_2])), (((((/* implicit */_Bool) var_10)) ? ((-(var_5))) : (min((((/* implicit */unsigned int) arr_5 [i_4] [i_3] [i_0] [i_0])), (arr_10 [2ULL] [(signed char)4] [i_2] [i_3 - 1] [2ULL] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((var_3), (((/* implicit */short) var_0))))))) + (((((/* implicit */_Bool) -6972817965280916325LL)) ? (2380832356432390070ULL) : (7472539835502572897ULL)))));
                arr_23 [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), ((~(arr_6 [i_5] [i_5] [i_6] [i_6])))));
            }
        } 
    } 
}
