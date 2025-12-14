/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93178
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 628101272)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))) : (9440680857742269594ULL))), (((/* implicit */unsigned long long int) var_19))));
                    var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)172));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62744)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62750))))) : (((/* implicit */int) var_19)))))));
}
