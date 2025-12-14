/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59041
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) (-((+(2560029340448017899LL)))));
        var_20 -= ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (((((/* implicit */_Bool) var_10)) ? (-2560029340448017904LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (-((-(((long long int) arr_3 [i_1]))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_12 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])) ? (arr_5 [i_3] [i_2] [i_1]) : (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 3085709674U)))) : (max((((/* implicit */long long int) var_6)), (var_12))))) | (max((((((/* implicit */_Bool) var_6)) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) 2197961233U)))), (((/* implicit */long long int) arr_11 [i_1]))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_5 [i_1] [i_2] [i_1]))));
                    var_22 = ((/* implicit */signed char) arr_11 [i_3 + 2]);
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_18))) ? (((-2560029340448017899LL) - (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
