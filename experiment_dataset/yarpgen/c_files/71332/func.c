/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71332
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) (_Bool)0);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [(unsigned char)0] [i_1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [1U] [i_2])) ? (var_1) : (((/* implicit */int) (unsigned char)7))))))))));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -6067096368429352987LL))));
                    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) var_0))))))))));
                    var_15 ^= ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 1023LL))));
                    arr_20 [i_3] [i_4] [i_4] [i_3] = max((((/* implicit */short) ((((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [(short)9])) > (((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_4]))))), (min((arr_9 [i_4 + 1] [i_4 + 1] [i_5]), (arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))))) >= (min((((/* implicit */unsigned long long int) -9223372036854775795LL)), (arr_12 [i_3])))))));
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */long long int) var_10)), (((long long int) max(((signed char)10), (((/* implicit */signed char) var_3))))))))));
    var_19 = ((/* implicit */short) ((int) max((((/* implicit */long long int) ((int) var_12))), (var_7))));
}
