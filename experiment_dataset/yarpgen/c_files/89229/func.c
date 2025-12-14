/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89229
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
    var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (8444249301319680LL)));
    var_16 = ((/* implicit */unsigned short) var_5);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) var_8)))))) : (var_4)));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */signed char) var_8);
            var_19 *= (signed char)39;
            var_20 *= ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) arr_1 [i_0 - 1] [i_0 - 1])));
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_21 = ((/* implicit */long long int) min((((/* implicit */int) (signed char)39)), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)137))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-7151))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-39)) - (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((arr_8 [i_0 + 1] [i_3] [i_3] [i_0]) >= (arr_0 [i_3] [i_2])));
                var_23 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
            }
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                arr_13 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */_Bool) var_6);
                arr_14 [i_0] = ((/* implicit */unsigned short) var_11);
                var_24 = ((/* implicit */unsigned short) var_11);
                var_25 = ((/* implicit */long long int) arr_12 [i_0]);
            }
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) var_5);
            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
        }
    }
}
