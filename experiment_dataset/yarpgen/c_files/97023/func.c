/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97023
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
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)14099)) : (((/* implicit */int) (signed char)-8)))) : (((/* implicit */int) var_8))));
                        arr_9 [i_0 + 1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_3 - 1]))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (var_7)));
                    }
                    for (long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)50576)))) | (((/* implicit */int) (signed char)3))));
                        var_23 ^= ((/* implicit */unsigned int) var_15);
                        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (9005028057976792545ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
                        var_25 = ((/* implicit */short) arr_6 [i_1]);
                    }
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1761181816)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) : (4499314165193508693ULL)));
                    var_27 = ((/* implicit */int) arr_6 [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0 - 2] [i_5] = ((/* implicit */unsigned long long int) (+(3674665425U)));
                                var_28 |= ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_2] [(unsigned short)9] [i_1] = ((/* implicit */signed char) (-(var_11)));
                        var_29 += ((/* implicit */signed char) arr_3 [i_2] [i_2]);
                        var_30 = ((/* implicit */unsigned short) (unsigned char)237);
                        arr_22 [i_0] &= ((/* implicit */int) var_16);
                        /* LoopSeq 2 */
                        for (short i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) var_15))));
                            var_32 = ((/* implicit */unsigned int) var_11);
                        }
                        for (short i_9 = 1; i_9 < 16; i_9 += 2) /* same iter space */
                        {
                            arr_27 [i_0 + 1] [i_1] [i_2] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) (((((-(var_3))) + (2147483647))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (var_11))) - (7045)))));
                            arr_28 [(short)8] [i_7] [i_2] [i_1] [i_1] [i_0 - 2] [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))));
                            var_33 = ((/* implicit */int) var_7);
                            var_34 *= var_13;
                        }
                    }
                }
                for (short i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    arr_32 [i_1] = var_12;
                    var_35 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)236)), (2147483624)))), (var_14)));
                }
                for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    var_36 = ((/* implicit */unsigned short) 1505862720);
                    var_37 = ((/* implicit */signed char) (-(var_6)));
                }
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    var_38 = arr_34 [i_0] [i_1] [i_12];
                    var_39 = ((/* implicit */unsigned int) (+(min((((4398046511103ULL) - (4398046511103ULL))), (((/* implicit */unsigned long long int) (_Bool)0))))));
                }
                var_40 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(3805211665274598265ULL)))) || (((/* implicit */_Bool) arr_31 [i_1] [i_1]))));
                arr_38 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((max((var_18), (((/* implicit */unsigned long long int) -1620813007)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_41 = ((/* implicit */signed char) var_12);
}
