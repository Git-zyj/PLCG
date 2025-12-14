/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8670
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */int) (unsigned char)120)) * (((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_20 -= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_1 [i_0]))) >> (((unsigned long long int) (_Bool)1)));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((3278447839673714621ULL) >> (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (var_7))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)253)), (3165775763406938055ULL)))) ? (((int) ((3687178441211767329ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) : (min((((/* implicit */int) arr_2 [i_1 + 1])), (((((/* implicit */int) (unsigned char)248)) - (((/* implicit */int) var_11))))))))));
        var_23 ^= ((/* implicit */signed char) (-(max((arr_4 [i_1 + 1] [i_1 + 1]), (((/* implicit */int) (unsigned char)1))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    var_24 -= ((/* implicit */unsigned long long int) var_8);
                    var_25 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (unsigned short)17434))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_17)) | (var_9)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) != (17350218738608576883ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(18446744073709551615ULL)))))))));
                    var_26 = ((/* implicit */unsigned long long int) var_11);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(max((var_14), (((/* implicit */unsigned int) (signed char)117))))))), (7681705033061784409ULL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_28 = max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_17)), (var_3)))) ? (((((/* implicit */_Bool) 8594851599385550430LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5]))) : (var_3))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_5] [i_5]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_5])) | (((/* implicit */int) arr_2 [i_5]))))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((-454397870), (((/* implicit */int) (unsigned short)65535)))))));
            var_30 = ((/* implicit */int) min((var_30), (max((((/* implicit */int) arr_5 [i_6])), ((+(min((((/* implicit */int) arr_2 [i_6])), (var_17)))))))));
            var_31 -= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_6] [i_6] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((((!(((/* implicit */_Bool) (unsigned short)21661)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)143)) & (arr_4 [i_5] [i_5])))) : (((((/* implicit */long long int) -2061856011)) + (9223372036854775807LL)))))));
        }
    }
    /* LoopSeq 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_32 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) 7069747886941118374LL)) ? (((/* implicit */unsigned int) arr_12 [i_7] [i_7] [i_7])) : (arr_10 [i_7] [i_7] [i_7]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))));
        arr_20 [i_7] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_19 [i_7]))));
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (~(((/* implicit */int) var_18)))))));
        arr_21 [i_7] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_7])) ? (arr_19 [i_7]) : (((/* implicit */unsigned long long int) 9223372036854775795LL)))) / (arr_16 [i_7] [i_7])))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        arr_24 [i_8] |= ((/* implicit */unsigned long long int) ((long long int) var_14));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)112)) ? (arr_16 [i_8] [i_8]) : (arr_16 [i_8] [i_9])));
            arr_27 [i_9] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))));
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1)))))));
            arr_28 [i_8] [i_8] [i_9] = ((((/* implicit */_Bool) arr_16 [i_8] [i_9])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 3390454630U)) <= (arr_16 [i_8] [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_8] [i_9]))))));
            var_36 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
        }
    }
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        var_37 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_10])) ? (((/* implicit */int) (signed char)-13)) : (arr_4 [i_10] [i_10]))) != (min((arr_4 [i_10] [i_10]), (((/* implicit */int) arr_25 [i_10]))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (long long int i_12 = 2; i_12 < 17; i_12 += 4) 
            {
                {
                    arr_39 [i_10] = ((/* implicit */short) ((_Bool) var_8));
                    var_38 = ((/* implicit */signed char) (~(var_3)));
                    arr_40 [i_11] [i_11] [i_12] = ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)1)) ? (arr_33 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_10] [i_11] [i_12])))))));
                    var_39 -= ((/* implicit */short) var_11);
                }
            } 
        } 
        arr_41 [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10])) ? (((/* implicit */int) ((arr_16 [i_10] [i_10]) > (((/* implicit */unsigned long long int) -969896394))))) : (((/* implicit */int) ((unsigned short) arr_15 [i_10]))))))));
        var_40 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3165775763406938033ULL)) ? (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) : (9223372036854775795LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (3165775763406938018ULL)))))))) ? (((((/* implicit */_Bool) ((int) 8165414431114075126ULL))) ? (((15280968310302613583ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_10]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((10765039040647767233ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
        arr_42 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (signed char)105))));
    }
}
