/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64059
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned short)112)) ? (-4682852358406848447LL) : (-4682852358406848466LL))))), (var_13))))));
        var_18 = ((/* implicit */unsigned short) var_6);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) var_8);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) var_16)) : (arr_14 [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned long long int) ((unsigned short) var_6))), (min((((/* implicit */unsigned long long int) var_8)), (arr_11 [i_0] [(unsigned short)10] [(_Bool)1] [i_3] [i_4])))))));
                                arr_15 [i_1 - 1] [i_3] [i_0] [i_4] = ((/* implicit */unsigned int) (+(-4682852358406848464LL)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11)))))));
                }
            } 
        } 
        arr_16 [(unsigned short)0] |= ((unsigned short) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [2LL]))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            {
                arr_22 [i_5] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_5] [i_5] [i_6] [i_6] [i_6]))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_6 + 3] [i_6] [16] [16]))))), (min((((((/* implicit */_Bool) arr_19 [9LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_5 [i_6] [i_5] [i_5]))), (((/* implicit */long long int) var_9))))));
                arr_23 [i_6] = ((/* implicit */unsigned short) arr_21 [i_6]);
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_14 [i_6 - 1] [i_6 + 2] [i_6 + 4] [i_6 - 1] [i_6 - 1]) : (((arr_3 [15LL]) ? (((/* implicit */int) arr_0 [18U])) : (((/* implicit */int) var_5))))))) ? (var_4) : (arr_5 [i_6 - 2] [i_6 - 2] [i_6 + 4])));
                arr_24 [i_5] |= var_16;
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_13)), (var_7))))));
}
