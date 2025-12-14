/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56224
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
    for (short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_2 - 1] [i_1] [i_2 - 1] [i_4] = ((/* implicit */short) max((var_11), (((/* implicit */unsigned long long int) ((unsigned short) var_9)))));
                                arr_16 [i_2 - 1] [i_0 + 1] = ((/* implicit */_Bool) ((signed char) max((max((((/* implicit */unsigned long long int) (unsigned short)48938)), (var_6))), (((var_2) * (((/* implicit */unsigned long long int) 5913525891563566501LL)))))));
                                arr_17 [i_0] [i_1] [(unsigned char)14] [i_3] [i_4] [21U] = ((/* implicit */short) ((unsigned long long int) var_11));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_23 [(_Bool)1] = ((/* implicit */int) ((short) ((short) var_2)));
                                arr_24 [i_0] [i_1] [i_2] [i_5] [(short)0] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) * (((/* implicit */int) ((signed char) var_3)))));
                                arr_25 [i_5] &= ((/* implicit */unsigned long long int) ((2U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                            }
                        } 
                    } 
                    arr_26 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (max((((/* implicit */unsigned short) var_12)), (max((((/* implicit */unsigned short) (short)-30935)), ((unsigned short)36199)))))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */short) 11609823537340383090ULL);
}
