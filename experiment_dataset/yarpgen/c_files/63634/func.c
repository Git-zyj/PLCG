/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63634
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
    var_15 = ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_2)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [(unsigned short)0] [i_0])))))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0])))))), (max((((long long int) arr_2 [i_0])), (((/* implicit */long long int) arr_2 [i_0]))))));
    }
    var_18 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_19 |= (short)-3328;
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [24LL])))))));
            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_2])) ? ((-(arr_0 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_2 [i_2]))))))) <= (arr_3 [i_1] [i_1])));
            var_22 = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
        }
        arr_7 [i_1] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) -8826496963485500864LL)) < (12721151478277746145ULL)));
        /* LoopNest 3 */
        for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        arr_17 [i_5] [i_5] [i_3 + 1] [i_3 + 1] [i_1] = ((/* implicit */unsigned long long int) var_9);
                        arr_18 [i_1] [i_1] [i_3 - 2] [5U] [(short)0] = ((((/* implicit */_Bool) (unsigned short)13039)) ? (arr_9 [i_1] [15LL]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)49))))));
                        arr_19 [i_1] [i_3 + 1] [i_3 + 1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((((/* implicit */unsigned long long int) max((var_0), (var_14)))), (((12721151478277746154ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) 12721151478277746154ULL);
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (arr_0 [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [24LL] [i_6])))) : ((-(arr_3 [i_6] [i_6]))))), (5725592595431805454ULL)));
        arr_22 [i_6] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [13] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((((/* implicit */int) arr_2 [(signed char)8])) | (arr_5 [i_6] [i_6] [i_6]))))));
        arr_23 [i_6] [i_6] |= ((/* implicit */int) 5725592595431805471ULL);
    }
    var_25 |= ((/* implicit */long long int) (-(((/* implicit */int) min((var_9), (var_12))))));
}
