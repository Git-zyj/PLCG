/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77623
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [15] [i_1] = ((/* implicit */_Bool) max((arr_5 [i_0] [i_2]), (((/* implicit */int) ((unsigned short) (unsigned short)6891)))));
                    arr_9 [i_0] [(unsigned short)14] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_0] [i_3 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_4 - 1]), (arr_11 [i_4 - 1] [i_3] [i_4 - 1])))) ? ((-(((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1] [i_3 - 1])))) : (((/* implicit */int) arr_11 [i_4 - 1] [i_3 + 2] [i_4 - 1]))));
                    arr_15 [i_0] [i_0] [i_0] [6] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)48424))))));
                    arr_16 [i_0] [i_0] [i_3 + 2] [i_0] = arr_3 [i_0] [i_0];
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [(unsigned short)14] [i_5 - 1]))));
        arr_20 [i_5 - 1] = ((/* implicit */_Bool) ((int) arr_19 [(_Bool)1]));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 20; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_5 - 1] [(_Bool)1] [i_5 - 1]))));
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_6] [i_6 - 3] [i_6 - 3])))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_22 [i_6] [i_6])))))));
                }
            } 
        } 
    }
    for (unsigned short i_8 = 3; i_8 < 15; i_8 += 3) 
    {
        arr_29 [i_8] = ((((/* implicit */_Bool) (unsigned short)48398)) ? (max((((((/* implicit */_Bool) arr_18 [(_Bool)1])) ? (((/* implicit */int) (unsigned short)42562)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15872)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)6918))))) ? (((/* implicit */int) arr_18 [i_8 + 1])) : (arr_0 [i_8 - 2] [i_8 - 2]))));
        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) (!(((/* implicit */_Bool) (unsigned short)58661)))))));
    }
    for (unsigned short i_9 = 2; i_9 < 18; i_9 += 2) 
    {
        var_18 = ((unsigned short) (-(((/* implicit */int) arr_19 [i_9 + 2]))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 2; i_10 < 20; i_10 += 4) 
        {
            arr_34 [i_9 - 1] [i_9 + 2] [(unsigned short)6] = (+(((/* implicit */int) arr_17 [i_9] [i_10 - 2])));
            arr_35 [i_9 + 2] [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65523))));
            arr_36 [i_9 + 2] [3] = ((/* implicit */int) (unsigned short)6864);
        }
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((unsigned short) (_Bool)1))))) ? (max(((+(((/* implicit */int) (unsigned short)64625)))), (((/* implicit */int) var_4)))) : (((var_8) ? (max((1119691710), (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)60132))))));
}
