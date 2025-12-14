/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70321
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)6113)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14337))))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_0 [i_0 + 2] [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) 9223372036854775807LL);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) var_13);
                                arr_15 [i_1] = ((/* implicit */long long int) arr_9 [i_0 + 1] [1ULL] [13ULL] [i_3]);
                                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] = ((/* implicit */_Bool) var_1);
                    var_17 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (short)6113)))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) var_12);
    }
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_7)))))), (var_8)));
}
