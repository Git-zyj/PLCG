/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67128
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
    var_20 = ((/* implicit */signed char) (unsigned char)155);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_21 = (-(((/* implicit */int) ((arr_8 [i_0 - 3] [i_1]) > ((~(((/* implicit */int) arr_7 [i_0] [i_0]))))))));
                    var_22 -= arr_7 [i_0] [i_1];
                    arr_10 [i_1] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((arr_5 [i_1] [i_2]) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_0 - 1]))))) ? (((((/* implicit */unsigned long long int) 1876794545)) + (31ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)119), (((/* implicit */unsigned char) (_Bool)1)))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) max((((((/* implicit */_Bool) 4254247023128729279ULL)) ? (arr_8 [i_0] [i_0 + 1]) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_3 [i_0]), ((signed char)-20)))))));
                    arr_12 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0])));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */long long int) var_19);
}
