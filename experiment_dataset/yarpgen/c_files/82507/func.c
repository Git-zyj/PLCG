/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82507
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
    var_16 = (!(((/* implicit */_Bool) (short)-2048)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1108))) : (3372439372U)))));
                arr_6 [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (short)-4941)))))))) + (max((((/* implicit */long long int) (short)10132)), (-9208848007826607570LL)))));
            }
        } 
    } 
    var_18 += ((/* implicit */short) var_2);
}
