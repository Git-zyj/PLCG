/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57471
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_11);
    }
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)(-127 - 1))))) & (var_5)))));
        var_12 = ((/* implicit */unsigned int) (-(((int) max((((/* implicit */long long int) (unsigned char)0)), (6924180365230370204LL))))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((-6924180365230370226LL) ^ (((/* implicit */long long int) (-(((/* implicit */int) (short)-6361))))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] = ((_Bool) ((signed char) 6924180365230370226LL));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_4])) ? (((/* implicit */long long int) (-(3079563926U)))) : (((((/* implicit */_Bool) ((long long int) (signed char)14))) ? (min((2974429064220126132LL), (arr_10 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3])))))))));
                    var_14 |= ((/* implicit */short) -6924180365230370204LL);
                }
            } 
        } 
        arr_20 [i_2] |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)30560)) == (((/* implicit */int) min((var_7), (((/* implicit */short) (unsigned char)207))))))))));
        arr_21 [i_2] [i_2 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
        var_15 += ((/* implicit */long long int) var_4);
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)13))))) + (((long long int) var_7))));
        arr_25 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_5] [i_5] [(short)14] [i_5]))))) / (((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 2])) ? (var_8) : (-5323312019546289493LL)))));
    }
    var_16 += ((/* implicit */unsigned char) 2993779102607688908LL);
}
