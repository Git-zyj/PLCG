/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8759
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
    var_19 = ((/* implicit */int) var_8);
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-4943))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_21 ^= var_13;
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
        }
        for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            arr_9 [i_2] [i_0] = (!(((/* implicit */_Bool) var_12)));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1668504484U)) ? (1668504497U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19153))))))))));
            var_24 += ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2626462803U)))))) : ((~(var_10)))));
            arr_10 [i_2] [i_0] = ((((/* implicit */_Bool) 143340021)) ? (((/* implicit */unsigned long long int) 268435424U)) : (14274814179087594319ULL));
        }
        for (int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)19)) : (var_4)));
            var_25 ^= ((/* implicit */int) ((var_14) | (((/* implicit */unsigned long long int) 143340021))));
            arr_14 [i_3] = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 143340021)) ? (-1919295068) : (((/* implicit */int) (unsigned char)240)))) : (var_5));
        }
        var_26 ^= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) (-(706778394U)));
        var_27 = var_9;
        arr_18 [i_4] = ((/* implicit */short) -2054773882);
    }
    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-11506)) >= (((/* implicit */int) (unsigned char)16))));
}
