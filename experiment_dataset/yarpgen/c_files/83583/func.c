/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83583
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 4])))), (((/* implicit */int) (unsigned char)155))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) ((_Bool) var_11))))) : (((((/* implicit */_Bool) max((var_10), ((unsigned char)162)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9)))) : (((/* implicit */int) (_Bool)0))))));
                                arr_15 [i_0 + 4] [i_1] [i_2] [i_1] [i_4] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_4])))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_10 [i_0]))))))) ? (((/* implicit */int) max((arr_1 [i_0]), (max((var_1), (arr_8 [i_0] [i_0] [i_0 + 1] [i_0])))))) : (min((((((/* implicit */int) var_14)) - (((/* implicit */int) var_1)))), (((/* implicit */int) arr_7 [i_0 + 4] [i_0 + 3]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_18 += var_12;
                                var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((arr_7 [i_0] [i_0]), (arr_20 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_6] [i_6]))))))));
                                arr_22 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_7 - 1] [i_0] [i_7])) ? (((/* implicit */int) arr_9 [i_0 + 2] [i_7 - 1] [i_0] [i_7])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_7 - 1] [i_0] [i_0])))) * ((+(((/* implicit */int) arr_9 [i_0 + 2] [i_7 - 1] [i_0] [i_7 - 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((unsigned char) (+(((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)230))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) var_2)))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_7)))), ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((min((var_10), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) ((((/* implicit */int) var_14)) > (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) var_3))));
}
