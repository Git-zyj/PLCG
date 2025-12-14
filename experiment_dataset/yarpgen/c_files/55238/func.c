/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55238
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
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) - (((/* implicit */int) var_3))));
    var_19 = ((/* implicit */unsigned int) max((var_15), (max((((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [(_Bool)1] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (arr_0 [i_0])));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */int) max((arr_11 [i_3] [i_3]), (((/* implicit */unsigned int) ((int) arr_10 [i_3])))));
        var_22 = ((/* implicit */_Bool) min((max((arr_10 [i_3]), (arr_10 [i_3]))), (((/* implicit */int) (!(((((/* implicit */int) (signed char)(-127 - 1))) < (arr_10 [i_3]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            arr_15 [i_3] [i_3] [i_3] = max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-106))))), (((((/* implicit */_Bool) 13709948074970354939ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))) : (var_12))))), (((/* implicit */unsigned int) max((arr_13 [i_3 - 1]), (arr_13 [i_3 - 1])))));
            var_23 = ((/* implicit */unsigned int) var_3);
            arr_16 [i_3] = ((/* implicit */unsigned int) (+(((((((/* implicit */int) arr_13 [i_4 - 1])) ^ (((/* implicit */int) (_Bool)1)))) & (arr_14 [i_3 - 1] [i_4 - 1] [i_4])))));
        }
    }
    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)90)) * (((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_24 [i_5] [i_6] [(unsigned short)2]))));
                    arr_27 [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) var_15);
                    arr_28 [i_5] [9U] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)37667))))), ((unsigned short)63284)));
                }
            } 
        } 
        var_25 = ((/* implicit */short) (-(1055909706)));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)12))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) var_1);
        var_28 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_16), (((((/* implicit */_Bool) arr_24 [i_8] [i_8] [6LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) : (4162937857932118922LL)));
}
