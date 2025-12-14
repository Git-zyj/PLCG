/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79373
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_3] [(unsigned char)4] [i_0] [i_3] = min((((/* implicit */int) (unsigned short)63702)), ((((~(-1209552871))) & ((~(1209552870))))));
                                arr_13 [14ULL] [i_1] [i_1] [11] [i_1] [i_3] [14ULL] = ((/* implicit */unsigned short) arr_7 [i_0] [i_3] [i_3] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) (-(329693463)))))));
    var_14 = ((/* implicit */signed char) (~(var_8)));
    /* LoopSeq 3 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((int) var_8));
        var_16 = (-(((/* implicit */int) min(((signed char)32), ((signed char)-34)))));
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned short) var_3);
    }
    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 4) 
    {
        arr_19 [i_6] = ((/* implicit */unsigned short) (((((-(var_8))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ^ (max((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_4)))))))));
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -16)) && (((/* implicit */_Bool) -329693479))));
        /* LoopNest 2 */
        for (long long int i_7 = 3; i_7 < 21; i_7 += 4) 
        {
            for (unsigned short i_8 = 4; i_8 < 20; i_8 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) var_2)))) + (2147483647))) >> ((((-(-329693474))) - (329693466))))))));
                    /* LoopSeq 3 */
                    for (long long int i_9 = 1; i_9 < 20; i_9 += 4) 
                    {
                        var_19 ^= ((/* implicit */unsigned short) ((int) min((((/* implicit */unsigned long long int) arr_9 [i_6])), (arr_27 [i_6 + 1] [i_6] [(short)14] [i_9]))));
                        arr_29 [i_7] [i_9] [i_9 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)65521)), (9223372036854775806LL))), (((/* implicit */long long int) max(((short)8392), (((/* implicit */short) var_3)))))))) ? (((/* implicit */unsigned long long int) ((int) arr_23 [i_6] [i_6] [i_6] [i_9 + 2]))) : (var_6)));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) arr_21 [i_8] [i_8]);
                        var_22 += ((/* implicit */unsigned short) ((-15LL) == (((/* implicit */long long int) ((unsigned int) 329693474)))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6))))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 1; i_12 < 20; i_12 += 4) 
                        {
                            arr_38 [i_6] [i_6] [i_8] [i_7 + 1] [i_12] [i_11] = ((/* implicit */signed char) (~((~(4294967270U)))));
                            arr_39 [i_6] [i_7] [i_8] [i_11] [1ULL] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) var_9)))));
                            var_24 ^= arr_25 [i_8];
                            var_25 *= ((/* implicit */unsigned long long int) var_5);
                        }
                        arr_40 [i_6] [i_6] [1ULL] [1ULL] = ((/* implicit */short) (-(4655350111812703793ULL)));
                    }
                    var_26 = ((/* implicit */short) ((long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_2)))) != (((/* implicit */int) var_7)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))) != (14881920686694611926ULL)));
                        arr_45 [5U] [5U] [15ULL] [11LL] [i_13] [15ULL] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) 329693485))))), (((max((((/* implicit */int) (signed char)24)), (var_5))) << (((((((((/* implicit */_Bool) var_7)) ? (var_5) : (var_5))) + (248577702))) - (13)))))));
                        arr_46 [i_6 - 1] [i_6 - 1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_23 [i_7] [i_7 - 2] [i_7 + 1] [i_7 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (max((((/* implicit */unsigned long long int) 2147483633)), (17280100674967658684ULL)))));
                        arr_47 [6LL] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (unsigned short)65521))));
                        var_28 = ((/* implicit */int) (~(8U)));
                    }
                }
            } 
        } 
    }
    for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
    {
        arr_52 [i_14] [15] &= ((/* implicit */unsigned short) max((0ULL), (((/* implicit */unsigned long long int) ((-329693473) - (((/* implicit */int) (unsigned short)10287)))))));
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_4))));
    }
}
