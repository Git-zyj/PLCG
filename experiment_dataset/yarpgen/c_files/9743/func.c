/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9743
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
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(var_5)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_0] [i_0]))))))) > ((+((-(((/* implicit */int) (unsigned char)255))))))));
                                arr_17 [8ULL] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (+(0LL)))) && (((/* implicit */_Bool) (-(var_9))))))) == (((/* implicit */int) (((-(arr_9 [i_1] [i_1] [3LL] [i_1]))) == (((/* implicit */long long int) ((((/* implicit */unsigned int) var_10)) - (var_4)))))))));
                                arr_18 [i_0] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) (~((~(((arr_5 [(signed char)6] [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(18446744073709551615ULL)))))))));
                                arr_19 [i_0] [i_3] = ((/* implicit */long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247))))))) < (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)7)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_26 [i_0] [14ULL] [i_6] [i_2] [i_0] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (unsigned char)255)))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [i_0])))) || (((arr_5 [i_0] [i_0] [7LL]) <= (arr_5 [i_0] [i_5 + 3] [i_5 + 3])))))))))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (-((((~(((/* implicit */int) arr_1 [i_6])))) >> ((((-(((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6])))) + (139))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_33 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [(signed char)1] [i_2] [i_0]))))) * (((((/* implicit */int) (signed char)-84)) / (((/* implicit */int) (signed char)126))))))));
                                var_19 ^= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                                var_20 ^= ((/* implicit */unsigned char) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))) < ((+((-(var_0)))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((22LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) | ((-((~(((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 2; i_9 < 15; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            {
                var_22 = ((/* implicit */_Bool) (-((((+(((/* implicit */int) (unsigned char)0)))) - (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 3 */
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_50 [i_13] [i_12] [i_13] [i_13] [(unsigned char)3] [i_9] = ((/* implicit */long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_13] [i_12] [i_10])))))))));
                                arr_51 [i_13] [i_13] = ((/* implicit */long long int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_9] [i_10])))))))));
                            }
                        } 
                    } 
                } 
                arr_52 [i_10] = ((/* implicit */unsigned char) (-((~((+(arr_35 [i_9])))))));
                arr_53 [(_Bool)1] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((~(arr_42 [i_10] [i_9] [i_9 - 2]))) + ((~(var_9))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_14 = 4; i_14 < 19; i_14 += 4) 
    {
        for (short i_15 = 3; i_15 < 20; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                {
                    arr_61 [i_14] [i_16] [i_14] [i_16] = ((/* implicit */short) (-((-((~(-22LL)))))));
                    var_23 += ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))))));
                    var_24 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) <= (2944112113151766968ULL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 24; i_17 += 4) 
    {
        for (signed char i_18 = 4; i_18 < 23; i_18 += 1) 
        {
            for (int i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                {
                    arr_71 [i_18 + 1] [i_18 + 1] [i_19] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_62 [i_17]))))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) + (-9223372036854775780LL)))) == ((-(var_13))))))));
                    var_25 = ((/* implicit */long long int) (+((+((+(((/* implicit */int) (unsigned char)86))))))));
                }
            } 
        } 
    } 
}
