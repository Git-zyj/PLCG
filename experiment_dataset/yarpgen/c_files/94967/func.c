/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94967
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 = min((((((/* implicit */int) arr_1 [i_0 + 1])) << (((var_13) - (2032980764U))))), ((~(((/* implicit */int) arr_1 [i_0 + 1])))));
        arr_2 [i_0] = ((/* implicit */short) min((((/* implicit */int) var_16)), (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0 + 1]))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((unsigned short) var_3))) << (((var_14) - (1413328388))))), (((((/* implicit */int) var_17)) - (var_14)))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            {
                arr_7 [7] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_4 [i_1] [i_2]));
                var_22 ^= ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)18342)), (max((0U), (((/* implicit */unsigned int) (unsigned short)16368))))));
            }
        } 
    } 
}
