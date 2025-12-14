/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62882
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) <= (((/* implicit */int) ((unsigned short) arr_2 [i_0])))));
                    arr_10 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0 + 3]))))) ? ((~((-(var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned long long int) (unsigned short)20391)), (9898039159189618747ULL)))));
    var_15 = var_1;
}
