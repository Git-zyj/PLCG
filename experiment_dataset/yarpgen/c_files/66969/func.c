/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66969
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
    var_15 = ((/* implicit */int) var_5);
    var_16 = ((/* implicit */int) 5001520277482475873ULL);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [11] = ((/* implicit */long long int) max((((/* implicit */int) ((short) arr_0 [i_0]))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-29467))))) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-425)))))))));
                    arr_10 [i_0] [7LL] [i_2] = -679596436520035089LL;
                    var_17 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_1 - 2] [17LL] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 1] [(short)2] [i_1] [i_2 - 2]))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3188)) / (-1730241004)));
                    arr_11 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) max((arr_5 [i_1 - 2]), (arr_5 [i_1 - 2]))));
                }
            } 
        } 
    } 
}
