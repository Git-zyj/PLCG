/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81737
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
    var_14 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)13));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            var_15 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_8)))));
            var_16 = ((/* implicit */unsigned char) arr_1 [i_1]);
        }
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [(short)4]);
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min(((unsigned char)13), ((unsigned char)112))))));
        }
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            var_19 = ((/* implicit */int) min((var_19), (var_7)));
            var_20 = ((unsigned short) min((4829285046502605031LL), (((/* implicit */long long int) (signed char)-28))));
            arr_10 [i_0] = ((/* implicit */int) (~(min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) : (var_1))), (((/* implicit */unsigned int) arr_3 [i_0 + 1] [5ULL] [i_3]))))));
            var_21 = ((/* implicit */short) max((var_21), (max((((/* implicit */short) ((_Bool) ((unsigned char) arr_5 [i_0] [i_3 - 1])))), (min((((/* implicit */short) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))), (min((((/* implicit */short) (signed char)-9)), (arr_6 [10U] [i_3])))))))));
            arr_11 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)63)))) + (max((((/* implicit */unsigned int) arr_0 [i_0])), (var_1)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((var_7) > (((/* implicit */int) arr_3 [i_0] [i_3] [i_3])))))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)4]))) : (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((int) (signed char)-1)) >= (((/* implicit */int) var_2))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_11))))), (var_4)))) & (((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_0])))));
            var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_4])) ? (4057587230U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (-(arr_0 [i_0])))))))));
            var_23 *= ((/* implicit */unsigned char) ((unsigned int) arr_6 [6LL] [i_0 + 1]));
            arr_15 [i_0] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)217)) || (((/* implicit */_Bool) (signed char)-28)))), (((((/* implicit */_Bool) (unsigned char)13)) || (((/* implicit */_Bool) (unsigned char)193))))))), ((signed char)-28)));
        }
    }
    var_24 *= ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */signed char) (unsigned char)63);
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */int) arr_8 [i_5])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_6 [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_5] [4] [i_5]))));
    }
    var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (max((var_7), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4)))))))));
}
