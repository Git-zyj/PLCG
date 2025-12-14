/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89618
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
    var_11 = ((/* implicit */signed char) var_8);
    var_12 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-20320)) ? (546721333) : (((/* implicit */int) (unsigned short)17439))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_13 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)18890)))) ? (((/* implicit */long long int) -1436869073)) : (var_5)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_12 [(_Bool)1] [i_0] [i_2] [i_3] = ((/* implicit */long long int) var_4);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                        {
                            var_14 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)255))));
                            var_15 ^= ((/* implicit */short) var_8);
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1436869072) << (((((/* implicit */int) var_0)) - (90)))))) ? (546721333) : (1436869072)));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (234881024U)));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_2] [i_2] [i_6] [i_0] [i_0] = ((/* implicit */short) (-(((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_19 ^= ((/* implicit */unsigned char) var_1);
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127)))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 2) 
                    {
                        for (short i_8 = 1; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                                var_22 = ((/* implicit */unsigned char) (~(234881024U)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_6))));
                    var_25 = ((/* implicit */unsigned char) (-((~(var_10)))));
                }
                /* LoopSeq 2 */
                for (int i_10 = 2; i_10 < 13; i_10 += 3) 
                {
                    var_26 = ((/* implicit */long long int) (unsigned char)120);
                    var_27 = ((/* implicit */unsigned short) (~(3855335546058725603ULL)));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 556792923)) : (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) var_0))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5)))))));
                        var_29 |= ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                        arr_38 [i_0] [i_1] [i_1] [(signed char)4] [(short)2] [i_11 + 1] &= ((((min((((/* implicit */long long int) var_6)), (var_5))) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (44))));
                    }
                }
                /* vectorizable */
                for (long long int i_12 = 1; i_12 < 14; i_12 += 4) 
                {
                    arr_41 [i_0] [i_0] [i_12] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                    arr_42 [i_0] [i_1] [i_12 + 2] = ((/* implicit */signed char) var_7);
                }
                /* LoopNest 3 */
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    for (signed char i_14 = 3; i_14 < 14; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            {
                                arr_50 [i_13] &= ((/* implicit */unsigned long long int) var_9);
                                var_30 = var_1;
                            }
                        } 
                    } 
                } 
                var_31 = ((/* implicit */int) min((((/* implicit */unsigned int) min(((short)(-32767 - 1)), (((/* implicit */short) var_4))))), (var_7)));
            }
        } 
    } 
}
