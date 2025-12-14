/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74335
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
    var_17 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17458))))) & (((long long int) var_14)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (((/* implicit */int) max(((short)24845), (((/* implicit */short) (signed char)127))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (((18446744073709551607ULL) | (((/* implicit */unsigned long long int) 1857914852))))))));
                    var_18 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_1] [i_1]);
                    arr_9 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (-(arr_5 [i_0])))) ? (((arr_2 [i_0] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (arr_6 [i_2] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]))))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (short)-23383))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        arr_12 [11LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [3] [i_3 - 1])) : (arr_1 [i_3] [i_3])))) ? (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */long long int) 1857914852)) : (6111467273489651801LL))) : (((/* implicit */long long int) ((int) 1686076197))));
        arr_13 [(signed char)0] [i_3 + 3] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)75)) < (((/* implicit */int) (short)23382))));
        /* LoopSeq 4 */
        for (long long int i_4 = 2; i_4 < 11; i_4 += 3) /* same iter space */
        {
            arr_18 [i_3] [i_4 - 2] [i_4 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 2501082568594654113LL)) : (5703714492725899101ULL)))) ? (arr_5 [i_3 + 1]) : (((1319183188923680489LL) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_4] [i_3] [3ULL])))))));
            var_20 = ((/* implicit */short) (unsigned char)170);
            arr_19 [i_3] [i_4] = ((/* implicit */int) ((((((/* implicit */long long int) 3492007771U)) <= (283009394599206150LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) : (arr_17 [i_3 + 1])));
            arr_20 [i_4] [(signed char)10] = ((/* implicit */short) (~(((/* implicit */int) (short)-15308))));
        }
        for (long long int i_5 = 2; i_5 < 11; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (long long int i_7 = 3; i_7 < 9; i_7 += 2) 
                {
                    {
                        var_21 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) 2501082568594654113LL)))));
                        arr_28 [i_5] [i_5 - 1] [0LL] = ((/* implicit */unsigned short) arr_5 [i_7]);
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((long long int) ((arr_11 [5LL]) + (((/* implicit */unsigned long long int) 2501082568594654113LL))))))));
                    }
                } 
            } 
            var_23 += ((/* implicit */unsigned long long int) ((arr_1 [i_5 - 2] [i_3 + 1]) <= (arr_1 [i_3 + 3] [i_3 + 3])));
            var_24 *= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 1] [i_3] [i_5])) != (((/* implicit */int) arr_7 [i_3] [i_5] [i_5] [i_5 - 1]))));
        }
        for (long long int i_8 = 2; i_8 < 11; i_8 += 3) /* same iter space */
        {
            arr_33 [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)117));
            var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2501082568594654113LL)));
        }
        for (long long int i_9 = 2; i_9 < 11; i_9 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) ((unsigned char) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
            var_27 = ((/* implicit */int) (~((~(14029382253586235907ULL)))));
            arr_37 [i_3] [11LL] = ((/* implicit */unsigned int) ((unsigned short) 3492007774U));
        }
        var_28 = ((/* implicit */unsigned int) ((arr_30 [i_3 + 2]) - (arr_30 [i_3 + 2])));
        arr_38 [3LL] = arr_0 [i_3] [i_3];
    }
    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        arr_41 [8LL] [i_10] = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) arr_40 [i_10])), (max((((/* implicit */long long int) var_16)), (283009394599206150LL))))));
        /* LoopNest 2 */
        for (signed char i_11 = 1; i_11 < 20; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                {
                    arr_47 [8LL] [i_10] [i_10] [14U] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((802959524U), (((/* implicit */unsigned int) var_0))))) ? (arr_44 [i_11 - 1] [i_11 - 1] [i_11 - 1]) : (((/* implicit */unsigned int) ((var_16) / (((/* implicit */int) arr_45 [i_10] [i_10] [15])))))))), ((~(((unsigned long long int) var_8))))));
                    var_29 = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) arr_39 [i_10])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            {
                                arr_52 [i_10] [i_10] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((((long long int) 283009394599206150LL)) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_46 [i_11 + 1] [i_12] [(unsigned char)4])) : (((/* implicit */int) var_2)))))));
                                var_30 -= ((/* implicit */long long int) (~(((98615576) ^ (((/* implicit */int) ((signed char) 7561177047918914653ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
