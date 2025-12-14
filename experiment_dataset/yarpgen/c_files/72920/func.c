/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72920
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
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]));
        arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 4; i_2 < 8; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    var_18 = ((_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_10) : (((/* implicit */long long int) 4294967295U))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1]))))))));
                    arr_13 [4LL] [i_2 - 1] [i_1] = ((/* implicit */int) var_15);
                }
            } 
        } 
        arr_14 [i_1] = ((((/* implicit */int) (unsigned char)60)) - (((/* implicit */int) ((unsigned short) (signed char)96))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    arr_23 [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_4] [i_6])) ? (((/* implicit */int) arr_19 [i_4] [i_5])) : (((/* implicit */int) var_7)))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (0U))))));
                    arr_24 [i_4] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) - (8894845258616789545LL))));
                    var_20 = ((/* implicit */short) ((((long long int) arr_20 [i_4] [i_4])) + (var_3)));
                }
            } 
        } 
        var_21 = ((/* implicit */short) (-(((/* implicit */int) var_17))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [8ULL])))))));
    }
    var_23 = ((/* implicit */unsigned char) max((((short) var_16)), (((/* implicit */short) (signed char)125))));
    var_24 = ((/* implicit */_Bool) max((((/* implicit */int) min((var_1), (var_1)))), (((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (short)11563))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (unsigned char)186)) * (((/* implicit */int) var_12))))))));
}
