/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91662
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (+(var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6)));
    var_12 = ((/* implicit */unsigned char) min((var_12), (var_4)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                {
                    var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_2 - 2])))) & (((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_2 + 3])) ? (arr_2 [i_2 + 4] [i_2 + 2]) : (arr_2 [i_2 - 1] [i_2 + 3]))));
                    var_14 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)229)), ((+(((/* implicit */int) arr_5 [i_1] [i_1]))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) (((~(arr_0 [i_2 - 2]))) >> (((((((((/* implicit */int) arr_3 [i_2 + 3] [i_2 - 1] [i_3])) + (2147483647))) >> (((arr_0 [i_2 + 1]) - (10036768294152641441ULL))))) - (524268)))));
                                arr_17 [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) (+(arr_6 [i_3] [i_2 + 2] [i_2] [i_2 - 2])))) ? (max((((/* implicit */unsigned long long int) arr_16 [i_2 + 3] [i_0] [i_2] [4ULL] [i_2] [i_3] [i_2 + 3])), (arr_13 [i_2 + 4]))) : (min((((/* implicit */unsigned long long int) arr_16 [i_2 + 2] [i_1] [i_2] [i_3] [i_2] [i_3] [i_3])), (arr_6 [5ULL] [i_2 + 2] [i_2] [i_2 + 3]))));
                                arr_18 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) max((3619131663841457256ULL), (14827612409868094360ULL)));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((3619131663841457256ULL) * (3619131663841457235ULL))) % ((-(arr_12 [(_Bool)1] [(_Bool)1] [i_0] [i_2 - 1])))))));
                }
            } 
        } 
    } 
}
