/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81446
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
    var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (var_9)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))), (((/* implicit */int) max((max((var_8), (var_10))), (((/* implicit */signed char) var_5)))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (var_4) : (var_4))), (((/* implicit */int) var_1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_14 -= ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (unsigned char)43)) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (411047490) : (((/* implicit */int) (unsigned short)12359)))))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                    {
                        {
                            arr_13 [i_3] [i_2] [i_3] [0] = ((/* implicit */unsigned char) var_2);
                            var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
                            arr_14 [(_Bool)1] [12] [i_3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_17 &= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)));
                            arr_23 [i_0 - 2] [i_1] [(short)19] [(signed char)0] [i_6] [i_7] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_8 = 2; i_8 < 12; i_8 += 4) 
    {
        var_18 = ((/* implicit */signed char) var_1);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3872335109U)) ? (((((/* implicit */_Bool) (signed char)-88)) ? (-230013144) : (((/* implicit */int) (signed char)29)))) : (-642615694)));
    }
    for (long long int i_9 = 4; i_9 < 17; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_40 [i_11] |= ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775803LL)) ? (-9223372036854775782LL) : (max((-9223372036854775803LL), (((/* implicit */long long int) (unsigned short)64515))))));
                        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) min((var_4), (((/* implicit */int) var_8))))) ? (((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))));
                        var_21 = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((((/* implicit */short) var_5)), (var_11)))) : (max((var_4), (((/* implicit */int) var_7))))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((min((var_6), (var_5))) ? (max((((/* implicit */long long int) var_8)), (-9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */signed char) var_6)))))))))))));
                    }
                } 
            } 
        } 
        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((9223372036854775802LL), (((((/* implicit */_Bool) (short)24539)) ? (-9223372036854775803LL) : (9223372036854775802LL)))))) ? (((/* implicit */int) (_Bool)0)) : (max((((((/* implicit */_Bool) 9223372036854775802LL)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)7))))));
    }
}
