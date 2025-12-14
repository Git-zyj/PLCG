/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72939
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
    var_16 = var_6;
    var_17 += var_6;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((int) min((-510136740), (arr_0 [i_1])))) >= (((((/* implicit */_Bool) (unsigned short)63337)) ? (-1949611468) : (((/* implicit */int) (unsigned short)6687))))));
                var_19 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)25)) : (228220736));
                var_20 = ((/* implicit */unsigned short) ((((1949611461) - (((int) (unsigned short)6687)))) << (((((/* implicit */int) var_14)) - (16495)))));
                var_21 = ((/* implicit */int) min((var_21), (var_5)));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_12)))));
    var_23 = ((min((min((var_15), (((/* implicit */int) (unsigned short)12062)))), (((int) var_10)))) % (((/* implicit */int) (!(((((/* implicit */int) var_13)) < (var_8)))))));
}
