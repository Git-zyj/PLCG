/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5963
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
    var_20 |= ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)32764))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_2 - 2]) / (arr_3 [i_2 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1 - 1] [i_2])))))))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_1 + 1] [i_0])) > ((-(((/* implicit */int) var_3)))))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) min((max((min((((/* implicit */unsigned long long int) var_19)), (var_2))), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_10)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((unsigned long long int) max((min((var_6), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!((_Bool)1)))))));
}
