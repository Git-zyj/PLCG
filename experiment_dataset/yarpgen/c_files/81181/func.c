/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81181
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_17 -= ((/* implicit */unsigned short) var_10);
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 -= var_14;
                    var_19 = ((int) var_13);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((short) var_1)))));
                                var_21 = ((/* implicit */short) ((unsigned short) 1123264939U));
                                arr_14 [i_0] [i_3] [(unsigned char)2] [i_0] [12] = var_3;
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) var_6));
                    var_22 = ((/* implicit */unsigned char) ((unsigned short) var_12));
                }
            } 
        } 
    }
    var_23 -= ((/* implicit */unsigned short) var_7);
}
