/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75295
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_15 += ((/* implicit */long long int) var_10);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_16 -= ((/* implicit */unsigned int) (~((~(var_10)))));
                var_17 ^= ((/* implicit */unsigned char) var_3);
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_1))));
            }
            var_19 = ((/* implicit */_Bool) var_4);
        }
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_20 = ((/* implicit */long long int) var_5);
            var_21 = ((/* implicit */short) (-(var_7)));
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_8))));
            var_23 ^= (+((+(((/* implicit */int) var_9)))));
        }
        arr_12 [i_0] = ((/* implicit */long long int) (~(var_2)));
    }
    for (signed char i_4 = 1; i_4 < 8; i_4 += 2) /* same iter space */
    {
        arr_16 [(unsigned short)4] [i_4] = ((/* implicit */int) var_6);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (-(var_14))))));
    }
    for (signed char i_5 = 1; i_5 < 8; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_1))));
        var_26 = ((/* implicit */int) (-((-(var_4)))));
        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_7))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_28 = var_5;
        var_29 = ((/* implicit */_Bool) var_14);
        arr_22 [i_6] = ((/* implicit */unsigned char) var_8);
    }
    var_30 = ((/* implicit */int) var_11);
}
