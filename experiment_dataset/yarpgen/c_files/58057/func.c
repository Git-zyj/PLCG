/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58057
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
    var_10 = ((/* implicit */unsigned int) ((min((((unsigned int) var_3)), ((+(var_4))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */int) (unsigned short)17)) + (((/* implicit */int) (signed char)-109)))))));
                    var_12 -= var_8;
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (short)16596))));
                }
            } 
        } 
    } 
}
