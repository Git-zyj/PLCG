/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8842
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
    var_12 = ((/* implicit */long long int) (((~(var_9))) != (((((/* implicit */_Bool) var_3)) ? ((+(var_9))) : (((/* implicit */int) var_3))))));
    var_13 = ((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */int) var_4))));
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_11) != (2381308278U)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)24346)) : (var_6)))))), (var_2)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) arr_0 [i_0 + 1] [15]);
        var_16 += ((/* implicit */_Bool) arr_2 [(_Bool)1] [(unsigned char)16]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 23; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */int) (short)0);
                            arr_18 [i_3] [(short)15] [(unsigned short)19] [10] [(signed char)17] [i_3] = ((/* implicit */unsigned long long int) ((var_10) - (((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)255)))))))));
                            var_18 = ((/* implicit */_Bool) ((int) (signed char)-25));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_15 [i_3 - 1] [(unsigned short)7] [i_3 + 1])) & (((((/* implicit */_Bool) max((var_5), (arr_17 [i_4] [0ULL] [(_Bool)1] [(short)6] [i_4])))) ? (((((/* implicit */_Bool) arr_11 [(short)22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7))) : (((/* implicit */unsigned long long int) arr_3 [i_3 + 1])))))))));
                        }
                        for (signed char i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            arr_21 [(short)4] [i_3] [1ULL] [(signed char)4] [(unsigned char)14] = ((/* implicit */_Bool) var_7);
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((~(arr_10 [i_4] [0]))) <= ((~(((unsigned long long int) 7124293590668272889ULL)))))))));
                            var_21 = ((/* implicit */unsigned short) ((unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (var_7))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((arr_4 [i_2 + 1]), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)-22314)))) && (((/* implicit */_Bool) arr_16 [i_2 - 1] [i_4] [i_3 + 1] [i_3 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 3]))))))))));
                        }
                        var_23 = ((/* implicit */_Bool) max((var_23), (((((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [0ULL] [20] [(unsigned char)2] [i_4]))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_4] [(signed char)10] [(_Bool)0] [(unsigned short)0] [i_4])) ? (var_6) : (((/* implicit */int) var_1)))))))));
                        arr_22 [(unsigned short)2] [4] [(_Bool)1] [(unsigned char)16] [i_3] [3LL] = ((/* implicit */unsigned char) ((((((/* implicit */int) max((arr_7 [i_3 + 1]), (arr_7 [i_3 - 1])))) + (2147483647))) >> (((var_6) + (2110258516)))));
                    }
                } 
            } 
        } 
        arr_23 [15] = (unsigned char)247;
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    arr_30 [(signed char)1] [(signed char)1] [22LL] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_12 [i_8] [(_Bool)1] [(short)16]))))));
                    var_24 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)253)) ^ (((/* implicit */int) var_3))))), (((((/* implicit */unsigned int) arr_24 [14U] [1] [(short)5])) * (var_11)))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(arr_24 [15] [11ULL] [(signed char)0])))))) ? ((~(((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [14LL] [16] [(unsigned short)12] [(signed char)16] [(unsigned short)0] [16] [22])) != (((/* implicit */int) var_3))))), (var_8))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 3; i_10 < 20; i_10 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */short) (-(min((((var_7) * (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1444)))))))));
                                arr_37 [i_10] [i_10] = max(((+(((/* implicit */int) arr_5 [i_7 + 1])))), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [(unsigned char)22] [(signed char)13])) && (((/* implicit */_Bool) var_10))))), ((unsigned char)2)))));
                                arr_38 [1] [(short)3] [5LL] [i_10] [(short)23] = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned char)245)) * (((/* implicit */int) arr_27 [(unsigned short)4] [i_7 + 1])))), (((/* implicit */int) min((var_3), ((unsigned char)253))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_42 [9] [17] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_0) != (((/* implicit */int) var_1)))))));
        var_27 = ((/* implicit */unsigned long long int) var_10);
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (var_9) : (((/* implicit */int) var_8))));
}
