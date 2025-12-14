/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64175
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) -4586579219491879117LL))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (((unsigned short) var_13)))))));
    var_15 = ((/* implicit */short) ((var_7) + (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) var_9)), (var_7)))))));
    var_16 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_3 [(signed char)5] [(signed char)5] = ((/* implicit */unsigned short) (+(arr_0 [i_0 - 1])));
        arr_4 [(unsigned short)7] = ((/* implicit */short) arr_0 [i_0 - 1]);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((var_13) - (var_13)));
        var_17 = ((/* implicit */unsigned int) (!(arr_2 [i_0 - 1])));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_13 [i_1 - 1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (-((~(((/* implicit */int) var_12))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        arr_16 [i_2] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_2]))));
                        arr_17 [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_2);
                        arr_18 [i_4] [i_4] [i_4] [i_3] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) + (var_13)));
                    }
                    arr_19 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_13)))) ? (((int) arr_14 [i_1])) : ((-(arr_1 [i_1] [i_1])))));
                    arr_20 [i_3] [i_2] [(unsigned char)0] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_2 [i_2])))) + (2147483647))) << (((((arr_0 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 - 3]))))) - (4294967259U)))));
                    arr_21 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_3 - 3])) ? (arr_1 [i_1 + 1] [i_3]) : (arr_1 [i_1 - 1] [i_1 + 1])));
                }
            } 
        } 
        arr_22 [i_1 + 1] = ((/* implicit */unsigned char) (-(((var_4) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65024)))))));
        arr_23 [i_1] = ((/* implicit */int) var_3);
    }
    var_18 = ((/* implicit */long long int) max((((unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_6)) + (22559)))))), (((/* implicit */unsigned int) var_2))));
}
