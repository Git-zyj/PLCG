/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59379
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2])))), (var_13)));
        var_20 = ((/* implicit */_Bool) ((signed char) var_15));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) (+(((long long int) arr_10 [i_1] [i_2]))));
                var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)32759))))))), (min((3716111471547722278ULL), (((/* implicit */unsigned long long int) 1205252390U))))));
                var_23 = ((/* implicit */int) var_8);
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2)) << (((((/* implicit */int) (signed char)-58)) + (59)))))) : (((((/* implicit */_Bool) var_13)) ? (14730632602161829337ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1]))))))))))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                for (int i_5 = 3; i_5 < 9; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 2250023656U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61566))) : (min((((/* implicit */unsigned long long int) (unsigned short)3974)), (18446744073709551615ULL))))));
                            var_26 -= ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
            } 
            var_27 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) - (1885886567197645130ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_3))) - ((+(((/* implicit */int) var_7)))))))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                {
                    var_28 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), (((((/* implicit */int) (short)26140)) / (((/* implicit */int) var_7)))))))));
                    arr_24 [6U] [i_1] [(short)2] [i_8] = ((/* implicit */unsigned long long int) var_4);
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) ((min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3945))) : (2719352248858534934LL)))))) < (((/* implicit */unsigned long long int) ((unsigned int) ((var_2) != (var_3)))))));
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                    {
                        arr_34 [i_1] [i_9] [(_Bool)1] [i_1] = ((/* implicit */signed char) 1ULL);
                        var_31 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_1])) - (((/* implicit */int) var_18))))) + (((-3190838493382478418LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)119)))))));
                        arr_35 [i_1 + 2] [i_1] = ((/* implicit */long long int) arr_11 [i_1] [i_9] [i_1]);
                        arr_36 [i_1] [i_1] [(unsigned short)10] [i_11] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (!(((arr_21 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)304))))))));
                    }
                    for (int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) min(((signed char)-1), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8192))) : (1532799380U)))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 4; i_13 < 9; i_13 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)65231)) : (((/* implicit */int) (unsigned short)304)))) % (((/* implicit */int) (short)5194))));
                            arr_44 [i_13] [i_13] [i_13] [i_1] |= ((/* implicit */signed char) var_11);
                        }
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            arr_48 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) var_10)))))) : (((((/* implicit */unsigned long long int) 16777215U)) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) * (var_5)))))));
                            arr_49 [i_1] [i_1] [5] [i_1] [i_1] [i_14] = ((/* implicit */int) var_12);
                            var_34 = ((((((/* implicit */_Bool) 3716111471547722293ULL)) ? (((/* implicit */unsigned long long int) 2511581317090565273LL)) : (14730632602161829338ULL))) + (min((((/* implicit */unsigned long long int) (unsigned short)61566)), ((~(var_6))))));
                            arr_50 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */long long int) min((2576920105U), (((/* implicit */unsigned int) (signed char)60))))) != (8164800054303170665LL)))), (var_10)));
                        }
                        arr_51 [i_12] [i_1] [i_1] = ((/* implicit */unsigned short) (((-(1236517117))) < (((/* implicit */int) ((-1236517118) < (((/* implicit */int) var_17)))))));
                        arr_52 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (3) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) (short)-24356)))))));
                    }
                }
            } 
        } 
    }
    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) 1048575))));
    var_36 = ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-5194))))))) | (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned short)14312))))) | (((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
}
