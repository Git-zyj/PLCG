/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91322
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
    var_17 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned int) arr_0 [2LL])));
        var_18 = (!(((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 - 4])));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) (~(arr_0 [i_0])))) || (((/* implicit */_Bool) arr_0 [i_0 - 3])));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 2] [1LL] [i_2])) ? (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_2 - 2] [i_1] [(signed char)8]))));
                    var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [3LL])) ? (arr_4 [i_0 + 1] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) - (arr_8 [i_0] [i_1] [i_2])))) : (arr_5 [i_0 - 3])));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_2 - 2])) >= (((/* implicit */int) arr_3 [i_1] [i_1]))));
                        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)113))));
                        var_23 = 6743927051182165512LL;
                    }
                    var_24 = ((/* implicit */int) arr_8 [i_0] [6U] [5]);
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) (~((-(arr_7 [i_0] [i_0] [i_0] [2U])))));
    }
    var_26 = ((/* implicit */unsigned int) var_8);
    var_27 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    var_28 = ((/* implicit */short) ((((/* implicit */int) var_2)) > (((/* implicit */int) ((((/* implicit */_Bool) (~(-6743927051182165512LL)))) || (((/* implicit */_Bool) var_16)))))));
}
