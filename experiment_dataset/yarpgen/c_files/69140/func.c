/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69140
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
    var_15 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) ? ((+(((var_13) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : ((+(((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
    var_16 = ((/* implicit */_Bool) 24ULL);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */_Bool) var_0);
        arr_3 [i_0] |= ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0 - 1] [i_0]))), (min((18446744073709551615ULL), (18446744073709551615ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [(short)0])))) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0))))))));
    }
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) ((short) 18446744073709551599ULL)))));
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            {
                var_18 |= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (5712293388978687272ULL))), (((/* implicit */unsigned long long int) (!(arr_5 [(short)8] [i_1]))))));
                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_1 - 1]))))) ? ((+((-(((/* implicit */int) (_Bool)1)))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_2])) || (((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1]))))), (((arr_5 [(short)12] [(_Bool)1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_1] [i_1]))))))));
            }
        } 
    } 
}
