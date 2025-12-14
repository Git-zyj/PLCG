/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81707
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) -5713754031085254748LL))) > (((/* implicit */int) min((((unsigned short) var_0)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1])) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) var_7))))));
            arr_4 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1])))))));
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))));
            }
            for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_0))));
                var_17 = ((unsigned short) ((unsigned short) arr_11 [i_1] [i_3]));
                arr_13 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((long long int) (unsigned char)255));
            }
            for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                var_18 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) ^ (0ULL)));
                var_19 = ((/* implicit */unsigned short) ((signed char) arr_16 [i_1]));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_20 [i_5] = ((/* implicit */signed char) ((unsigned short) arr_2 [i_0] [i_0] [i_4]));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_11 [i_0] [i_4])))))));
                    arr_21 [i_5] [i_1] [i_4] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)42371)))))));
                }
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_25 [i_0] [i_1] [i_4] [i_6] = var_3;
                    arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_0]))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_7))))))))));
                    arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_8 [i_0] [i_0] [i_4] [i_0])));
                }
                arr_28 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_5))));
            }
            arr_29 [i_1] = ((/* implicit */long long int) var_0);
        }
        arr_30 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)16817);
        var_23 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
    }
    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        arr_33 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-56)) ^ (((/* implicit */int) (unsigned short)15031))))) % (((((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-2560812651766886420LL))) + ((-(-4800497070258290635LL)))))));
        var_24 |= ((/* implicit */unsigned short) ((unsigned char) ((((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_32 [i_7])) : (((/* implicit */int) var_13)))) | (((/* implicit */int) max((arr_1 [i_7] [i_7]), (((/* implicit */unsigned short) (unsigned char)255))))))));
        /* LoopNest 3 */
        for (long long int i_8 = 2; i_8 < 9; i_8 += 1) 
        {
            for (unsigned short i_9 = 3; i_9 < 8; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            arr_45 [i_7] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_7] [i_7]))));
                            arr_46 [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1582683857533383472LL)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (signed char)104))));
                            arr_47 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_7])) < (((((/* implicit */_Bool) arr_37 [i_7])) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_12))))));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)448)))));
                            var_26 = ((/* implicit */unsigned long long int) var_8);
                        }
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            arr_52 [i_7] [i_7] [i_7] [i_13] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((arr_49 [i_9 + 2] [i_9 + 1] [i_9 - 2] [i_7] [i_9 + 1] [i_9 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) var_2)))))));
                            arr_53 [i_7] [i_8 - 2] [i_7] [i_10] = ((signed char) min((18446744073709551602ULL), (((/* implicit */unsigned long long int) -44531263270365339LL))));
                            arr_54 [i_7] [i_7] [i_9 + 2] [i_7] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)-92)) : (((((/* implicit */int) (unsigned char)231)) | (((/* implicit */int) (signed char)55)))))))));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((signed char) arr_1 [i_8 + 1] [i_8 + 1])))));
                            arr_58 [i_7] [i_8 - 2] [i_9] [i_10] [i_7] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)64)) ? (7312909625644977443LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93)))))));
                            var_28 += ((unsigned char) (unsigned short)65089);
                        }
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_7] [i_8 - 2] [i_9 - 1])))), (((/* implicit */int) (unsigned char)192)))) << (((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_7])), (var_12)))) ? (((/* implicit */int) arr_5 [i_7] [i_7] [i_7])) : (((/* implicit */int) ((unsigned char) (unsigned short)44500))))) - (43956))))))));
                            arr_61 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned char) max((12325034667072230793ULL), (((/* implicit */unsigned long long int) (unsigned short)56008)))));
                            arr_62 [i_7] [i_7] [i_8] [i_9 - 3] [i_10] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(-2560812651766886420LL)))) ? (((arr_36 [i_7] [i_7]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)38)), ((unsigned char)200))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))));
                        }
                        arr_63 [i_7] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_8 + 1] [i_8])) ? ((-(arr_49 [i_8 - 1] [i_8] [i_8 - 1] [i_7] [i_8 - 2] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_1 [i_8 - 2] [i_8 - 1])))))));
                    }
                } 
            } 
        } 
        var_30 ^= ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_11 [i_7] [i_7])))), (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) min((arr_5 [i_7] [i_7] [i_7]), (((/* implicit */unsigned short) arr_2 [i_7] [i_7] [i_7]))))))))));
        var_31 = ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)13)), (0LL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) 19LL)))))));
    }
    var_32 = ((/* implicit */unsigned short) ((unsigned long long int) max((max((var_11), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
    {
        arr_68 [i_16] [i_16] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))));
        var_33 = ((/* implicit */unsigned char) var_2);
        var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_65 [i_16])) % (((/* implicit */int) var_8)))))));
    }
}
