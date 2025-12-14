/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90165
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)-20841)) > (((/* implicit */int) (short)-20834)))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) arr_2 [i_0]);
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_2))));
        }
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_15 [i_3] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))))));
                        var_17 = (i_0 % 2 == 0) ? (((((var_11) << (((((/* implicit */int) arr_14 [3LL] [i_0])) + (85))))) > (((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_4])))))) : (((((var_11) << (((((((/* implicit */int) arr_14 [3LL] [i_0])) + (85))) + (34))))) > (((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_4]))))));
                        arr_16 [i_0] [i_0] [20] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) ? (arr_8 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (arr_3 [i_2 - 1] [i_2 - 1]))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_2 + 1] [i_2 + 1]);
        }
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_19 = ((/* implicit */short) arr_4 [i_0]);
            var_20 = (-(-2931598653718605303LL));
        }
    }
    var_21 = (signed char)-2;
    var_22 = ((/* implicit */int) (_Bool)1);
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (var_5))))))) ? (((long long int) ((var_9) & (var_11)))) : (((/* implicit */long long int) var_7))));
    var_24 = ((/* implicit */short) (-(((/* implicit */int) max((var_3), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))))));
}
