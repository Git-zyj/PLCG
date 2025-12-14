/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86633
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
    var_20 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_21 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) (unsigned short)62039)) : (((/* implicit */int) (unsigned short)18))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [10])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_8))))) ? (arr_2 [(short)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((0LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)18942))) || (((/* implicit */_Bool) 1930516923U))))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_12))))) ? (max((((/* implicit */long long int) var_11)), (643003755229209279LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_6 [i_1])))))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 1) 
    {
        arr_10 [i_3] = (+((((!(((/* implicit */_Bool) arr_2 [(unsigned short)0])))) ? (((((/* implicit */int) arr_3 [i_3 - 1] [i_3])) + (((/* implicit */int) arr_0 [i_3] [i_3])))) : (var_13))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) /* same iter space */
        {
            var_24 = (short)(-32767 - 1);
            var_25 = ((/* implicit */long long int) -857719232);
        }
        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) -1916577791);
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6])) ? ((-(max((((/* implicit */unsigned long long int) (unsigned char)158)), (1957688060203488042ULL))))) : (arr_9 [i_3])));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_28 ^= ((/* implicit */unsigned short) min((arr_2 [4U]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63)) / (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (signed char)2)))))))));
                        arr_25 [i_3] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) arr_20 [i_5] [i_5] [i_5 - 1] [i_5] [i_5]);
                    }
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) max((((/* implicit */int) (!(arr_1 [i_3 - 3])))), (((int) (-(((/* implicit */int) (unsigned char)165))))))))));
                    var_30 = ((/* implicit */int) arr_24 [i_3] [i_3] [i_6] [i_6] [i_7]);
                }
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_31 += ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [4U]), (arr_2 [(_Bool)1])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_2 [(unsigned short)4]) : (((/* implicit */unsigned long long int) var_19)))) : (arr_2 [(signed char)6])));
                var_32 = ((/* implicit */int) ((((((/* implicit */int) var_11)) - (arr_6 [i_5]))) > ((-(((/* implicit */int) (!(arr_12 [i_3] [i_3] [i_9]))))))));
            }
            arr_29 [i_5] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_15 [i_3 - 3] [i_5])) ? (arr_5 [i_3 - 2]) : (((/* implicit */unsigned long long int) 19U)))));
        }
    }
}
