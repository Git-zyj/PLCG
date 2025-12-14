/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65806
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0]);
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(max((arr_2 [i_1]), (((/* implicit */long long int) arr_4 [i_1]))))))), (((unsigned long long int) arr_3 [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_20 = var_11;
}
