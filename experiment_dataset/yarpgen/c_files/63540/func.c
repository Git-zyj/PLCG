/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63540
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)92)) + (((/* implicit */int) (unsigned char)128))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [12])) != (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_12 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) (_Bool)1);
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_17 [i_2] [i_2] [9U] [i_3] [0LL] [i_2] = (~(((/* implicit */int) (unsigned short)48973)));
                            arr_18 [i_2] [i_1] [(unsigned short)0] [i_2] [i_3] [i_3] [(unsigned short)0] = ((/* implicit */signed char) (-(arr_14 [i_1] [i_1] [i_1 - 2] [i_2 - 1] [i_2])));
                            arr_19 [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                    } 
                } 
            } 
        }
    }
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)171))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1))))) : (var_0)));
}
