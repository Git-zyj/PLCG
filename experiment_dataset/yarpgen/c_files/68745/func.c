/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68745
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
    var_12 &= ((/* implicit */unsigned long long int) ((signed char) var_2));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) 2730495243U)), (var_11))))) + (((/* implicit */int) ((signed char) 2730495243U)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) + (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))));
                var_15 = ((/* implicit */_Bool) 62914560U);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_12 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 62914567U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3423))) : (2730495254U)));
                    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), ((-(((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_4])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
}
