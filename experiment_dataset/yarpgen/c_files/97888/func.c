/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97888
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (var_5));
        var_17 = ((/* implicit */unsigned short) var_13);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (9ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) var_13);
                        var_20 += ((/* implicit */long long int) var_12);
                        arr_13 [(short)5] [i_4] [i_2] [i_4] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((2700190912U) - (2700190885U)))));
                        arr_14 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709551606ULL)))));
                    }
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(var_13))))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_1))));
                    var_23 |= ((/* implicit */unsigned int) ((_Bool) 18446744073709551606ULL));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) 879762773U);
        var_25 = ((/* implicit */short) var_1);
    }
    for (long long int i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (long long int i_8 = 3; i_8 < 15; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) (((-((-(3415204522U))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            arr_30 [8LL] [14U] [i_5] = ((/* implicit */unsigned long long int) (~(((min((var_13), (((/* implicit */long long int) var_2)))) & (((/* implicit */long long int) min((var_8), (var_14))))))));
                            var_27 = ((/* implicit */_Bool) 598176079U);
                            arr_31 [i_5] [i_5] [i_5] [i_7] [i_8] [i_8] [i_5] = ((/* implicit */int) max((11452825047191325601ULL), (((/* implicit */unsigned long long int) 879762773U))));
                            arr_32 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (-(min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))), (var_8)))));
                        }
                        for (int i_10 = 1; i_10 < 14; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) 12983676996789368707ULL);
                            arr_37 [(signed char)0] [(short)4] [(short)4] [i_8] |= ((/* implicit */unsigned short) (unsigned char)255);
                            var_29 = ((/* implicit */unsigned char) (short)22433);
                            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_14)) + (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (max((12983676996789368707ULL), (((/* implicit */unsigned long long int) 1508700064))))))));
                        }
                        arr_38 [i_6] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))) & (max((((/* implicit */unsigned int) var_11)), (var_9)))));
                        arr_39 [i_5] = ((/* implicit */unsigned char) var_8);
                    }
                } 
            } 
        } 
        var_31 += ((/* implicit */unsigned short) min((18446744073709551606ULL), (((((/* implicit */_Bool) var_9)) ? (min((18040445751235625919ULL), (((/* implicit */unsigned long long int) 4539184328557581808LL)))) : (max((((/* implicit */unsigned long long int) var_9)), (406298322473925697ULL)))))));
    }
    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)74)) ? (min((1046745218U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
}
