/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58945
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 2])) ? (1180383133267799202ULL) : (((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_1 - 1]))));
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 2])) ? (((8900867123926362484ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [20U]))))) : ((-(var_6)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) 6879323397160634403LL))))))))));
                arr_7 [5ULL] = ((/* implicit */unsigned int) min((arr_3 [i_1 - 1] [(unsigned char)18]), (arr_1 [i_0] [i_0])));
            }
        } 
    } 
    var_17 = ((unsigned short) 9545876949783189131ULL);
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_20 [i_2] [i_3] [i_4] [i_3 + 1] [i_6] [1U] [1U] = (+(((/* implicit */int) var_14)));
                                arr_21 [4ULL] = ((/* implicit */unsigned int) arr_2 [i_2] [i_2]);
                                arr_22 [i_6] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_4] [i_5])) % (((/* implicit */int) var_14))))) ? (min((((/* implicit */unsigned long long int) -22LL)), (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 - 2])))))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_2 + 2] [17LL] [i_2 + 2] &= ((/* implicit */int) max((((((/* implicit */_Bool) arr_14 [i_2 - 2])) ? (arr_16 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [4U])) >> (((arr_10 [i_2] [i_2]) - (340937366U)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2 + 2] [i_3])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) var_0)))))));
            }
        } 
    } 
}
