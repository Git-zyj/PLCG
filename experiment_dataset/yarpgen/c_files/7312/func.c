/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7312
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
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_13 = ((/* implicit */long long int) ((short) 8535081053600153876ULL));
        arr_3 [(signed char)11] = ((/* implicit */short) var_5);
    }
    var_14 = ((/* implicit */_Bool) 9911663020109397757ULL);
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [11] [i_1]))) / (1835008U)))) ? (max((arr_6 [i_1]), (((/* implicit */int) (signed char)112)))) : (((/* implicit */int) (unsigned char)25)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_1]))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_1] [i_2]) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_4 [(unsigned char)9] [(unsigned char)9]))))) : (7ULL)));
            arr_11 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (4602678819172646912LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))));
        }
        arr_12 [i_1] [i_1] = var_8;
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 1] [i_3 + 1]))) : (var_0))) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1])))));
        arr_15 [i_3 - 1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_3))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            arr_21 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)233)) ? (8535081053600153883ULL) : (16323213987797827062ULL)));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)26))) ? (((unsigned long long int) 21ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_4] [10U] [i_5]))))));
            var_19 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [13ULL])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_4])))))) ? ((-(arr_10 [i_4] [i_5]))) : (arr_10 [i_4] [i_5]))));
        }
        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((min((((/* implicit */long long int) (unsigned char)246)), (-4602678819172646922LL))) > (((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (arr_10 [i_4] [i_6]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)25630))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)21)) || (arr_8 [i_4] [18] [i_4]))) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551584ULL)) ? (9911663020109397727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6]))))) != (((((/* implicit */_Bool) 2147483638)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4]))) : (6241611846669812138ULL))))))));
                var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((arr_10 [i_6] [0ULL]), (-9223372036854775802LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (arr_20 [17]))))) : (((((/* implicit */unsigned int) -38525835)) * (var_6))))), (((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) arr_22 [16ULL] [i_6] [i_7])), (9223372036854775800LL)))))));
                var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_7] [i_7]))) ^ (var_8)))));
            }
        }
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((arr_19 [(_Bool)1] [1ULL] [i_4]), (((/* implicit */unsigned long long int) min((arr_4 [i_4] [i_4]), (arr_4 [i_4] [i_4])))))))));
        var_25 = ((((/* implicit */int) (!(arr_24 [i_4] [i_4] [i_4])))) - (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (-2147483634) : (((/* implicit */int) var_2)))))));
    }
}
