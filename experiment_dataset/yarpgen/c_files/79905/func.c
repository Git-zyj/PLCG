/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79905
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) arr_0 [i_0]);
                            arr_10 [(short)8] [i_3] [16LL] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((short) arr_3 [i_0] [i_0] [i_2]))) ? (((/* implicit */int) min(((signed char)104), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (short)25435)))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_1]);
                arr_12 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (((((-(((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_0] [i_1] [8U] [i_1])))) * (((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_1]))))) - (((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0] [(short)18] [i_1])) - (((/* implicit */int) ((unsigned char) var_3)))))));
                var_17 = ((/* implicit */unsigned char) ((arr_1 [i_1]) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((4538980602039410871ULL), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_3)))))))));
}
