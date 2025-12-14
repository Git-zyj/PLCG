/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65831
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [16] [i_0 + 1]))) == (min((((long long int) var_5)), (((/* implicit */long long int) ((unsigned short) (unsigned short)65532)))))));
                    var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) - (4457283414689564441LL)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 &= ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_8 [i_3 + 1] [i_1 - 1])) & (((/* implicit */int) arr_8 [i_0] [i_2 - 2]))))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((/* implicit */long long int) ((unsigned short) arr_9 [i_4] [(unsigned short)13]))), ((~((-9223372036854775807LL - 1LL)))))))));
                            }
                        } 
                    } 
                    var_16 = (((((-9223372036854775807LL - 1LL)) > ((-9223372036854775807LL - 1LL)))) ? (min(((-9223372036854775807LL - 1LL)), (-2821454033901873045LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)56607), (arr_5 [17] [i_0 - 1]))))));
                }
            } 
        } 
        arr_11 [i_0] = arr_2 [i_0] [i_0] [i_0];
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_2)))))) % (((var_4) & (((/* implicit */long long int) ((int) 2147483647)))))));
    /* LoopSeq 4 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((((6295504346773124913LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18646))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [13] [i_5])) ? (((/* implicit */int) (unsigned short)8156)) : (((/* implicit */int) (unsigned short)44706)))))));
        arr_16 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -801673899))))), ((unsigned short)57373)))) ? (((min((2251799796908032LL), (((/* implicit */long long int) arr_14 [i_5])))) << (((max((var_4), (((/* implicit */long long int) -798196034)))) - (8509550902222642273LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((9223372036854775807LL) ^ (var_8))))))));
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        var_19 = ((/* implicit */int) var_7);
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 11; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6670))))) && (((/* implicit */_Bool) min((arr_22 [i_7 - 2] [i_7 + 1] [i_7 - 1]), ((unsigned short)20299))))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                arr_31 [i_6] [i_6] [i_6] = ((/* implicit */long long int) (+(max((((/* implicit */int) var_3)), (min((33546240), (((/* implicit */int) arr_26 [i_10] [i_9] [i_7]))))))));
                                arr_32 [i_6] [i_6] [0] = ((/* implicit */int) (unsigned short)3543);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_6] [i_6] = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) (unsigned short)58866)))));
    }
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_21 = ((/* implicit */long long int) var_1);
        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) -932393907))) == (max((-4665208735446200874LL), (((/* implicit */long long int) var_1))))));
    }
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0)))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8191)) ^ (((/* implicit */int) (unsigned short)3483))));
        var_25 = ((/* implicit */unsigned short) max((var_25), ((unsigned short)53336)));
        arr_40 [i_12] [i_12] = ((/* implicit */unsigned short) 534814943);
    }
    var_26 = ((/* implicit */int) min((var_26), ((-((~(932393918)))))));
    var_27 = ((/* implicit */long long int) var_9);
}
