/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87716
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
    var_12 = ((/* implicit */long long int) 18446744073709551599ULL);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 *= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)12550))))) : (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))));
        arr_2 [i_0] = ((/* implicit */short) ((((max((((/* implicit */int) (unsigned short)24973)), (-23))) <= (((int) (short)30656)))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))) : (((((((/* implicit */int) (unsigned short)50243)) != (((/* implicit */int) var_7)))) ? ((-(12975087134053220980ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) var_2);
            var_15 = ((/* implicit */unsigned long long int) (-(arr_3 [i_1])));
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_6 [i_1] [13ULL] [i_2])) ? (((/* implicit */int) (unsigned short)36490)) : (((/* implicit */int) var_3))))));
            arr_11 [i_1] [i_2] = ((signed char) var_4);
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (var_9))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8176))) : (var_1)))) ? (((/* implicit */int) arr_7 [i_1] [i_3] [i_3])) : ((-(((/* implicit */int) (short)-30653))))));
            var_18 = ((/* implicit */unsigned long long int) var_8);
        }
        arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)40262)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        arr_25 [i_7] = ((/* implicit */unsigned long long int) ((signed char) var_6));
                        arr_26 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) 16U);
                    }
                } 
            } 
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) + (16811974164655805921ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))))))));
        }
        for (signed char i_8 = 1; i_8 < 10; i_8 += 4) /* same iter space */
        {
            arr_31 [i_4] [i_8] = ((/* implicit */unsigned long long int) (unsigned short)65509);
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 3) 
                    {
                        {
                            arr_40 [(unsigned short)9] [(signed char)9] [i_8] [(signed char)9] [i_9 - 1] [i_10] [i_11] = ((/* implicit */short) var_10);
                            var_20 |= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                    } 
                } 
                arr_41 [i_4] [i_4] [i_4] &= ((/* implicit */long long int) var_5);
            }
            for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_4))));
                var_22 = ((/* implicit */signed char) (-(((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)0))))));
                var_23 |= ((/* implicit */unsigned short) var_2);
                arr_44 [i_4] [1] [i_8] [4LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32768)))))));
            }
            for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 3) /* same iter space */
            {
                arr_48 [i_4] [i_8] [i_13] [5ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_8 + 4])) ? (((/* implicit */int) arr_42 [i_8 + 1])) : (((/* implicit */int) var_6))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65534)))))));
            }
            arr_49 [i_4] [i_8] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 6664564666063595600LL))))));
            /* LoopNest 3 */
            for (unsigned int i_14 = 1; i_14 < 11; i_14 += 3) 
            {
                for (unsigned short i_15 = 1; i_15 < 13; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-19255)))))));
                            var_26 *= ((/* implicit */signed char) (unsigned short)9964);
                            var_27 = ((/* implicit */unsigned char) (~(var_10)));
                        }
                    } 
                } 
            } 
        }
        arr_60 [(short)7] [8ULL] = arr_12 [5] [i_4];
        arr_61 [13] = (unsigned short)65509;
    }
}
