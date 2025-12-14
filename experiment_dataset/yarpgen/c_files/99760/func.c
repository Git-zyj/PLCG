/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99760
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
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_11)), (var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((arr_3 [i_0 - 2]) >> (((var_10) - (12512601920046298652ULL))))) << (((arr_4 [i_0 + 1] [i_1] [(unsigned short)14]) - (6176251631830328953ULL)))));
                var_22 = ((/* implicit */unsigned char) ((min((-3225379840225605303LL), (((/* implicit */long long int) 131008)))) != (((/* implicit */long long int) (-((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))))))));
                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_0 [i_0 - 4])))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((arr_4 [i_0 - 1] [i_0] [i_0 + 3]) - (6176251631830328939ULL)))))) ? (((((/* implicit */int) (unsigned short)21497)) + (((/* implicit */int) (short)-7287)))) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_1);
    var_26 = ((/* implicit */unsigned int) var_9);
}
