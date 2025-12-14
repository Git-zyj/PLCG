/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64295
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) var_7);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [0ULL] [0ULL] [i_2] [i_3] [i_1] [i_3] [i_4 + 1] = ((/* implicit */signed char) (+((~((+(-2053704061)))))));
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [(short)17] [i_2 - 1] [i_3 - 2])) ? (((/* implicit */int) (unsigned short)36689)) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [(short)0] [10] [i_2 - 2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1])) : (var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)25925))))), (((short) var_6)))))) : (min((((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_1] [i_2] [(short)14] [(_Bool)1]), (((/* implicit */unsigned int) var_17))))), (var_3)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned long long int) var_12))));
    var_21 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
        {
            {
                arr_19 [i_6] [i_6 - 2] [(short)0] = ((/* implicit */long long int) min(((short)-16351), (((/* implicit */short) (unsigned char)203))));
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */unsigned long long int) var_8)) : (6633357277489219552ULL))))));
            }
        } 
    } 
}
