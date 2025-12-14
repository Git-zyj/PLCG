/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59882
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((int) arr_1 [i_0]))))) ? (((/* implicit */int) ((unsigned short) 2698719024U))) : ((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
                var_14 = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_15 = ((/* implicit */_Bool) arr_5 [i_2]);
        arr_8 [i_2] = var_2;
        var_16 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(unsigned short)5])) / (arr_1 [i_2])))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 &= ((/* implicit */unsigned int) arr_10 [(short)6]);
        arr_11 [i_3] [i_3] = ((/* implicit */short) (!((_Bool)1)));
    }
    for (short i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        arr_14 [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) : (((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_4 + 2])) ? (1596248277U) : (2698719018U)))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(var_10))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)43746)))))))) ? (max((((/* implicit */unsigned long long int) 2698719007U)), (max((12184765629203948162ULL), (((/* implicit */unsigned long long int) 1596248277U)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 1])))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_19 |= 1596248255U;
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_16 [i_5]))));
    }
}
