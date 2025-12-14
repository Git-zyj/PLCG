/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84979
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_9))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (max(((~(min((var_10), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_2 + 1])))))))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((int) max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_1])) : (-134217728)))))));
                }
            } 
        } 
    } 
}
