/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72009
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((unsigned long long int) 18446181123756130304ULL)) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_18 = ((/* implicit */short) var_3);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_9 [i_3] [i_1] [i_1] [i_0] [i_2] = (+(((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2 - 2] [i_3] [i_2 - 2])) ? (arr_7 [i_0] [i_1] [i_2 + 2] [i_1] [i_3]) : (arr_7 [i_0] [i_0] [i_2 + 3] [i_3] [i_2]))));
                        arr_10 [i_3] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((562949953421312ULL) % (((/* implicit */unsigned long long int) (+(1658840264U))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_2 - 1]))))) : (-1696757471)));
                        arr_11 [i_2] [i_0] [18U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_2 - 2] [i_0]) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_1])) : (((/* implicit */int) arr_4 [i_2 + 2] [i_0]))))) ? (max((-4967241184724340891LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [9U]))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */_Bool) arr_12 [i_4]);
        var_20 -= ((/* implicit */unsigned long long int) ((arr_4 [i_4] [i_4]) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-115)) != (((/* implicit */int) (signed char)-1))))) : (((/* implicit */int) ((signed char) arr_0 [i_4])))));
    }
    var_21 = ((/* implicit */unsigned int) ((signed char) (+(((unsigned long long int) var_12)))));
    var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) 2636127031U))))) << (((min((((/* implicit */unsigned int) var_14)), (var_8))) - (9682U))))) <= (((/* implicit */int) var_0))));
}
