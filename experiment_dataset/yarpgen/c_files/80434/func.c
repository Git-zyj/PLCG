/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80434
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
    for (long long int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_10 -= ((/* implicit */long long int) (((+(((/* implicit */int) ((_Bool) -1895187752))))) * ((((+(((/* implicit */int) (_Bool)1)))) / ((-(((/* implicit */int) var_0))))))));
                            var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (unsigned char)145))));
                        }
                    } 
                } 
                arr_11 [i_0 + 1] [i_1] = ((/* implicit */int) ((((unsigned int) arr_7 [i_1] [i_1 + 1] [i_1 + 1])) + ((-(((unsigned int) arr_4 [i_0 - 2] [i_0 - 2]))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1260212706U)))) : (arr_7 [i_0] [i_1 + 1] [i_5 + 1]))))));
                                arr_20 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_1);
                                var_13 = ((((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_6 - 1] [i_6] [i_5 + 1])) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_16 [i_1]))))))) >= (((unsigned int) arr_13 [i_0 - 2] [i_0 + 1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((short) ((var_8) / (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) min((((/* implicit */short) var_1)), (var_7)))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */int) (short)5717)) ^ (((/* implicit */int) var_6)))))))));
}
