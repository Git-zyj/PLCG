/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74531
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */short) (~((~(2482123149U)))));
                        arr_9 [i_3] [i_1] [i_2] [i_3] |= ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_3 [i_0 + 4] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1] [i_0 - 1] [(_Bool)1] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29652)))))))));
        var_17 = ((/* implicit */long long int) arr_7 [i_0] [15LL] [i_0]);
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */_Bool) min((var_6), (arr_10 [i_4])));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    arr_18 [i_4] [i_4] [i_6] [i_6] = ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) * (arr_0 [i_6]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_4] [i_5 + 2] [0ULL])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (signed char)63))))))))) : (max((arr_0 [i_6]), (((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned char) arr_16 [i_4] [i_4] [(_Bool)1] [i_6]))))))));
                    arr_19 [(_Bool)1] = arr_2 [i_4] [16U] [i_6];
                    var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned char) (signed char)-63)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-7348540984753012423LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)63)), ((unsigned char)31)))) : ((~(((/* implicit */int) arr_14 [0U]))))))) ? ((~((~(var_0))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-64)))))));
    }
    for (long long int i_7 = 2; i_7 < 22; i_7 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (signed char)63))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (unsigned short)26891))) != (((/* implicit */int) ((-453213199) >= (((/* implicit */int) arr_21 [i_7 + 3])))))));
        var_22 = ((/* implicit */short) (signed char)62);
        var_23 = ((/* implicit */int) 3235270280U);
    }
    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 24; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_9] [i_11] [19U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_5)));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_27 [14] [i_9] [i_10 - 1] [i_10 + 1]))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_10 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10 - 1]))) : (806407905564396169ULL)));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_10 - 1]))) > (var_12)));
                        }
                    } 
                } 
            } 
            arr_32 [i_8] [i_9] = ((/* implicit */unsigned int) ((arr_31 [i_8] [i_9] [i_9] [i_9] [i_9] [i_8]) ? ((-(((/* implicit */int) var_14)))) : ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_28 [(signed char)1] [i_8] [i_8] [i_9] [i_9] [i_9]))))));
            /* LoopNest 2 */
            for (long long int i_13 = 1; i_13 < 21; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 2) 
                {
                    {
                        var_29 = ((/* implicit */long long int) ((unsigned char) arr_34 [i_8] [i_9] [i_8]));
                        var_30 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_34 [16ULL] [i_9] [12LL]))))));
                    }
                } 
            } 
            var_31 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_9])) / (((/* implicit */int) arr_23 [i_8]))))) ? ((+(1152921504602652672ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_8] [i_8]))));
        }
        var_32 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -453213199)) ? ((+(arr_27 [i_8] [i_8] [i_8] [i_8]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) 0)) : (var_12)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_8] [i_8] [i_8] [i_8] [21U] [i_8]))))) : ((-(var_0)))))));
    }
    var_33 = ((/* implicit */int) var_8);
    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)111))))) ? (((/* implicit */unsigned long long int) -4843206978629412643LL)) : (var_5))))));
}
