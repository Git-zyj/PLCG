/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76219
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_18 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)173)), (11ULL)));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13277))) + (var_17))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -8043303063366284116LL)) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((short) 0ULL))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (18446744073709551612ULL)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */signed char) min(((+(var_17))), (18446744073709551605ULL)));
                                var_21 += ((/* implicit */_Bool) arr_15 [(unsigned short)0] [(unsigned char)9] [i_4] [i_4 + 3] [20ULL]);
                                arr_17 [i_0 - 1] [11] [i_2] [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [8] [i_1 - 3])), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(short)11] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-1LL)))))));
                                var_22 ^= var_11;
                            }
                        } 
                    } 
                    arr_18 [i_0 - 1] [i_1 - 1] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)));
                }
            } 
        } 
    }
    for (short i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
    {
        var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) arr_14 [i_5 + 1]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))) : (var_17)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_9 [i_5] [i_5] [i_5]) >= (arr_5 [i_5 + 2] [i_5]))))))) : (min((((/* implicit */unsigned long long int) -1)), (((((/* implicit */_Bool) var_1)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) var_1))))))));
        var_24 = ((/* implicit */int) max((12ULL), (18446744073709551596ULL)));
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            for (unsigned short i_7 = 2; i_7 < 12; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */int) (unsigned char)190);
                    var_26 = ((/* implicit */unsigned short) max((((arr_6 [i_5 + 2] [i_5 - 1] [i_7 - 1]) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5 + 1] [i_7 - 1]))))), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)41118)), (arr_24 [i_5] [i_5 + 2] [i_7 - 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_27 += ((/* implicit */short) var_7);
                                arr_32 [i_9] [i_8] [12ULL] [i_6] [i_5] = ((/* implicit */int) var_17);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */unsigned long long int) var_1)) : (var_17))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5 + 2] [i_5 + 2] [i_5] [i_5])) ? (((/* implicit */int) arr_29 [12ULL] [(unsigned short)0] [i_5] [i_5 - 1] [i_5] [(unsigned short)10])) : (((/* implicit */int) arr_14 [i_5 - 1]))))) : (((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) ^ (940753700)))) % (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32076))) ^ (-3738312196085341829LL))))));
    }
    /* vectorizable */
    for (short i_10 = 1; i_10 < 11; i_10 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (unsigned short)44787))));
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)25)) != (((/* implicit */int) (short)-1)))))));
        var_31 = ((/* implicit */unsigned short) (signed char)56);
        var_32 += ((/* implicit */int) var_6);
    }
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                arr_40 [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) ((arr_38 [i_12] [i_12]) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_11] [i_12])) ? (var_3) : (var_11))))));
                arr_41 [i_11] [(_Bool)1] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_10 [10]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11]))) : (((long long int) (short)16384))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)106)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_15 [(short)12] [i_11] [i_11] [i_11] [i_12])) >= (arr_38 [i_11] [i_11]))))) : (max((13ULL), (22ULL))))));
            }
        } 
    } 
}
