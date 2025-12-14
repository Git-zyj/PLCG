/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84200
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
    var_18 = ((/* implicit */short) var_14);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned char) arr_3 [i_2]);
                    var_19 = ((/* implicit */long long int) ((signed char) var_5));
                    var_20 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) ^ (var_3))), (min((1386007375), (((/* implicit */int) arr_6 [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 1]))))));
                    var_21 = ((/* implicit */unsigned char) max(((+(arr_7 [i_2]))), (((/* implicit */int) arr_2 [i_0]))));
                    var_22 += ((/* implicit */int) ((signed char) var_9));
                }
            } 
        } 
    } 
}
