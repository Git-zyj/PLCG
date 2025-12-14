/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65363
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0 + 2] [(unsigned char)6])) : (((/* implicit */int) var_3))))) : (var_5)));
        arr_3 [i_0 + 1] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])) == (((/* implicit */int) var_1))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_1))))) | ((-(-1LL))))))));
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (0LL) : (0LL))))));
            var_12 = ((/* implicit */signed char) var_1);
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 4; i_3 < 7; i_3 += 1) 
            {
                arr_14 [(unsigned short)3] [i_3] [i_3] [i_3 - 3] = ((/* implicit */short) var_2);
                var_13 |= ((/* implicit */int) (!(((/* implicit */_Bool) 858008782U))));
            }
            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
        }
    }
    for (int i_4 = 1; i_4 < 17; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 3) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), ((((!(((/* implicit */_Bool) arr_20 [(unsigned char)2])))) ? (arr_16 [i_4]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) arr_15 [(short)8]))))) ? (((arr_20 [(_Bool)0]) >> (((var_0) + (2411720131157810255LL))))) : (((/* implicit */long long int) 2096128U))))))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), ((~(var_8)))))) ? ((~(((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (min((((/* implicit */long long int) ((arr_20 [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) var_2)) ? (arr_16 [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_4] [i_5 + 2] [5U] [i_7])) * (((/* implicit */int) arr_25 [i_4] [i_5 - 1] [i_6 + 1] [i_7]))))) ? (((long long int) arr_25 [i_4] [i_5 + 3] [i_6 + 1] [i_7])) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (arr_25 [i_4] [i_6 - 1] [i_5 + 2] [i_4])))))));
                        var_18 = ((/* implicit */long long int) var_7);
                    }
                } 
            } 
        }
        arr_28 [i_4] [i_4] = ((/* implicit */unsigned char) var_2);
        var_19 -= ((/* implicit */unsigned long long int) (!((_Bool)0)));
    }
    var_20 = ((/* implicit */unsigned long long int) var_1);
    var_21 = var_8;
    var_22 = ((/* implicit */unsigned long long int) ((long long int) var_2));
}
