/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81450
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49775))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((short) ((((/* implicit */long long int) ((/* implicit */int) ((short) -1LL)))) != (arr_5 [i_0 + 1] [i_2 - 1] [i_1])));
                    arr_10 [i_0 - 1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) 5LL);
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-11972))) <= (((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (8170584114498279577LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)11971)))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) var_7)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11973))))))))));
        var_19 = ((/* implicit */short) arr_3 [(short)8] [(short)8]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_15 [i_3] = min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_3] [i_3])) == (((/* implicit */int) var_1)))))) - (((((/* implicit */_Bool) 9223372036854775798LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) : (5830420072840781208LL))))), (((/* implicit */long long int) arr_14 [i_3] [i_3])));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)11943)), (arr_3 [i_3] [i_3])))) << (((((((/* implicit */int) arr_0 [i_3] [i_3])) + (74))) - (18)))))) ? ((((!(((/* implicit */_Bool) arr_4 [i_3] [i_3])))) ? (min((((/* implicit */long long int) var_0)), (arr_13 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_3] [i_3])))))));
        var_21 = ((/* implicit */unsigned char) var_6);
    }
    var_22 = ((/* implicit */short) min((((/* implicit */long long int) (short)11973)), (-1LL)));
}
