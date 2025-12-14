/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70520
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
    var_12 = var_10;
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((44468170), (-2050911490))))));
        var_15 = ((/* implicit */unsigned long long int) var_2);
        var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_3 [i_0]))))))), (((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) 2720888952U);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_14 [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_2]);
                    arr_15 [i_1] [i_2] = ((/* implicit */short) (+(arr_2 [i_1 - 1])));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (arr_6 [i_2]) : (((/* implicit */long long int) -44468171))))) : (0ULL)));
                }
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) (+(arr_1 [i_1 - 1] [i_1])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((int) (short)17000));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))) : (0ULL))))));
        var_20 = ((/* implicit */long long int) 8U);
    }
}
