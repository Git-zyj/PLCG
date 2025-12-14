/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7298
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_2]), (((/* implicit */unsigned int) ((-1) <= (1271863732))))))) ? (((((1) & (((/* implicit */int) (unsigned short)41465)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)229)) <= (11)))))) : (((arr_1 [16LL]) & (arr_0 [i_1 + 2])))));
                    var_14 = ((((/* implicit */int) arr_4 [i_0] [i_1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) -1))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_7);
    var_16 = ((/* implicit */long long int) -14);
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_0))));
}
