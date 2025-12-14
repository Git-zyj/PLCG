/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87695
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_10 ^= ((((/* implicit */_Bool) -7000869259905228601LL)) ? (arr_5 [6] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_11 &= ((/* implicit */short) var_9);
                        arr_11 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((7000869259905228586LL) - ((~(-7000869259905228601LL)))));
                        var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7000869259905228586LL)) ? (-7000869259905228586LL) : (((/* implicit */long long int) var_0))))));
                    }
                } 
            } 
            var_13 = ((/* implicit */long long int) var_3);
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (long long int i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_14 ^= var_2;
                            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_9))))) : (var_4)));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_0))));
                            arr_23 [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_7 - 2] [i_0] [(unsigned char)16] [i_7] [i_0])) ? (((/* implicit */int) arr_12 [i_0])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned short) var_0);
            var_18 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0]);
        }
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            arr_26 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)20))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                for (long long int i_10 = 2; i_10 < 16; i_10 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(var_3))))));
                        var_20 -= ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
            arr_33 [i_0] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (7000869259905228611LL))))));
        }
        arr_34 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-24635))));
        arr_35 [i_0] = ((((/* implicit */_Bool) (((+(((/* implicit */int) var_6)))) + ((~(469333395)))))) ? (7000869259905228611LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
    }
    var_21 ^= ((/* implicit */unsigned short) min(((((_Bool)0) ? (max((7000869259905228585LL), (var_4))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3262430385594663757ULL)) ? (((/* implicit */long long int) var_0)) : (-7000869259905228586LL)))) <= (((((/* implicit */_Bool) (unsigned char)4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((0LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)29034))))) ? (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */unsigned long long int) var_4)) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -469333400)) || (((/* implicit */_Bool) 4611686018427387904LL)))))))))));
}
