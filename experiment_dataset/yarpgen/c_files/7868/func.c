/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7868
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [(unsigned char)1] [i_2] [i_1] = max((max((max(((unsigned char)113), ((unsigned char)16))), (min(((unsigned char)141), ((unsigned char)243))))), (max(((unsigned char)127), ((unsigned char)26))));
                    arr_12 [i_0] [i_0] [i_1] = max((max((max((var_15), (arr_10 [i_1] [i_1] [i_2]))), (max((var_12), ((unsigned char)11))))), (min((max((arr_8 [i_0] [i_1] [i_2 - 3]), (var_6))), (max((var_13), (var_17))))));
                }
            } 
        } 
    } 
    var_19 = min((max((max(((unsigned char)242), ((unsigned char)229))), (min(((unsigned char)16), ((unsigned char)128))))), (min((min(((unsigned char)255), ((unsigned char)8))), (min(((unsigned char)26), ((unsigned char)188))))));
}
