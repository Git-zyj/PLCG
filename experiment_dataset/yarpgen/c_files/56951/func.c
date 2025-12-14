/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56951
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_1] [i_2]), ((short)-32764))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)213)), ((unsigned short)48488))))));
                    arr_11 [i_2] = ((/* implicit */_Bool) arr_0 [i_2]);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned long long int) var_5);
}
