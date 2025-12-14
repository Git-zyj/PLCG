/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96881
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_11))));
                        arr_11 [i_0 - 1] [i_1 + 1] [i_0] [(unsigned short)6] [(unsigned char)9] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 1] [i_3])) * (((/* implicit */int) var_0))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_4)))))) : (((/* implicit */int) min((max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_7)))), (min(((unsigned short)63488), (((/* implicit */unsigned short) (signed char)-23)))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_13 = ((unsigned short) max((((/* implicit */unsigned short) ((signed char) var_8))), (max((((/* implicit */unsigned short) (unsigned char)221)), ((unsigned short)25120)))));
                                var_14 = arr_7 [i_1 + 1] [i_2] [i_4] [(unsigned short)6];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */signed char) (unsigned short)21889);
}
