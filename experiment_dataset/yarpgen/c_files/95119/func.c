/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95119
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) arr_0 [i_0]))));
        var_12 += ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1181))) | (13835058055282163712ULL)))) ? (2544472856081666228ULL) : (var_5))));
        arr_2 [i_0] = ((/* implicit */int) (+(var_3)));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) -2897580588992792158LL);
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_13 = ((/* implicit */long long int) arr_5 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            var_14 = ((/* implicit */int) -3493069509616005381LL);
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_15 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (2544472856081666228ULL) : (((/* implicit */unsigned long long int) -17764887)))), (((((/* implicit */_Bool) 2280628093378752057ULL)) ? (var_5) : (((/* implicit */unsigned long long int) arr_5 [i_2 + 2] [i_3]))))));
                arr_12 [i_1] = arr_7 [i_3];
                arr_13 [i_3] [i_1] [i_1] = ((/* implicit */short) 3122879867U);
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    arr_16 [i_1] [i_1] [(short)3] = ((short) 9959618110766630048ULL);
                    var_16 |= ((/* implicit */unsigned int) arr_4 [i_4]);
                }
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (arr_11 [i_2] [i_1]))), (((/* implicit */unsigned long long int) var_2))))) ? (((arr_7 [i_3]) | (((/* implicit */unsigned long long int) arr_15 [1U] [i_2 - 1] [i_1] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            }
            for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) -922763761128715623LL);
                            var_19 = ((/* implicit */unsigned long long int) 9223372036854775802LL);
                            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_2 + 2] [i_2 + 2] [i_5 - 1] [i_5] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_2 - 1] [i_5 - 1] [i_1] [i_5 - 1]))) : (var_8)))) ? (2857663997653179867ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_2 + 2] [i_5 + 1] [i_5 - 1] [i_5 - 1]))) : (arr_22 [2LL] [i_2 + 1] [i_2 + 2] [(short)4] [i_5 - 1]))))));
                        }
                    } 
                } 
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-6538744750453482355LL) : (-4867211214428582633LL))))))) ? (((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (arr_5 [i_2] [i_5 - 1]) : (((/* implicit */int) (short)-18546)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_2] [i_5]))))));
            }
            arr_28 [i_1] [i_1] [2] |= ((/* implicit */unsigned long long int) var_6);
        }
        for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_1]);
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2))))) ? ((-(var_4))) : (((/* implicit */unsigned long long int) (~(arr_10 [i_1] [i_1] [i_1]))))));
            var_24 = ((/* implicit */unsigned int) arr_10 [i_1] [(unsigned short)10] [i_1]);
            var_25 *= ((/* implicit */unsigned long long int) 922763761128715622LL);
        }
    }
    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 4) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_10))));
        var_27 = ((/* implicit */int) min((((long long int) arr_32 [i_9 + 2])), (((((/* implicit */_Bool) var_6)) ? (arr_31 [i_9 + 2]) : (((/* implicit */long long int) arr_0 [i_9 - 1]))))));
    }
    var_28 = max((var_3), (var_7));
    var_29 = ((unsigned long long int) var_9);
}
