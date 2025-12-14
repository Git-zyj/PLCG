/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81203
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [12] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)-15)), (2599886036452016685LL)));
                    var_15 = ((/* implicit */unsigned short) arr_3 [i_0 - 1]);
                    arr_11 [i_2] [i_2] [(signed char)9] [i_2] = ((/* implicit */_Bool) min((((arr_2 [i_0 + 1]) ? (((/* implicit */int) (unsigned short)51668)) : (((/* implicit */int) arr_2 [i_0 - 2])))), ((-(((/* implicit */int) arr_2 [i_0 - 2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_16 += min((((((/* implicit */_Bool) arr_13 [i_3])) ? (arr_12 [i_3]) : (((/* implicit */int) arr_13 [i_3])))), (min((arr_12 [i_3]), (var_11))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-52)))))));
        var_18 = ((/* implicit */_Bool) arr_13 [i_3]);
        var_19 = ((/* implicit */signed char) (unsigned short)59049);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_20 *= max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4])))))))), ((~(((((/* implicit */_Bool) arr_15 [(unsigned short)2])) ? (268435455LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_14 [8U]))));
        arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_14 [i_4]))) ? (max((arr_12 [i_4]), (arr_12 [i_4]))) : (((((/* implicit */_Bool) (unsigned short)51671)) ? (((/* implicit */int) arr_13 [i_4])) : (arr_12 [i_4])))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (unsigned short i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                for (int i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_24 [i_4] = ((/* implicit */signed char) (-(((((arr_19 [i_4] [i_7 - 2] [i_6 + 2]) + (2147483647))) << (((((arr_19 [i_4] [i_7 - 2] [i_6 + 2]) + (1496870686))) - (3)))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((268435466LL) >> (((((/* implicit */int) (unsigned short)6502)) - (6440)))))) ? (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned int) arr_23 [i_7 + 1] [5U] [i_4] [i_4])) : (((arr_21 [i_4]) + (4294967278U))))) : (arr_21 [i_4])));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_21 [i_4]))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) (unsigned short)27837)) : (((/* implicit */int) (_Bool)1))))));
                        var_24 = ((/* implicit */signed char) arr_18 [i_4]);
                    }
                } 
            } 
        } 
    }
    var_25 *= ((/* implicit */unsigned int) var_14);
}
