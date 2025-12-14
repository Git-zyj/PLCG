/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86690
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [(signed char)14] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2055586639675414451ULL)) ? (((176789104) >> (((arr_3 [i_0]) + (564327893))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [(unsigned short)3])) ? (2512535972U) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_12 = ((/* implicit */unsigned int) ((arr_3 [i_0]) | (((((/* implicit */_Bool) 176789104)) ? (((/* implicit */int) (signed char)70)) : (arr_3 [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_6 [(signed char)0] [i_2])))))))));
            arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16391157434034137164ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (16252692027908388541ULL)))) ? (((/* implicit */int) ((short) 13293802263501230276ULL))) : ((+(((/* implicit */int) arr_8 [i_2]))))));
            arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)86))))) >= (var_3)));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 2]))));
        }
        var_15 = (_Bool)1;
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3 - 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_3 - 2])) : (var_3)));
        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_3] [i_3 - 2]))));
    }
    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (var_8))), (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))) : (((min((((/* implicit */long long int) var_6)), (var_2))) | (((/* implicit */long long int) 176789104))))));
    var_18 = ((/* implicit */unsigned char) var_3);
}
