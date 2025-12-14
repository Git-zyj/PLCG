/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6606
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
    var_10 = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (var_1))))))), (var_9)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = min((((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) arr_5 [i_2]))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((unsigned short) ((long long int) 5249673490223100025LL)));
                    arr_10 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (signed char)112);
                }
            } 
        } 
    } 
}
