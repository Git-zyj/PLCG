/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61073
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
    var_14 = max((var_5), ((short)12045));
    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((((/* implicit */int) (short)-12045)) | (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) (unsigned short)42290)))))), (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_8 [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) ((short) arr_1 [i_0] [i_1 - 1]));
                    var_16 |= ((/* implicit */short) (unsigned short)48651);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    arr_11 [i_1] [7U] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)32269)) ? (((/* implicit */int) (unsigned short)16475)) : (((/* implicit */int) var_5)))) << ((((+(((/* implicit */int) var_5)))) + (3475)))));
                    var_17 &= ((/* implicit */short) arr_6 [i_0] [i_1] [i_0] [i_0]);
                }
                arr_12 [i_1] [6U] [6U] = max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_1] [i_1] [(unsigned char)4] [i_0])) >> (((/* implicit */int) (unsigned short)0)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)60707)) >= (((/* implicit */int) arr_9 [i_1])))))))), (((((/* implicit */_Bool) (unsigned short)12119)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((+(var_4))))));
                arr_13 [i_1] [i_1] = ((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)16905))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25929))) > (min((((/* implicit */unsigned int) (unsigned short)0)), (var_4)))));
            }
        } 
    } 
}
