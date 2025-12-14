/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80972
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1]))) : (15ULL)));
                        arr_12 [i_0] [i_1] [i_1] [13LL] = ((/* implicit */unsigned char) arr_8 [i_3] [i_1] [i_0]);
                        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) arr_6 [i_2 - 1] [i_3] [i_3 - 1]));
                        arr_13 [i_0] [i_0] [i_1] [(short)7] [i_1] = ((/* implicit */short) (-(1228865525)));
                    }
                    arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (short)-22840)))), (((/* implicit */int) var_11))));
                    arr_15 [i_1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) ((18446744073709551614ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11168))))))))));
                    arr_16 [i_1] [i_1] [1ULL] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))));
                    arr_17 [i_1] [i_1] [10U] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)26443)))) ? (((((/* implicit */_Bool) 7543859700877895822ULL)) ? ((~(18446744073709551594ULL))) : (((/* implicit */unsigned long long int) -1726597726)))) : (((/* implicit */unsigned long long int) 1887396151))));
                }
                var_19 = ((/* implicit */unsigned int) ((20) < (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) (short)9647)))))));
                arr_18 [i_1] [7] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)5] [i_1])) >= (var_13)))) + (((/* implicit */int) ((-2105454214) == (((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_2);
    var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_15)), (((var_11) ? (max((((/* implicit */unsigned long long int) var_13)), (18446744073709551594ULL))) : (((/* implicit */unsigned long long int) (-(-1))))))));
}
