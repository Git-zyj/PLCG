/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8252
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_2))) ? ((((!(((/* implicit */_Bool) (unsigned char)215)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (-6105703294151124573LL))) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_1))));
    var_11 |= ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 1] &= var_1;
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)236)))))))) ? (((var_3) - (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))))))) ? (((/* implicit */int) (unsigned short)2036)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1])))))));
                var_14 = ((/* implicit */int) 1129398591650174233LL);
            }
        } 
    } 
}
