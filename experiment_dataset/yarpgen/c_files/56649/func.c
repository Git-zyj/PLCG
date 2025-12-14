/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56649
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
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) != (max((var_10), (((/* implicit */unsigned long long int) (unsigned char)252))))));
    var_19 ^= ((/* implicit */long long int) var_16);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) * (((/* implicit */int) (signed char)-6))));
            var_20 = ((/* implicit */unsigned char) arr_4 [i_0 + 1] [i_0] [i_0]);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (signed char)-6))));
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((short) (-(((/* implicit */int) (signed char)5))))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
            arr_9 [i_0] = ((/* implicit */short) (signed char)5);
            var_23 = (~(var_7));
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (signed char)5))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (signed char)-27));
            arr_14 [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))) : (var_0)))) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_3]) : ((+(((/* implicit */int) (signed char)5))))));
            var_25 = ((/* implicit */short) (signed char)-6);
        }
        var_26 *= ((/* implicit */unsigned long long int) ((arr_11 [i_0 - 1] [i_0 + 1]) <= (arr_11 [i_0 - 1] [i_0 + 1])));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [12LL])))))));
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (+(var_0))))));
        var_29 ^= ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) != (((/* implicit */int) arr_1 [i_0]))));
    }
}
