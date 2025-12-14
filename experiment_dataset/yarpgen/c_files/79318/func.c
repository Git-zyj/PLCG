/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79318
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((18446744073709551595ULL) > (37ULL)))) ^ (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_11))))));
                arr_8 [i_1] = ((/* implicit */_Bool) ((unsigned int) (unsigned short)4990));
                var_12 = ((signed char) max((26ULL), (((/* implicit */unsigned long long int) (unsigned short)60545))));
                var_13 = ((/* implicit */short) (-(((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_4] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (signed char)83))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)122)) >= (((/* implicit */int) (short)-27563)))))));
                                var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8))), (((/* implicit */long long int) var_7))));
                                var_15 = (+((-(((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)-11673)) % (((/* implicit */int) (unsigned short)60560))));
}
