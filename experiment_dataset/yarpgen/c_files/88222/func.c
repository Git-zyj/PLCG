/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88222
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = (unsigned short)14243;
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (unsigned short)51307);
                    arr_7 [i_0] [i_1] [(_Bool)1] |= ((unsigned long long int) var_0);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))));
            arr_13 [(unsigned short)7] [(unsigned short)7] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(signed char)10]))) * (arr_5 [i_0] [(_Bool)1] [i_0] [(signed char)8])))));
            arr_14 [i_0] [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            arr_17 [i_0] [i_4] [i_4] = ((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1]);
            var_13 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
        }
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_8 [i_0] [i_0]))));
    }
    var_15 ^= ((/* implicit */signed char) var_8);
    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_5))))))), (((/* implicit */int) var_7))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (var_3))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (4540897673043245856ULL)))) ? (((/* implicit */unsigned long long int) var_8)) : (var_4)))))));
}
