/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79935
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */short) (signed char)117))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-22)), (1503170426U)))) : (((18446744073709551615ULL) >> (((8215582806351010685ULL) - (8215582806351010635ULL)))))))) ? ((-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)20193))))))) : (((/* implicit */int) min(((signed char)-22), (min((var_7), ((signed char)-42))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 4; i_3 < 20; i_3 += 2) 
                    {
                        var_15 ^= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) 1503170443U)) - (arr_7 [i_0] [i_3])))));
                        arr_9 [i_0] [i_3] [16LL] [i_1] [i_0] = ((/* implicit */long long int) (_Bool)1);
                        var_16 ^= ((/* implicit */signed char) (((+(9223372036854775803LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_2 + 1])))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            var_17 *= ((/* implicit */signed char) ((2791796870U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_3])))));
                            arr_12 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8))) : (2791796870U)));
                            arr_13 [i_4 - 1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) ^ (((unsigned long long int) arr_5 [i_0] [i_2 + 2] [i_3] [i_4 - 1]))));
                            var_18 = ((((/* implicit */_Bool) 2791796866U)) ? (arr_0 [i_0]) : (-9223372036854775804LL));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((2791796869U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2 + 4] [i_3 + 1] [i_3] [i_5 + 1])))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (((/* implicit */unsigned long long int) 1503170425U)) : (10463409398286146075ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (arr_10 [i_3] [i_3 - 4] [i_3 + 2] [i_3] [i_3 - 1])));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) (unsigned char)253);
                            arr_20 [i_0] [i_0] [i_1] [i_0] = arr_14 [i_7] [i_1] [(signed char)1] [i_6];
                            arr_21 [i_0] [i_0] [i_2 + 2] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7] [i_1] [i_2 + 4] [10LL]))) + (2791796884U))));
                        }
                        arr_22 [i_0] = ((((/* implicit */_Bool) -9223372036854775804LL)) ? (((((/* implicit */_Bool) 9223372036854775803LL)) ? (arr_2 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)23097))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0])))));
                    }
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        var_22 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_8] [i_2 - 1] [0ULL] [i_0 + 2]))))), (2608463691511491557LL));
                        var_23 = ((/* implicit */unsigned long long int) 9223372036854775801LL);
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2305843009213693952ULL)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) arr_5 [i_0] [i_0] [9U] [i_2 + 4]))));
                        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)60)) - (((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (_Bool)1))))));
                        arr_32 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (-2628533885276564189LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7029)))));
                        var_25 = ((/* implicit */unsigned char) (+(3639429879522657655ULL)));
                    }
                    var_26 &= ((/* implicit */_Bool) ((((3895241450U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max(((-(arr_2 [5U]))), (((/* implicit */long long int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 3371406154U)), (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */long long int) 255082970)) : (-9223372036854775796LL)))) : (min((34359738366ULL), (((/* implicit */unsigned long long int) 1503170426U))))))));
                    arr_33 [i_1] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((arr_15 [i_2] [i_1] [i_1] [i_1] [i_0]) - (((/* implicit */unsigned long long int) arr_2 [i_0 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [4ULL] [(short)4]))) : (((18ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
}
