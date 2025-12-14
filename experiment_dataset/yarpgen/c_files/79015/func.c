/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79015
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    var_20 = ((/* implicit */int) (~(((9223372036854775807LL) % (((/* implicit */long long int) arr_4 [i_0 + 1] [i_0] [5LL]))))));
                    var_21 = ((/* implicit */signed char) (+((~(-1)))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        var_22 ^= ((/* implicit */unsigned short) (-(2147483630)));
                        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_18))))) > (9223372036854775807LL)));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 3; i_5 < 14; i_5 += 4) 
                        {
                            arr_16 [i_5 - 2] [(signed char)8] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) ((4772316904851096583ULL) < (((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [i_1] [i_4])))));
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_4 - 3] [i_5] = ((/* implicit */short) ((arr_8 [10LL] [i_4] [10LL]) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 2] [14U])))));
                            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [(signed char)3] [i_0 - 1] [i_5 - 1] [i_4]))));
                            arr_18 [i_0] [i_0] = ((/* implicit */_Bool) ((int) -1651575128));
                        }
                    }
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [0] [(signed char)4] [13]))))));
                        var_25 = ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 + 2])) == (((/* implicit */int) arr_15 [i_0 + 2] [i_0 + 2])));
                        var_26 ^= (!((!((_Bool)1))));
                    }
                    var_27 = ((/* implicit */int) (!(((((/* implicit */int) (short)290)) < (((/* implicit */int) (unsigned short)4950))))));
                }
                arr_22 [i_0] = ((/* implicit */signed char) (short)-6639);
                arr_23 [i_0] [i_0] = ((/* implicit */int) var_1);
            }
        } 
    } 
    var_28 *= ((/* implicit */short) min(((-((-(var_3))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
    var_29 = ((/* implicit */_Bool) (~((~(var_15)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
    {
        arr_26 [20] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-112))));
        arr_27 [i_7 - 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 - 1]))) > (arr_24 [i_7 + 1] [i_7 + 1])));
    }
    for (unsigned char i_8 = 2; i_8 < 16; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    {
                        arr_41 [(short)19] [15] = ((/* implicit */unsigned char) min((min((arr_38 [i_8 + 4] [i_8] [i_8 + 1]), (arr_38 [i_8] [9LL] [i_8 + 1]))), (max((arr_38 [i_8] [i_8] [i_8 - 1]), (arr_38 [i_8] [i_8] [i_8 + 4])))));
                        var_30 = ((unsigned long long int) ((signed char) arr_34 [i_8] [i_8]));
                    }
                } 
            } 
        } 
        var_31 = ((((int) ((((/* implicit */int) var_2)) >> (((arr_39 [i_8] [i_8 - 2] [i_8 + 3] [i_8 + 1] [i_8 + 1] [i_8 + 3]) - (1912440683)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8 - 2]))))));
        arr_42 [i_8] = ((/* implicit */unsigned int) ((((-9223372036854775797LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-315)) + (329)))));
        var_32 = ((/* implicit */signed char) ((var_0) / (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_33 [i_12]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_12] [i_12]))))) : (((arr_24 [(unsigned char)1] [(unsigned char)1]) << (((/* implicit */int) arr_29 [i_12]))))));
        arr_45 [(_Bool)1] &= ((/* implicit */unsigned int) (+(arr_8 [i_12] [i_12] [i_12])));
        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(9223372036854775807LL))))));
    }
    var_35 = ((/* implicit */long long int) var_9);
}
