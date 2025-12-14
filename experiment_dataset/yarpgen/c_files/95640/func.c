/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95640
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [(short)6] |= ((/* implicit */short) var_11);
                arr_6 [i_0] [i_1] = var_19;
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) 942775947329526641ULL);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) (short)6066))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */short) var_12);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((942775947329526644ULL) / (var_9)))));
}
