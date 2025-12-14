/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61152
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 *= ((/* implicit */_Bool) (-(max((((/* implicit */long long int) (short)-9)), (((var_2) >> (((/* implicit */int) (unsigned char)21))))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) 7)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned char)208)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (((+(arr_11 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]))) / (max((var_6), (var_3))))))));
                                arr_13 [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((((((/* implicit */int) var_4)) / (var_15))), (((/* implicit */int) arr_3 [i_1 + 2] [i_2] [i_4]))));
                                arr_14 [i_3] [i_1] [i_2] [i_3] [(_Bool)1] = ((/* implicit */int) (((~((~(1553115174))))) == (((arr_4 [i_2 - 1] [i_4 - 1]) / (((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (short)-18383)) : (((/* implicit */int) var_10))))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (_Bool)1))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (unsigned char)39);
}
