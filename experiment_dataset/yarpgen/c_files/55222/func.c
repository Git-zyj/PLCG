/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55222
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
    var_16 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (var_11))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45891))))))) + (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))))) & (((/* implicit */int) (!(((arr_1 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) arr_0 [i_0 - 1]))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (arr_1 [i_0 - 1])))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    var_17 *= ((/* implicit */signed char) ((_Bool) ((arr_5 [i_1 - 1]) + (arr_5 [i_1 + 2]))));
                    arr_12 [i_1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)234))))));
                    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) max((arr_1 [i_2]), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) arr_10 [i_1 + 1]);
    }
    var_20 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (((((/* implicit */int) (unsigned short)19645)) >> (((var_7) - (3640436593U)))))))) == (((((/* implicit */int) (_Bool)1)) >> ((((+(((/* implicit */int) var_0)))) - (97)))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_6))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)19653))))) <= (((((/* implicit */_Bool) (unsigned short)19670)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_20 [i_4 + 1] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_4 + 1] [i_6] [i_6])), (arr_14 [i_4 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (arr_14 [i_4 - 1]))))) : (((arr_14 [i_4 - 1]) - (((/* implicit */unsigned long long int) arr_16 [i_4 + 1] [(_Bool)1] [i_5]))))));
                    arr_21 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_15 [i_4]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_5]))) & (arr_14 [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((((/* implicit */int) (_Bool)1)) + (var_12))) : ((~(((/* implicit */int) arr_17 [i_6])))))))));
                }
            } 
        } 
    } 
}
