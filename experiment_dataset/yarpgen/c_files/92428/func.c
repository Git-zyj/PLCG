/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92428
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
    var_19 = ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_20 |= arr_1 [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned short) var_5);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_8 [i_1] [(unsigned short)11] [i_2] = ((signed char) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_18))));
            var_21 = ((/* implicit */_Bool) var_2);
            var_22 = arr_5 [i_1];
        }
        for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            var_23 *= ((/* implicit */int) ((_Bool) var_13));
            arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) || ((_Bool)0)));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) var_18);
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        {
                            arr_20 [i_3] = ((/* implicit */short) var_17);
                            var_25 = ((/* implicit */_Bool) (signed char)16);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) (!(arr_19 [i_3] [i_3 + 1] [i_3] [i_3 + 3] [i_3] [i_3 + 3])));
            }
            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((unsigned short) var_8));
        }
        arr_22 [i_1] |= ((/* implicit */_Bool) ((1423688890) | (((/* implicit */int) ((signed char) var_17)))));
    }
}
