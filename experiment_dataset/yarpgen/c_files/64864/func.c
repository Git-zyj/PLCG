/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64864
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
    var_10 = ((unsigned int) max((max((9223372036854775807LL), (var_3))), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max((max((((arr_0 [i_1 + 1] [(short)14]) / (((/* implicit */unsigned long long int) 9223372036854775795LL)))), (((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) / (-31108407396392586LL)))) ? ((+(var_3))) : (((/* implicit */long long int) ((unsigned int) var_5)))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    var_12 = arr_5 [i_0] [i_2];
                    arr_6 [i_0] [i_0] = ((((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */long long int) var_5)) : (arr_2 [i_0] [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) ((4294967295U) >= (arr_3 [i_0] [i_0]))))));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) var_6);
                    var_13 -= ((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) 1122767718))))) ? (((((/* implicit */_Bool) var_7)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((unsigned int) var_3))));
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_8) << (((var_5) - (1212822336U))))))));
                }
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    arr_11 [(_Bool)1] [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) min(((short)2548), (var_7))))))), (var_8)));
                    arr_12 [i_0] [i_1] [i_0] [i_1 + 1] = (!((!(((/* implicit */_Bool) ((long long int) var_4))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~(var_9))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_16 &= arr_2 [i_1] [i_5];
                        var_17 = ((/* implicit */short) 1122767689);
                    }
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048576)) ? (arr_0 [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) (short)-31220)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 + 3] [i_0]))) ^ (var_0))))));
                    arr_20 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) >> (((((/* implicit */int) arr_1 [i_1] [i_0])) + (5525)))))) ? (var_9) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (10784829028678536454ULL)))));
                    var_19 ^= ((/* implicit */unsigned long long int) var_5);
                }
            }
        } 
    } 
}
