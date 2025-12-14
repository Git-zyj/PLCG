/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90138
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
    var_11 = ((/* implicit */int) min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) min((11729539956160768936ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */int) var_10)) : (var_8))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) 345267909);
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1])), (11729539956160768936ULL))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) << (((arr_2 [i_0] [i_1] [i_2]) + (701191288)))))) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) (+((+(var_7))))))));
                    var_14 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_5 [4U] [i_1] [i_1]), (arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])))), (((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? ((+(arr_7 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) -1LL))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_0)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)74)) : (var_5)))), (min((((/* implicit */unsigned long long int) var_6)), (17075828784320727407ULL)))))));
    var_16 = ((/* implicit */long long int) ((int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (3564045171U) : (((/* implicit */unsigned int) var_2))))));
}
