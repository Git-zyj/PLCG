/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59780
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
    var_14 = var_5;
    var_15 = ((/* implicit */_Bool) ((unsigned int) (unsigned char)55));
    var_16 = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)77)) << (((((/* implicit */int) (unsigned char)56)) ^ (((/* implicit */int) (unsigned char)51))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_8 [4LL] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) min(((short)32767), ((short)32767)))))));
                var_17 = ((/* implicit */long long int) min((var_17), (min((((((/* implicit */_Bool) (~(-5715437068789596070LL)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-32764), (var_13))))))), (((/* implicit */long long int) ((min((arr_0 [i_1]), (var_7))) <= (((/* implicit */long long int) 2941806932U)))))))));
            }
        } 
    } 
}
