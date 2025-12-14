/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83475
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */int) ((arr_0 [i_0] [i_0]) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_5 [i_0] [i_1] [i_1])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (max(((unsigned short)27506), (((/* implicit */unsigned short) var_9)))))))));
                arr_6 [i_0] [i_1] = min(((unsigned short)38031), (((/* implicit */unsigned short) (short)8673)));
                var_18 = ((/* implicit */unsigned short) ((long long int) var_0));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (((((~(((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned short)27506))))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27528)) ? (((/* implicit */int) (unsigned short)27514)) : (((/* implicit */int) (_Bool)0))))))))));
}
