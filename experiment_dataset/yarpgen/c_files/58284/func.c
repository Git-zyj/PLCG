/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58284
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 |= ((/* implicit */unsigned char) ((arr_2 [i_1]) ? ((-(max((arr_1 [6ULL]), (((/* implicit */unsigned int) (unsigned short)56207)))))) : (((/* implicit */unsigned int) ((int) arr_3 [i_0] [i_0])))));
                    var_13 -= ((/* implicit */long long int) var_7);
                    var_14 = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), (((unsigned short) arr_5 [(short)18] [i_1] [i_2] [i_2 + 1]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            {
                arr_14 [i_3] [i_4] = ((/* implicit */int) arr_1 [i_3]);
                var_16 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) >= ((+(arr_9 [i_3] [9U]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((unsigned char) var_11));
}
