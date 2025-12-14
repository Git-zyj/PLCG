/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84104
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 4953171693774327594ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) : (17299553728696387099ULL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = arr_1 [i_0];
        var_21 += ((/* implicit */signed char) ((int) ((short) (_Bool)0)));
        var_22 -= ((unsigned short) ((unsigned char) arr_1 [i_0]));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) 17299553728696387084ULL))));
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-6415663897316118308LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (var_16)))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (17299553728696387099ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
    var_25 &= ((/* implicit */unsigned int) var_17);
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        for (int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            {
                var_26 = ((/* implicit */unsigned short) var_3);
                arr_8 [i_1] [14U] [i_2] &= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */long long int) max((((/* implicit */int) (short)-32738)), (var_6)))) : (((((/* implicit */_Bool) var_3)) ? (5551451713057514251LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [(short)0] [i_2 - 1]))))))));
            }
        } 
    } 
}
