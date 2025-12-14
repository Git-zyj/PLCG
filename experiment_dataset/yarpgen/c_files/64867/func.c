/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64867
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (0ULL)))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27499))) : (var_3))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-27485))))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) var_10)))))))));
    var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(4257536096U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8191))))) : (((((/* implicit */int) var_13)) << (((((/* implicit */int) (unsigned char)252)) - (237)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_3 [i_0]))))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (short)27484)) >= (((/* implicit */int) arr_2 [i_0]))))))) : (-1632331407)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [2U])) ? (((/* implicit */int) arr_2 [8ULL])) : (((/* implicit */int) arr_2 [(unsigned char)8])))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (((/* implicit */int) (short)27515)) : (((/* implicit */int) arr_10 [i_1])))) : (((/* implicit */int) arr_7 [i_2]))));
                    var_19 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) / (arr_1 [i_1]));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) ^ (arr_8 [i_3] [i_2] [i_1])));
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_1]))));
                }
            } 
        } 
    }
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27484)) ? (8191) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_13)))) != (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))))) : ((-((+(1474634583U))))));
}
