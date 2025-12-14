/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70204
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (1899059296791708473LL)));
    var_21 = ((/* implicit */unsigned short) ((-1899059296791708472LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((-1899059296791708490LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-22519)))))) == (((/* implicit */int) ((1899059296791708475LL) == (((/* implicit */long long int) ((/* implicit */int) (short)22518))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = (_Bool)1;
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((-5102099182733239211LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))))) != (((/* implicit */long long int) ((/* implicit */int) ((1899059296791708474LL) != (((/* implicit */long long int) 1495767304U))))))));
                        arr_10 [i_3] [0ULL] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)33838);
                    }
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (signed char)118))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_24 += ((/* implicit */_Bool) ((((((((/* implicit */int) (short)-22519)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((554712092358738761LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
                                var_25 += ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)37)) % (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) ((((/* implicit */int) (signed char)-108)) != (((/* implicit */int) (signed char)-1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 4; i_6 < 13; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 3; i_8 < 12; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)34)) || (((/* implicit */_Bool) 0LL)))))));
                        arr_25 [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) || ((((_Bool)1) || (((/* implicit */_Bool) (signed char)-119))))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 3; i_10 < 10; i_10 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)9)) || (((/* implicit */_Bool) 4113373331386524053ULL)))))) | (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (7141025796825465353LL))))))));
                            arr_33 [i_7] [i_7] [(unsigned char)4] [i_7] [i_9] [i_10] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_34 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (short)20540))))) < (-2013905445)));
                        }
                        for (unsigned int i_11 = 3; i_11 < 10; i_11 += 3) /* same iter space */
                        {
                            arr_37 [i_11] [i_7] [i_7] [i_6] = (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)16)) >> (((((/* implicit */int) (unsigned char)221)) - (214)))))));
                            arr_38 [i_7] [i_6] [5LL] [i_9] [i_11 + 1] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_39 [i_7] [i_6 + 1] [i_7] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 4; i_12 < 10; i_12 += 4) 
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] [6U] = ((/* implicit */long long int) ((1104211377) < (((/* implicit */int) ((1663613367925411981LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_28 = ((/* implicit */long long int) min((var_28), (7981133541595326394LL)));
                        }
                    }
                    arr_43 [3ULL] [i_7] [i_7] [i_0] = ((/* implicit */unsigned long long int) (short)24289);
                    var_29 += ((/* implicit */short) 8112734912906056403LL);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            for (unsigned char i_14 = 1; i_14 < 11; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    {
                        arr_52 [i_0] [i_0] [i_0] [12] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (short)-24290))));
                        arr_53 [i_0] [i_0] [i_15] [13LL] [i_14] = ((/* implicit */unsigned long long int) (_Bool)0);
                        var_30 = ((/* implicit */long long int) (unsigned short)65140);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_16 = 1; i_16 < 12; i_16 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_64 [i_16] [i_17] [i_18] = ((/* implicit */int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 14; i_20 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36513))) | (4294967295U)))) + (((((/* implicit */unsigned long long int) 0)) - (((32767ULL) | (((/* implicit */unsigned long long int) 7981133541595326394LL))))))));
                                arr_69 [i_20] = (unsigned char)207;
                                arr_70 [i_16] [i_16] [i_20] = ((/* implicit */unsigned char) (unsigned short)22260);
                            }
                        } 
                    } 
                    arr_71 [i_17] = ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-1))));
                    arr_72 [i_16] [i_17] [i_18] = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
        var_32 = ((/* implicit */int) (unsigned short)65535);
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (signed char)15))));
        var_34 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) / (13890849197630167698ULL));
    }
    var_35 = ((/* implicit */unsigned int) (_Bool)1);
}
