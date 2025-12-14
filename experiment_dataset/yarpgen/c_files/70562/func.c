/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70562
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
    var_13 = ((/* implicit */short) (~(((/* implicit */int) ((134217727LL) == (134217721LL))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1])))), ((~(((/* implicit */int) var_1))))));
                    arr_7 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) max(((+(-1557396224))), (((/* implicit */int) ((unsigned short) arr_5 [i_2 - 1] [i_2] [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) (signed char)(-127 - 1)))), (var_9)))) ? (((unsigned int) ((unsigned short) 3687616759U))) : ((~(max((var_9), (((/* implicit */unsigned int) (signed char)-88))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_2) : (max((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) : (234881024U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1))))))))));
}
