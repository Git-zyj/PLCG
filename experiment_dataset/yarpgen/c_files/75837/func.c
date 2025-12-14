/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75837
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
    var_16 += ((/* implicit */signed char) max((max((((var_7) ? (640278050861161956LL) : (((/* implicit */long long int) var_12)))), (-640278050861161946LL))), (((/* implicit */long long int) var_13))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_17 *= ((/* implicit */signed char) ((long long int) max((min((640278050861161981LL), (((/* implicit */long long int) var_9)))), (arr_3 [i_0] [i_0 + 2]))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((640278050861161963LL) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) / (((-6349417385036749036LL) + (arr_5 [i_0] [i_1] [i_1]))))))));
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((_Bool) -4056385289082056069LL)));
                    arr_12 [i_2] [i_1] [i_0] = arr_9 [i_0] [i_0] [i_0] [i_0];
                    arr_13 [i_0] [i_0 + 2] [i_2] [i_1] = ((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2])) ? (-5189007073983721059LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) - (187))))))))));
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        var_18 ^= (~(arr_5 [i_3] [i_3] [i_3]));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3])))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            arr_26 [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_4] [i_5] [i_5]))))) ? (((/* implicit */int) arr_2 [i_5] [i_4])) : (((/* implicit */int) arr_0 [i_4] [i_5]))));
            var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))));
            arr_27 [(short)12] [i_5] [i_5] = ((/* implicit */signed char) arr_8 [i_5] [(short)1] [i_4]);
        }
        arr_28 [i_4] = ((/* implicit */int) arr_6 [i_4] [i_4] [i_4]);
        var_21 ^= ((/* implicit */short) (+(arr_24 [i_4] [i_4] [i_4])));
    }
}
