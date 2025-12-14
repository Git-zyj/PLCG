/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8905
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
    var_17 = (short)8140;
    var_18 = var_14;
    var_19 = var_9;
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-20985))))))) != (((/* implicit */int) ((short) (short)-8141))))))));
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) (short)12649))) > (((((/* implicit */int) (short)45)) / (((/* implicit */int) (short)-9699))))));
                }
            } 
        } 
    } 
}
