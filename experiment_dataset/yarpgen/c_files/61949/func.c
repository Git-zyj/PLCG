/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61949
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
    var_12 = ((/* implicit */unsigned short) var_1);
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) -2853060254210761055LL))) != ((~(((/* implicit */int) var_4))))))), (-2853060254210761055LL))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [2U] |= ((/* implicit */unsigned short) var_10);
        var_14 = ((int) max((((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60377)))))), (((((/* implicit */_Bool) arr_1 [(signed char)2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_6 [3U] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967273U)) || (((/* implicit */_Bool) 19ULL))));
        var_15 -= ((/* implicit */short) arr_4 [i_1] [i_1]);
    }
}
