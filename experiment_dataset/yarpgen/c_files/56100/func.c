/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56100
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(3897533065U)))) ? (((((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [0LL])) & (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_7 [9ULL] [i_0])) << (((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2])) ? ((~(((/* implicit */int) arr_4 [1LL] [i_0 - 1])))) : (((/* implicit */int) max((arr_4 [i_0] [i_0 - 2]), (arr_4 [i_0] [i_0 - 1]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [0ULL] [i_0 - 2] [i_0]);
                                arr_17 [17LL] [5] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (var_0)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_5))))))));
                                var_10 -= ((/* implicit */signed char) min(((+(((/* implicit */int) arr_3 [i_1 + 1] [i_0 - 1])))), (((/* implicit */int) arr_9 [i_0] [2ULL] [(short)9] [i_0 - 1]))));
                            }
                        } 
                    } 
                    arr_18 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_1 - 2] [i_0] [i_0 + 1] [i_0 + 1]))));
                    arr_19 [11] [11] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_2), (((/* implicit */short) arr_1 [i_0 + 2]))))) > (((/* implicit */int) arr_1 [i_0 - 2]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 2) 
            {
                {
                    arr_27 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_7 - 2] [(signed char)1]))))) <= (max((arr_22 [i_6] [7LL]), (((((/* implicit */int) var_0)) * (((/* implicit */int) var_2))))))));
                    arr_28 [14LL] [i_6] [(unsigned short)2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_25 [i_7 + 1] [i_7 + 2] [i_7 + 2] [i_6])) && (((/* implicit */_Bool) arr_25 [i_7 - 1] [i_7] [i_7 + 1] [i_6])))) ? (((((((/* implicit */_Bool) 4099081494U)) || ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_2)))))) : (arr_25 [i_7 + 2] [i_7 - 3] [i_7 - 2] [i_5]))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) -833006717)) && (((/* implicit */_Bool) arr_21 [i_5] [i_5])))) ? (215084552) : (((/* implicit */int) var_8)))))));
                    var_11 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_26 [i_7 - 3])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7 - 3])))))));
                    arr_29 [(signed char)23] [20U] [0] [i_7] = ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 1; i_8 < 21; i_8 += 1) 
    {
        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_2))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 19; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_8 - 1] [i_11 + 2])))), (((((/* implicit */_Bool) arr_34 [i_8 - 1] [i_11 + 2])) ? (((/* implicit */int) arr_34 [i_8 - 1] [i_11 - 2])) : (((/* implicit */int) arr_34 [i_8 - 1] [i_11 - 2])))))))));
                                arr_44 [i_8] [(_Bool)1] [i_9] [i_11 + 1] [i_12] [i_12] [i_12] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_34 [i_9] [16U])) : (arr_40 [i_8] [8] [20LL] [i_8 + 1]))))) >> (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_6)))), (arr_36 [i_9 - 1] [i_12] [i_10]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) min(((((_Bool)1) ? (397434231U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0ULL)))))));
}
