/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57507
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) var_10);
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_15)), (arr_5 [i_0] [13LL]))) / (max((5437524399768049828LL), (((/* implicit */long long int) var_5))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_0)))) ? (((/* implicit */long long int) var_11)) : (9223372036854775807LL)))) ? (var_13) : (var_13)));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_17 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) arr_11 [(unsigned short)18] [i_3]))))) ? ((+(((/* implicit */int) arr_15 [i_2] [i_4] [i_4])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_11)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) 3365135239300600800LL)) && (var_5))))))));
                    arr_18 [i_2] = ((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) var_9))));
                }
            } 
        } 
    } 
}
