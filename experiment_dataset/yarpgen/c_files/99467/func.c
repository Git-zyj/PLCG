/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99467
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
    var_19 &= ((/* implicit */unsigned short) -2062919328);
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3020473819U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)1))) : (arr_0 [i_0]))), (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_15)) / (-8650494425916359752LL)))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((3020473819U), (((/* implicit */unsigned int) var_5))))) ? ((~(2289354784U))) : (1274493476U)))), (((long long int) arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((arr_4 [i_4] [i_3] [i_2]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (1274493476U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1] [12U])))))))))));
                                arr_12 [i_0] [i_0] [5] [i_3] [i_4] = ((/* implicit */short) 731894609644514504ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (long long int i_6 = 4; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1] [i_1] |= ((((((/* implicit */int) var_10)) << (((((var_18) << (((3020473820U) - (3020473776U))))) - (1726461954026897404ULL))))) << (((max((max((((/* implicit */long long int) arr_15 [i_1] [i_2] [i_5 - 2] [i_6])), (-8650494425916359752LL))), (((/* implicit */long long int) ((3984936663U) + (2323685243U)))))) - (2013654610LL))));
                                var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1330182944U)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27835))) % (3984936663U)))) : (min((((((/* implicit */_Bool) (signed char)63)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39509))))), (((/* implicit */long long int) var_13))))));
                            }
                        } 
                    } 
                    var_24 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (arr_15 [i_2] [i_0] [i_2] [i_2]))))) / (arr_7 [i_0] [i_1] [i_2])))) ? ((~(max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 2] [i_2] [i_2] [i_0])), (731894609644514504ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    var_25 = (~(((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_22 [i_8] [i_7])))) + (var_16))));
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_2 [i_8])) & (((((/* implicit */long long int) arr_2 [i_7])) ^ (-7395944711397226756LL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 2; i_9 < 9; i_9 += 1) 
    {
        var_27 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 4294967295U)) >= (731894609644514504ULL))) ? (((/* implicit */long long int) ((2673150760U) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (arr_8 [i_9] [i_9])));
        arr_29 [i_9] = ((/* implicit */int) arr_24 [6U] [6U] [(short)6]);
        arr_30 [(short)3] = ((/* implicit */signed char) ((((((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9] [16LL] [i_9])) / (((/* implicit */int) (signed char)60)))) * ((-(((/* implicit */int) var_9))))));
    }
    /* vectorizable */
    for (short i_10 = 2; i_10 < 22; i_10 += 2) 
    {
        var_28 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) arr_25 [i_10] [i_10 + 1] [i_10])))) % ((-(((/* implicit */int) (_Bool)1))))));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 8016182005992014867LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_10])) > (7395944711397226752LL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59447))) ^ (var_0)))));
        arr_33 [i_10] = ((/* implicit */unsigned int) arr_2 [i_10]);
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                {
                    var_30 ^= ((/* implicit */short) ((arr_0 [15LL]) << (((((/* implicit */int) (signed char)73)) - (14)))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-37)) | (((/* implicit */int) (unsigned short)22236))))) ? ((~(-7395944711397226768LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))))));
                                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((arr_2 [i_11]) ^ (arr_35 [i_11]))))));
                                var_33 = ((signed char) arr_14 [i_12] [i_11]);
                                var_34 = ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                    var_35 = (~(((/* implicit */int) arr_5 [i_10 - 2] [i_10 + 1])));
                }
            } 
        } 
    }
    var_36 ^= ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7))))), ((short)2938)))));
    /* LoopNest 2 */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
        {
            {
                arr_49 [i_16] = ((/* implicit */_Bool) arr_43 [i_15]);
                var_37 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((unsigned char) var_0)))))));
                var_38 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned long long int) (signed char)73))))) || (((/* implicit */_Bool) arr_10 [i_15] [i_16] [i_15] [i_15] [i_15]))));
            }
        } 
    } 
}
