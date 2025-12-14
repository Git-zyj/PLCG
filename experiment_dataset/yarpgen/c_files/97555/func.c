/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97555
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-22451)) : (((/* implicit */int) var_10)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) (short)-32539))), (4664179065878718290ULL)))) ? ((~(-1290358659070996434LL))) : (min((1714623259137530381LL), (((/* implicit */long long int) (short)-32539))))));
                arr_4 [(unsigned char)15] [(unsigned char)15] [i_1] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))), (max((((/* implicit */int) (short)-32527)), (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (unsigned short)28672)) : (((/* implicit */int) (unsigned char)143))))))));
            }
        } 
    } 
}
