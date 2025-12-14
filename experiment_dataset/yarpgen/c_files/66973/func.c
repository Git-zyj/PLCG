/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66973
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
    var_18 = ((/* implicit */unsigned int) var_0);
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((12582912U), (((/* implicit */unsigned int) (signed char)1)))))));
    var_20 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (4282384377U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (+(((unsigned long long int) arr_0 [i_0]))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (signed char)43))));
                    var_23 ^= ((/* implicit */_Bool) (+(((/* implicit */int) min(((signed char)31), (arr_7 [i_0 - 1] [i_1 + 1] [i_2 + 1] [i_2]))))));
                    var_24 ^= ((/* implicit */signed char) min((min((((/* implicit */int) (signed char)34)), (arr_6 [i_1 + 1] [i_1 + 1]))), (min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-92))))), (((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60170))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_25 = arr_12 [i_3] [i_3];
        var_26 -= ((/* implicit */unsigned int) 5009189247400500949ULL);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [9ULL] = ((/* implicit */unsigned int) arr_8 [i_4] [i_4] [i_4]);
        arr_16 [i_4] &= ((/* implicit */unsigned short) max((arr_8 [1] [i_4] [i_4]), (max(((~(arr_9 [i_4]))), (((/* implicit */int) arr_5 [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_16))));
                    var_28 = ((/* implicit */_Bool) min((max((max((-4), (arr_6 [i_4] [i_4]))), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_12)))) ? (((arr_0 [i_5]) ? (2147483632) : (arr_2 [i_5]))) : ((+(arr_21 [i_5])))))));
                }
            } 
        } 
    }
}
