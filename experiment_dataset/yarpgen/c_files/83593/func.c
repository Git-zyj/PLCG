/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83593
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [(signed char)11] [i_0] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
                        arr_12 [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */int) (signed char)103)) == (((/* implicit */int) (signed char)-30))));
                    }
                } 
            } 
        } 
        var_11 -= ((/* implicit */int) arr_3 [i_0] [(signed char)9] [i_0]);
        arr_13 [i_0] = ((/* implicit */int) var_1);
    }
    var_12 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-19417)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_1)))) << (((((/* implicit */int) (signed char)-21)) + (32))))) != (((((((/* implicit */int) (signed char)-85)) + (2147483647))) << (((126139896) - (126139896)))))));
}
