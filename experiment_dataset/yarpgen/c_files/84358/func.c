/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84358
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
    var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) ? (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (0U))) : (min((var_10), (var_9)))))) ? (var_2) : (var_2));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [2U] = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))));
        arr_3 [1] [1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0 - 2])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) ((unsigned char) var_14)))));
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_9))));
    var_19 = ((/* implicit */_Bool) 13180108512589965340ULL);
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned short i_3 = 3; i_3 < 10; i_3 += 4) 
            {
                {
                    var_20 -= ((/* implicit */_Bool) (-(max((var_16), ((-(((/* implicit */int) (unsigned short)13699))))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 0U))));
                    arr_15 [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 - 2])) ? (((/* implicit */int) arr_4 [i_3 + 3] [i_3 + 3])) : (((/* implicit */int) arr_4 [i_3 - 2] [i_3 - 1])))) : (((/* implicit */int) max((arr_4 [i_3 - 2] [i_3 - 1]), (arr_4 [i_3 - 1] [i_3 - 3]))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned short)51837)))))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((((unsigned int) (+(arr_9 [i_2])))) - (((/* implicit */unsigned int) (~((-(var_16))))))))));
                }
            } 
        } 
    } 
}
