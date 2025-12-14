/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92741
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_1 + 1] [i_0])));
                var_14 += ((/* implicit */long long int) ((((((((/* implicit */unsigned int) arr_1 [i_0])) < (arr_2 [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))) : (max((arr_2 [i_0] [i_0] [i_1 + 3]), (((/* implicit */unsigned int) arr_0 [i_1 - 1])))))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1 - 2])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((var_1) << ((((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) var_12)))))) - (17352804510285917689ULL))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_16 = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) && (((/* implicit */_Bool) arr_5 [9U] [i_3]))))));
                arr_8 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_6 [i_2] [i_2]) : (arr_7 [i_2])))) ? (((int) arr_6 [i_2] [i_2])) : ((+(((/* implicit */int) arr_4 [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2])) == (((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_5]))))), ((~(arr_5 [i_2] [i_2]))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2])) && ((!(arr_13 [i_4] [i_4] [i_4] [i_2])))));
                            arr_14 [i_3] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((/* implicit */int) ((((((/* implicit */int) arr_4 [i_2])) <= (arr_7 [10]))) || (((/* implicit */_Bool) arr_10 [i_2] [i_3] [5LL] [i_2]))))) : (arr_7 [i_5])));
                            var_19 = ((/* implicit */_Bool) arr_5 [(_Bool)1] [i_3]);
                        }
                    } 
                } 
                arr_15 [i_2] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2])) ? (arr_9 [i_2] [i_3] [i_3]) : (arr_9 [i_3] [i_3] [14U])))));
            }
        } 
    } 
}
