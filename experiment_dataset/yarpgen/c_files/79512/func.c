/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79512
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
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_3 - 1] [i_0 - 3]))));
                        arr_12 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-64))));
                    }
                    arr_13 [i_0] [5LL] [i_2] [i_2] = ((/* implicit */long long int) var_11);
                    arr_14 [(_Bool)1] [(unsigned short)3] [i_0] = ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_4);
    var_21 &= ((var_18) ? (var_0) : (((/* implicit */long long int) (~(((var_5) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) var_9))))))));
}
