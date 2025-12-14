/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73785
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((+(var_15)))))) ? ((+(max((((/* implicit */int) arr_3 [i_1] [i_1] [i_0])), (arr_2 [6ULL] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])))))));
                var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1]))))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [3] [5] [i_1])) < (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_1] [13ULL] [i_0]), (arr_3 [(_Bool)1] [i_1] [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [(unsigned short)2] [i_1]))) - (var_9))))))));
                arr_5 [i_0] = ((/* implicit */signed char) max((((int) (-(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_1])))) ? (((((((/* implicit */int) arr_0 [i_0] [(unsigned short)3])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) + (114))))) : (arr_2 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_10 [i_1] [i_3] = ((/* implicit */unsigned short) var_15);
                            arr_11 [i_3] [i_3] [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_3 + 1]), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) max((arr_0 [i_0 - 1] [i_1]), (arr_0 [i_0] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_0] [(short)10] [i_2]), (((/* implicit */int) var_3))))))))));
                            arr_12 [i_3] [i_1] [i_1] [i_3] = ((((/* implicit */int) arr_8 [i_0] [5ULL] [5ULL] [i_3] [i_3])) & ((((~(((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) (unsigned char)255)) ^ (arr_4 [i_1] [i_2] [i_3]))))));
                            arr_13 [i_0] [i_1] [i_3] [i_2] [(signed char)10] = ((/* implicit */unsigned int) max((max((((long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_3])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)32))))))), (((/* implicit */long long int) -1090860800))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((var_11) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-3)))));
    var_22 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_13))));
                arr_19 [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-11)) >= (((arr_18 [i_4] [i_4] [i_4]) ? (((/* implicit */int) arr_18 [i_4] [i_4] [3U])) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_4]))))));
            }
        } 
    } 
}
