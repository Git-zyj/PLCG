/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84221
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-61))));
                    arr_7 [i_0] [i_0] = max((max((arr_4 [i_0]), (((/* implicit */int) max((var_7), ((signed char)42)))))), (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)60))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)12646)) : (16777215))) : (((((var_1) + (2147483647))) >> (((((/* implicit */int) (signed char)-94)) + (110)))))))) ? (((/* implicit */unsigned long long int) 872651461)) : (((unsigned long long int) (unsigned short)12641))));
}
