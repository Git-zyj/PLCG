/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99444
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((var_0), (((/* implicit */long long int) var_3))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_0 [23ULL] [23ULL]))));
        var_14 = ((/* implicit */long long int) (unsigned short)46003);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))));
    }
    var_16 = ((/* implicit */short) (((~((~(((/* implicit */int) var_8)))))) | ((~(((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned int) ((unsigned short) min((((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))), (min((4294967290U), (((/* implicit */unsigned int) (unsigned short)8160)))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                            {
                                arr_13 [i_1] [4] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_4 + 2] [i_2] [i_2 - 3] [i_2] [i_2 - 3])) - (((/* implicit */int) var_10))));
                                arr_14 [i_2] [i_2] [7ULL] [i_3 - 1] [i_5] [(short)3] = ((/* implicit */signed char) (+(((/* implicit */int) (short)32753))));
                                var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_10 [i_5] [(short)8])) + (((/* implicit */int) var_2)))));
                                var_19 = var_2;
                                arr_15 [i_1] [i_2] [i_2] [i_4] [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)16))));
                            }
                            for (unsigned short i_6 = 3; i_6 < 8; i_6 += 3) /* same iter space */
                            {
                                arr_18 [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_11 [i_6] [i_2] [i_2] [i_6 - 1] [i_6 - 3]), (var_5))))));
                                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4] [i_2] [i_4 - 1] [0LL] [i_3 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))), ((+(-5235606038109890503LL)))));
                                var_21 = ((/* implicit */unsigned short) (_Bool)0);
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 3; i_7 < 8; i_7 += 3) /* same iter space */
                            {
                                var_22 -= ((/* implicit */short) ((((/* implicit */int) (signed char)70)) * (((/* implicit */int) (unsigned short)0))));
                                var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)121)) <= (((/* implicit */int) arr_2 [i_2 - 1] [i_4 + 2]))));
                                var_24 += ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) + (-7431545935866914633LL)))));
                                var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
                            }
                            for (unsigned short i_8 = 3; i_8 < 8; i_8 += 3) /* same iter space */
                            {
                                arr_23 [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_1] [i_3 - 2] [i_8 + 2] [i_2]))) | (0U)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (-2147483647 - 1))), (17317308137472LL)))) ? (((int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */int) var_8))));
                                arr_24 [2] [i_2] [i_2] [i_4] [(unsigned char)3] = ((/* implicit */_Bool) var_4);
                                arr_25 [i_4] [i_2] [i_4] [i_4] [i_4 + 2] = ((/* implicit */long long int) 3508639920798406479ULL);
                            }
                        }
                    } 
                } 
                arr_26 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) -5235606038109890503LL))) != (((/* implicit */int) var_9))));
            }
        } 
    } 
}
