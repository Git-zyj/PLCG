/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68920
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
    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) && (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3)))))))));
    var_12 = ((/* implicit */unsigned int) var_2);
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max(((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))))), (((/* implicit */long long int) var_2)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 += ((/* implicit */short) arr_0 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
                arr_6 [i_1] [i_2] [i_1] = ((/* implicit */int) (+((~(arr_0 [i_0] [i_0])))));
                var_16 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))));
                var_17 = ((/* implicit */_Bool) ((int) -2147483642));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_8))))))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    var_19 = ((/* implicit */signed char) var_0);
                    /* LoopSeq 2 */
                    for (int i_5 = 2; i_5 < 8; i_5 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_1 - 1])) >> ((((((~(2147483641))) - (-2147483634))) + (33)))))) ? (max((-2147483642), (((/* implicit */int) arr_12 [i_1] [i_5])))) : ((+((+(((/* implicit */int) arr_8 [i_3] [i_3] [i_0]))))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17873))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_13 [i_4] [i_4] [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4 + 1])));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 8; i_6 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_12 [i_4] [i_4])))))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (arr_9 [i_4] [i_4] [i_3] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59)))))) ? ((+(arr_9 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) (+(2147483628)))))))));
                        var_24 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_3]))))));
                        var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)48779))));
                    }
                }
                arr_18 [i_0] [i_1] [(unsigned char)9] [i_1] = ((/* implicit */unsigned short) var_9);
                var_26 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 9218179110125823046LL))))), (max((max((arr_14 [i_0] [i_0] [i_1] [(unsigned short)6] [i_3]), (((/* implicit */int) arr_1 [i_3])))), ((~(((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_3]))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
            {
                var_27 = arr_9 [i_0] [i_0] [i_0] [i_0];
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_28 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_7] [7LL] [i_9])) : (((/* implicit */int) (unsigned short)50801))))));
                            arr_26 [i_7] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */int) arr_1 [i_0]);
                        }
                    } 
                } 
            }
            var_29 |= ((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0]);
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            var_30 ^= ((/* implicit */_Bool) max((15978618160750779691ULL), (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (signed char)67)), (arr_27 [i_10 - 1] [(unsigned char)8] [i_0]))))))));
            var_31 = ((/* implicit */_Bool) 15978618160750779691ULL);
        }
        var_32 += ((/* implicit */unsigned int) arr_1 [i_0]);
        var_33 ^= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [(_Bool)1]))))), (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (18446744073709551614ULL))))), (((/* implicit */unsigned long long int) arr_27 [i_0] [2] [i_0]))));
    }
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((6005485113897536715LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_0))))))) ? (max((((/* implicit */int) var_4)), (var_10))) : (var_7)));
}
