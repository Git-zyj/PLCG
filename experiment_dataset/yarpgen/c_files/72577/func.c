/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72577
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
    var_11 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) (!(var_10)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    var_12 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((6102800992060912499LL), (-6102800992060912500LL)))) ? (((/* implicit */int) ((var_10) || (((/* implicit */_Bool) (unsigned short)25156))))) : (2147483647)))) : (max((((/* implicit */unsigned int) var_10)), (4294967295U))));
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(short)14] [i_1] [i_2])) ? (6102800992060912499LL) : (((/* implicit */long long int) 2147483647))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-19226))))) : ((~(((/* implicit */int) var_3))))));
                    var_14 = (!(((/* implicit */_Bool) var_0)));
                }
            } 
        } 
    } 
}
