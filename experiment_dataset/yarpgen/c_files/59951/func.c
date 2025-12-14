/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59951
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
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_18 |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))))))))));
        var_19 = ((/* implicit */long long int) var_13);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        arr_5 [i_1] [(_Bool)1] = var_4;
        arr_6 [i_1 + 1] = var_3;
        arr_7 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)10842))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */long long int) var_14)), (arr_2 [i_2] [i_2]))))) ? (((long long int) 2148437620137547317LL)) : (((arr_1 [i_2] [i_2]) ? (arr_2 [i_2] [i_2]) : (-2148437620137547338LL)))));
        var_21 = ((/* implicit */long long int) (+((-((~(((/* implicit */int) var_6))))))));
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2148437620137547317LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (5540471704033340093LL)))) ? (((((var_9) || ((_Bool)1))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (arr_2 [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((-2148437620137547322LL) >= (-2148437620137547317LL)))))));
    }
    var_22 = ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (((((/* implicit */_Bool) 2148437620137547338LL)) ? ((-(var_3))) : (-2148437620137547339LL))));
}
