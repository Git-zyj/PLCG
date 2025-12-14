/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92213
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_8)) ? (((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((var_11) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (var_14)))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)145))))) : (((var_0) ? (((/* implicit */long long int) var_10)) : (var_2))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [(short)6] [i_1] [i_0] = (((_Bool)1) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (signed char)49)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] [13LL] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_4)) : (var_14)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_4))) : (((/* implicit */int) var_5)));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12809)) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)165)))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_13))));
                        arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) ((var_11) ? (((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)8)))) : (((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                    {
                        var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (_Bool)1))))) ? (var_1) : (var_2)));
                        var_21 = ((/* implicit */int) var_2);
                    }
                }
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1)))));
    }
    var_22 = ((/* implicit */short) var_4);
}
