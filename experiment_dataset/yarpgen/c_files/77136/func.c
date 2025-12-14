/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77136
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
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = arr_2 [i_0 - 3] [i_0];
                arr_5 [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (arr_2 [i_0] [i_1])))) ? (max((((/* implicit */int) arr_3 [i_0 - 3] [i_0] [i_1])), (var_9))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (int i_3 = 4; i_3 < 9; i_3 += 2) 
        {
            for (unsigned char i_4 = 3; i_4 < 7; i_4 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_5] [i_4] [i_5])) ? (((/* implicit */int) arr_3 [i_5] [i_2] [i_5])) : (((/* implicit */int) arr_3 [i_5] [i_2] [i_5]))));
                                var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_6 [i_2])), (((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)103))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) arr_7 [i_2]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((unsigned char) max((var_1), (var_1))))) : (((/* implicit */int) ((unsigned char) (unsigned char)255))))))));
}
