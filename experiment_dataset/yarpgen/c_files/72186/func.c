/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72186
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
    var_15 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((int) -166068626));
        arr_4 [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) -166068626)), (1746789535U))), (((/* implicit */unsigned int) (_Bool)0))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_16 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (var_13))) >> (((((/* implicit */int) var_11)) - (19612)))));
        var_17 |= ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */long long int) (((_Bool)1) ? (2147483647) : (351486096)))), (((((/* implicit */_Bool) arr_0 [10])) ? (((/* implicit */long long int) -2099447173)) : (-1LL))))));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_18 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [(signed char)5] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (871676370094524882LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_8 [i_2] [(_Bool)1])) : (((/* implicit */int) var_3))))) ? ((((_Bool)1) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2]))))) : (((arr_7 [i_2]) / (arr_7 [i_2]))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) & (4081682985U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2])))))))));
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (min((((/* implicit */unsigned int) -950495483)), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_7 [0U]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775794LL)) || ((_Bool)1))))) : (max((((/* implicit */unsigned int) var_7)), (arr_7 [i_2])))));
        arr_9 [i_2] = ((/* implicit */int) 4109831877U);
    }
    var_20 = ((/* implicit */signed char) var_12);
}
