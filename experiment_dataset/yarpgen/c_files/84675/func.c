/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84675
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
    var_15 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_7))))), (var_10)))), (((((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_12))))) * (var_11)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)65512), ((unsigned short)19)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (arr_2 [i_1])))) : (((/* implicit */int) arr_2 [i_0]))));
                arr_5 [i_1] = ((/* implicit */unsigned char) (+(arr_3 [i_0] [i_0] [i_0])));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */int) 3102799151U);
                                arr_17 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [0LL] [i_1] [i_4])) ? (((max((((/* implicit */unsigned long long int) var_11)), (var_9))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (var_12))))))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_10))));
                                var_18 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [3])) == (((/* implicit */int) var_6))))) != (((((/* implicit */_Bool) max((1192168120U), (((/* implicit */unsigned int) -1718992782))))) ? (((((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_4])) ^ (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_4] [i_3] [i_4]))))));
                                var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_1] [i_2] [i_1] [i_0]))) % (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_3 [(_Bool)1] [(unsigned char)1] [(_Bool)1])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) var_10)))))))) : (max((((arr_6 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [(signed char)20]))) : (arr_1 [i_1]))), (((((/* implicit */_Bool) arr_3 [i_0] [14LL] [i_3])) ? (arr_1 [i_3]) : (((/* implicit */long long int) 3102799151U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
