/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95923
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) var_5);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1 + 1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? ((-(max((16169613205238556049ULL), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) min((((/* implicit */signed char) var_4)), (arr_7 [i_1] [1U] [5LL])))))))));
                        var_16 *= ((/* implicit */long long int) (((~((~(var_5))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1266956233596624302LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)240)))))));
                    }
                } 
            } 
            var_17 ^= ((/* implicit */unsigned int) ((var_0) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_10 [10U] [i_1] [i_1] [i_1])) : (var_7)))) ? (((/* implicit */int) ((arr_6 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) : (((((/* implicit */_Bool) (unsigned short)48204)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_15))))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned int i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    {
                        var_18 |= ((/* implicit */_Bool) var_12);
                        var_19 = ((/* implicit */int) max(((unsigned short)49868), (((/* implicit */unsigned short) ((_Bool) ((long long int) arr_8 [i_0] [2U] [i_4]))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                var_20 = (-(511U));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5698316019559423017ULL)) ? (-6748678499621348237LL) : (((/* implicit */long long int) 1714613921U))));
            }
            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) arr_14 [i_0] [(unsigned char)9] [i_7]);
                var_23 &= ((long long int) min((arr_24 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_24 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
            }
        }
        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            arr_28 [i_0 + 1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1598890041U)) / (-7845594071041039650LL)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_9 = 3; i_9 < 11; i_9 += 2) 
            {
                var_24 -= ((/* implicit */signed char) (+(((((/* implicit */int) var_15)) | (((/* implicit */int) arr_16 [4U] [i_8] [i_9 + 1] [i_8] [6U] [i_0]))))));
                arr_31 [i_9] [11LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_26 [i_0 - 1] [i_0 - 2]))));
            }
        }
        var_25 = ((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 4294967295U)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_14 [i_0] [i_0] [(unsigned char)0])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_0 + 2] [i_0] [i_0] [i_0]))))))))));
    }
    var_26 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_11))));
    var_27 = ((/* implicit */long long int) (~(3935180973U)));
}
