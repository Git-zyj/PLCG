/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91420
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
    var_20 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-32184)) : (((/* implicit */int) (short)32767))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */long long int) ((short) (-(((/* implicit */int) arr_0 [i_0 + 1])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_3] = ((/* implicit */short) (unsigned short)0);
                        var_22 = ((/* implicit */unsigned short) var_2);
                    }
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (short)32183);
                    arr_12 [i_1] = ((/* implicit */short) var_9);
                }
            } 
        } 
        var_23 += ((/* implicit */int) max((arr_4 [i_0 - 1] [6ULL]), (((((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1])) < (((/* implicit */int) arr_4 [i_0 - 1] [(_Bool)1]))))));
    }
    var_24 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_18)), ((short)32767)))) - (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))))))))));
    var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned short) (short)32757)), (((unsigned short) (short)32))))), (min(((-(((/* implicit */int) var_19)))), (134152192)))));
}
