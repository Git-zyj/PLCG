/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87886
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
    var_13 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [9LL] [9LL] [i_1] = ((int) ((long long int) arr_4 [i_1]));
                    var_14 = ((/* implicit */unsigned int) min((min((min((arr_5 [(unsigned char)11]), (((/* implicit */int) arr_1 [i_2] [i_1])))), (((/* implicit */int) var_4)))), (((arr_3 [i_2]) | (((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
}
