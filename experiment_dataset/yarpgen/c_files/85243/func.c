/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85243
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((+(3971551556422095409LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */short) var_7)))))))))));
                    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)173)), ((short)-32747))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) (~(((/* implicit */int) (short)7528))));
    var_16 -= ((/* implicit */unsigned char) var_8);
    var_17 |= ((/* implicit */short) ((var_10) ^ (((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7528)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_3]))))) - (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (9223372036854775807LL)))))));
                    var_19 = ((/* implicit */unsigned char) (-(2448388184992882640LL)));
                }
            } 
        } 
    } 
}
