/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99471
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 |= arr_1 [(signed char)8];
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((1012070334), (((/* implicit */int) arr_4 [i_0]))))), (arr_6 [i_0 - 1] [i_1 + 2] [i_1] [i_3]))))));
                            var_13 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) -8581342673430595058LL)) ? (1012070334) : (1012070320)))) - (var_3)))));
                            var_14 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0] [i_0] [(_Bool)1] [15U]) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1012070342)) ? (arr_2 [9LL]) : (((/* implicit */unsigned int) -1012070352)))))))) ? (var_6) : (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_2] [i_1 - 3]))))));
                            arr_8 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-75)))))))));
                            var_15 = arr_2 [i_2];
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */long long int) arr_6 [2] [i_1] [i_0] [i_0 + 3]);
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((min((arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_1 + 2]), (arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_1 - 2]))), (((/* implicit */unsigned long long int) var_3)))))));
                var_18 *= ((/* implicit */unsigned char) (signed char)-23);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_10)))), ((~(((/* implicit */int) (signed char)67)))))))));
    var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) max((4702246921208923912ULL), (((/* implicit */unsigned long long int) 7465156507274832467LL)))))))));
    var_21 = ((/* implicit */signed char) var_10);
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_6) != (var_6))))))) : (max((var_3), (((((/* implicit */_Bool) -1012070335)) ? (var_3) : (var_9)))))));
}
