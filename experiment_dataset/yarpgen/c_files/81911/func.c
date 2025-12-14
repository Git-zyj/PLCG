/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81911
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) (~(min((((/* implicit */int) arr_4 [i_0])), ((-(((/* implicit */int) arr_3 [16]))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [(_Bool)1] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 3] [i_2])))))));
                                var_14 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) (signed char)-42)))));
                                var_15 ^= ((/* implicit */_Bool) (-((+(((/* implicit */int) var_3))))));
                                arr_15 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) min((((int) min((arr_8 [i_0] [i_1] [i_1] [i_3]), (var_8)))), (((((/* implicit */_Bool) -1)) ? (5) : (1020204400)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) 380395276);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 3; i_5 < 14; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    arr_23 [(signed char)1] [(signed char)1] [i_5] = ((/* implicit */_Bool) 380395281);
                    arr_24 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */signed char) var_11);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((signed char) ((arr_12 [i_5] [i_5 - 1] [i_6] [i_7] [i_9 + 1]) - (((/* implicit */int) (signed char)-83)))));
                                var_18 = ((/* implicit */int) var_7);
                            }
                        } 
                    } 
                    arr_31 [i_6] [i_6] [(signed char)15] [i_5] = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-62)))) : (((/* implicit */int) var_7))));
}
