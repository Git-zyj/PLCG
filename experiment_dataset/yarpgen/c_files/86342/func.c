/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86342
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) max((((((-1055752715) > (((/* implicit */int) (unsigned char)98)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : ((+(arr_1 [i_0] [i_1]))))), (((/* implicit */unsigned int) ((int) (_Bool)1)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */int) ((unsigned short) (unsigned char)118))) + (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 2])))), (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)145)) < (((/* implicit */int) (_Bool)1))));
}
