/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7379
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
    var_16 = ((((((/* implicit */_Bool) ((unsigned char) (short)25603))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) - (var_7));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_8 [i_0] [(short)3] [i_2] = arr_1 [(_Bool)1];
                    arr_9 [2U] [2U] [i_2] [(short)3] = ((/* implicit */unsigned char) ((short) arr_6 [i_0]));
                    arr_10 [i_0] [i_2] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 977044622137235862LL))))));
                }
                for (short i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        var_17 &= ((/* implicit */unsigned int) ((var_15) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 0U))))), (((arr_11 [i_0] [i_0] [i_3] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_15 [(unsigned char)20] [(short)2] [i_3] [i_3 + 1] [i_4 - 3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3851353412371051888LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [0U] [i_1] [i_1] [i_1]))))))))));
                        arr_17 [20U] [i_4] [i_4] [i_0] = ((/* implicit */short) var_8);
                    }
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (short)32339))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (unsigned char i_6 = 3; i_6 < 7; i_6 += 2) 
        {
            for (unsigned int i_7 = 2; i_7 < 8; i_7 += 2) 
            {
                {
                    var_19 = (((-(((/* implicit */int) arr_22 [i_7 - 1] [i_5] [i_5])))) >= (((((/* implicit */int) (!(var_13)))) >> (((min((arr_2 [i_5]), (arr_0 [i_5]))) - (1226151375U))))));
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_9))))));
                }
            } 
        } 
    } 
}
