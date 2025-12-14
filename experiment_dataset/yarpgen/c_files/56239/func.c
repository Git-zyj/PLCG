/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56239
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
    var_19 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-29))));
    var_20 = var_9;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(318528608))))));
        /* LoopSeq 3 */
        for (int i_1 = 4; i_1 < 6; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) (unsigned char)209);
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) arr_2 [i_0])), (var_12)))));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_23 = var_17;
            arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((int) var_1)))));
            var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 3039156084U)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            var_25 = ((/* implicit */unsigned short) ((arr_2 [i_0]) > (((/* implicit */int) var_5))));
        }
        for (unsigned char i_3 = 3; i_3 < 6; i_3 += 1) 
        {
            var_26 = ((/* implicit */int) max((max((((/* implicit */unsigned int) (unsigned char)80)), (2373827246U))), (max((((((/* implicit */_Bool) (short)-236)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (788001473U))), (((unsigned int) arr_7 [5] [5] [i_3]))))));
            arr_12 [i_0] [(unsigned char)6] &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (1871843585)))), (((788001466U) ^ (909964580U)))))) ? (var_7) : (((/* implicit */unsigned int) max((var_4), (var_11))))));
        }
        var_27 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
    }
    var_28 = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) (unsigned short)54775)))));
}
