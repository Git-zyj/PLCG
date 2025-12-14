/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5939
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((signed char)-35), (min((var_17), (var_19)))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min(((unsigned short)58687), (((/* implicit */unsigned short) (_Bool)1)))))));
                    }
                    arr_12 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (-2147483647 - 1));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((short) arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) max(((~(((/* implicit */int) var_11)))), ((~(((/* implicit */int) var_16))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1383908089) : (((/* implicit */int) arr_17 [(_Bool)1] [(short)16] [12LL] [i_4] [i_5]))))) ? (max((((/* implicit */long long int) var_9)), (-8618797639775569537LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((max((((/* implicit */long long int) (unsigned short)448)), ((~(-8618797639775569555LL))))), (8618797639775569532LL))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 - 1]))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11926)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_4] [i_1]))))) : (max((-8618797639775569537LL), (((/* implicit */long long int) var_11)))))))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_0] [14] [i_0]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_15))));
}
