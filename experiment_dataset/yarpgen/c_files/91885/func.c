/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91885
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
    var_20 = ((/* implicit */long long int) ((((-608989378) + (2147483647))) << (((((/* implicit */int) (signed char)12)) - (12)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) 35184372088831ULL))));
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_2 - 3]), (arr_0 [i_2 + 2]))))) % ((+(var_15)))));
                }
            } 
        } 
    } 
    var_23 = ((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)32542)), (((((/* implicit */_Bool) 3479370902U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)32556))))))) % (min((((/* implicit */long long int) var_13)), (min((var_8), (((/* implicit */long long int) var_18)))))));
}
