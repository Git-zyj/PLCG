/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91493
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_10)) * (var_1)));
    var_12 = ((/* implicit */signed char) ((max((max((var_9), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), ((~(var_1))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17320)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */long long int) var_7);
                                var_13 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_13 [i_2 - 4] [i_2] [9ULL] [i_1 - 1] [i_1 + 1])) | (((/* implicit */int) max((arr_13 [i_0] [(signed char)14] [(signed char)11] [i_3] [2ULL]), (((/* implicit */signed char) arr_5 [i_4] [i_3] [12LL] [4U]))))))));
                                var_14 = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) var_7);
                    var_16 = ((/* implicit */signed char) -6293284233118681345LL);
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) arr_19 [i_5]);
                    arr_24 [5LL] [21LL] [17LL] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_7] [i_7])) ? (min((((/* implicit */unsigned long long int) var_6)), (16597384743639649198ULL))) : (((/* implicit */unsigned long long int) max((min((var_6), (arr_22 [14] [i_5] [i_6] [(short)19]))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_17 [(short)18])), ((unsigned short)19540)))))))));
                    var_19 = ((/* implicit */unsigned long long int) arr_21 [i_5] [i_6] [i_6] [18]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_9);
}
