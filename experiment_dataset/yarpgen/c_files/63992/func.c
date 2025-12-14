/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63992
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
    var_11 = ((5700691796071397773LL) == (((/* implicit */long long int) -504520069)));
    var_12 = ((/* implicit */unsigned short) ((((((unsigned long long int) var_7)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) <= (((/* implicit */unsigned long long int) ((((var_1) - (var_0))) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (unsigned short)27833))));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (arr_5 [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 3])))), ((+(var_5)))));
                    var_14 = ((/* implicit */long long int) ((((var_9) + (2147483647))) << ((((~(arr_5 [i_2] [i_1] [4LL] [i_0]))) - (3101725480U)))));
                }
            } 
        } 
    } 
}
