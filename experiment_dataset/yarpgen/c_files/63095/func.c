/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63095
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        arr_4 [i_0 - 1] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_0 [12LL] [i_0])))))))) >> ((((+((+(((/* implicit */int) var_14)))))) + (110)))));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = arr_1 [i_1];
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */int) (signed char)127)) >> (((140733193388032LL) - (140733193388027LL))))), ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))));
            var_17 |= ((/* implicit */unsigned short) ((min(((-(((/* implicit */int) arr_3 [(signed char)8] [(unsigned char)9])))), ((-(((/* implicit */int) var_7)))))) + ((+(((/* implicit */int) min((var_10), (var_9))))))));
        }
        for (long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 17; i_5 += 1) 
                {
                    arr_23 [i_1] [i_4] [i_4] [i_1 + 1] [i_1] = arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5 + 1];
                    arr_24 [(unsigned char)13] [i_1] [i_4] [i_1 - 1] = ((/* implicit */signed char) var_1);
                }
                var_18 -= ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
                var_19 -= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)37))));
            }
            for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)107)))))))));
                var_21 -= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_3 [i_1 - 1] [i_3]))))));
            }
            arr_28 [(signed char)1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))))))) : ((-((-(((/* implicit */int) arr_11 [i_1] [i_3] [i_1]))))))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_32 [i_1] [i_7] = ((/* implicit */signed char) (-((-(-140733193388032LL)))));
            arr_33 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1 - 1])) || (((/* implicit */_Bool) arr_9 [i_1] [i_1])))))));
        }
        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    {
                        arr_42 [(unsigned char)4] [i_8] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)25)) >> (((-6806078192915571719LL) + (6806078192915571724LL)))));
                        arr_43 [i_10] [i_9] [i_10] &= ((/* implicit */long long int) var_12);
                    }
                } 
            } 
            var_22 -= var_2;
        }
    }
    var_23 = ((/* implicit */long long int) (-((~((~(((/* implicit */int) var_4))))))));
}
