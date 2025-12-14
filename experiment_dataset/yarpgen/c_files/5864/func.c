/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5864
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
    var_14 = ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */unsigned long long int) (-(min((min((var_1), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) min((var_2), (var_3))))))));
    var_16 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min((min((3995696728U), (((/* implicit */unsigned int) (short)-23846)))), ((~(arr_0 [i_0])))));
        arr_5 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)8]))) > (arr_0 [i_0]))))) >= (2540984805207432798LL))))));
    }
}
