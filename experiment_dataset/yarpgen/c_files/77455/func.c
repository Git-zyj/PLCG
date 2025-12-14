/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77455
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_1 - 1] [i_1 + 4] [i_0] = arr_4 [i_0] [i_1] [i_2];
                    var_19 = (+(var_18));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (5788003432613798948LL) : (var_10))) / (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) (short)-16384)), (var_10)))))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 3; i_5 < 12; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (short i_7 = 2; i_7 < 12; i_7 += 4) 
                        {
                            {
                                arr_24 [i_5] [i_7 - 2] [i_5 + 1] [i_5 + 1] [1LL] [i_5] [i_5] = ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1588))) : (8885359611458407035LL))) - (((/* implicit */long long int) ((/* implicit */int) var_15))));
                                var_21 = ((/* implicit */short) max((arr_4 [i_5 - 3] [i_5 - 3] [i_7]), (((arr_1 [i_6] [i_4]) - (arr_4 [i_3] [i_3] [i_3])))));
                            }
                        } 
                    } 
                } 
                arr_25 [i_3] = ((/* implicit */long long int) ((short) ((((var_9) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3]))))) ? (arr_2 [i_4] [i_4 + 1] [i_4]) : (((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_3])) ? (arr_22 [i_4] [2LL] [6LL] [i_4]) : (arr_23 [i_3]))))));
            }
        } 
    } 
}
