/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75756
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) 5312959160257463234LL)) ? (((((/* implicit */_Bool) 1987554512149715606LL)) ? (8421191086157685015ULL) : (10025552987551866600ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((8421191086157685015ULL) <= (721270275236743412ULL))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) 8421191086157685015ULL)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [8U] [i_0])) : (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((unsigned int) min((1080439470282583489ULL), (((/* implicit */unsigned long long int) arr_0 [12ULL]))))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (long long int i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                {
                    arr_11 [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? ((+(13153449961920889727ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10921181631617575989ULL))))))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1559171856U)) ? (((/* implicit */unsigned long long int) 3307677759U)) : (10025552987551866600ULL)))) ? (((unsigned int) var_5)) : (var_1)))) ? ((~(arr_6 [i_1]))) : (arr_6 [i_3 - 1]));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_22 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_8)) & (arr_5 [i_3 - 1])))), (((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_1] [i_3 + 1])) ? (min((((/* implicit */unsigned long long int) var_19)), (var_11))) : (var_14)))));
                        var_23 ^= ((/* implicit */unsigned int) (~(max((7525562442091975626ULL), (10921181631617575989ULL)))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = arr_4 [i_3 + 1];
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) var_4))))))), (arr_9 [i_3 + 1] [i_4] [i_4]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_17 [i_1] [i_1] [i_2] [i_3 - 2] [i_3] [i_5] = ((/* implicit */long long int) arr_10 [i_1] [i_2] [i_3 - 2]);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_25 -= var_1;
                            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2812565060U))));
                            arr_20 [i_6] [i_6] [i_3] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8421191086157685015ULL)) ? (arr_5 [i_3 + 2]) : (var_6))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (2735795439U) : (((var_19) / (arr_13 [i_6] [i_5] [i_2] [i_1]))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_27 = ((unsigned int) 2735795439U);
    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3844600300790035122LL))));
}
