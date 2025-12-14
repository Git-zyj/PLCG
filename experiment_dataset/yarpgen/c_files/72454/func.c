/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72454
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
    var_14 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((int) 116702432695851454LL))), (1290540361098781088LL)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */signed char) max((((max((2097148LL), (arr_0 [i_0 + 3]))) >> (((((/* implicit */int) arr_1 [i_0])) + (24154))))), ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (-1290540361098781092LL)))))));
        var_16 -= ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */short) ((signed char) arr_4 [i_1 - 1] [i_1 - 1]));
                    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (long long int i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    {
                        arr_17 [i_1 - 1] [i_4] [i_5] [i_5] [i_6] [i_4] = ((/* implicit */long long int) arr_16 [i_1] [i_1] [(short)9] [i_1] [i_5] [i_1]);
                        arr_18 [i_5] = ((/* implicit */short) var_5);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 1535430634916021929LL)) ? (arr_11 [i_1 - 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))))), (((/* implicit */unsigned int) (_Bool)1))));
        arr_19 [i_1] = ((/* implicit */signed char) (-((+(288230101273804800LL)))));
    }
    for (unsigned int i_7 = 4; i_7 < 24; i_7 += 4) 
    {
        var_19 &= (~(-1290540361098781095LL));
        var_20 ^= ((/* implicit */unsigned char) min(((short)-19618), ((short)-6491)));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
    {
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)24)) >> (((-1290540361098781092LL) + (1290540361098781119LL)))))) ? (-2097152LL) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-19638))))));
        var_22 = ((/* implicit */signed char) 9223372036854775807LL);
        arr_24 [i_8] [i_8] = ((int) (!(((/* implicit */_Bool) -1290540361098781092LL))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_9 = 1; i_9 < 22; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_32 [(unsigned char)12] [i_10] = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_27 [i_9 + 3])));
            arr_33 [(short)6] [i_10] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)19599))) - (444121493787093619LL)));
            var_23 = 0LL;
            arr_34 [i_10] [i_10] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-80)) ? (0LL) : (-2097152LL))) ^ (((((arr_28 [i_10] [i_10]) + (9223372036854775807LL))) << (((6689504846147293244LL) - (6689504846147293244LL)))))));
        }
        for (signed char i_11 = 1; i_11 < 23; i_11 += 4) 
        {
            var_24 &= ((/* implicit */signed char) ((long long int) (_Bool)1));
            arr_37 [i_11] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)65)))))));
            var_25 &= ((long long int) (-(arr_26 [i_11])));
            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) arr_21 [i_9 + 2])) : (((/* implicit */int) (signed char)36))));
        }
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(arr_26 [i_9 - 1]))))));
    }
}
