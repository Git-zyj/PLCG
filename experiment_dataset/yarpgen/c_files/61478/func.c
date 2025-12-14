/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61478
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
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 = ((max(((-(arr_7 [(unsigned char)11] [1ULL] [(unsigned char)3]))), (((/* implicit */int) var_3)))) < (((((/* implicit */_Bool) arr_9 [i_0 + 1] [1] [4ULL] [7])) ? (((((/* implicit */_Bool) arr_7 [(signed char)15] [(short)14] [(short)9])) ? (arr_3 [3ULL]) : (((/* implicit */int) arr_9 [7] [(short)0] [(unsigned char)1] [(unsigned short)8])))) : (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) var_6))))))));
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_9 [2U] [0] [(unsigned char)4] [(unsigned char)0]))))))), (((arr_8 [i_0 + 1] [i_2 - 1] [7ULL] [i_2 + 2]) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(max((((/* implicit */int) min((var_3), (((/* implicit */short) var_6))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((var_6) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))) ? (var_8) : (((/* implicit */int) var_7))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) max((((/* implicit */short) var_7)), (var_3)))) & (((/* implicit */int) var_6))))));
    var_17 = ((int) (~(((var_10) / (var_10)))));
}
