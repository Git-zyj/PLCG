/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67837
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) max((var_10), (var_1)))) ? (var_1) : ((+(var_6)))))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (var_4)));
    var_13 += ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */signed char) var_9);
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_9 [i_0] [(signed char)2] [i_2]))) ? (arr_2 [i_0 + 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(var_3)))))))))));
                    var_15 = ((/* implicit */int) arr_6 [i_0] [i_0]);
                    var_16 = ((/* implicit */unsigned long long int) var_2);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_16 [3ULL] [11U] [i_0] [i_3] [i_0] [12ULL] [i_4])) & (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_16 [i_0] [i_0] [i_0] [i_3 - 2] [i_4] [i_4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1] [i_2])))))) : ((-(12ULL))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (arr_15 [i_0] [i_0] [i_2] [i_3] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2])) : (arr_15 [11U] [i_1] [i_2] [12U] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 536870656))))))) ? (arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] [i_3] [i_2]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_7 [4ULL] [i_2])))) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_2])) ? (arr_14 [7U] [7U] [7U] [i_3] [11] [i_3] [i_3 - 1]) : (arr_4 [14] [i_1]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_0] [i_1])))))))));
                                arr_17 [i_0] = ((/* implicit */unsigned long long int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((17ULL) <= (4ULL)));
}
