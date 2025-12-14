/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75674
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
    var_12 = ((/* implicit */long long int) var_8);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_13 -= ((/* implicit */unsigned char) arr_0 [i_0 + 2] [14]);
        var_14 = ((/* implicit */unsigned int) var_4);
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53797)) ? (((/* implicit */int) ((-409212179595822710LL) >= (((/* implicit */long long int) -1281399386))))) : (((/* implicit */int) (signed char)40))));
        var_16 = ((((/* implicit */_Bool) var_8)) ? (((((17210237584301189793ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_1] [i_1])))));
        arr_6 [i_1] = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_17 &= ((/* implicit */unsigned short) arr_4 [i_2]);
            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)31)))))));
            arr_11 [i_2] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3] [(unsigned char)17])) ? ((~(((/* implicit */int) arr_0 [i_2] [i_3])))) : ((+(((/* implicit */int) arr_1 [i_2] [i_3]))))));
            var_19 = ((/* implicit */short) arr_3 [i_2] [i_2]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((unsigned char) arr_13 [i_4] [i_2])))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (short)32767))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (max((((/* implicit */unsigned long long int) ((short) arr_0 [i_2] [i_2]))), ((+(3085292014681664915ULL)))))));
            var_22 = ((/* implicit */int) (~(max((((/* implicit */unsigned int) arr_4 [i_2])), (4294967295U)))));
            var_23 -= ((/* implicit */short) ((max(((~(((/* implicit */int) arr_8 [i_2])))), (((/* implicit */int) arr_4 [i_4])))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (arr_9 [i_2] [i_2] [i_4]) : (((/* implicit */long long int) arr_7 [i_2]))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (unsigned char)131)))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_3))));
        }
        var_26 = ((/* implicit */unsigned int) max((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (1522521816753252296ULL)))) / (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) ((arr_16 [i_2] [10U] [i_2]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [2] [i_2] [i_2])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (signed char)31))))));
    }
}
