/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6673
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_2 [2LL])), (var_8))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_1 [(signed char)0] [i_1])) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) arr_3 [(_Bool)1])), (13377068988603575990ULL))))))))));
                arr_5 [i_0] [i_0 + 1] [i_0] = ((268431360LL) + (min((((-7801072031514201910LL) + (((/* implicit */long long int) 1427938254)))), (((/* implicit */long long int) arr_4 [i_1] [i_0])))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) (((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (6947512317596591334LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16140901064495857664ULL)))))) > (((((/* implicit */_Bool) 8011049225939421818LL)) ? (-7LL) : (((/* implicit */long long int) var_9))))))))));
                    var_15 = (+((+(((((/* implicit */_Bool) 687056026819178833LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_0 [i_0 - 1] [i_1]))))));
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    var_16 = ((/* implicit */long long int) 4ULL);
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)61413))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) arr_3 [i_0])))))) : (var_3));
                }
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((-2932211411864686367LL), (((/* implicit */long long int) (signed char)(-127 - 1)))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1174711297203733336ULL)) ? (8011049225939421818LL) : (-13LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_1 - 2] [i_1] [i_0 + 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_1 + 1] [i_1]))))))) : (((((/* implicit */_Bool) (signed char)127)) ? (7197660664340796079ULL) : (5936168644110047249ULL)))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (min(((+(((/* implicit */int) (unsigned short)18384)))), ((~(((/* implicit */int) (signed char)-1))))))));
}
