/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85433
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */int) var_15)), ((+(((/* implicit */int) ((unsigned char) var_7)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1654572856991052747LL)) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (-(2147483635)))) != (3525449119U)))) : (arr_5 [i_0] [i_0] [i_2] [i_2])));
                    var_18 = (~(var_13));
                    arr_9 [i_0] [7U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
}
