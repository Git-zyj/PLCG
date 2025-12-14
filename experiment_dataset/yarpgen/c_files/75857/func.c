/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75857
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
    var_18 = (signed char)126;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */short) (-((-(((/* implicit */int) var_8))))));
                    arr_6 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) max(((~(((/* implicit */int) (short)30719)))), (((/* implicit */int) ((short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_8))))))));
                    var_20 -= ((/* implicit */signed char) max((((/* implicit */int) max(((signed char)-31), (arr_5 [i_1] [8ULL])))), ((-(((/* implicit */int) (signed char)3))))));
                    arr_7 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (signed char)-121)) : (-1647529221)));
                }
            } 
        } 
    } 
}
