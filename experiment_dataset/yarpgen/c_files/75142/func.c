/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75142
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
    var_10 = var_8;
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_7)))) : (((/* implicit */int) max((var_6), (((/* implicit */short) var_3)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((+(((((/* implicit */_Bool) var_8)) ? (var_9) : (var_9)))))));
    var_12 += ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) var_5)) * (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-26172), ((short)131)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [(unsigned char)14] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_4 + 1] [i_1 - 2] [i_0 + 3])))))));
                                var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-132))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8599458206399931433LL)) ? (2345321204101291631LL) : (((/* implicit */long long int) ((/* implicit */int) (short)13853)))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((var_8), (((/* implicit */short) arr_3 [i_0] [i_1]))))) / (((/* implicit */int) max((arr_8 [8LL]), (arr_4 [(_Bool)1]))))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_6);
}
