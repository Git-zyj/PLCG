/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96849
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
    var_20 = ((/* implicit */_Bool) ((((_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 &= ((/* implicit */long long int) ((_Bool) (-((((_Bool)1) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (unsigned short)64373)))))));
                    arr_10 [i_2] [i_0] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)33213)), (((arr_2 [i_1] [i_2]) | (arr_1 [i_2])))))) ? (((((((/* implicit */_Bool) (unsigned short)16189)) ? (377177649) : (((/* implicit */int) (signed char)-20)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) ((_Bool) (unsigned short)49329)))));
                }
            } 
        } 
    } 
}
