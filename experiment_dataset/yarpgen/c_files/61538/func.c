/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61538
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-320)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)99))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) (((_Bool)1) ? (-8280577119252069625LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22036)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (signed char i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) arr_8 [i_1]);
                    var_20 = ((((/* implicit */_Bool) min((arr_8 [i_3 + 1]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 2] [i_3 - 2])))) : (((/* implicit */int) arr_11 [i_1] [i_1])));
                    arr_14 [i_1] = ((/* implicit */unsigned int) -1LL);
                    var_21 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((signed char) 290281142))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 + 2] [i_3 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3515465957055016753LL)))) : (((((/* implicit */_Bool) (short)20429)) ? (0ULL) : (((/* implicit */unsigned long long int) -1LL)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    var_23 = var_4;
                    var_24 = ((/* implicit */short) var_5);
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) min((var_15), (var_17)));
}
