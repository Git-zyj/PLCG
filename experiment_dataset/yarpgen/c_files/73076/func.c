/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73076
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) arr_4 [i_0]);
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((0ULL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [(unsigned short)13])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) ^ (18446744073709551589ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) -2910098286487387724LL);
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */_Bool) -2910098286487387722LL)) || (((/* implicit */_Bool) ((int) 4186112ULL)))))), ((short)508)));
                                var_22 = ((/* implicit */unsigned char) ((((long long int) arr_10 [i_6 + 1] [i_4 + 2])) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_6 - 1] [i_4 - 2]))))));
                                var_23 = ((/* implicit */unsigned int) max((arr_11 [i_4 + 1]), (arr_11 [i_4 + 1])));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_5]))) : (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2])) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) arr_11 [i_2]);
                    arr_19 [i_2] [(short)5] [9ULL] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-40))));
                    var_26 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_6 [i_3])), (min((((/* implicit */unsigned long long int) 2910098286487387705LL)), (((unsigned long long int) var_17))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 23; i_9 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) -2910098286487387722LL);
                    arr_30 [i_8] [i_8] = ((/* implicit */unsigned short) var_8);
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? ((-(min((((/* implicit */long long int) (unsigned char)34)), (2910098286487387730LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [(signed char)0])) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8)))) : (((/* implicit */int) var_16)))))));
                    var_29 -= ((/* implicit */int) ((unsigned long long int) ((_Bool) (unsigned char)221)));
                }
            } 
        } 
    } 
}
