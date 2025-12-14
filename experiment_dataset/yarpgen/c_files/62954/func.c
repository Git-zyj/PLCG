/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62954
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
    var_13 = ((/* implicit */unsigned char) ((signed char) (signed char)-80));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_2 [12U] [i_0] = ((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] [3] = ((/* implicit */short) -9223372036854775805LL);
                            arr_13 [i_4 + 2] [i_3 - 2] [i_0] [i_1] [i_0] [i_0] [(signed char)11] = ((/* implicit */unsigned long long int) ((short) (short)-32753));
                            arr_14 [i_4 - 1] [i_0] [i_3 - 2] [i_2] [i_1] [i_0] [i_0] = ((((((/* implicit */_Bool) arr_1 [i_3 - 2])) && (((/* implicit */_Bool) arr_9 [i_4 + 2] [i_4 - 1] [i_3] [i_3 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_5 [i_0]));
                            var_14 = ((/* implicit */short) (+((((-(((/* implicit */int) (signed char)-51)))) << (((min((3043296809U), (((/* implicit */unsigned int) arr_3 [i_1] [i_2] [i_3 - 1])))) - (3043296784U)))))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */long long int) 175085115U);
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (-9223372036854775807LL - 1LL)))) ? (((((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1])) % (((/* implicit */int) arr_6 [4U] [i_1] [i_0] [i_0])))) : (((/* implicit */int) arr_6 [i_1] [i_0 - 1] [i_0 - 1] [0U]))));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */long long int) max(((-((+(175085099U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_5])) * (((/* implicit */int) arr_15 [i_5])))))));
        var_17 = ((((/* implicit */_Bool) 175085110U)) ? (((/* implicit */long long int) -466053979)) : (938339246302650877LL));
    }
    var_18 = ((/* implicit */signed char) var_12);
}
