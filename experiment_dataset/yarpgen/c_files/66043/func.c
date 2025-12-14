/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66043
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
    var_16 = ((/* implicit */unsigned short) var_0);
    var_17 = ((/* implicit */short) 1197913292U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) 1522572097804380189ULL);
                arr_5 [i_1] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)74))))), (min((3097054004U), (((/* implicit */unsigned int) 0)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned char)94)))), (var_14)));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((max((arr_7 [i_2] [i_2]), (17U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25122))) != (arr_7 [i_2] [i_2])))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (unsigned short)65535)) : (-1343575823)))))) : (17U)));
    }
    var_20 = ((/* implicit */unsigned int) var_12);
}
