/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95506
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 4; i_3 < 14; i_3 += 3) /* same iter space */
                {
                    arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) ((83792672U) - (0U)));
                    arr_11 [i_0] [(short)16] [14ULL] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) != (((/* implicit */int) var_3)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                }
                for (unsigned char i_4 = 4; i_4 < 14; i_4 += 3) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [14LL] [(unsigned char)16] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                    arr_15 [i_0] [i_2] [i_2] [(unsigned char)0] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) var_3));
                    arr_16 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                }
                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) var_8));
                arr_18 [i_0] [i_0] [7U] [i_2] = ((/* implicit */int) ((unsigned char) var_6));
                arr_19 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((long long int) var_11)));
                arr_20 [i_1] [i_1] [i_0] [i_2] = (-(((var_5) >> (((var_8) - (13782909920256133646ULL))))));
            }
            arr_21 [i_0] [i_1] [15LL] = ((((/* implicit */int) var_3)) != (((int) 0U)));
        }
        arr_22 [i_0] [(unsigned char)7] = ((/* implicit */unsigned char) ((unsigned int) var_1));
    }
    var_15 = var_3;
}
