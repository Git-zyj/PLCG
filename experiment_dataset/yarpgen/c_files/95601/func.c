/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95601
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
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)116), ((signed char)(-127 - 1))))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned short)2])) : (((/* implicit */int) (signed char)120))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (short)-16)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_2] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_6);
}
