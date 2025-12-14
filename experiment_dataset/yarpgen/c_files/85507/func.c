/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85507
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
    var_18 *= ((/* implicit */unsigned char) ((var_13) ^ (var_13)));
    var_19 -= ((/* implicit */unsigned char) ((var_2) % (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (((((/* implicit */int) var_15)) + (var_5))))))));
    var_20 = ((/* implicit */short) var_15);
    var_21 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) var_2)) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (var_4))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((var_5) >= (((/* implicit */int) var_12))));
                    arr_10 [i_0] [i_1] [i_1] = max((((/* implicit */unsigned int) var_14)), (((((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
                }
            } 
        } 
    } 
}
