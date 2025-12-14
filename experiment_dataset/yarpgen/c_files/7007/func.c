/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7007
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [4ULL] [(short)8] = ((1114737440) ^ (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_2 + 3]))));
                    arr_9 [(short)11] [(short)11] [i_0] [(unsigned short)13] = ((/* implicit */long long int) (+(((/* implicit */int) max(((short)0), ((short)0))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) min(((unsigned short)34808), (((/* implicit */unsigned short) (short)-1))))) ? (var_6) : (((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((var_15) + (384342881))) - (23)))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)15625)) : (((min((((/* implicit */int) var_16)), (var_1))) / (((/* implicit */int) ((short) 1451247227)))))));
    var_19 = ((/* implicit */int) var_7);
}
