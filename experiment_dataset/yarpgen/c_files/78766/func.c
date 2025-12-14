/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78766
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
    var_16 = var_10;
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [9LL] [9LL] [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0] [3LL] [i_1] [i_0]) : (arr_3 [i_2] [12LL])))) ? (arr_3 [i_0] [i_0]) : (max((var_3), (arr_3 [i_0 + 1] [i_1]))))) ^ (arr_4 [i_0] [i_0] [i_2]));
                    arr_9 [i_0] [i_1] [i_1] [10LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 124202379806828983LL))));
                    arr_10 [i_0] [7LL] [i_0] [i_1] = max((var_3), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))))))));
                    arr_11 [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [10LL] [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (var_14))), (arr_0 [i_0] [i_0]))))));
                    arr_12 [9LL] [i_1] [i_0] = (-(((((/* implicit */_Bool) arr_4 [7LL] [i_0] [i_2])) ? (max((var_4), (arr_3 [i_0] [i_2]))) : (((arr_4 [i_0] [i_0] [3LL]) / (arr_1 [i_2]))))));
                }
            } 
        } 
    } 
}
