/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8849
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
    var_20 = ((/* implicit */_Bool) -774053819);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_2 + 1]))))), (((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? (4070741450U) : (((/* implicit */unsigned int) arr_6 [i_0] [i_2 + 1] [i_2 - 2]))))));
                        var_21 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_1 + 1])) ? (arr_0 [i_2 - 1] [i_1 + 1]) : (arr_0 [i_2 - 1] [i_1 + 1])))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) arr_8 [1U] [i_0] [i_0] [9LL]))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32748))))) ? (min((((/* implicit */long long int) 0)), (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1112871024)) ? (3968138345U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))))))));
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_4] [i_4])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_4] [i_4]))))) : (arr_10 [i_4])))) ? (((((/* implicit */_Bool) (~(-774053819)))) ? (arr_10 [i_4]) : (((/* implicit */long long int) 1112871024)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(-6413350132292979529LL))))))))));
        var_25 = ((/* implicit */signed char) (-2147483647 - 1));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_2 [7]))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_27 = arr_4 [i_6];
                    var_28 ^= arr_10 [2U];
                }
            } 
        } 
        var_29 = ((/* implicit */int) ((_Bool) arr_8 [(unsigned short)14] [i_5] [i_5] [7U]));
        var_30 |= ((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_19 [i_5] [i_5] [(unsigned short)10])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52013))))), (((((/* implicit */_Bool) 774053805)) ? (arr_1 [i_5] [i_5]) : (((/* implicit */long long int) 4294967278U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -15)) ? (1182772736702050625LL) : (((/* implicit */long long int) -1112871014))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5]))) : (arr_21 [i_5] [16LL] [2LL] [2LL]))))));
    }
}
