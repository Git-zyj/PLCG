/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72798
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_0 [i_0] [i_0]));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))) ^ (((((/* implicit */_Bool) 134213632U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (var_8)))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_7);
    var_14 = 2677556964U;
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((-1109069962), (-1109069951)))))) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned int) 1828766807)) | (2709138955U))))) : (((/* implicit */int) var_7))));
}
