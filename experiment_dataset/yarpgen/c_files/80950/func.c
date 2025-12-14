/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80950
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(864807843))), (((/* implicit */int) arr_3 [i_1 - 3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [i_1 + 1]))))) * (var_8)))) : (var_1)));
                var_19 = ((/* implicit */signed char) (((~(min((var_0), (arr_1 [i_0]))))) - ((~(arr_4 [i_0] [i_1] [i_1 - 2])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)1351))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) (((~(arr_7 [i_2] [i_0] [i_2] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_4] [i_2] [i_2] [i_0])) ? (((/* implicit */int) var_17)) : (-1))) > (((/* implicit */int) arr_2 [i_4]))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0] = (-(var_12));
                arr_16 [i_0] [(_Bool)1] = (!(((_Bool) -1)));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_8);
    var_22 = ((/* implicit */signed char) (~((~(((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
}
