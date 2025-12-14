/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74561
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (var_9)));
    var_15 = ((/* implicit */unsigned char) max((var_15), (var_2)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (arr_1 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = arr_1 [i_0] [(unsigned char)12];
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_1 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))))));
        var_18 = max((min((arr_0 [i_1]), (var_5))), (var_3));
    }
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_19 = min((min((arr_8 [i_3 + 1]), (arr_8 [i_3 + 1]))), (var_3));
                    var_20 = min((arr_7 [i_4]), (min((var_8), (max((arr_10 [(unsigned char)11] [i_4]), (arr_12 [i_4] [i_3] [i_2] [(unsigned char)6]))))));
                    var_21 |= ((/* implicit */unsigned char) (-(((/* implicit */int) min((var_7), (arr_8 [i_4]))))));
                }
            } 
        } 
    } 
}
