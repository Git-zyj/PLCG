/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8464
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_4 [i_0] [i_1]))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (arr_1 [i_0] [i_1]))))));
                var_21 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) ((short) -7757018761241967522LL))) != (((/* implicit */int) ((_Bool) arr_0 [i_0])))))), (((((arr_2 [i_0] [i_0]) ? (((/* implicit */long long int) 1831301535U)) : (arr_0 [i_0]))) >> (((min((7757018761241967498LL), (((/* implicit */long long int) arr_1 [i_0] [5])))) + (1136617596LL)))))))) : (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) ((short) -7757018761241967522LL))) != (((/* implicit */int) ((_Bool) arr_0 [i_0])))))), (((((((arr_2 [i_0] [i_0]) ? (((/* implicit */long long int) 1831301535U)) : (arr_0 [i_0]))) + (9223372036854775807LL))) >> (((((min((7757018761241967498LL), (((/* implicit */long long int) arr_1 [i_0] [5])))) + (1136617596LL))) - (1071198282LL))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_16);
}
