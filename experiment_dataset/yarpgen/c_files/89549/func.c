/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89549
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_7 [(unsigned char)0] [i_1] [i_1])) ? (arr_7 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))))));
                    arr_8 [i_0] = ((/* implicit */signed char) max(((-(var_3))), (((/* implicit */long long int) ((arr_0 [i_0] [i_1]) != (arr_0 [i_0] [i_0]))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)1020))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) arr_4 [i_1] [i_2])))))) : (((/* implicit */int) ((signed char) arr_2 [i_2] [i_2])))));
                    var_20 = ((/* implicit */int) arr_5 [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65506)) : (((/* implicit */int) (unsigned short)61704))))));
}
