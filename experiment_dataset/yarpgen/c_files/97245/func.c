/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97245
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
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-21)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(signed char)0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-29894)) : (((/* implicit */int) (unsigned short)18562)))), (((/* implicit */int) (short)29893))));
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((2315272118391165766LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)7417)))));
            }
        } 
    } 
}
