/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77293
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 *= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? ((-(4294967292U))) : (((/* implicit */unsigned int) ((-2147483644) / (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_6 [i_1] [i_1] [i_1] = ((arr_3 [i_2]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1])));
                arr_7 [i_1] [i_1] [8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2015527149630911782ULL)) ? (4294967291U) : (10U)));
                arr_8 [i_1] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) arr_0 [(_Bool)1]);
                arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967286U)) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + ((-2147483647 - 1))));
            }
            var_21 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_4 [i_0] [(unsigned short)14] [21ULL] [i_1]))))));
            arr_10 [i_0] |= ((/* implicit */unsigned short) (+(((16431216924078639834ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_14 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
            arr_15 [i_0] = ((/* implicit */int) (((_Bool)1) ? (15U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_3] [i_3])) - (((/* implicit */int) var_4)))))));
        }
        arr_16 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned char)11] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_17 [i_0] [16U] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)-34))))) && (((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_22 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967292U)) ? (var_15) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) == (2015527149630911782ULL))))))) < (max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)135))))), ((+(10U))))));
    var_23 -= ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_10))))), (max((0U), (((/* implicit */unsigned int) var_1)))))) << ((+(((/* implicit */int) (_Bool)1))))));
}
