/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57611
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
    var_12 = ((/* implicit */_Bool) 753005559U);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) arr_2 [i_1]);
            arr_7 [i_1] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1]);
        }
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [11U] [i_0])))))))));
        arr_8 [i_0] = ((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_5 [i_0] [i_0] [(short)3])) / (((/* implicit */int) (unsigned char)255)))) % (((/* implicit */int) (unsigned char)253))))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_2 [14U]))));
        var_16 = ((/* implicit */_Bool) max((((/* implicit */short) ((arr_1 [i_2]) == (arr_1 [i_2])))), (min((((/* implicit */short) (unsigned char)255)), ((short)-30800)))));
    }
    var_17 &= ((/* implicit */unsigned int) var_8);
    var_18 ^= 497528422U;
    var_19 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned char)0))))), (min((1461340699U), (var_10))))) << (((var_6) - (2149667404U)))));
}
