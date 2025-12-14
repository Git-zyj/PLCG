/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98571
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
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) var_10)))));
    var_14 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            arr_6 [i_0] [i_1 + 1] [i_0] = ((((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 2])) / (((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 2])));
            arr_7 [i_0] [(unsigned short)11] [i_1] = (unsigned char)97;
        }
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))))) | (((((/* implicit */_Bool) 4294967274U)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        arr_11 [i_2] [i_2 + 3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_3 [i_2] [i_2])), (max((arr_9 [i_2 + 3]), (((/* implicit */unsigned int) arr_1 [i_2 - 3]))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    {
                        arr_20 [i_2] [i_2] [i_3] [i_3] [i_4 - 1] [i_5] = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) ((unsigned long long int) 17494095789014330390ULL))))));
                        arr_21 [i_2 + 2] [5] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((arr_14 [i_4] [i_3] [i_3 + 2]) - (1317990779922417214ULL)))));
                        arr_22 [i_5] [i_4] = ((/* implicit */_Bool) arr_13 [i_2 + 3]);
                    }
                } 
            } 
        } 
    }
    var_15 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 952648284695221221ULL)))))) ? (((/* implicit */unsigned long long int) ((long long int) min((4294967273U), (((/* implicit */unsigned int) var_11)))))) : (min((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) 3447910142U))))), (var_5))));
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(34359738367LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((var_7), (5U)))))), (var_6)));
}
