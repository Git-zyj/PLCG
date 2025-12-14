/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79151
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */unsigned char) ((((arr_1 [i_0]) != (arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-36)), (arr_1 [i_1])))) : (15766320507736894565ULL)));
                arr_4 [i_1] = max((((/* implicit */unsigned int) var_1)), (((min((1134747506U), (arr_0 [i_0]))) - (3063843084U))));
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_14 = ((/* implicit */short) min((min((((/* implicit */int) (short)127)), (arr_8 [i_3]))), (((/* implicit */int) max((arr_5 [i_2]), (arr_5 [i_2]))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) arr_8 [i_2])) <= (((arr_6 [i_2] [i_2]) % (arr_6 [i_3] [i_2]))))))));
                arr_10 [i_2] [i_2] = ((/* implicit */signed char) var_2);
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (short i_5 = 3; i_5 < 23; i_5 += 2) 
                    {
                        {
                            arr_15 [i_2] [i_4] [i_5] = ((/* implicit */long long int) 4194303U);
                            var_16 = ((/* implicit */int) ((8388607U) >> ((((+(((/* implicit */int) (short)-128)))) + (134)))));
                            var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_2] [i_3] [i_5 + 1]), (arr_9 [(signed char)2] [i_3] [i_3])))) ? (arr_9 [i_3] [i_4] [i_5 - 2]) : (((((/* implicit */_Bool) var_11)) ? (arr_9 [i_2] [i_3] [2ULL]) : (arr_9 [(_Bool)1] [i_3] [i_4])))));
                            arr_16 [i_2] [9ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-128))))) ? (min((((/* implicit */long long int) (short)127)), (var_4))) : (min((-764479875659813607LL), (((/* implicit */long long int) (unsigned short)26011))))))) ? (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3]) : (((((/* implicit */_Bool) (short)6845)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-390155759) >= (((/* implicit */int) arr_14 [i_4] [i_5 - 3])))))) : (3063843069U)))));
                            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)6628)) ? (((/* implicit */unsigned long long int) (-(6U)))) : (18140521932422654998ULL)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((max((max((((/* implicit */unsigned long long int) arr_6 [i_3] [i_2])), (var_5))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)45)), (6U)))))), (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) arr_14 [i_2] [i_3])))))));
            }
        } 
    } 
}
