/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90031
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2] [(short)8] [i_2] = ((/* implicit */short) max((((((/* implicit */int) var_18)) >> (((var_9) - (4280712575U))))), (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) arr_8 [i_0] [i_0] [i_0 + 1] [i_3])))))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_0] |= ((/* implicit */long long int) ((unsigned char) arr_8 [i_0 + 1] [i_1] [i_2 + 2] [i_0 + 1]));
                                arr_15 [i_2] = var_16;
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) (((-(1828862207U))) << (((((((/* implicit */int) arr_5 [i_3] [i_2] [i_0 - 1] [i_0])) << (((((/* implicit */int) arr_5 [i_1] [i_0] [i_0 + 1] [i_0])) - (230))))) - (526385135)))));
                            }
                            for (short i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) (((-((~(((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [1] [i_2])))))) | (((/* implicit */int) ((short) (~(var_3)))))));
                                arr_21 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_5] = ((/* implicit */int) var_6);
                                arr_22 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_14);
                            }
                        }
                    } 
                } 
                arr_23 [i_0 + 1] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))));
                arr_24 [i_0] [1LL] = ((/* implicit */unsigned short) (~(16362080441575858420ULL)));
                arr_25 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16362080441575858428ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))) ? (((((((/* implicit */_Bool) 2084663632133693196ULL)) && (((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) ((var_4) && (((/* implicit */_Bool) arr_7 [(short)12] [(short)12]))))) : (((/* implicit */int) ((unsigned char) (short)-32753))))) : (((arr_18 [(_Bool)1]) ? (((/* implicit */int) (unsigned short)62047)) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) (unsigned char)130);
    var_20 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))), ((-(((/* implicit */int) (unsigned short)65535))))));
}
