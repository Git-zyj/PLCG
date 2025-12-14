/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62665
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
    var_13 = ((/* implicit */int) var_0);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((((((/* implicit */int) arr_0 [i_0])) < (((((/* implicit */int) var_8)) * (((/* implicit */int) var_9)))))) || (((((/* implicit */int) arr_1 [i_0])) < ((-(((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)11770)), ((unsigned short)51255)))) + (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((((/* implicit */int) (signed char)20)) > (((/* implicit */int) var_6)))) || (var_7)))) : (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_5 [i_1] = ((/* implicit */long long int) ((unsigned char) arr_2 [i_1]));
            var_16 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)92)));
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                var_17 = (~(((/* implicit */int) arr_2 [i_2 + 2])));
                var_18 = ((/* implicit */_Bool) min((var_18), (((((((/* implicit */int) arr_2 [(unsigned short)14])) & (((/* implicit */int) var_9)))) <= (((/* implicit */int) var_3))))));
                var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) var_10)))))));
            }
            for (short i_3 = 4; i_3 < 13; i_3 += 3) 
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 3])) % (((/* implicit */int) var_11))));
                var_21 -= ((/* implicit */unsigned char) var_6);
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_12))));
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) -3932731226552177641LL))));
                var_24 *= ((((/* implicit */int) arr_9 [i_1])) >= (((/* implicit */int) arr_9 [i_0])));
                arr_12 [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1])) && (((/* implicit */_Bool) var_8))));
            }
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 3932731226552177641LL);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_9))));
            var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
        }
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_27 = arr_16 [i_6];
        arr_18 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_6] [i_6])) | (((/* implicit */int) var_0))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_28 = ((/* implicit */short) arr_2 [i_7]);
            var_29 -= ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_8] [i_7])) == (((/* implicit */int) arr_0 [i_7]))));
        }
        arr_24 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_7])) * (((/* implicit */int) var_0))));
        var_30 = ((/* implicit */signed char) var_5);
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_4 [i_7]))));
                        var_32 -= ((((((/* implicit */int) var_12)) & (((/* implicit */int) arr_14 [i_7])))) >= (((/* implicit */int) arr_32 [i_11 - 1] [i_11 - 1] [i_10] [i_11 - 1])));
                        var_33 -= ((((/* implicit */int) arr_21 [i_11 - 1])) % (((/* implicit */int) arr_21 [i_11 - 1])));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_35 [i_12] [(_Bool)1] = ((/* implicit */_Bool) var_4);
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_12])) + (((/* implicit */int) arr_34 [i_12]))))) ? (((((/* implicit */_Bool) arr_34 [i_12])) ? (((/* implicit */int) arr_34 [i_12])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) min((arr_34 [i_12]), (((/* implicit */unsigned short) var_12)))))));
    }
}
