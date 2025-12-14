/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7550
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
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((signed char) var_4))))) & ((+(((((/* implicit */_Bool) (unsigned short)27989)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))));
                    var_21 = max((min((((var_10) | (((/* implicit */int) var_5)))), (((/* implicit */int) max(((unsigned short)37546), (((/* implicit */unsigned short) (signed char)1))))))), (min((((/* implicit */int) ((unsigned short) 913657288))), ((~(((/* implicit */int) (unsigned short)27995)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 22; i_3 += 3) 
    {
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    var_22 = ((int) ((int) max((var_15), (var_7))));
                    var_23 -= ((int) ((int) ((int) (signed char)1)));
                    arr_17 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-31)), ((unsigned short)37540)));
                    arr_18 [i_4] [i_4] [(unsigned short)14] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned short) var_11)), ((unsigned short)35484))))) ? (max(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_8)) ? (-913657279) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) 2147483647)))), ((!(((/* implicit */_Bool) var_16)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_3))))) ? ((-(((/* implicit */int) var_9)))) : (((int) var_14))))));
}
