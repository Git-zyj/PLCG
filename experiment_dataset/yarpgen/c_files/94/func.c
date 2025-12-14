/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_14)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((((-154092379) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) - (75))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) == (1689892944U))))))) : (((/* implicit */unsigned short) ((((((-154092379) + (2147483647))) >> (((((((/* implicit */int) arr_2 [i_0] [i_0])) - (75))) + (138))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) == (1689892944U)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_2]);
                    arr_8 [i_2] [i_2 - 1] [i_0] = ((/* implicit */short) var_11);
                }
            } 
        } 
        var_19 = ((/* implicit */int) var_5);
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_20 = (signed char)65;
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) 1689892944U);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (int i_7 = 2; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (-(max((2683807202U), (1779427596U)))));
                                var_23 = ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
