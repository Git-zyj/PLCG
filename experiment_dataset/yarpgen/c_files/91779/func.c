/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91779
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) var_11)) ? (var_11) : (((((((arr_3 [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) var_9)))) << (((((/* implicit */int) ((unsigned char) var_11))) - (65))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            arr_13 [i_3] [i_1] [i_4] [i_1 - 1] [i_4] = ((unsigned char) max((((((/* implicit */_Bool) -4255266799207190156LL)) ? (4255266799207190136LL) : (8360877914215431432LL))), (3619526188185575581LL)));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_10))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned char) min((max((-3619526188185575582LL), (-3619526188185575582LL))), ((+(791307897578190703LL)))));
            arr_14 [i_0] [i_0] &= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (min((((/* implicit */long long int) var_2)), (-4255266799207190156LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
            var_18 |= ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-4255266799207190178LL) <= (((long long int) arr_11 [i_0])))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))))), (((long long int) var_11)))));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            arr_17 [i_5] [i_5] = ((long long int) -8574201015260445603LL);
            var_19 ^= ((/* implicit */long long int) ((((long long int) max((-4255266799207190178LL), (4255266799207190177LL)))) == (((long long int) var_0))));
            var_20 ^= ((/* implicit */long long int) var_15);
        }
        var_21 = var_1;
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))), (var_11))))))));
    var_23 = max((max((((/* implicit */long long int) (unsigned char)10)), (-3619526188185575574LL))), (var_11));
}
