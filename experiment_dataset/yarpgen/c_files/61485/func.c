/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61485
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((var_2) < (((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_0])), (arr_2 [6])))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)127))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_16 ^= max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */signed char) arr_9 [(_Bool)1] [i_1] [i_2] [i_3]))))), (11672163545095386252ULL));
                            var_17 = var_4;
                        }
                    } 
                } 
                arr_11 [i_1] &= ((((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)10762)))))), (((((/* implicit */int) (unsigned char)206)) + (-1213171325))))))));
        arr_16 [i_4] [17] = ((/* implicit */int) arr_15 [i_4]);
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) (unsigned char)0);
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((1314615492U), (var_10))))));
        /* LoopSeq 1 */
        for (int i_6 = 3; i_6 < 17; i_6 += 3) 
        {
            var_20 = ((((/* implicit */int) (signed char)23)) | (((/* implicit */int) ((_Bool) (signed char)50))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_19 [i_6 - 2] [i_6 - 1])) > (17708334677546753501ULL)))) >> (((((((/* implicit */_Bool) arr_19 [i_6 - 1] [i_6 - 2])) ? (arr_19 [i_6 + 1] [i_6 - 3]) : (arr_19 [i_6 - 3] [i_6 - 2]))) - (4185300937545137336LL)))));
            var_22 = ((/* implicit */long long int) ((((var_12) + (2147483647))) << (((/* implicit */int) (_Bool)1))));
            var_23 = 351742677;
        }
    }
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned int) 1963975970)))))));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            {
                var_25 += ((((/* implicit */int) (unsigned char)39)) * (((/* implicit */int) var_5)));
                var_26 += ((/* implicit */long long int) min((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_4 [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_10))))), (arr_10 [i_7])));
                /* LoopNest 3 */
                for (unsigned short i_9 = 1; i_9 < 9; i_9 += 2) 
                {
                    for (unsigned char i_10 = 2; i_10 < 8; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                arr_35 [i_8] = ((/* implicit */unsigned char) (~(((arr_15 [i_10 + 2]) | (((/* implicit */long long int) ((arr_20 [i_7] [i_7] [i_7]) | (((/* implicit */int) arr_12 [i_9])))))))));
                                arr_36 [i_11] [i_10] [i_8] [i_9 + 1] [i_8] [i_8] [i_7] = ((/* implicit */int) 16178242108188321301ULL);
                                arr_37 [i_10] [i_8] [i_8] [i_8] [8LL] [i_8] |= ((/* implicit */signed char) (unsigned short)11083);
                                var_27 = ((/* implicit */short) ((((/* implicit */int) var_5)) >> (((max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_2 [i_11]) : (var_1)))), (min((((/* implicit */long long int) arr_5 [i_7] [6LL] [i_9])), (arr_19 [i_10] [i_9 + 2]))))) - (3220971551LL)))));
                                var_28 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_7] [i_7])) >= (((/* implicit */int) ((arr_28 [i_7]) < (var_12))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 255U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)))), (max((((/* implicit */unsigned long long int) var_12)), (var_13)))))));
                            }
                        } 
                    } 
                } 
                var_29 &= ((/* implicit */long long int) var_5);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_12 = 0; i_12 < 13; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            for (unsigned char i_14 = 1; i_14 < 12; i_14 += 2) 
            {
                {
                    var_30 = ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (unsigned char)207)));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)-24)))) ? (((/* implicit */int) ((((/* implicit */int) arr_46 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 - 1])) > (arr_42 [i_14 + 1] [i_14 + 1] [i_14 + 1])))) : (((/* implicit */int) var_14)))))));
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_44 [i_12] [i_12] [i_12])), (var_14)))), (min((var_3), (((/* implicit */unsigned long long int) arr_44 [i_12] [i_12] [i_12]))))));
        arr_47 [i_12] = ((/* implicit */signed char) (+(max((arr_19 [i_12] [i_12]), (((/* implicit */long long int) arr_39 [i_12]))))));
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (unsigned short)65525)) : (var_12)));
        arr_51 [i_15] = var_12;
    }
    for (short i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
    {
        var_34 ^= ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (10U)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-21LL))))) >> (((min((-2295943737193585114LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) -351742678))))))) + (2295943737193585175LL)))));
        arr_55 [i_16] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) arr_50 [i_16] [i_16])) : (((/* implicit */int) (unsigned short)32448))))) ? (((/* implicit */int) (unsigned char)170)) : ((~(((/* implicit */int) (unsigned short)65535)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_23 [i_16] [i_16]), (((/* implicit */long long int) (unsigned char)180))))))))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)25)), (arr_18 [i_16])))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_50 [i_16] [i_16])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-19768))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33526)) + (((/* implicit */int) (unsigned short)65523))))))))));
        arr_56 [i_16] [i_16] = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((unsigned char) (unsigned char)50))))) | ((~(((/* implicit */int) (signed char)23))))));
    }
    for (int i_17 = 0; i_17 < 20; i_17 += 4) 
    {
        arr_59 [i_17] [i_17] = ((/* implicit */long long int) 0U);
        arr_60 [i_17] = ((/* implicit */int) arr_58 [i_17]);
    }
}
