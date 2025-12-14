/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97071
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
    var_16 = ((/* implicit */unsigned int) ((unsigned char) var_3));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) var_14);
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 7828080929672745759ULL))) - (((int) (-(((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))))), (var_1)))) ? (((((/* implicit */_Bool) 1048576U)) ? (7828080929672745759ULL) : (var_0))) : (((/* implicit */unsigned long long int) var_10))));
}
