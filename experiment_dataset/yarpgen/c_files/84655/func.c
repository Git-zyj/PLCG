/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84655
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
    var_16 = ((/* implicit */short) var_10);
    var_17 = ((/* implicit */short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)22458)) : ((+(((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)6841)) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))))))));
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((short) (signed char)34))) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-4840)))))) : (((((/* implicit */int) (!((_Bool)1)))) >> (((min((1690871971U), (((/* implicit */unsigned int) (unsigned short)26691)))) - (26661U)))))));
                var_19 = ((/* implicit */unsigned short) (short)-4840);
            }
        } 
    } 
}
