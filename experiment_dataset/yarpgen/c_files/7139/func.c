/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7139
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = max((max((arr_2 [i_0]), (arr_2 [i_0]))), (((/* implicit */int) var_10)));
        var_15 |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)8791)) >= (((((/* implicit */int) (short)8793)) & (var_3)))))) | (((/* implicit */int) ((signed char) var_3)))));
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (13395211715271541491ULL) : (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) ((unsigned short) 0ULL))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) ((int) (~((-(arr_7 [i_2] [20]))))));
            arr_9 [i_1] &= var_13;
        }
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 2; i_4 < 21; i_4 += 3) 
            {
                arr_16 [i_1] [i_3] [i_4 + 2] = ((/* implicit */unsigned char) -9223372036854775807LL);
                arr_17 [i_3] [19] [19] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                var_19 = ((/* implicit */unsigned char) var_13);
            }
            arr_18 [i_3] [i_3] = (~(var_3));
            arr_19 [i_3] = ((/* implicit */int) var_9);
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_1]) + (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (21U))))))) ? (((unsigned int) (~(((/* implicit */int) arr_6 [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        }
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */long long int) (unsigned char)159)), (min((arr_3 [i_1]), (((/* implicit */long long int) var_4)))))))));
        var_22 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_13)))));
        arr_20 [i_1] = ((/* implicit */unsigned short) var_0);
        var_23 = ((/* implicit */signed char) 4294967290U);
    }
    /* LoopSeq 2 */
    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
    {
        var_24 = ((/* implicit */int) ((signed char) arr_15 [i_5] [i_5 + 2] [i_5] [(unsigned short)4]));
        arr_24 [i_5] = ((/* implicit */short) arr_5 [i_5]);
    }
    for (unsigned int i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (short)2047))));
        arr_27 [i_6] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
    }
}
