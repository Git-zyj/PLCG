/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9432
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
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)99))))), (min((((/* implicit */long long int) (unsigned short)0)), (var_10))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0])), (min((arr_3 [i_1 - 1] [i_1 - 1] [i_2 + 1]), ((+(((/* implicit */int) var_7)))))))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (unsigned short)38979))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        var_22 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
        arr_11 [1LL] = ((/* implicit */unsigned int) ((arr_8 [11LL] [i_3]) * (arr_8 [i_3] [i_3])));
    }
    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        var_23 ^= ((long long int) max((arr_13 [i_4 + 1]), (arr_13 [i_4 + 2])));
        var_24 += ((/* implicit */int) ((unsigned char) max((arr_13 [i_4 - 1]), (arr_13 [i_4 - 1]))));
        var_25 = ((/* implicit */int) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)65520)) ? (var_12) : (((/* implicit */int) (unsigned short)65515))))))), (-31LL)));
    }
}
