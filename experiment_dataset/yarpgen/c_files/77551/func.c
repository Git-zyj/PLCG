/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77551
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
    var_10 = ((/* implicit */unsigned int) var_9);
    var_11 = ((/* implicit */unsigned int) var_7);
    var_12 = ((/* implicit */long long int) ((((((/* implicit */long long int) (-(1610612736U)))) > (((((/* implicit */long long int) 2607901360U)) + (-2211087441415037326LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (-(145929688U)))) >= (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) var_6)))))))) : (4149037615U)));
    var_13 = ((var_2) + (var_6));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_0] |= ((/* implicit */unsigned int) (~((-(arr_5 [i_0] [i_1] [i_2])))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (~(min((((/* implicit */long long int) var_8)), (arr_4 [i_2] [i_2] [11LL] [i_0]))));
                    var_14 -= ((/* implicit */long long int) var_6);
                    var_15 = ((/* implicit */long long int) min((145929686U), (3698844818U)));
                }
            } 
        } 
    } 
}
