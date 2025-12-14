/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72450
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)109))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? (1073741823ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) 2046010541U);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_12 = (-((~(((/* implicit */int) var_8)))));
            arr_10 [i_1] [i_1] = ((2147483647) & ((((_Bool)1) ? (1629706004) : (((/* implicit */int) var_5)))));
            var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 137472959U)) ? (((/* implicit */unsigned long long int) var_9)) : (18446744072635809792ULL)))));
        }
        arr_11 [i_1] = var_4;
    }
    var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */int) (short)-3818)), (var_9)))) ? (min((0ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) max((5U), (((/* implicit */unsigned int) 729538637))))))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */short) var_5)), (min(((short)-3800), ((short)3817)))))), (var_7)));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1749573983U), ((-(var_1)))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)23)), (max((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(-1027117248)))), ((~(var_6))))))));
}
