/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60630
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
    var_11 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) < (-1029370354)));
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) var_4))));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned int) var_2);
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_13 -= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-19086)) >= (((/* implicit */int) (short)32761))));
                arr_15 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) var_4);
                arr_16 [i_0] [i_0] [i_2] [(unsigned short)14] = ((/* implicit */unsigned short) arr_4 [i_2] [i_0]);
            }
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_18 [i_0] [i_0])) - (62888))))) ^ (((/* implicit */int) var_6))));
            var_15 -= ((/* implicit */long long int) var_9);
            var_16 = ((/* implicit */signed char) arr_8 [i_0] [i_4]);
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) arr_19 [i_5]);
            arr_22 [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */int) ((778294719166841999LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) != (((/* implicit */int) (unsigned short)24600))));
            arr_23 [i_0] [i_5] |= ((/* implicit */unsigned char) var_1);
        }
        var_18 = ((/* implicit */long long int) var_3);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7))));
        var_20 |= ((/* implicit */unsigned char) var_3);
    }
    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        arr_27 [i_6] = arr_5 [i_6];
        arr_28 [(short)14] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6])) ? (((arr_21 [i_6] [(short)1] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        var_21 = var_10;
    }
    var_22 = ((/* implicit */unsigned long long int) var_0);
}
