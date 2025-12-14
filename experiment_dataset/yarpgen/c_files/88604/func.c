/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88604
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
    var_12 = ((/* implicit */unsigned long long int) 1052772119);
    var_13 |= ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2 - 1] &= ((/* implicit */_Bool) var_8);
                    arr_7 [i_0] [i_1] [i_2 - 2] = (-(((/* implicit */int) (unsigned char)18)));
                    arr_8 [i_0] [i_1 - 4] [i_2] [i_1 + 2] &= ((/* implicit */unsigned char) min((min((1175851198), (((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
