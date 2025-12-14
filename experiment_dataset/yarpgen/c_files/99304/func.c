/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99304
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) arr_6 [i_1] [i_0] [i_0]);
                arr_8 [9LL] [i_0] [9LL] = 1696633570;
                arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0])) >= (((754391790) % (((/* implicit */int) arr_2 [i_1] [i_0]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max(((~(var_5))), (((/* implicit */int) ((signed char) ((18446744073709551605ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_13 = ((/* implicit */signed char) var_4);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((+(((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_9))));
}
