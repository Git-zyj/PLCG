/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91085
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]))));
                    var_17 = max((((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(arr_6 [20LL]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)175))))))), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-3505))));
                    arr_9 [i_2] [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) (unsigned char)175)), (7320068152520166868LL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1963871372280246893LL)) ? (var_12) : (var_11)))) ? ((~(var_12))) : (max((((/* implicit */unsigned long long int) var_15)), (2376422031712441116ULL))))), (((/* implicit */unsigned long long int) ((((long long int) var_11)) >= (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(12888782092469368457ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (-1662276379) : (((/* implicit */int) (unsigned char)188)))))))) ? ((+(((var_7) ? (var_12) : (var_12))))) : (((var_7) ? (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) 3368171931U)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))));
}
