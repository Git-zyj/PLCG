/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87844
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
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 &= (+(((arr_4 [i_0] [i_0]) % (arr_4 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_14 = ((((arr_5 [i_0] [i_3]) != (322494885))) ? (((/* implicit */int) ((((var_6) - (var_0))) < (((/* implicit */int) ((arr_2 [i_0]) >= (arr_2 [i_0]))))))) : ((+(var_3))));
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (var_2) : (0))) : (((((/* implicit */_Bool) -1875310483)) ? (var_9) : (-2107106956)))))) ? ((+(arr_9 [i_0] [i_1] [i_2] [i_3]))) : (((arr_1 [i_3]) + (((((/* implicit */_Bool) 14)) ? (16383) : (-909290206))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = var_8;
    var_17 = max((-238966894), (max((-301118956), (-322494886))));
}
