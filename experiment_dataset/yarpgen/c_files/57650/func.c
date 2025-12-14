/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57650
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
    var_12 += ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_11)) ^ (((/* implicit */int) (signed char)98)))), (((/* implicit */int) (signed char)90))));
    var_13 = var_3;
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) 4194303ULL)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))), (((arr_4 [i_0]) << (((-3612548878267735412LL) + (3612548878267735434LL)))))));
                    var_15 = ((/* implicit */unsigned long long int) (short)-29254);
                }
            } 
        } 
    } 
}
