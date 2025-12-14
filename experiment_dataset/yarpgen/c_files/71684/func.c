/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71684
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
    var_11 = ((/* implicit */unsigned short) var_0);
    var_12 = ((/* implicit */unsigned char) var_4);
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (var_2))))) % (var_7))), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((unsigned char) (unsigned char)127));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned int) (~(arr_3 [i_0 - 1] [i_0])));
        arr_5 [i_0] = ((/* implicit */long long int) ((signed char) 0U));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_15 = arr_6 [i_1] [i_1];
        var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32747))) : (((unsigned int) (short)-21017))));
    }
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 14; i_5 += 3) 
                {
                    {
                        arr_18 [(short)1] [i_2] [i_3 - 1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) (short)21016)))), (((/* implicit */int) var_2)))))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_17 [i_5 - 2] [i_5 + 3] [i_5 - 2] [i_5 + 3] [i_5 - 3]), (((/* implicit */unsigned long long int) var_6))))))))));
                        var_18 *= ((/* implicit */unsigned char) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                        arr_19 [i_2] [i_3 - 1] [i_2] [i_5] = var_8;
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (signed char)1))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)129))))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (12045683795803703406ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((unsigned long long int) ((short) 4219144903818025455LL))))))));
    }
}
