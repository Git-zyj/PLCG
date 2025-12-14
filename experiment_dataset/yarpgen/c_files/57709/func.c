/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57709
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_3]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_4])) ? ((~(((/* implicit */int) max((arr_1 [(signed char)5]), ((unsigned short)30495)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 5071514740678296447ULL)) && (((/* implicit */_Bool) (unsigned short)12043)))))));
                            arr_11 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) var_1)))))), ((unsigned short)32448)));
                            var_21 ^= ((/* implicit */short) ((arr_6 [i_0] [i_2] [i_3] [(unsigned short)0]) >= (17446826777298787900ULL)));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_0] &= ((/* implicit */short) (~((~(((/* implicit */int) arr_14 [i_1] [i_0]))))));
                            arr_17 [i_0] [i_1] [i_0] [i_3] [(signed char)6] = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) (unsigned short)33088)))));
                            var_22 = ((((/* implicit */_Bool) (unsigned short)46462)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7904))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_12))));
                            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)19067)) ? (((/* implicit */int) arr_14 [i_0] [i_0])) : (((/* implicit */int) (short)15030)))) + (((/* implicit */int) ((unsigned short) 5992464695444382764ULL)))));
                            var_25 += ((/* implicit */signed char) var_0);
                            arr_22 [(short)5] [(short)8] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)37359)) ? (((/* implicit */int) arr_18 [i_0] [i_3] [9ULL] [i_1] [i_6] [6ULL])) : (((/* implicit */int) var_13)))))) ? ((+(((/* implicit */int) max(((unsigned short)46450), (((/* implicit */unsigned short) (signed char)12))))))) : (((/* implicit */int) arr_0 [(unsigned short)3]))));
                        }
                        var_26 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) (unsigned short)19083)) : (((/* implicit */int) (short)15025)))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_27 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7])) * (((/* implicit */int) (short)4618))))));
                        var_28 = arr_0 [i_0];
                    }
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        arr_30 [i_1] [i_8] = ((/* implicit */unsigned long long int) var_6);
                        arr_31 [i_0] [(unsigned short)4] [(signed char)6] [i_2] [i_8] [i_8] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-104))))) ? (((((/* implicit */_Bool) (short)3918)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [5ULL] [i_2] [(signed char)9] [i_0]))) : (arr_4 [(unsigned short)4]))) : (max((18446744073709551592ULL), (((/* implicit */unsigned long long int) var_8)))))));
                    }
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)9)), ((short)3769))))) : (((arr_4 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(signed char)4]))))))))));
                    arr_32 [i_0] [i_1] [(unsigned short)5] = ((/* implicit */signed char) arr_23 [i_1]);
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((18446744073709551605ULL) <= (18446744073709551615ULL))))));
}
