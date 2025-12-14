/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60422
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((12072978626740973044ULL) * (6373765446968578594ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((_Bool) var_2)) ? ((+(((/* implicit */int) arr_6 [i_0] [i_2])))) : (((/* implicit */int) ((signed char) arr_10 [i_0] [i_1] [i_2] [i_0])))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_2 [i_0] [i_2]) || (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -4319581320745352746LL)))) >= (((long long int) var_14)))))));
                    arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) (~(7388212652077879415ULL))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (max((7388212652077879413ULL), (((/* implicit */unsigned long long int) -5))))));
}
