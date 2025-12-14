/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94403
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                                var_12 = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) arr_9 [i_2] [i_2] [i_2] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_2 [i_4])))))) : (min((((/* implicit */long long int) arr_1 [i_3])), (-7918138146097750826LL)))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) -1)), (7918138146097750825LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), (arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0])), (arr_4 [(signed char)4] [i_1] [(signed char)4])))))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3 - 1] [(signed char)2] [i_3] [i_3] [i_3 + 1] [i_3 + 1])) > (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) 7918138146097750814LL)))))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) -28)) : (9223372036854775807LL)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) arr_6 [i_1 + 2] [i_0 + 1]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (~(var_10)));
    var_17 = ((/* implicit */_Bool) var_0);
    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((18446726481523507200ULL) % (var_3))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))))))));
}
