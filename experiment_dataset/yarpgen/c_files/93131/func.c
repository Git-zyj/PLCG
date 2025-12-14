/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93131
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) max((min((var_3), (((/* implicit */long long int) (signed char)46)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((/* implicit */int) var_11))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), (var_10))))))))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1711208069)))) ? (var_3) : (max((((/* implicit */long long int) 1711208069)), (min((var_0), (((/* implicit */long long int) 1711208069)))))))))));
    var_15 = ((/* implicit */unsigned char) var_1);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)46)) ? (-1711208069) : (1711208077)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((-1403060240730421106LL), (((/* implicit */long long int) -14))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)134)) : (1711208083)));
                                var_19 = ((/* implicit */unsigned short) ((unsigned int) var_10));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((short) -1711208066));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    arr_13 [i_0] [i_1] [i_5] = ((/* implicit */long long int) arr_1 [i_5 + 1]);
                    var_21 = ((/* implicit */short) (!(((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) 18446744073709551609ULL))))));
                }
            }
        } 
    } 
}
