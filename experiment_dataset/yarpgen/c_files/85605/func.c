/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85605
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))) | (((((/* implicit */_Bool) 1500731519U)) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) - (5095700989013821360ULL)));
                    var_12 = ((/* implicit */_Bool) ((long long int) max((min((((/* implicit */unsigned short) (short)-26608)), ((unsigned short)24309))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -6663041870777597549LL))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-6446)), (min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3)))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (var_9))))))));
}
