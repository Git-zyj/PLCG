/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60717
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
    var_18 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */short) max((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_8 [i_0] [i_1 + 3] [i_2])))), (((/* implicit */int) var_2))));
                    var_19 *= ((/* implicit */unsigned int) var_14);
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) ((_Bool) max((4164406226U), (((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_1] [i_1 - 1])))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1369991932)) ? (arr_6 [i_1 + 1] [i_2] [i_2] [i_2]) : (((/* implicit */int) (_Bool)1)))))))));
                    var_21 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)32667)) % (((/* implicit */int) (short)-14240))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((long long int) var_12));
    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (short)14700))))))) ? (var_15) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)14702)))))));
}
