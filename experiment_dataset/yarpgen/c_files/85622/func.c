/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85622
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 262143U))))) * (min((((/* implicit */int) arr_2 [i_0] [i_0])), (0)))));
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((short) 314768905));
            arr_7 [(unsigned char)7] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) min(((short)-17932), ((short)(-32767 - 1))))) <= ((+(((/* implicit */int) (_Bool)1))))))) - (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)0)) << (((/* implicit */int) (signed char)0))))))));
        }
        for (int i_2 = 4; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 177120431U)) ? (524287LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32736))))));
            arr_12 [(unsigned short)4] [6ULL] [11U] = ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29347))) - (5ULL))))));
        }
        for (int i_3 = 4; i_3 < 14; i_3 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned short)1821)))) : (((/* implicit */int) (unsigned char)19))))));
            arr_15 [i_0] = max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)0))))))), (((5ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 0ULL)))))));
        }
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 471240060U)))))) <= (((arr_11 [i_0] [i_0] [i_0]) >> (((/* implicit */int) (unsigned char)0))))))) > (((/* implicit */int) ((((((/* implicit */_Bool) 3ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) > (((/* implicit */unsigned long long int) ((int) 0ULL)))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((5309425260126215593ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)25)))))))) && (((/* implicit */_Bool) min(((unsigned char)236), (arr_18 [i_0] [i_4] [i_6 + 1] [i_4]))))));
                        var_22 = max((((/* implicit */int) min((arr_21 [i_0] [i_4] [i_5] [i_0] [i_6 + 1] [11U]), (arr_21 [i_0] [i_4] [i_5] [(unsigned short)14] [i_6 + 1] [i_5])))), ((-(((/* implicit */int) arr_21 [i_0] [14U] [14U] [i_6 - 1] [i_6 - 1] [i_0])))));
                    }
                } 
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
    {
        arr_26 [(unsigned char)2] = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) && (arr_1 [i_7] [i_7])))), (max(((unsigned char)202), (((/* implicit */unsigned char) arr_8 [i_7] [i_7] [i_7])))))));
        arr_27 [i_7] = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) arr_20 [i_7] [4ULL] [i_7]))))), (((((/* implicit */_Bool) var_5)) ? (arr_13 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    }
    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_23 = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)-7904)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12288))) : (18446744073709551615ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 4) 
        {
            for (unsigned int i_10 = 1; i_10 < 21; i_10 += 3) 
            {
                {
                    var_24 = arr_29 [i_10];
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            arr_42 [i_8] [i_10 + 1] [i_10 + 1] [i_9] [i_12] = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */int) (unsigned short)16384)) < (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) 11ULL))) >= (max((14282295320001982256ULL), (8972014882652160ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            var_25 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-123))));
                        }
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_8] [i_9 - 2] [i_10 - 1] [i_8] [6ULL]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_40 [i_8] [13U] [i_8] [13U] [(signed char)4]))))) : (((/* implicit */int) ((arr_36 [i_9] [i_9] [8ULL] [i_9]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4704))))))));
                    }
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        var_27 = ((455729651280823314ULL) << (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19026))) < (18446744073709551604ULL))))))));
                        var_28 = ((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)126)) ^ (((/* implicit */int) var_0)))), ((~(-1526831668)))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        arr_48 [i_8] [i_9 - 2] [i_10 + 2] [i_9] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -1926344568)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-32761))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 2) 
                        {
                            arr_52 [i_8] [i_9 - 1] [i_10] [i_10 + 1] [i_14] [i_9] = ((/* implicit */unsigned long long int) arr_32 [i_8] [19] [19]);
                            var_29 = ((/* implicit */signed char) (unsigned short)9151);
                            var_30 = ((/* implicit */_Bool) (signed char)-121);
                        }
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned short)19026)))), (((/* implicit */int) arr_30 [i_8] [i_8]))))), (14395139958344610859ULL)));
    }
    var_32 = ((/* implicit */unsigned int) max((var_32), ((-((-(((((/* implicit */_Bool) 4294967295ULL)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53615)))))))))));
    var_33 ^= ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned short)40232)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_8)))) == ((-(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) | (var_15)))))) : (var_13)));
}
