/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57531
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((int) (short)29974));
                arr_5 [i_0] [i_0 + 2] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)29733))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)32425)))))) : (arr_4 [i_0] [i_0] [i_0]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1]))))) | (((/* implicit */int) (short)31162)))))));
                var_16 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(max((((/* implicit */int) var_1)), (arr_11 [i_2 + 1] [i_2 + 1] [i_3])))))), ((~(-9223372036854775794LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_12);
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_1))));
}
