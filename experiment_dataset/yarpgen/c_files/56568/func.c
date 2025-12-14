/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56568
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
    var_16 ^= ((/* implicit */short) ((max((((/* implicit */int) min((var_12), (var_7)))), (max((var_3), (((/* implicit */int) var_15)))))) % (min((((((/* implicit */int) (short)30573)) % (((/* implicit */int) var_11)))), (((/* implicit */int) var_14))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_0])), ((short)-18079)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) max((min(((unsigned short)1087), (((/* implicit */unsigned short) (short)28672)))), (((/* implicit */unsigned short) arr_5 [i_0] [i_0])))))));
                var_17 ^= ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) min((((/* implicit */short) arr_5 [i_1] [i_1])), (arr_1 [i_1] [i_0])))))) % (((/* implicit */int) min((((/* implicit */short) arr_0 [i_1 + 3])), (min((((/* implicit */short) arr_0 [i_0])), (arr_2 [i_0]))))))));
                var_18 = ((/* implicit */int) max((var_18), (max((((/* implicit */int) var_2)), ((+(((/* implicit */int) arr_1 [i_0] [i_1 - 2]))))))));
            }
        } 
    } 
}
