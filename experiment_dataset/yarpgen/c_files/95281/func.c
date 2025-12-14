/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95281
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
    var_13 = ((((/* implicit */int) var_5)) >> (((((long long int) var_3)) & (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (2114519033)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) var_3);
                    var_15 -= ((/* implicit */unsigned int) ((((((((-2114519033) + (2147483647))) >> (((/* implicit */int) var_4)))) >> (((-2114519034) + (2114519052))))) >> (((((((/* implicit */_Bool) 2114519033)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (4455745672347597652ULL))) - (31662ULL)))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_6)))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_12)) : (883022041672396862ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
}
