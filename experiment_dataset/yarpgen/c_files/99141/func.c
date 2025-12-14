/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99141
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
    var_12 &= ((/* implicit */_Bool) -7413306835544579798LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_4 [i_0 - 1]) << (((((/* implicit */int) var_3)) - (59084))))) + (((/* implicit */unsigned long long int) ((-6453428977483000614LL) & (((/* implicit */long long int) 3290980016U)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (-6453428977483000633LL) : (6453428977483000634LL))) <= (((/* implicit */long long int) 1014673044U)))))) : (-2205144853622985347LL)));
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_1);
    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (2453599155U)));
}
