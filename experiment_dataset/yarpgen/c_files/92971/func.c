/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92971
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
    var_12 = var_0;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [(unsigned short)4] [i_0] [(short)7] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */unsigned char) var_3))))) - (((/* implicit */int) ((signed char) arr_5 [i_0])))));
                arr_7 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(10U)))) ? ((-(arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-9950)) : (((/* implicit */int) var_2))))))))));
                arr_8 [2U] [i_1] [i_0] = ((/* implicit */signed char) var_11);
                var_13 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    {
                        var_14 = ((/* implicit */int) (unsigned short)59481);
                        var_15 += ((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_17 [i_2])) : (((/* implicit */int) var_8))))) : (var_4)))));
                    }
                } 
            } 
        } 
        arr_23 [i_2] [9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18446744073709551610ULL)))) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (unsigned char)9))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-101))));
    }
    var_16 = ((/* implicit */_Bool) var_2);
    var_17 = ((/* implicit */signed char) max((min((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18590)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (unsigned short)58489))))))), (((/* implicit */unsigned int) ((unsigned short) var_6)))));
}
