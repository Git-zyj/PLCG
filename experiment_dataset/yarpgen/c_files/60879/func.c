/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60879
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
        var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_20 = ((/* implicit */short) ((arr_0 [i_0]) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) - (2231641383U))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_21 = ((/* implicit */unsigned char) (unsigned short)8);
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) max((max((max((1501415055869252087ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (((/* implicit */unsigned long long int) (signed char)91)))), (((/* implicit */unsigned long long int) arr_1 [i_2]))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */int) (((-(((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))) : (18405250304909347321ULL))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((18405250304909347293ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))))))));
            arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [i_2 + 1])) ? (((var_16) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2 + 1])))) : (((/* implicit */int) (unsigned short)65517))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_2])), (arr_15 [i_3 - 1] [i_1] [i_1] [i_3])))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)19))))) == (max((arr_16 [i_1] [i_4] [i_1] [i_2] [i_3] [i_1]), (((/* implicit */long long int) arr_11 [i_4] [i_4] [i_4]))))))) : ((((+(((/* implicit */int) arr_7 [i_4])))) + (((/* implicit */int) arr_11 [i_4] [i_4] [i_4])))))))));
                        var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((2719944879U), (((/* implicit */unsigned int) arr_17 [i_3] [i_1] [i_3] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5674620826620660618ULL)) ? (-4700931296537627154LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4095))))) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (max((((arr_13 [i_1] [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) (short)-1))))));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (short)4088)))))))))));
    }
    for (unsigned int i_5 = 3; i_5 < 12; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */short) var_15);
        /* LoopSeq 2 */
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? ((+(((5674620826620660613ULL) & (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_18 [i_6 - 2]), ((_Bool)0)))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                var_27 = ((((/* implicit */int) arr_18 [i_6])) == (((((/* implicit */int) (short)4095)) ^ (((/* implicit */int) (unsigned short)65512)))));
                var_28 |= ((/* implicit */unsigned short) 41493768800204323ULL);
                /* LoopNest 2 */
                for (short i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 2) 
                    {
                        {
                            arr_31 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? ((+(((/* implicit */int) (unsigned short)19977)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_7])) & (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((arr_2 [i_8]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218)))))) : (((/* implicit */int) ((unsigned char) (unsigned char)139)))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */int) ((short) 16352ULL))) & (((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (((/* implicit */int) max(((_Bool)0), (arr_18 [i_5])))) : (((((/* implicit */int) (unsigned char)38)) & (((/* implicit */int) arr_18 [i_8]))))))));
                            arr_32 [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1360078290)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8] [i_8] [i_8]))) : (-7272682839904793568LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_11)), (var_15))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)46826)), (982806153))))))) : (((((/* implicit */_Bool) arr_15 [i_5] [i_7] [i_7] [i_5])) ? ((-(((/* implicit */int) (unsigned char)235)))) : (-1808645496)))));
                            var_30 ^= max((((/* implicit */unsigned long long int) max(((-(2719944882U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3072U)) ? (((/* implicit */int) (short)22686)) : (((/* implicit */int) (short)4096)))))))), (max((arr_13 [i_6] [i_8]), (((/* implicit */unsigned long long int) ((int) (_Bool)1))))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) var_11))))) ? ((((-2147483647 - 1)) - (((/* implicit */int) arr_22 [i_5] [i_5])))) : (((/* implicit */int) arr_22 [i_5] [i_6]))))) ? ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_2))))) : (((/* implicit */unsigned long long int) max((3606688927U), (((/* implicit */unsigned int) (unsigned short)27632)))))));
        }
        for (unsigned int i_10 = 2; i_10 < 11; i_10 += 3) 
        {
            arr_35 [i_5] = arr_1 [i_10];
            var_32 ^= ((/* implicit */signed char) arr_28 [i_10] [i_10] [i_5] [i_5]);
            arr_36 [i_5] [i_10] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18U)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) arr_1 [i_10 + 4])))) == (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_0)))))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
    {
        arr_39 [i_11] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_0 [i_11]))))));
        arr_40 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_11])) ? (arr_2 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45539)))));
    }
    var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) ((unsigned char) (unsigned char)159))) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_10)))))))) & (((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) : (var_7))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))))));
    var_34 = var_0;
}
