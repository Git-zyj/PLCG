/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83366
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
    var_13 = ((/* implicit */unsigned char) ((signed char) var_3));
    var_14 = ((/* implicit */unsigned int) ((long long int) 4844480442692668765ULL));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] &= ((/* implicit */unsigned short) (signed char)(-127 - 1));
                        var_15 ^= ((/* implicit */unsigned char) (unsigned short)29405);
                        var_16 = ((/* implicit */unsigned short) max(((signed char)(-127 - 1)), ((signed char)(-127 - 1))));
                        var_17 -= (+((+(((/* implicit */int) (unsigned char)207)))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (signed char)-117))) | (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (signed char)127))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_4]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [(unsigned char)2] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_8 [i_4] [i_4]))))) : (arr_14 [(short)14])));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            for (signed char i_6 = 3; i_6 < 22; i_6 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)127)) ? (1099511627264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) ^ (((((/* implicit */_Bool) arr_0 [4LL])) ? (arr_14 [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_5] [i_6 + 1] [i_6])))))));
                    var_20 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4] [(unsigned char)6]))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((unsigned int) (signed char)(-127 - 1))))));
                    arr_20 [9U] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_4] [i_6 - 2] [i_4])) ? (arr_19 [i_4] [i_6 - 3] [i_4]) : (arr_19 [i_4] [i_6 - 3] [i_4])));
                }
            } 
        } 
    }
    for (int i_7 = 1; i_7 < 14; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                {
                    arr_29 [i_8] [i_8] [i_9] = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)99)))) ? (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)28220), (((/* implicit */unsigned short) arr_21 [i_7]))))) % ((~(((/* implicit */int) (_Bool)1))))))) : (((long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))));
                    arr_30 [i_7] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_3 [i_8] [i_7 + 3])) : (min((((/* implicit */int) max(((unsigned char)207), (((/* implicit */unsigned char) (signed char)106))))), (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)48))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((_Bool) max((18446742974197924351ULL), (((/* implicit */unsigned long long int) (signed char)127))))) ? (((/* implicit */int) arr_6 [i_7 + 3] [i_7] [i_7 + 3])) : (((/* implicit */int) arr_21 [i_7]))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 4) 
        {
            for (signed char i_11 = 1; i_11 < 16; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            {
                                arr_40 [i_13] [i_12] [i_12] [i_11 + 1] [i_11] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - ((+(arr_0 [i_10])))));
                                arr_41 [i_11 + 1] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 18446742974197924352ULL)) ? (((/* implicit */int) (signed char)127)) : (-1040886040)))))) > (min((max((((/* implicit */unsigned long long int) arr_2 [i_7])), (2247754342823680722ULL))), (((/* implicit */unsigned long long int) max((arr_25 [i_13]), ((signed char)(-127 - 1)))))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) < (((((/* implicit */_Bool) 0LL)) ? (14979379192155923473ULL) : (((/* implicit */unsigned long long int) -7184334574618893112LL))))));
                                var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), ((unsigned char)9)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_7] [i_10] [i_11] [i_12] [i_13]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */long long int) arr_19 [i_10] [i_10] [i_10])) > (((max((6094335547805546762LL), (((/* implicit */long long int) (short)-15722)))) / (((((/* implicit */_Bool) var_8)) ? (arr_23 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))))))))))));
                    var_26 = ((/* implicit */unsigned short) ((arr_8 [i_10] [i_10]) ? (arr_36 [i_11] [i_7] [i_7] [i_10] [i_7]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_11 + 2] [i_7 + 1])) ? (((/* implicit */int) arr_22 [i_11 - 1] [i_7 - 1])) : (((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 3; i_14 < 16; i_14 += 2) 
                    {
                        for (long long int i_15 = 1; i_15 < 16; i_15 += 2) 
                        {
                            {
                                arr_46 [i_7 + 4] [i_7 + 4] [10LL] [i_14 - 2] [i_14] [i_15] = ((/* implicit */unsigned short) (unsigned char)10);
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_10 [i_10] [i_10] [i_7]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 15; i_16 += 2) 
                    {
                        for (unsigned short i_17 = 3; i_17 < 17; i_17 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_31 [i_16] [i_11 - 1]), (((/* implicit */unsigned long long int) ((12296070000067136492ULL) < (((/* implicit */unsigned long long int) 920598184)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7] [(unsigned short)16])) ? (((/* implicit */int) var_5)) : (-1559698055)))) ? ((+(((/* implicit */int) (unsigned short)55259)))) : (((/* implicit */int) max((((/* implicit */short) arr_45 [i_10] [i_17] [i_11] [(signed char)5])), ((short)-5260))))))) : (((unsigned long long int) 5ULL))));
                                var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) ((long long int) arr_13 [i_11] [i_17]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)207))))) : (1099511627267ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0))))))));
                                var_30 = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) (short)(-32767 - 1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
