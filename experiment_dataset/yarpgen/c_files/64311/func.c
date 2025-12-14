/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64311
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
    var_17 = ((/* implicit */short) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) 975128934725051664LL)) ? (var_0) : (var_16)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (short)-32742))) >> (((8622132862927121360LL) - (8622132862927121340LL)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~(-8622132862927121347LL)));
                arr_10 [i_2] [i_2] = var_2;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_19 += ((/* implicit */long long int) var_3);
                    var_20 |= ((/* implicit */unsigned short) var_10);
                }
                var_21 |= ((/* implicit */short) max((min((((/* implicit */long long int) 1122819208)), (((((-5755301686857949251LL) + (9223372036854775807LL))) << (((/* implicit */int) arr_12 [17U] [i_0] [i_1] [i_2 - 1])))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_1] [i_1]))))));
                arr_14 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((int) (unsigned short)52403)));
            }
            arr_15 [(_Bool)1] = ((/* implicit */signed char) (!(var_3)));
            arr_16 [(short)16] [i_1] [18ULL] = ((_Bool) var_9);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
        {
            arr_20 [1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_4])) >> (((((/* implicit */int) arr_5 [i_0] [7])) - (22798)))));
            arr_21 [i_0] [i_0] |= ((/* implicit */_Bool) ((short) 0LL));
        }
    }
}
