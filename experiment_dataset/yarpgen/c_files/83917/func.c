/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83917
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) var_5);
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_2))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_6);
                arr_9 [i_0] [i_1] [i_0] = var_1;
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_16 ^= ((/* implicit */long long int) var_1);
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) var_5));
                        var_17 = ((/* implicit */signed char) var_13);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        var_18 = var_7;
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
                        arr_21 [i_3] [i_1] [i_2] = ((/* implicit */signed char) (-(var_9)));
                        var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_7)))));
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] = ((unsigned long long int) 1883371450);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                    {
                        var_20 *= var_12;
                        var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) var_1)));
                    }
                    arr_25 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) var_3);
                    var_22 = ((/* implicit */signed char) var_6);
                }
                for (long long int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) (+((+(4095ULL)))));
                        arr_30 [i_7] [i_1] [i_2] [i_7] [i_0] [i_0] [i_7] = ((/* implicit */long long int) var_5);
                    }
                    for (long long int i_9 = 3; i_9 < 23; i_9 += 3) 
                    {
                        arr_34 [i_0] [i_0] [i_1] [i_0] [i_9] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((signed char) ((signed char) var_0))))));
                        arr_35 [i_0] [i_1] [i_2] [i_9 - 3] = ((/* implicit */long long int) ((unsigned long long int) (~(var_10))));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        var_25 *= ((/* implicit */unsigned int) ((_Bool) (-(var_6))));
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned long long int) var_11);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_3))))))));
                        var_27 = ((/* implicit */signed char) var_3);
                        var_28 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_3))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        arr_44 [i_0] [i_1] [i_0] [i_7] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)15))));
                        arr_45 [i_12] = var_13;
                    }
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        arr_48 [i_13] [i_1] [i_7] [i_1] [i_1] [i_1] [i_0] = ((unsigned long long int) 9223372036854775807ULL);
                        var_29 = ((/* implicit */_Bool) ((int) var_6));
                        var_30 += ((/* implicit */unsigned long long int) var_11);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) (~((~(var_6)))));
                        var_32 = ((/* implicit */signed char) ((long long int) var_10));
                        var_33 = (+(var_5));
                        var_34 = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) var_3)))));
                        arr_53 [i_0] [i_1] [i_2] [i_7] [i_14] = ((/* implicit */_Bool) (+(((unsigned long long int) var_2))));
                    }
                    var_35 ^= ((/* implicit */long long int) ((_Bool) var_1));
                }
            }
            arr_54 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_10)))));
        }
        var_36 = ((/* implicit */unsigned int) ((unsigned long long int) min(((~(var_5))), (var_10))));
    }
    var_37 = ((/* implicit */long long int) (-(min((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_13))))))));
    var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
}
