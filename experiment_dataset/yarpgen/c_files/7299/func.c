/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7299
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned short) (unsigned char)255)), (var_2)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_0])))))) == ((-(((/* implicit */int) ((unsigned char) arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    for (unsigned int i_1 = 4; i_1 < 12; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))))))));
        var_19 += ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_3 [i_1 + 2])))));
        var_20 = (~((~(((((/* implicit */long long int) arr_8 [i_1])) - (8062880934855342975LL))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_6)))));
}
