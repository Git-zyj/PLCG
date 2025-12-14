/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76973
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
    var_20 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) (unsigned char)0)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((17992600213843873654ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))) ? ((~(((/* implicit */int) ((signed char) arr_1 [i_1]))))) : (((((/* implicit */_Bool) (-(arr_1 [i_1])))) ? (((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) (signed char)-108)) + (134))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_4 [i_0]))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-22366)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((((/* implicit */_Bool) ((signed char) arr_3 [10LL]))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_0]) : (arr_1 [i_1]))) : (((arr_1 [6LL]) - (((/* implicit */int) (short)7633)))))) - (((/* implicit */int) arr_4 [i_1])))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((unsigned char) arr_2 [(unsigned char)3] [i_0])))) ? (max((((/* implicit */int) ((short) arr_2 [i_0] [i_1]))), (min((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0]))))) : (min((((/* implicit */int) min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))), ((+(((/* implicit */int) arr_4 [6]))))))));
            }
        } 
    } 
    var_23 = 10191003111081684686ULL;
}
