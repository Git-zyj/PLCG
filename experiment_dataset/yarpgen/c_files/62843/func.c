/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62843
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
    var_18 = ((/* implicit */_Bool) min((var_18), ((_Bool)1)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [(short)0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [(signed char)8]))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5] [i_2] [16ULL] [i_4])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_4] [i_2]))))), (arr_6 [i_2] [i_2])))));
                                var_20 += ((/* implicit */int) ((short) arr_12 [i_1] [i_1] [i_3] [i_1]));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_9 [i_4] [i_2]))));
                            }
                        } 
                    } 
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_3] [8U] [i_3] [i_3]))))) % (((arr_10 [i_2] [i_2 - 1] [i_3] [i_2 + 3]) / (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))))) ? ((~(((/* implicit */int) max((arr_5 [i_3]), (((/* implicit */short) arr_14 [i_2] [i_2] [i_2] [i_2] [5U] [i_2] [(_Bool)1]))))))) : ((+((~(((/* implicit */int) arr_9 [i_2] [i_2])))))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1])))), (max(((~(arr_11 [(_Bool)1] [i_1] [10U]))), (((/* implicit */int) arr_7 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_22 [i_1] [i_6] [i_7] = arr_18 [i_1] [i_1] [i_1];
                    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_1] [i_6] [i_1]))));
                    var_24 = ((/* implicit */int) (_Bool)0);
                }
            } 
        } 
    }
}
