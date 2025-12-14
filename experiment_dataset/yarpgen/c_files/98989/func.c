/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98989
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
    var_12 = ((/* implicit */signed char) var_0);
    var_13 = ((/* implicit */int) ((var_0) | (((/* implicit */unsigned int) var_7))));
    var_14 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)1)) && (((/* implicit */_Bool) var_3)))) ? (var_5) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned short)31047))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [4ULL] [i_1] = arr_5 [i_0] [5ULL];
                arr_7 [(unsigned char)6] [(unsigned char)6] [i_1] = (-(max((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (2147483647))), (((/* implicit */int) arr_3 [i_0] [i_0])))));
                arr_8 [i_0] = ((/* implicit */int) 9007199254732800ULL);
            }
        } 
    } 
}
