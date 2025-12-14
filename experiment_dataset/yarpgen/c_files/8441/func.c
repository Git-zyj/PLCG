/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8441
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
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_7), (-2068028363816676969LL))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (min(((+(((-2298957698921607465LL) & (arr_6 [8LL]))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_7 [i_2] [i_2 + 2] [i_2 + 2] [11LL]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0] [i_1] [i_1 + 3] [i_1]) != (var_16)))))))))));
                    var_19 = ((/* implicit */long long int) min((var_19), ((-(((long long int) arr_0 [i_0] [9LL]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_20 ^= (-(var_11));
                                arr_12 [1LL] [i_2] = arr_5 [i_0 + 3] [i_0 + 3];
                                var_21 = ((/* implicit */long long int) max((var_21), (min((var_15), (((((arr_2 [i_2 + 2] [i_2 + 2]) & (-9223372036854775797LL))) / (9223372036854775807LL)))))));
                                var_22 = ((long long int) ((((((/* implicit */_Bool) 4715035903070658518LL)) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])))) && (((/* implicit */_Bool) max((var_0), (var_3))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (long long int i_6 = 1; i_6 < 8; i_6 += 2) 
            {
                for (long long int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    {
                        var_23 = (~(max((-7907581290666669482LL), (arr_20 [i_0] [2LL] [2LL]))));
                        var_24 |= ((var_2) / (min(((~(9223372036854775807LL))), (((arr_6 [4LL]) ^ (var_11))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    var_25 = var_15;
                    var_26 |= ((long long int) ((arr_1 [i_8]) - (min((4083286114452407708LL), (arr_2 [i_0] [i_8])))));
                    var_27 = 5027592806878814198LL;
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) min((var_28), (max((arr_19 [i_0] [i_0] [1LL] [11LL]), (arr_14 [i_0] [i_0] [i_0 - 1])))));
    }
}
