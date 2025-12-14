/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98975
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
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))) >> (((min((arr_4 [i_0] [i_0]), (arr_4 [i_1] [i_2]))) - (1576080391U)))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) ((short) arr_0 [i_1] [i_0]))))) + (2147483647))) >> (((((/* implicit */int) (signed char)96)) - (84)))));
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(var_11)))) < (max((max((var_7), (var_3))), (((/* implicit */unsigned long long int) 703018328))))));
    var_15 = ((unsigned int) var_3);
}
