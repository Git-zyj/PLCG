/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99980
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
    var_20 = ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) 3027967692703387449ULL))), ((unsigned char)230)))), (((((/* implicit */int) (short)25024)) - (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]))))));
                arr_8 [i_0] [i_0] = ((/* implicit */_Bool) min(((~(var_16))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)9801)))))));
                arr_9 [1] [(short)9] = ((/* implicit */unsigned int) min((((signed char) 2021091541910042747LL)), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_4), (var_8)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)31))))));
    var_22 = ((/* implicit */int) var_2);
    var_23 = var_16;
}
