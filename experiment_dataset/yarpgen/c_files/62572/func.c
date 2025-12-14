/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62572
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
    var_14 = ((/* implicit */unsigned short) (+(((((((/* implicit */unsigned long long int) var_0)) | (10257808556789826514ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)41545)))))))));
    var_15 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1 - 1] = (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])));
                arr_5 [(unsigned short)11] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) ((unsigned int) min((arr_0 [i_1]), (((/* implicit */unsigned long long int) -173201045))))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((_Bool) (short)32733)))));
            }
        } 
    } 
}
