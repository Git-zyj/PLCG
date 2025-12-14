/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93803
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
    var_19 = ((/* implicit */int) max((((/* implicit */short) var_10)), ((short)(-32767 - 1))));
    var_20 = (!(((/* implicit */_Bool) (-(((int) 65535))))));
    var_21 = ((/* implicit */_Bool) var_18);
    var_22 = ((13381776337579409636ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_1] [(_Bool)1] [(short)8] [(_Bool)1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_6 [i_1]))))));
                                arr_14 [i_4] [4] [4] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((-85457593), ((~(arr_9 [i_3] [i_1] [i_1] [(_Bool)1])))))), (((unsigned long long int) arr_10 [i_0] [i_4] [i_0] [(_Bool)1] [(_Bool)1] [i_4] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((arr_4 [(_Bool)1] [i_1] [i_0]) > (((((/* implicit */int) arr_5 [i_5] [i_0])) & (arr_9 [i_0] [i_0] [i_2] [i_5]))));
                        arr_19 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((min((548773645), (((/* implicit */int) (_Bool)1)))) - (max(((+(((/* implicit */int) (short)18006)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_2] [i_5])) : (((/* implicit */int) arr_6 [i_2]))))))));
                        arr_20 [i_2] = ((/* implicit */short) arr_1 [i_2]);
                    }
                }
            } 
        } 
    } 
}
