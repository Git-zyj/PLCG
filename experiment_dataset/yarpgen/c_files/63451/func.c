/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63451
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_19 = max(((~(max((3794384791U), (((/* implicit */unsigned int) arr_0 [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (500582504U)))) ? (max((512), (((/* implicit */int) (unsigned short)1022)))) : (((/* implicit */int) ((short) arr_2 [i_0])))))));
        var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)64513)) != (((/* implicit */int) (short)19018))))))))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_1])))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (signed char)0)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (~((~(((arr_2 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_22 = ((/* implicit */signed char) ((arr_1 [i_1]) >= (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1023))))));
            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
        }
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            arr_13 [i_1] [i_3] = ((/* implicit */unsigned int) var_17);
            var_24 = ((/* implicit */short) min((arr_1 [i_1]), (((((/* implicit */_Bool) 33550336U)) ? (((/* implicit */int) arr_8 [i_1] [i_3])) : ((-(((/* implicit */int) arr_10 [i_1] [i_1] [i_3]))))))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) 2147467264)), (7984537394830711101LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (short)32759)))))) : ((-(((/* implicit */int) var_2))))));
            var_26 *= ((/* implicit */unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned short) arr_8 [(_Bool)1] [14LL]))))))) ? (((/* implicit */unsigned long long int) (~((+(262016U)))))) : (var_10)));
        }
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_9) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)32767)) - (32758)))))) ? (((unsigned long long int) arr_16 [i_4 - 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 - 1])))));
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1442210306594722054LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (-2LL))))));
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(arr_9 [i_5] [i_5]))) ^ (((/* implicit */unsigned int) ((arr_1 [(_Bool)1]) * (((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((short) (short)16580))), (min((2147483647), (((/* implicit */int) arr_11 [i_5]))))))) : (((unsigned int) (signed char)-108))));
        arr_20 [i_5] = ((/* implicit */short) min((((/* implicit */int) max((min(((unsigned short)1022), (((/* implicit */unsigned short) (short)16580)))), (((/* implicit */unsigned short) ((unsigned char) var_1)))))), (arr_1 [i_5])));
        arr_21 [i_5] [i_5] = 11003572470166610795ULL;
        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)990))));
    }
}
