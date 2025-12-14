/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94431
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
    var_16 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)10638))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) (short)-10646)) + (10667)))))) : (((11407588567909747702ULL) - (11407588567909747724ULL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-10639)) ^ (((/* implicit */int) (short)-12645))))) / (1152921367167893504ULL)))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-10639)))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) - (14765922551989820460ULL))) - (4050212302744253216ULL)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_0 [i_1]);
                                var_19 = ((/* implicit */_Bool) arr_5 [i_3] [i_1]);
                                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_1 [i_2]), (((/* implicit */signed char) (_Bool)0)))))))), (max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-10625))))), (max((var_15), (var_15)))))));
                            }
                            for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned int) var_14);
                                arr_18 [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] = (~(((((((/* implicit */_Bool) 17293822706541658109ULL)) ? (7039155505799803891ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-28997))))))));
                            }
                            arr_19 [i_0] [i_0] [i_1] = ((((/* implicit */long long int) (+(((/* implicit */int) (short)-10639))))) >= (arr_5 [(_Bool)1] [i_1]));
                        }
                    } 
                } 
                var_22 = ((_Bool) (-(arr_17 [i_0] [i_1] [i_0] [i_1] [i_1])));
            }
        } 
    } 
    var_23 = ((var_14) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(var_12)))), (var_0)))));
}
