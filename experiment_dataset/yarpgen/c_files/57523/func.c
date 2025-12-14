/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57523
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
    var_13 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    var_14 = ((/* implicit */long long int) (~((~((~(((/* implicit */int) (unsigned short)18))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) arr_2 [i_0]);
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 2181431069507584LL)) ? (3550574023U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18)))));
                }
            } 
        } 
    } 
}
