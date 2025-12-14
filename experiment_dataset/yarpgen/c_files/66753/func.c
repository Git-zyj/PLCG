/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66753
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2113929216U)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244)))))) : (min((((/* implicit */unsigned long long int) var_1)), (7109324468596968002ULL))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] = arr_3 [i_0] [i_1];
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_1 - 1] [i_1]), (arr_2 [i_1 + 2] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1])) && (var_5)))) : (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1]))))));
            }
        } 
    } 
    var_12 &= ((/* implicit */unsigned short) min((((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8))))), ((signed char)-27)))), (((short) ((signed char) var_2)))));
    var_13 = ((/* implicit */short) (~(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2327564746U))) ^ (((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-25513)))))))));
}
