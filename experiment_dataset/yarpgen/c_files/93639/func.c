/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93639
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
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (((unsigned long long int) var_15))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((min((((/* implicit */int) max(((short)-23394), ((short)11317)))), (((((/* implicit */_Bool) 266712088)) ? (262143) : (((/* implicit */int) (unsigned char)210)))))), (max((arr_1 [(unsigned char)1] [i_0]), (arr_1 [(_Bool)1] [(_Bool)1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) -266712100))))))));
        arr_5 [i_0] = ((/* implicit */int) (~(arr_2 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 266712116))))));
            var_18 = ((/* implicit */short) (_Bool)1);
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_2 [i_1] [i_2])))) ? ((-(((/* implicit */int) ((unsigned char) arr_0 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (266712099))))))))))));
            var_20 = ((/* implicit */short) (((-(max((arr_10 [(short)8] [i_2] [(short)8]), (((/* implicit */int) arr_8 [i_2] [i_2])))))) < (((((/* implicit */_Bool) 548932044)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_11 [(short)2] [i_2 - 2] [i_2 - 1]))))));
        }
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) /* same iter space */
        {
            arr_15 [i_1] = ((/* implicit */unsigned long long int) ((short) ((arr_6 [i_3 + 1]) ? (-2873808720613257137LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 + 1]))))));
            arr_16 [i_1] [i_3 - 1] = (!(((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1])), (arr_9 [i_3 - 2] [i_3 + 1] [i_3 - 2])))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
        {
            arr_19 [i_1] [1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_4 - 2] [i_4 + 1] [i_4 - 2]))));
            var_21 = ((/* implicit */unsigned char) arr_17 [i_4 - 2] [i_4 - 2]);
        }
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) -266712088)), (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_1]) : (((/* implicit */long long int) 388565088U)))))))));
    }
    var_23 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_10)), (11493649016481158282ULL)))))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) / (var_8))));
}
