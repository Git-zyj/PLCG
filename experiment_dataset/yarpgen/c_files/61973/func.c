/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61973
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */int) max((var_20), ((~(var_17)))));
        arr_2 [3LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_14))) ? (var_14) : (((/* implicit */long long int) (-(var_4))))))) ? (((long long int) (!(((/* implicit */_Bool) var_18))))) : (((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */long long int) var_9)) : (var_1)))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 4) /* same iter space */
    {
        var_21 = ((long long int) (-((+(var_8)))));
        arr_6 [i_1 - 2] &= ((/* implicit */int) ((long long int) ((int) (~(var_14)))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(-385057984))))));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (long long int i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                {
                    var_23 = (-((~(-754021313))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((long long int) ((long long int) (~(var_3)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_10)) ? ((~(var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (var_6))))))));
    }
    for (int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (-2196141613482309757LL) : (((/* implicit */long long int) 754021312))));
        var_27 = ((/* implicit */int) ((long long int) (~(((((/* implicit */_Bool) var_6)) ? (var_2) : (var_0))))));
        var_28 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_18))));
    }
    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) var_8))))))));
}
