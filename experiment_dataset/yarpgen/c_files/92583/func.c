/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92583
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
    var_17 *= ((/* implicit */_Bool) ((long long int) -3859068790137745121LL));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            var_18 = ((long long int) -16LL);
            var_19 &= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))) || (((/* implicit */_Bool) (signed char)-26)))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_1 + 1] [16ULL])))) ? (((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)1))))) : (arr_3 [i_1 - 2] [2ULL])));
                arr_9 [i_2] [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned int) 2127970175325134962LL);
                var_21 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)3)) - (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2127970175325134962LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_1 - 1]))))))));
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), ((-(((int) var_1))))));
            }
        }
    }
    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) -2055957254);
        arr_14 [i_3 + 1] [i_3] = ((/* implicit */unsigned int) var_15);
        var_23 += (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) < (24ULL)))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        var_24 |= ((/* implicit */signed char) 1261091301);
        var_25 ^= ((/* implicit */int) -5LL);
    }
}
