/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91914
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
    var_16 = ((/* implicit */unsigned int) var_14);
    var_17 = ((/* implicit */unsigned int) var_0);
    var_18 += ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((short) var_5));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 0U)) : (15606726215336268657ULL)));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_3] = ((short) (short)-26770);
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) (signed char)-80);
                            var_22 *= ((/* implicit */unsigned int) (+(arr_9 [i_1] [i_2] [i_3])));
                            arr_14 [i_1] [i_3] [12LL] [12LL] [i_1] = ((/* implicit */long long int) (~((-2147483647 - 1))));
                            arr_15 [(unsigned short)7] [i_3] [i_1] [(short)9] [i_0] = ((/* implicit */unsigned long long int) ((((arr_13 [i_4] [11ULL] [i_2] [i_2] [i_1] [11ULL]) & (arr_13 [i_0] [8LL] [i_2] [8LL] [i_3] [i_4]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 22U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28054))) : (3539332174078534659LL))))));
                        }
                        var_23 ^= ((short) arr_1 [i_1] [i_3]);
                        arr_16 [i_1] [18] [(short)2] [18] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [5ULL] [i_2] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1] [(short)20])) : (4294967295U)))) ? (((/* implicit */unsigned int) arr_8 [i_0] [(short)18] [i_0] [i_0])) : (((3760611059U) - (4043190433U)))));
                    }
                } 
            } 
            var_24 ^= ((((/* implicit */_Bool) (unsigned char)0)) ? ((-(15929428637062251262ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1228640520494960452ULL)) ? (-4905633078658619755LL) : (((/* implicit */long long int) arr_1 [i_0] [18ULL]))))));
        }
        for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_19 [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (signed char)0))))));
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_25 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_0] [i_5] [i_6]))));
                arr_22 [i_0] [i_0] [i_6] [(signed char)18] = ((/* implicit */unsigned int) (~(9673855950079004700ULL)));
                arr_23 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_6] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_6] [i_6]))) : (8U)));
            }
            for (unsigned short i_7 = 4; i_7 < 19; i_7 += 2) 
            {
                arr_26 [i_0] = ((/* implicit */int) (-(4294967295U)));
                var_26 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */unsigned long long int) 2724527569U)) : (var_0))));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [18ULL] [i_7])) ? (var_1) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8U)) && (((/* implicit */_Bool) arr_8 [2ULL] [2ULL] [i_7 + 2] [i_0]))))) : (arr_9 [i_0] [i_5] [i_7 - 3])));
            }
            var_28 ^= ((/* implicit */short) var_2);
            arr_27 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_13 [4ULL] [11] [i_5] [i_5] [i_5] [i_5]) : (0ULL)))) ? (arr_2 [(signed char)14]) : (((unsigned long long int) 4294967295U))));
        }
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
        {
            arr_30 [i_8] [i_0] = (short)(-32767 - 1);
            /* LoopSeq 3 */
            for (int i_9 = 2; i_9 < 17; i_9 += 1) 
            {
                var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
                arr_35 [16ULL] [i_8] [i_9] [1] = ((/* implicit */signed char) 940026934U);
                var_30 *= ((unsigned int) 49U);
                var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 559104698301806585LL)) ? (((/* implicit */unsigned int) 0)) : (3760611059U)));
            }
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)26512)) ? (((((/* implicit */_Bool) arr_21 [i_8] [5U])) ? (((/* implicit */unsigned long long int) 534356236U)) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) 49U))));
                var_33 = ((/* implicit */long long int) (+(2898447475092361952ULL)));
                var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3354940349U)) >= (678887864730461719ULL)));
                var_35 = ((/* implicit */int) arr_5 [i_8] [10ULL]);
            }
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_36 -= ((/* implicit */signed char) (~((~(arr_36 [10LL] [i_8] [6U])))));
                var_37 ^= ((/* implicit */int) arr_17 [i_0] [i_8] [i_11]);
            }
            var_38 = ((/* implicit */unsigned long long int) -2292229100588116279LL);
            var_39 = ((/* implicit */unsigned long long int) 49U);
            arr_40 [i_0] [i_8] = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) 4294967295U)));
        }
        for (long long int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
        {
            arr_44 [i_0] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_0] [i_12] [(unsigned char)20])) << (((((/* implicit */int) var_9)) - (173)))));
            var_40 -= ((((/* implicit */_Bool) arr_39 [i_12] [i_12] [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (arr_13 [18LL] [i_12] [i_12] [18LL] [7U] [i_0]) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((arr_36 [9U] [i_12] [i_12]) / (((/* implicit */int) arr_24 [i_12] [i_12] [15ULL]))))));
            var_41 *= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 10763400614212801637ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))))));
            var_42 ^= ((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_12]);
            var_43 ^= ((/* implicit */short) ((((((/* implicit */int) (short)-26766)) + (2147483647))) >> (((((/* implicit */int) (signed char)35)) - (26)))));
        }
        var_44 = ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) var_14)))));
        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_39 [i_0] [i_0] [i_0]) : (arr_39 [i_0] [i_0] [8U])));
    }
}
