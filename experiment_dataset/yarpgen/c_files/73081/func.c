/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73081
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
    var_17 = ((/* implicit */int) ((signed char) ((max((((/* implicit */int) var_5)), (-2121216857))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_9)) + (13753))))))));
        var_18 = (-((~(2121216857))));
        var_19 -= (-((((((~(2121216872))) + (2147483647))) >> (((/* implicit */int) (unsigned char)0)))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_10)))) ? (min((((/* implicit */int) var_8)), (var_15))) : ((+(((/* implicit */int) var_0)))))), ((+(((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_21 = ((((/* implicit */int) var_16)) << (((((/* implicit */int) var_7)) - (26))));
        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)56))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(var_5))))));
        var_24 = ((/* implicit */short) (~(((/* implicit */int) (signed char)31))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_25 = ((/* implicit */short) (~((-(((/* implicit */int) ((var_13) < (((/* implicit */int) var_4)))))))));
        arr_8 [(signed char)8] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_13))) & (max((((/* implicit */int) var_7)), (var_15)))));
        var_26 = ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_14)))))));
        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) 6665600174928078798ULL)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_28 += (!(((/* implicit */_Bool) 11781143898781472818ULL)));
        var_29 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) << (((((/* implicit */int) var_2)) - (17793)))));
    }
}
