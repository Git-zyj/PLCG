/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84839
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) var_0)) : (4095LL))))));
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7757946924484357937LL)) ? (-1) : (-1013724069)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1])) ? (arr_7 [2] [2]) : (((/* implicit */int) (_Bool)1))))) : (var_13))))));
                        var_15 = ((((/* implicit */_Bool) arr_7 [i_1 - 1] [7])) ? (((((/* implicit */int) (signed char)-34)) * (((/* implicit */int) var_5)))) : ((((_Bool)1) ? (4) : (((/* implicit */int) (signed char)0)))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) var_1);
                        arr_13 [i_1] &= (-(((/* implicit */int) (signed char)44)));
                    }
                    arr_14 [i_1 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */int) (signed char)34))))) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_1 - 2] [i_1 - 2] [i_1 - 2])) : ((+(((/* implicit */int) (short)-32316))))))) ? (min((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 4])), (((var_7) ^ (((/* implicit */int) arr_0 [i_2])))))) : (((((/* implicit */int) arr_6 [(short)15])) >> (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-32766)) + (32782)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((long long int) ((max((var_0), (2031686981))) / ((+(((/* implicit */int) (signed char)-98)))))));
    var_17 = var_3;
    var_18 = (~(((/* implicit */int) var_10)));
    var_19 = var_2;
}
