/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65765
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
    var_16 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) var_9);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) (!((!(arr_6 [i_0] [i_0])))));
            arr_9 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_5 [i_0]), (arr_5 [i_0])))) ? (((((/* implicit */_Bool) 781061607)) ? (2494759568138458981LL) : (2494759568138458988LL))) : ((-(arr_0 [(signed char)18] [(signed char)18])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_2]))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned int) arr_13 [i_2]);
                var_19 = ((/* implicit */int) ((_Bool) ((min((((/* implicit */unsigned int) arr_3 [i_0])), (arr_2 [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0])))))))));
            }
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_2] = ((/* implicit */unsigned char) 2494759568138458981LL);
                arr_18 [1U] [i_2] [i_2] = ((/* implicit */short) (-(arr_0 [i_0] [i_2])));
            }
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((long long int) 0LL))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (1999597743792758004ULL)))) : (((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (var_1)))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)104)) || (((/* implicit */_Bool) -1LL)))))) ? (min(((~(-1LL))), (((/* implicit */long long int) arr_3 [i_0])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2] [i_0]))))) ? (max((var_4), (((/* implicit */long long int) arr_1 [i_0] [i_2])))) : (min((2494759568138458988LL), (((/* implicit */long long int) -193713168)))))))))));
            var_22 = arr_16 [(unsigned char)2] [i_2] [i_2];
        }
        /* vectorizable */
        for (short i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_5 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_0))))) : (var_13))))));
            var_24 = ((/* implicit */short) var_7);
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) -1534333806)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((int) arr_12 [i_5 - 1])))));
        }
    }
    var_26 = ((/* implicit */unsigned short) var_6);
}
