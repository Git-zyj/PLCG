/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70087
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
    var_14 = ((/* implicit */long long int) (+((+(((/* implicit */int) var_9))))));
    var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? ((+(((/* implicit */int) arr_0 [i_0] [i_1])))) : ((+(((/* implicit */int) (_Bool)1))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_6 [i_1 + 1]))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_4 [(short)8] [(short)8] [i_0] [i_3]))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [(short)8] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_2] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1 + 1]))));
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [(_Bool)1] [i_3] [i_3] [i_1] [i_5])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1 + 1] [i_5])) : (((/* implicit */int) arr_2 [(unsigned char)13] [i_1] [i_1])))) : ((-(((/* implicit */int) arr_11 [i_1]))))));
                        }
                    }
                    var_21 = (_Bool)1;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    var_23 = ((/* implicit */long long int) var_8);
}
