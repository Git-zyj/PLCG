/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62166
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
    var_16 = ((/* implicit */unsigned int) (~((~((-(((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = (((!((!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_0]))))))) : (max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (2846948895118401146LL))), (-2846948895118401147LL))));
                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_1])), (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_1]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) max((arr_3 [i_0] [i_1]), (arr_4 [i_0] [i_0] [(short)4])))))) : ((-(((/* implicit */int) arr_3 [i_1] [i_1]))))));
                var_19 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [8U])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : ((-(((/* implicit */int) arr_3 [i_1] [i_1])))))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0] [(short)8])) ? (((/* implicit */int) arr_3 [i_0] [2U])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [9LL])) ? (((/* implicit */int) arr_3 [(unsigned short)1] [(unsigned short)1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))) : ((-(((/* implicit */int) arr_2 [i_1])))))) : ((((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_1] [i_1] [i_0])), (arr_2 [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_4);
    var_21 ^= ((/* implicit */unsigned int) (-((~((-(-1612124574)))))));
}
