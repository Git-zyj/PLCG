/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69198
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
    var_16 = ((/* implicit */long long int) max((var_15), (var_10)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = arr_2 [i_0];
                    var_17 = ((/* implicit */long long int) arr_1 [i_0 + 3]);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) arr_1 [i_0 + 3]);
    }
    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) 
        {
            for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
            {
                for (long long int i_6 = 2; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((long long int) arr_5 [i_5] [i_4] [i_6 + 2])) / ((-(arr_5 [i_5] [i_4] [i_5])))))) ? (arr_14 [i_6 - 2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3 + 1] [i_4] [i_5])))));
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (arr_3 [i_3]) : (arr_18 [i_3 + 3] [i_4 - 1] [i_5 + 4] [i_6]))))))));
                        arr_19 [i_3] [i_4] [i_3] [i_5] [i_6] = ((/* implicit */long long int) var_10);
                    }
                } 
            } 
        } 
        arr_20 [i_3] [i_3] = arr_11 [i_3] [i_3];
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (var_0)));
    }
}
