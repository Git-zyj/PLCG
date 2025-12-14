/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74980
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
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        var_18 = ((unsigned int) max((((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [1U]))))), (var_0)));
                        arr_10 [i_0] [i_1] [i_2 + 2] [i_3] = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) arr_5 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (207305599U))))), (((/* implicit */unsigned int) var_10))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = var_2;
                    }
                    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        var_19 *= ((/* implicit */unsigned int) var_9);
                        var_20 -= (~(((((/* implicit */_Bool) ((4683634949432860925ULL) ^ (18446744073709551608ULL)))) ? (2669470386U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)2), ((signed char)-92))))))));
                    }
                    arr_15 [i_0] [i_1] [i_1] = (unsigned short)1127;
                    var_21 = 449071862U;
                }
            } 
        } 
    } 
}
