/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57668
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
    var_15 = ((/* implicit */unsigned int) min((1763780443836792887ULL), (16682963629872758728ULL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] [17U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((int) var_6))))) ? (((((((/* implicit */int) var_8)) % (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))) : ((-(((/* implicit */int) arr_1 [i_0 + 1] [(unsigned char)3]))))));
        var_16 = ((/* implicit */_Bool) (((-(((long long int) (short)-32757)))) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
    }
}
