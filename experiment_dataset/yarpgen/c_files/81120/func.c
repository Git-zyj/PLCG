/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81120
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
    var_20 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) var_7);
                var_22 = ((((/* implicit */_Bool) (-(1112984935U)))) ? (min((((/* implicit */unsigned int) var_8)), (arr_5 [i_0 - 4]))) : (((/* implicit */unsigned int) (~(arr_2 [i_0 - 1])))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14213)) ? (((((/* implicit */_Bool) 288230376151711743ULL)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_3] [(_Bool)1] [i_0])) : (var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_19))))))) ? (((/* implicit */int) (!(var_9)))) : (((/* implicit */int) var_2))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((-8213172005877402913LL) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-41))))))))) : ((+(((/* implicit */int) ((((/* implicit */int) (short)-14218)) < (((/* implicit */int) arr_10 [i_1] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_6))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-66))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14209))))) : ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) (short)14098))));
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0 - 3] [i_0 + 1] [i_0])))) > ((-((-(arr_7 [i_0] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
}
