/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9626
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_19 += ((/* implicit */short) arr_0 [i_0]);
        var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_2] [i_3] [12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_3] [i_4])) - (((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-1)))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_12))))) ? ((-(((/* implicit */int) arr_8 [(_Bool)1])))) : ((+(((/* implicit */int) arr_7 [i_1] [i_2]))))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4])))))));
                            var_22 = ((/* implicit */short) max((var_22), (arr_8 [i_1])));
                            var_23 = ((/* implicit */unsigned long long int) (+(max(((-(((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) max((arr_5 [i_1] [i_4] [i_1]), (((/* implicit */signed char) var_12)))))))));
                        }
                    } 
                } 
                arr_14 [i_1] = (~(((/* implicit */int) max((arr_10 [i_1] [i_1] [(_Bool)1] [i_2]), ((_Bool)1)))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_11 [i_2] [i_1]), (arr_11 [i_1] [i_1])))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                var_25 *= ((/* implicit */unsigned long long int) (_Bool)1);
                var_26 = min((((/* implicit */unsigned int) arr_11 [i_1] [i_1])), (var_13));
            }
        } 
    } 
}
