/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99230
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
    var_15 |= (!(((/* implicit */_Bool) -969080140)));
    var_16 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [6U] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [6])) ? (((/* implicit */int) (unsigned short)9264)) : (var_1)))) ? (min((var_8), (((/* implicit */int) arr_6 [10LL])))) : (((/* implicit */int) arr_6 [0LL]))));
                    arr_8 [i_0] [(unsigned short)12] [(unsigned short)12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -2865390568253390027LL)) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */long long int) 1434398349)) & (-2865390568253390016LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
    {
        for (signed char i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            {
                arr_16 [i_4] [6LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                arr_17 [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_14))))))) * (((/* implicit */int) arr_0 [12LL]))));
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        {
                            arr_23 [6LL] = ((/* implicit */unsigned short) ((int) (!(arr_0 [(unsigned short)12]))));
                            arr_24 [i_6] [12LL] [12LL] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)48)) == (((/* implicit */int) arr_15 [i_3] [(_Bool)1])))))) / (min((var_11), (2865390568253390026LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [2U]) ? (var_3) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_11))))))))));
                            arr_25 [i_3] [i_3] [i_3] [16LL] [i_3 - 2] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_15 [i_3 - 1] [0]))))));
                            arr_26 [14LL] [i_4 - 2] [14LL] = ((/* implicit */unsigned short) ((long long int) max((arr_18 [14LL] [14LL] [i_5 - 1]), (arr_18 [14U] [14U] [i_5 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
