/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56217
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17333))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1346725026U)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((((/* implicit */int) (short)17335)) >= (((/* implicit */int) ((unsigned short) (short)32759)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((short) (unsigned short)7441));
                    var_21 = ((/* implicit */short) ((((/* implicit */int) (short)20066)) * (((/* implicit */int) arr_1 [i_1]))));
                    var_22 = ((((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) < (((/* implicit */int) var_19)))))));
                }
            } 
        } 
    } 
}
