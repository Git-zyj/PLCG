/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74865
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
    var_18 = ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 3] = ((/* implicit */_Bool) var_6);
                    arr_10 [i_1] [(unsigned char)0] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)0)))) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2 - 2])) : (((((/* implicit */int) (short)3249)) << (((/* implicit */int) arr_0 [i_0])))))))));
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((long long int) var_12)) : (((/* implicit */long long int) ((/* implicit */int) (short)13017)))));
                    var_20 = ((int) var_14);
                    arr_11 [i_0] [i_0] [(unsigned char)12] [i_2] = ((/* implicit */short) min((((((/* implicit */int) arr_7 [i_2 - 1] [i_1] [(unsigned char)14] [i_2 - 2])) * (((/* implicit */int) arr_7 [i_2 - 1] [5] [i_2] [i_2 - 1])))), (((/* implicit */int) var_7))));
                }
            } 
        } 
        arr_12 [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) << (((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (5528904175497357902LL))) - (75LL)))));
        arr_13 [i_0] [i_0] &= max((((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_0] [i_0] [i_0]))), (((unsigned long long int) arr_5 [i_0] [i_0] [i_0])));
    }
}
