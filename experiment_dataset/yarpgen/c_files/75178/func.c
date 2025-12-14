/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75178
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */short) (+(arr_0 [i_0])));
                var_12 = ((/* implicit */int) min((max((((/* implicit */unsigned int) arr_2 [i_1 - 1])), ((~(3251516921U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (((unsigned int) 33552384)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) var_5)))))) / (max((var_3), (((/* implicit */unsigned int) var_5))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (max((((unsigned int) var_2)), (((/* implicit */unsigned int) ((short) -7961573267715495000LL)))))));
}
