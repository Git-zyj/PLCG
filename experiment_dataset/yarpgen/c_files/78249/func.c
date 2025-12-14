/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78249
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) (+(-119583666168445976LL))))), (((((/* implicit */_Bool) ((unsigned int) (unsigned short)40187))) ? (((int) var_7)) : (((((/* implicit */_Bool) 3584659001592413165LL)) ? (var_11) : (var_4)))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((3584659001592413164LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))))), (var_3)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) arr_0 [i_0] [(short)3]);
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-3584659001592413178LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14999))))), (min((arr_0 [i_0] [i_0]), (3584659001592413172LL))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 |= ((/* implicit */unsigned long long int) arr_5 [18LL] [i_1]);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) arr_5 [i_1] [i_1])) : (arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (int i_3 = 4; i_3 < 20; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (+(arr_5 [i_1] [i_2])));
                    var_20 &= (-(((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_3])))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_3 - 4] [i_3 + 1] [i_2])))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [15U] [i_5])) && (((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_6])))), (((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_6])) || (((/* implicit */_Bool) var_10))))));
                    var_23 &= ((((/* implicit */_Bool) -940007696)) ? (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (short)2843)), (-3584659001592413154LL))))) : ((~((~(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
