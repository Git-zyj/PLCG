/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7362
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
        var_20 = ((/* implicit */long long int) 23ULL);
        arr_4 [i_0] [i_0] = ((/* implicit */int) 1ULL);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_6 [i_1] [i_1]))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (-(12504297681419085056ULL)));
        arr_9 [i_1] [i_1] = ((/* implicit */short) 2406843709U);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)7143))));
        var_23 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_13 [i_2 - 1] [i_2 - 1]))));
        arr_14 [16ULL] [16ULL] &= ((/* implicit */unsigned short) (short)0);
        var_24 -= arr_13 [i_2 - 1] [i_2 - 1];
        arr_15 [i_2] = ((/* implicit */_Bool) ((8084748382949291811ULL) ^ (((10361995690760259805ULL) & (((/* implicit */unsigned long long int) -9132435844066259115LL))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_25 += ((/* implicit */long long int) (~(((/* implicit */int) (signed char)114))));
        var_26 -= ((/* implicit */long long int) min((((arr_11 [i_3]) | (604735917U))), ((+(arr_11 [i_3])))));
        var_27 = ((/* implicit */unsigned char) ((((arr_13 [i_3] [i_3]) >= (arr_17 [i_3]))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) (unsigned char)173)))) : (((/* implicit */int) ((arr_12 [i_3]) == (((/* implicit */long long int) ((/* implicit */int) (short)0))))))));
    }
}
