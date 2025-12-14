/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9526
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
    var_17 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25715))))))) <= (var_0)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) var_11);
                var_19 = ((/* implicit */unsigned int) ((var_0) < (var_13)));
                var_20 -= ((/* implicit */unsigned int) var_9);
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_9))))) ? (((3053346054U) << (((((/* implicit */int) arr_0 [i_0])) - (23583))))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0])), ((~(((/* implicit */int) var_9))))))))))));
            }
        } 
    } 
    var_22 = min((var_8), (var_15));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned int i_3 = 3; i_3 < 12; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */short) min((((1241621242U) + (var_10))), (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), ((+(var_10)))))));
                arr_8 [i_3 - 3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) 1241621266U))), (arr_4 [i_2] [i_3])));
            }
        } 
    } 
}
