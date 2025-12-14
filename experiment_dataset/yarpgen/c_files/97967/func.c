/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97967
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
    var_12 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))) + (var_9))), (var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) (short)252)) == (((/* implicit */int) (short)252))));
        var_14 = ((/* implicit */unsigned short) ((signed char) arr_1 [i_0 + 1]));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_15 += ((/* implicit */short) (+(arr_5 [10] [i_1 + 1] [i_1 - 1] [i_3 - 2])));
                        var_16 = ((/* implicit */signed char) ((arr_2 [i_1 - 2]) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (var_4))))));
                        var_17 &= ((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0]);
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)258)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2])) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))))) : ((+(var_4)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1431383522)))))));
        var_20 = ((/* implicit */signed char) (-(((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0 - 1] [i_0] [4U])) - (23)))))));
    }
}
