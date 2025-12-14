/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64993
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
    var_13 = ((/* implicit */unsigned int) 18446744073709551604ULL);
    var_14 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] [10ULL] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (unsigned char)17))))))))));
            var_15 -= (~((-(((/* implicit */int) (unsigned short)12872)))));
        }
        var_16 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_5)) : (2147483647)));
    }
}
