/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90248
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_19 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) 4086683583U);
            arr_4 [i_0] = (!(((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 + 1])));
            var_21 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_2 [i_1 - 1])))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_22 -= ((long long int) 396863192);
        var_23 = var_14;
        /* LoopNest 3 */
        for (unsigned int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = ((_Bool) arr_1 [i_4] [i_5]);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            arr_17 [i_2] [i_6 + 1] [i_4] [i_6 + 1] [i_2] = ((/* implicit */short) ((arr_16 [i_2] [(short)13] [9ULL] [i_5] [i_6]) == ((((_Bool)0) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) ((var_15) != (((/* implicit */int) arr_7 [i_2] [i_2])))))))));
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3])), (var_2))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 |= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17))))), (max((15354824139705959117ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))));
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))));
}
