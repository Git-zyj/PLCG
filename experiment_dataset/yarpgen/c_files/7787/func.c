/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7787
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
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) >= ((-(min((var_5), (((/* implicit */unsigned int) var_4))))))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) -7498619972074434517LL))))))) < (((((/* implicit */_Bool) var_8)) ? (min((0LL), (0LL))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (0LL))))))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(949671750)))) % ((~(max((var_8), (((/* implicit */unsigned int) var_13))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */int) arr_1 [i_1]);
                    var_24 = arr_4 [i_0];
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 3])) >> (((arr_3 [i_3 + 2]) - (4216706806784670835ULL))))))));
                        var_26 = ((/* implicit */unsigned int) (-(arr_8 [i_3 - 1] [i_3 - 1] [i_2 + 2] [i_3 - 1])));
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_3 - 1] = ((/* implicit */short) (-(arr_4 [i_0 + 1])));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_4] [i_2 - 2] [i_4])), (14284562119711665317ULL))) != (((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */long long int) var_4))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) (((_Bool)0) ? (var_4) : (((/* implicit */int) arr_1 [i_0]))))) : (9223372036854775807LL)))) : (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49)))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) arr_10 [i_0] [i_1 + 2] [i_0])))))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_0 + 1])) ? (arr_0 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 + 3] [i_4 - 1]))))), (((/* implicit */long long int) ((((/* implicit */int) var_15)) ^ (var_9)))))))));
                    }
                }
            } 
        } 
    } 
}
