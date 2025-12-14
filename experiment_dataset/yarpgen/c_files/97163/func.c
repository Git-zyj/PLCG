/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97163
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
    var_11 = ((/* implicit */int) min((var_8), (var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) var_1);
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min(((short)256), (((/* implicit */short) (unsigned char)201))));
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)59)) >= (((/* implicit */int) (unsigned char)59))))), ((unsigned short)14803)));
}
