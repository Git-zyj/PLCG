/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93796
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
    var_13 = ((/* implicit */int) (signed char)15);
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217664)) ? (((/* implicit */int) (unsigned short)65534)) : (0)))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) var_10))));
    var_15 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_4 - 1] = ((/* implicit */unsigned int) var_11);
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1 - 1]))))) ? (((/* implicit */long long int) ((min((1233330384), (((/* implicit */int) arr_9 [i_0 - 4] [i_0] [i_0 + 2] [i_0])))) | (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) var_9)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0 - 4] [i_1] [i_2] [i_1] [i_0 - 4]))))) ? (((/* implicit */long long int) var_6)) : (9223372036854775800LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 8; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_21 [i_0 - 1] [i_1 - 3] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2271520388U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_6])))))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_12))))))) ? ((((!(((/* implicit */_Bool) 3531794365109323406LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) (short)31240))))) : (((unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (min((var_5), (((/* implicit */unsigned int) var_2)))))))));
                                arr_22 [i_6] [i_5] [i_6] = ((((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_6)) : (-4921982211757838446LL))) >= ((-(1225820012063440442LL)))))) >> (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) min((arr_9 [i_1] [i_5] [i_6] [i_5]), (arr_6 [i_5] [i_7])))))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_0] [i_0 + 2] [i_0] [i_1 - 3] [i_0]))))) ? (((long long int) arr_17 [i_0] [i_0 - 2] [i_0] [i_0] [i_0])) : (min((-4244995630928217122LL), (((/* implicit */long long int) (unsigned short)24206)))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_4);
}
