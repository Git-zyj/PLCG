/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95423
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_16 = ((/* implicit */long long int) (~(((unsigned long long int) arr_2 [i_0]))));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 16314067809727184417ULL))));
            arr_6 [i_1] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_1 - 3]))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned char)10)) > (((/* implicit */int) arr_4 [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) (+(max(((+(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */long long int) arr_8 [i_0] [i_0])) : (arr_9 [i_0 - 1] [9ULL] [i_0]))))))));
            var_19 = ((/* implicit */short) (~(arr_9 [12] [5U] [i_0])));
            arr_10 [i_0] [i_2] = var_4;
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max(((unsigned char)30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_1 [4ULL] [i_0 - 1])))))))))))));
        }
        var_21 = ((/* implicit */unsigned short) max((max(((~(12444173676843419547ULL))), (12444173676843419564ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_15 [i_0] [i_0] [i_3 + 1] = ((/* implicit */signed char) var_1);
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_12 [i_4] [0ULL]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5] [i_5])) << (((((/* implicit */int) arr_18 [i_5] [i_5])) - (203)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))) : (arr_17 [i_5 - 1] [i_5]));
        var_23 = ((/* implicit */_Bool) arr_18 [i_5] [i_5]);
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_24 = ((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) (unsigned char)206))), (arr_16 [i_6 - 1] [i_6 - 1]))))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_4))));
    var_26 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_14), (((/* implicit */unsigned short) (unsigned char)148))))) : (((/* implicit */int) var_6))))));
}
