/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5583
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */short) max(((unsigned short)2519), ((unsigned short)65535)));
                arr_7 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)2537)))) ? (((/* implicit */unsigned long long int) (+(var_5)))) : (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_2] [i_2 + 2]) : (arr_9 [i_2] [i_2 - 1])))) ? (min((var_4), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((long long int) (short)-18725)))));
                arr_12 [i_2 + 2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned long long int) arr_9 [i_2] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_9))))) || (((/* implicit */_Bool) ((long long int) var_2)))))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
}
