/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84610
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
    var_18 &= ((/* implicit */short) max((min((((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) var_2)))), (-1045675753))), (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_0))), (var_14))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */short) ((((/* implicit */int) ((max((((/* implicit */int) (unsigned short)15651)), (2147483647))) > (((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0]), (((/* implicit */short) (_Bool)0)))))))) >= (((/* implicit */int) min(((unsigned short)65249), (((/* implicit */unsigned short) (_Bool)0)))))));
                                arr_11 [i_2] [(unsigned short)8] [i_2 - 1] = ((/* implicit */unsigned short) arr_9 [i_0 - 1] [i_0] [i_1] [i_2] [i_3] [i_2] [i_4]);
                                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (_Bool)1)), (max(((unsigned short)54111), (((/* implicit */unsigned short) (unsigned char)73))))));
                                var_21 &= ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                } 
                var_22 &= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_5)) - (max((((/* implicit */int) (unsigned short)49882)), (-2147483647))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (unsigned char)124);
}
