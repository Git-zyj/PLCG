/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58508
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
    var_16 = ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_5 [(unsigned short)18] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)-1))));
            var_17 += ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) arr_4 [i_0])));
            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [17U]))));
            arr_6 [i_0] [i_1] [(short)13] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((/* implicit */int) var_5)) : (arr_3 [i_0] [i_0] [i_0])));
        }
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            arr_9 [i_2 - 2] = ((13ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
            arr_10 [i_0] [i_2 + 4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (min((arr_0 [i_2 - 2] [i_2 - 1]), (arr_0 [i_2 - 2] [i_2 - 1]))) : (arr_0 [i_2 - 2] [i_2 - 1])));
        }
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_12))));
        var_20 = ((/* implicit */unsigned short) arr_4 [i_0]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_7))));
        arr_14 [i_3] = ((/* implicit */unsigned int) (signed char)-1);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_26 [i_4] [i_5] [i_6 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) ((unsigned char) (signed char)-13)))))) ? (min((((/* implicit */int) ((((/* implicit */int) (short)-2125)) > (((/* implicit */int) var_12))))), (arr_23 [15LL] [15LL] [15LL]))) : (((/* implicit */int) arr_20 [i_4]))));
                    var_22 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6145054725998176737LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-59)))))))) - (((/* implicit */int) ((unsigned short) -2329448833060040582LL)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (_Bool)1))))))));
}
