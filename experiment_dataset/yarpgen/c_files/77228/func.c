/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77228
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(800892767)))), (((min((834855133U), (((/* implicit */unsigned int) var_1)))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_11 |= ((/* implicit */unsigned int) var_0);
    var_12 = ((/* implicit */short) var_8);
}
