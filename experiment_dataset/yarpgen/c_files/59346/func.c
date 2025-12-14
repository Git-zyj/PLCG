/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59346
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
    for (short i_0 = 3; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */long long int) arr_2 [6U] [i_0 - 2]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_4 [(signed char)6] [i_0 + 1]))))));
                    var_12 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)247))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [18LL] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 4294967295U)), (6502760729971303833ULL)));
                                var_13 = ((/* implicit */short) var_7);
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((((/* implicit */long long int) ((short) var_7))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) 4077991678U)) : (-7834346560213910337LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0 - 3] = (~(((/* implicit */int) (_Bool)1)));
    }
    for (short i_5 = 3; i_5 < 17; i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] [9U] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) max(((unsigned char)57), (((/* implicit */unsigned char) (signed char)15)))))));
        arr_17 [i_5 - 2] [i_5 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_5]))))))));
        arr_18 [i_5 - 2] [i_5 - 2] = ((/* implicit */unsigned long long int) (~(4294967295U)));
    }
    var_15 = ((/* implicit */unsigned long long int) var_7);
}
