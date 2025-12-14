/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91872
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
    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31)) ? (min((((/* implicit */int) (unsigned short)17)), (((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)9)))))) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_1 [(_Bool)1] [i_1]) : (((/* implicit */int) var_2))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) (unsigned char)76))), (((unsigned int) var_7))));
                var_18 = ((/* implicit */unsigned int) 8589410304ULL);
            }
        } 
    } 
}
