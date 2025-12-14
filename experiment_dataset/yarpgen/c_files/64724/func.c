/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64724
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */unsigned long long int) ((signed char) ((short) arr_0 [i_0 - 1] [i_0 - 2])));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(var_8)));
    }
    var_14 = var_4;
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) max((((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2 - 1]))))), (((unsigned int) arr_10 [i_1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_7)))))))));
                            arr_19 [i_4] [(_Bool)1] [(_Bool)1] [i_1] [4LL] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (~(var_0)))) ? (((var_3) | (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((-4303745117531323423LL) + (9223372036854775807LL))) >> (((var_3) - (7991963132817228508ULL))))) != (min((((/* implicit */long long int) var_1)), (var_8))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                var_17 *= (!(((/* implicit */_Bool) 2026279310)));
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
                                arr_23 [i_1] [i_2] [6] [i_3] [i_4] [6] [i_2] = ((/* implicit */short) ((int) (signed char)-93));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                            {
                                arr_26 [i_1] = ((/* implicit */long long int) ((((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) << (((((/* implicit */int) var_11)) - (201)))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~(arr_8 [i_3 - 1] [i_3 + 1] [8ULL]))))));
                                arr_27 [i_3] = ((/* implicit */long long int) ((_Bool) arr_20 [(short)14] [i_3 + 1] [0ULL] [(short)14] [5]));
                                var_19 |= ((/* implicit */unsigned char) var_9);
                            }
                            var_20 = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_12);
}
