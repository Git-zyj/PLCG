/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83083
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
    var_14 ^= (~(((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)19513))))) ^ ((~(var_10))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15640)) < (((/* implicit */int) (unsigned short)49896))));
                    var_16 = ((/* implicit */_Bool) ((signed char) (unsigned short)15343));
                    arr_9 [i_0] [i_0] [6ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) (unsigned short)15640))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))))))) ? (var_6) : (12193607162028202798ULL)));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0] [(_Bool)1] [(short)0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)104)), ((unsigned short)42573)))))))));
                }
            } 
        } 
    } 
}
