/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75500
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) 14527718602161787107ULL)) ? (((((((/* implicit */_Bool) var_9)) ? (-4793142723329741865LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) / (((((/* implicit */_Bool) 4ULL)) ? (36026597995708416LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    var_15 = ((/* implicit */short) ((int) var_12));
                    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
                    arr_8 [i_2] = ((/* implicit */int) var_12);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)28877)) != (((/* implicit */int) (unsigned short)2))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)21584)) ? (((/* implicit */unsigned long long int) -796907090)) : (5058532147070311303ULL))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */short) var_4))))) ? (arr_4 [i_5 + 1] [i_4] [i_3 + 2]) : (((/* implicit */unsigned long long int) ((var_1) + (var_1))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_11);
    var_20 = ((/* implicit */unsigned long long int) (+((+(var_6)))));
}
