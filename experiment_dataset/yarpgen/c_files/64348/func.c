/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64348
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) (-2147483647 - 1));
                var_11 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_12 = min((((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) <= (var_8)))) : (((/* implicit */int) (unsigned char)2)))), ((+(((/* implicit */int) (unsigned char)128)))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_13 = var_3;
                                var_14 = ((/* implicit */int) (-((+(var_9)))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_15 [i_5] [i_5] [i_4] [i_3] [i_2]))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) (unsigned char)242);
                    var_17 = ((/* implicit */unsigned char) ((short) ((_Bool) arr_13 [i_2] [(unsigned short)0] [i_4])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 2; i_7 < 17; i_7 += 2) 
    {
        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
        {
            {
                var_18 += ((/* implicit */short) arr_23 [i_7] [i_8] [i_7 - 2]);
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_23 [i_7] [i_7] [i_7])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) : (min((var_6), (var_6)))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) 4294967295U);
}
