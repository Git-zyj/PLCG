/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9819
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_4 [5] [(unsigned char)6]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) * (var_4))))))))));
                var_14 = ((/* implicit */signed char) var_9);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] [i_3] [13] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_11 [i_2] [(_Bool)1] [i_2] [i_3] [i_2] [i_3] [i_0])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_7 [i_0] [i_1]))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (((long long int) var_7)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        arr_15 [i_5] = ((/* implicit */signed char) ((max((((/* implicit */int) min((((/* implicit */short) var_6)), ((short)20715)))), ((~(((/* implicit */int) var_0)))))) != (((/* implicit */int) ((((/* implicit */int) arr_13 [i_5] [i_5])) > (((((/* implicit */int) arr_13 [i_5] [i_5])) & (var_9))))))));
        var_16 = ((signed char) min(((short)20712), ((short)23511)));
    }
}
