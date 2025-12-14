/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74611
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [(signed char)6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)86))));
        var_17 = (unsigned short)35938;
    }
    for (signed char i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        var_18 = ((/* implicit */signed char) max(((unsigned short)63266), ((unsigned short)16456)));
        var_19 = (unsigned short)2047;
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((var_10), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) ((signed char) var_14)))))) ? (((/* implicit */int) ((unsigned short) (signed char)9))) : (((/* implicit */int) (signed char)47))));
                    var_21 -= var_1;
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-121))));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (signed char)-89))));
        var_24 |= arr_11 [(signed char)6] [i_4];
        var_25 = (signed char)-109;
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)21)))))))) / (((/* implicit */int) (unsigned short)127))));
}
