/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84603
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
    var_14 = ((/* implicit */signed char) (-((~((+(((/* implicit */int) var_1))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((unsigned char) var_7));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (1490445149845516680LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)127)) - (((/* implicit */int) (!(((/* implicit */_Bool) -8526948371920789307LL))))))))));
        var_16 -= ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)149)), (3545620835811002449LL)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned long long int) var_11);
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) var_6)))))));
                            var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) arr_8 [i_4 - 1] [(unsigned char)0] [i_2] [i_4 - 1] [i_3 + 1]))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max((var_20), (var_12)));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)128)))))));
                var_22 = ((/* implicit */long long int) var_9);
            }
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) 
                {
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_7 + 1] = ((/* implicit */unsigned int) (-(arr_12 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1])));
                        var_23 ^= ((/* implicit */_Bool) arr_9 [(short)18]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
        {
            arr_21 [i_0] [0LL] [i_0] = ((/* implicit */unsigned char) (+(arr_6 [i_0] [i_0] [i_0] [i_8])));
            arr_22 [i_0] [(unsigned short)6] &= ((/* implicit */unsigned char) var_12);
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                for (unsigned short i_11 = 3; i_11 < 22; i_11 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), ((+(arr_25 [i_11 + 3])))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_3))));
                        arr_30 [i_0] [i_0] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11 + 3] [i_9] [i_0]))) : (arr_6 [i_11 + 3] [i_11 - 1] [i_11 - 2] [i_11 - 1])));
                    }
                } 
            } 
            var_26 -= (!(((/* implicit */_Bool) arr_16 [i_0] [4LL])));
            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_5) : (var_5)));
        }
        /* vectorizable */
        for (unsigned char i_12 = 4; i_12 < 24; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                var_28 = ((var_12) ? (arr_34 [i_0] [i_13 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_13 + 1] [(unsigned char)23] [i_13 + 1] [i_13 + 1]))));
                arr_38 [i_12] [i_12 + 1] [i_12] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
            }
            var_29 ^= ((/* implicit */signed char) var_11);
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_12 - 1] [i_0])) : (((/* implicit */int) var_12))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
    {
        arr_41 [(unsigned short)7] [i_14] = ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_6));
        var_31 += ((/* implicit */unsigned long long int) var_0);
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        arr_44 [3LL] = arr_24 [i_15];
        var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_39 [i_15]) : (arr_39 [i_15])));
        var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    }
    var_34 = ((/* implicit */unsigned short) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_13)))));
}
