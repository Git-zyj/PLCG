/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68634
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 &= ((/* implicit */short) ((((/* implicit */long long int) 2737484205U)) < ((-(((long long int) var_4))))));
        arr_2 [i_0] [12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((long long int) (+(var_10))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))));
        var_23 = ((/* implicit */unsigned long long int) (+(((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1]))))));
        var_24 = (short)0;
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_13))));
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) var_13)) ? (4475773890984003823LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)22)))))));
            }
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                var_27 ^= ((/* implicit */int) (unsigned char)112);
                var_28 = ((/* implicit */short) arr_12 [i_4] [i_4] [i_1]);
            }
            for (int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                var_29 = ((/* implicit */short) arr_14 [(signed char)2] [0LL]);
                var_30 = ((/* implicit */unsigned char) 4806179202042791204LL);
            }
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_17))) ? (arr_16 [12] [i_2 + 1] [i_2 + 2] [12]) : (((/* implicit */int) (_Bool)1))));
                var_32 = ((/* implicit */unsigned int) var_14);
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_33 ^= (((!(((/* implicit */_Bool) arr_14 [5LL] [5LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_16)) ? (arr_8 [i_1] [i_2] [i_6] [i_2]) : (((/* implicit */unsigned long long int) var_1)))));
                            var_34 &= (-(((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12))));
                            var_35 = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
            }
            arr_25 [i_1] [i_2] = ((unsigned char) var_9);
        }
        for (unsigned int i_9 = 3; i_9 < 20; i_9 += 1) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) arr_4 [17ULL])) : (arr_17 [i_9] [i_9 + 1] [i_9])));
            var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_9 + 3] [i_9 - 2])) ? (arr_9 [i_1] [i_9 + 1] [i_9 - 1]) : (((/* implicit */int) arr_18 [i_9 + 1]))));
            /* LoopSeq 1 */
            for (signed char i_10 = 2; i_10 < 21; i_10 += 3) 
            {
                var_38 = ((/* implicit */int) min((var_38), ((~(((/* implicit */int) arr_20 [i_10 - 2] [i_1]))))));
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (short)0))));
                var_40 = ((/* implicit */unsigned int) (short)-6435);
            }
        }
        for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 3; i_12 < 19; i_12 += 1) 
            {
                var_41 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (var_19))) : (((/* implicit */int) arr_29 [i_12] [i_12 + 1] [i_1] [12LL]))));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) var_13);
                            var_43 ^= ((/* implicit */long long int) var_2);
                            var_44 += ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 621622326U)))))));
                            arr_41 [i_1] [i_11] [i_1] [(unsigned char)0] [i_14] [i_14] [i_11] = ((/* implicit */short) var_10);
                        }
                    } 
                } 
                var_45 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_11])))))));
                var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((unsigned long long int) arr_24 [i_12 - 3] [i_12 - 3] [i_12] [i_12 + 2] [i_12] [i_12] [i_1])))));
            }
            var_47 = ((/* implicit */short) var_10);
        }
    }
    var_48 += ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
}
