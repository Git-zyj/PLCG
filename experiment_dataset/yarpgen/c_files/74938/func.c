/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74938
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
    var_13 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((4090668885U), (var_4)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (min((((/* implicit */long long int) 4090668885U)), (var_2))) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((unsigned int) var_8)))))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_1) != (var_9)))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_12)), (((max((3999058655127297177ULL), (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((350244383273463917ULL) == (((/* implicit */unsigned long long int) 3206112936U)))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned long long int) -4967880193744001367LL)))));
                                arr_16 [i_1] [i_2] [i_3] [i_1] [7ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_3 + 3])) ? (5651988544430400137ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 2] [i_5] [i_4 - 1] [i_3 - 1])))))) ? (min((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_1] [i_4] [i_5])), (arr_9 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [5ULL] [i_1] [i_1] [i_1])))));
                                var_18 &= ((/* implicit */unsigned short) 350244383273463913ULL);
                            }
                        } 
                    } 
                } 
                var_19 += ((/* implicit */unsigned short) ((arr_5 [i_2]) > ((+(arr_15 [i_1])))));
                var_20 &= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 204298387U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))))));
            }
        } 
    } 
}
