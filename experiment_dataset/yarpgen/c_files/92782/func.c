/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92782
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
        var_11 += ((/* implicit */unsigned char) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)0])))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_0)) : (arr_0 [2ULL])))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            var_12 = ((/* implicit */long long int) var_0);
            var_13 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58549))))), (arr_4 [i_1 - 3] [i_1])))) ? (((2436390618U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (var_8));
            var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (arr_0 [i_0])));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) (short)14029)) : (((/* implicit */int) (signed char)(-127 - 1)))))) <= (arr_4 [i_2 + 2] [i_2 + 2])));
                var_16 = ((/* implicit */long long int) ((_Bool) (~(var_8))));
                var_17 |= ((/* implicit */long long int) ((short) var_10));
            }
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_18 += ((/* implicit */short) arr_6 [i_2 + 1] [i_2 + 1] [i_4]);
                var_19 -= ((/* implicit */short) arr_7 [i_4]);
            }
            arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned int) arr_3 [i_2] [i_0])));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_4 [i_2 + 2] [i_2 + 2])));
        }
        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_20 = ((/* implicit */_Bool) (+(arr_10 [i_5] [i_5] [i_0] [i_0])));
            var_21 = ((/* implicit */unsigned int) var_9);
            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [8LL])) ? (((((/* implicit */int) arr_5 [i_0] [(_Bool)1])) >> (((((/* implicit */_Bool) 10340754431514945088ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (311730347U))))) : (min((((/* implicit */int) (_Bool)0)), (((int) var_1))))));
        }
        var_23 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (8714492303695989641ULL)));
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (arr_3 [i_6] [i_6]))))) ? (((/* implicit */int) ((unsigned char) 16682427678105404909ULL))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65535)) : ((+(((/* implicit */int) arr_8 [i_6] [(short)16] [i_6]))))))));
        var_25 += ((short) (unsigned short)65521);
    }
    var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) (unsigned short)4095))))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)116)), ((unsigned short)37554)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-68)) > (var_6))))))));
}
