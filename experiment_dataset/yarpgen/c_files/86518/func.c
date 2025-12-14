/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86518
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
    var_20 = var_19;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_21 -= ((/* implicit */short) ((long long int) var_13));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            arr_13 [i_0] [15LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((unsigned int) var_10))));
                            var_22 = ((/* implicit */unsigned long long int) var_0);
                        }
                        var_23 = ((/* implicit */short) var_1);
                        arr_14 [i_0] = ((signed char) var_1);
                        var_24 |= ((/* implicit */signed char) (-((+(((/* implicit */int) var_3))))));
                        var_25 = (!(((/* implicit */_Bool) var_0)));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_18 [16] [16] [i_2] [(signed char)14] &= var_0;
                        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) < (((/* implicit */int) var_0))));
                        var_27 = ((/* implicit */signed char) ((short) var_6));
                        var_28 = ((/* implicit */unsigned long long int) ((long long int) var_1));
                    }
                    var_29 = ((/* implicit */unsigned short) ((signed char) var_10));
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) var_6));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_16))));
        var_30 -= ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) var_10)))));
    }
}
