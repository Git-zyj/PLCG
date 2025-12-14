/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91990
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_14) : (var_14)));
    var_19 -= ((/* implicit */_Bool) (~((-(max((((/* implicit */long long int) var_7)), (var_15)))))));
    var_20 -= ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_16)), (var_7))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_0 [i_1])) : (var_15))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(unsigned char)2] = arr_10 [i_0] [i_2] [i_0] [i_0];
                            var_22 -= ((/* implicit */short) arr_3 [(_Bool)1] [i_2] [i_2 + 1]);
                            var_23 = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_2 [i_3] [i_3])), (var_8))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                            var_24 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) && ((_Bool)1))) ? (((/* implicit */int) arr_1 [(unsigned char)11])) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_2]))))))) : (var_17)));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - ((~(max((var_14), (((/* implicit */unsigned long long int) (_Bool)0)))))))))));
            }
        } 
    } 
}
