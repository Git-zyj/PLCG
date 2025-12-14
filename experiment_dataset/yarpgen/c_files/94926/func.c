/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94926
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
    var_13 = ((/* implicit */short) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_14 *= ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))));
            arr_4 [i_0] [24ULL] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)-815))))));
        }
        for (long long int i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */int) var_2);
            arr_7 [i_0] [i_2 - 1] [i_2] = ((/* implicit */int) arr_3 [i_0] [i_0]);
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2])))))));
            var_18 ^= ((/* implicit */unsigned char) max(((~(arr_1 [i_0 + 2]))), (((/* implicit */long long int) ((short) var_3)))));
        }
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_19 = ((/* implicit */signed char) (((((_Bool)1) && (((/* implicit */_Bool) -6093517113554693204LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) || (((/* implicit */_Bool) (short)27174)))))) : (min((var_1), (((/* implicit */long long int) arr_8 [i_3]))))));
        var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) (short)-27189))))));
        var_21 = ((int) var_5);
        var_22 = ((((/* implicit */_Bool) (~(arr_9 [i_3])))) ? ((+(((/* implicit */int) (signed char)113)))) : (((/* implicit */int) (_Bool)1)));
    }
    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) var_2);
        var_24 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_4] [i_4] [i_4])))))));
    }
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        var_25 = ((/* implicit */_Bool) max((arr_3 [i_5] [i_5]), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_10 [i_5])))))));
        var_26 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) >= (2210435542U))));
    }
}
