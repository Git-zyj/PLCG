/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8278
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
    var_20 = ((/* implicit */unsigned short) var_2);
    var_21 += ((/* implicit */signed char) var_17);
    var_22 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_15)))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_6 [i_2 - 1] [i_1] [(unsigned short)13]);
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_3 [i_0] [8LL]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 4; i_3 < 22; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((long long int) arr_16 [i_3] [(unsigned char)13] [i_3 - 3] [i_6 - 3] [i_3] [i_6]));
                        /* LoopSeq 4 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 |= ((/* implicit */unsigned long long int) var_12);
                            var_26 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3 - 3])) - (((/* implicit */int) var_12))));
                        }
                        for (long long int i_8 = 3; i_8 < 23; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) ((unsigned short) (signed char)65));
                            var_28 -= ((/* implicit */_Bool) (unsigned char)216);
                        }
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                        {
                            var_29 = ((((/* implicit */_Bool) arr_15 [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 - 2]))) : (var_17));
                            var_30 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32767))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) arr_10 [4ULL] [i_3 + 3]))));
                            arr_28 [i_3] [i_3] [i_4] [i_4] [i_3] [i_6 - 3] [(short)8] = ((/* implicit */signed char) (~(arr_24 [i_6 + 2] [i_3 - 3] [4] [i_3 - 2] [i_3])));
                        }
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                        {
                            var_32 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [(unsigned char)18] [i_3 + 3] [i_3 - 4]))));
                            arr_33 [i_3] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1991))));
                            var_33 = ((/* implicit */signed char) arr_22 [i_3 + 2] [i_3 - 3] [i_5] [i_6 - 1] [i_6 - 3] [i_10]);
                        }
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_9 [i_6 + 2] [i_3 - 1]))));
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) arr_15 [i_3 + 2]))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [i_3] [i_4] [i_5] [(unsigned char)14] &= ((/* implicit */unsigned char) ((_Bool) arr_35 [i_3 + 3] [i_3 + 3] [(_Bool)1] [i_11]));
                        var_36 *= ((/* implicit */unsigned char) ((_Bool) var_18));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 24; i_12 += 3) 
                    {
                        arr_40 [i_5] [i_5] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) ^ (((((/* implicit */_Bool) 18014398509481983LL)) ? (((((/* implicit */int) arr_32 [i_3] [i_3] [i_5] [i_3] [i_3])) >> (((((/* implicit */int) (unsigned char)64)) - (59))))) : (((/* implicit */int) (unsigned char)146))))));
                        var_37 -= ((/* implicit */short) max((((((/* implicit */int) var_1)) - (((/* implicit */int) arr_38 [i_3 + 3] [i_4] [i_5] [i_3 + 3])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_38 [i_3 - 1] [i_3 + 1] [i_12 + 1] [i_12 + 1])), (var_14))))));
                    }
                    arr_41 [i_3 + 3] [i_3 + 3] [i_3] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) ((unsigned short) var_11))));
                }
            } 
        } 
    } 
}
