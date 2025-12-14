/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9385
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
    var_10 -= (+((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8))))));
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = max(((~(((((/* implicit */_Bool) 5316597225678263715LL)) ? (((/* implicit */long long int) -1931534168)) : ((-9223372036854775807LL - 1LL)))))), (max((var_2), (arr_1 [i_1 + 1] [i_1 + 1]))));
            arr_6 [i_1] = ((/* implicit */unsigned char) (-((+(max((-1577524066563539194LL), (var_7)))))));
            arr_7 [i_1] = (~(min((-9223372036854775806LL), (((long long int) var_1)))));
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((arr_0 [i_0]) < (arr_0 [i_1])));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_13 [i_0] [i_2] = (-((-(((/* implicit */int) var_0)))));
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 20; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_12 |= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_7)))))));
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((long long int) arr_2 [i_3])) > (arr_12 [i_5]))))));
                            var_14 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_4 + 1] [i_3 - 3]))));
                            var_15 = arr_9 [i_2];
                        }
                    } 
                } 
            } 
            arr_20 [17LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-9223372036854775789LL))))));
            arr_21 [i_0] [(unsigned char)3] [(unsigned char)3] = ((long long int) (-(arr_0 [i_0])));
        }
        for (long long int i_6 = 3; i_6 < 20; i_6 += 4) 
        {
            arr_24 [i_0] [i_6] [i_6 - 1] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_18 [i_6 - 3] [(unsigned char)8] [(unsigned char)8] [i_6] [i_0] [i_6] [i_6])) || (((/* implicit */_Bool) arr_18 [i_6 - 3] [i_6] [i_6] [i_6] [i_0] [i_0] [2]))))));
            var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */_Bool) min((arr_19 [i_6] [i_6 - 3] [i_6] [i_6 - 2] [i_6]), (arr_19 [i_6 - 1] [i_6] [13] [i_6 - 2] [i_6 - 3])))) ? (var_4) : (((max((-2242697877447698988LL), (-2242697877447698988LL))) & (arr_19 [i_6] [i_6] [i_6 - 1] [16LL] [i_0])))))));
        }
        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            arr_27 [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) : ((+((-9223372036854775807LL - 1LL)))))), ((+((-9223372036854775807LL - 1LL)))));
            var_17 = max((max((((((/* implicit */_Bool) arr_17 [i_0])) ? (var_2) : (var_7))), ((+(arr_19 [i_7] [i_7] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_4)) ? (arr_17 [i_0]) : (arr_17 [i_0]))));
        }
        arr_28 [i_0] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_26 [i_0] [i_0]))))));
    }
    for (long long int i_8 = 1; i_8 < 10; i_8 += 3) 
    {
        var_18 -= ((/* implicit */int) min((arr_11 [i_8 + 1]), ((-((+(var_4)))))));
        var_19 = ((/* implicit */int) arr_4 [i_8] [i_8]);
    }
}
