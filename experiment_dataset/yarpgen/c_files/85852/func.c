/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85852
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
    var_15 = -1792183862;
    var_16 = ((/* implicit */_Bool) max((-1792183862), (((/* implicit */int) (signed char)-33))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_3 + 1] [i_1 + 3] [i_4] [i_4] [i_3 + 1] = max(((+(arr_9 [i_1] [i_1 + 3] [i_1 + 3] [i_1] [i_3 + 1] [i_4 - 1]))), (min((arr_9 [i_1] [i_1 + 1] [i_1 + 1] [i_3] [i_3 - 2] [i_4 - 2]), (arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_3] [i_3 + 1] [i_4 - 2]))));
                                arr_13 [i_0] [i_1] [(signed char)14] [i_3] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_7 [i_1] [i_3 + 2] [i_4 - 2]) || (((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3] [i_1])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1])))))))));
                                var_17 = ((/* implicit */_Bool) min((((int) arr_6 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_1])), ((+(1720685)))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((((int) ((short) 1673046625))) >= ((-(((/* implicit */int) arr_5 [i_3] [i_4 - 3] [i_3] [i_1 + 1]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_19 = (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_5 + 1]))))))));
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((int) arr_3 [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = var_11;
}
