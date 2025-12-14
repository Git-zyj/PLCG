/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74714
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
    var_12 = ((/* implicit */short) ((int) ((unsigned long long int) var_1)));
    var_13 = ((/* implicit */int) var_5);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = var_11;
        var_15 = ((/* implicit */int) ((4463029704077285741LL) ^ (((/* implicit */long long int) 1331907393))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 *= ((/* implicit */signed char) arr_2 [i_1]);
        var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1]))) ? (((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_2 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4463029704077285736LL))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) var_9);
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            arr_8 [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_5);
            var_19 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_3]);
        }
        var_20 |= ((/* implicit */short) var_9);
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) var_9);
                    var_22 = ((/* implicit */signed char) arr_6 [i_2] [i_2]);
                    var_23 = ((/* implicit */unsigned char) ((signed char) var_2));
                }
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_24 += ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) 960953019))))), ((-(((/* implicit */int) max(((unsigned short)44301), (((/* implicit */unsigned short) (short)32670)))))))));
        var_25 += ((/* implicit */short) min((((/* implicit */int) max((arr_13 [i_6]), (arr_13 [i_6])))), (((arr_13 [i_6]) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) var_7))))));
        var_26 = ((/* implicit */long long int) ((int) var_5));
        var_27 = ((/* implicit */int) arr_14 [i_6]);
    }
}
