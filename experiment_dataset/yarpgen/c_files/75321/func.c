/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75321
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
    var_20 = ((((/* implicit */int) ((var_2) == (var_3)))) << (((var_3) - (2605287012U))));
    var_21 &= ((/* implicit */_Bool) ((var_13) >> (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)247))))) ^ (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                    arr_9 [i_0 - 2] [i_0 - 2] [i_2] = ((/* implicit */signed char) arr_4 [i_0 - 4] [i_1 - 2] [(unsigned short)8]);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) var_8)) < (((/* implicit */int) var_10)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_7))))))) >> (((var_15) - (2613117775890221867ULL)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_0))));
}
