/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6691
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_0 - 2])) != (((/* implicit */int) var_18))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((((/* implicit */int) ((_Bool) var_6))) % ((-(((/* implicit */int) var_7)))))))))));
    }
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max(((((-(((/* implicit */int) var_4)))) & ((-(((/* implicit */int) var_5)))))), (((/* implicit */int) (((+(((/* implicit */int) var_17)))) != ((~(((/* implicit */int) var_4))))))))))));
}
