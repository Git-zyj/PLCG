/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70832
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
    var_14 = var_10;
    var_15 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [(_Bool)1] [6] [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)53600)) : (2147483638)))) ? (((/* implicit */unsigned long long int) ((arr_1 [(unsigned short)20] [(unsigned short)20]) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)-27)))) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (15470389403634155925ULL)));
                    arr_9 [i_2 + 1] [(_Bool)1] [(_Bool)1] [i_0] &= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    } 
}
