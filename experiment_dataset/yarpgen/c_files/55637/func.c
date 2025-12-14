/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55637
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
    var_14 &= ((/* implicit */unsigned int) min((((5209052056388248804LL) >> ((((+(-1501134106))) + (1501134118))))), (((/* implicit */long long int) var_1))));
    var_15 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 &= var_7;
                var_17 = ((/* implicit */int) ((((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) arr_1 [i_0]))))) * (arr_2 [i_0])));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max(((-(((long long int) arr_0 [i_0])))), (((/* implicit */long long int) var_8))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_7)))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (-1501134106)))))))));
}
