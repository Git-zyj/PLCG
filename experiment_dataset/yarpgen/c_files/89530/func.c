/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89530
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+((+((-(var_5))))))))));
    var_16 ^= ((/* implicit */long long int) (-((+(((/* implicit */int) var_2))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((((/* implicit */int) var_14)) + (((/* implicit */int) var_14))))));
    var_18 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((((/* implicit */_Bool) (unsigned short)36636)) ? (6986459736910335718LL) : (-6986459736910335713LL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) (+(arr_3 [i_0] [i_0] [i_0])));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
                arr_9 [i_1] |= ((/* implicit */signed char) -6986459736910335719LL);
                var_21 = ((/* implicit */unsigned short) arr_4 [i_1] [i_2]);
                arr_10 [17LL] [i_1] [i_1] [i_2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1302647352) : (((/* implicit */int) (short)-13655)))))));
                var_22 = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1] [i_2])) % (((/* implicit */int) var_14)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
            }
            for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                arr_13 [(short)2] [i_0] [18LL] [i_3] = ((/* implicit */unsigned char) var_3);
                var_23 = ((/* implicit */_Bool) ((short) ((unsigned char) var_0)));
                arr_14 [i_0] [i_1] [i_3] = ((/* implicit */long long int) (-(arr_8 [i_3] [i_1] [i_1] [i_0])));
            }
            arr_15 [i_0] = ((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_0]);
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_24 = ((/* implicit */long long int) var_9);
            arr_19 [i_0] |= ((/* implicit */unsigned short) ((4505799734306637010LL) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((-1457890202282969475LL) + (9223372036854775807LL))) << (((((-1302647352) + (1302647362))) - (10))))))))))));
        }
        arr_20 [(short)11] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            arr_25 [i_5] [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_5] [(unsigned char)8]))));
            arr_26 [i_6] [i_6] = ((/* implicit */long long int) arr_3 [i_5] [i_6] [i_6]);
            var_25 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) -1457890202282969450LL)))));
        }
        var_26 = ((/* implicit */long long int) arr_4 [i_5] [i_5]);
        var_27 ^= ((/* implicit */long long int) arr_23 [i_5]);
        arr_27 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-11708))));
    }
}
