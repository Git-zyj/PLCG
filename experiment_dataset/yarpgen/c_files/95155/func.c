/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95155
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
    var_12 |= ((/* implicit */unsigned int) (+(var_8)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])), (arr_1 [i_0]))), (((/* implicit */unsigned int) arr_0 [i_0]))));
                    arr_7 [6] [i_2] |= ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [(signed char)4] [(signed char)8])) ^ (((/* implicit */int) min(((!(((/* implicit */_Bool) 0U)))), (arr_2 [(signed char)6]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (int i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((((/* implicit */int) var_6)) + (((((/* implicit */int) (unsigned short)60712)) - (((/* implicit */int) var_7)))))) : (max((var_4), (((/* implicit */int) ((3262013066U) <= (var_9))))))));
                    var_15 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((unsigned int) var_5)) : (((((/* implicit */_Bool) var_8)) ? (arr_8 [i_3]) : (4294967295U))))) ^ (((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_3] [9LL] [i_5])), (var_4))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 -= ((/* implicit */short) var_2);
}
