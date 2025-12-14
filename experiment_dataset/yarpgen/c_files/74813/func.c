/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74813
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 = arr_0 [i_0];
        var_19 = ((int) (-(2097151U)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_0]));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */long long int) 4292870144U)) : (43436734139544123LL)));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        arr_6 [(unsigned short)8] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 + 3]))));
        arr_7 [i_1 + 3] = ((/* implicit */unsigned int) -43436734139544124LL);
        arr_8 [i_1 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 5428418734016855729ULL))));
    }
    for (unsigned short i_2 = 3; i_2 < 7; i_2 += 4) 
    {
        var_21 ^= ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_2] [i_2 + 2]))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3835600846174165205LL)) ? (((/* implicit */int) (_Bool)1)) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)68)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_0 [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) 43436734139544147LL))))))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_22 [i_6] [i_4] [i_3] [i_2] = ((/* implicit */unsigned int) arr_1 [i_2] [i_2 + 2]);
                            arr_23 [i_6] [i_2] [i_5 - 1] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((-43436734139544123LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 17037770633592376108ULL)) ? (((/* implicit */int) arr_17 [i_2] [i_3] [i_5 - 1] [i_6])) : (((/* implicit */int) (short)(-32767 - 1)))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-4858)))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) 3835600846174165205LL))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) min((arr_20 [i_5 - 1] [i_5] [i_5 - 1] [i_4] [i_4] [i_2 - 2]), (((/* implicit */unsigned long long int) ((short) -4999775727479996784LL))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (int i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                var_25 ^= ((/* implicit */signed char) ((unsigned int) ((unsigned char) 652497948U)));
                var_26 ^= ((/* implicit */int) arr_0 [i_7 + 1]);
            }
            /* vectorizable */
            for (unsigned int i_8 = 4; i_8 < 9; i_8 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                arr_29 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_21 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2]))))));
                var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8 - 3] [i_2 + 2] [i_2] [i_2 + 4])) ? (arr_14 [i_8 - 3] [i_2 + 2] [i_2] [i_2]) : (arr_14 [i_8 - 3] [i_2 + 2] [i_2] [i_2])));
            }
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_2] [i_9] [i_2 + 1]))));
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3835600846174165206LL)) ? (-1284597960468350266LL) : (-3835600846174165206LL)));
            var_31 = ((/* implicit */signed char) arr_18 [i_2] [i_2]);
            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [i_2 - 3] [i_2 - 3]))));
            var_33 ^= ((/* implicit */signed char) arr_19 [i_9] [i_9]);
        }
        var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((2097138U), ((+(arr_14 [i_2] [i_2] [i_2] [(signed char)6])))))) - (((-43436734139544124LL) / (((/* implicit */long long int) arr_15 [i_2 + 4]))))));
        var_35 ^= ((/* implicit */unsigned short) min((min((11777789749667245922ULL), (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -3835600846174165191LL)) ? (3835600846174165215LL) : (3835600846174165206LL))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (43436734139544123LL))))))));
        arr_33 [(short)6] = ((/* implicit */short) arr_0 [i_2]);
    }
    var_36 ^= var_6;
}
