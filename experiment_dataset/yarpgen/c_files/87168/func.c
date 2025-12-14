/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87168
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((min((-7180246122661796257LL), (((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 - 3])))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_3 [i_0]))))))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (~(var_11))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((int) (((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)54093)))) != (((/* implicit */int) (short)32767)))));
    var_18 = ((/* implicit */_Bool) max((var_8), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (signed char)-6))))));
}
