/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81145
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
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) (_Bool)0);
        arr_4 [i_0] = ((/* implicit */short) max((((unsigned long long int) ((long long int) arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) arr_1 [(unsigned char)3])), (4294967295U)))))));
        var_13 = ((/* implicit */signed char) ((unsigned long long int) -1331505401130589451LL));
        arr_5 [i_0] = ((/* implicit */int) (+(8268734727078581928LL)));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) (signed char)-100);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                arr_15 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_1]);
                var_14 = ((/* implicit */_Bool) ((signed char) (+(var_10))));
            }
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                var_16 = ((/* implicit */short) arr_2 [i_2]);
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    for (signed char i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((arr_22 [i_6] [i_5 - 2] [i_6] [i_5 - 2] [i_5 + 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_14 [i_6] [i_5] [12ULL])))))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_2] [6] [i_6 + 1] [i_6] [6])) ? (arr_22 [i_1] [i_6 + 2] [i_4] [i_5 - 3] [i_6 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((arr_2 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                arr_25 [i_4] [i_2] [i_2] = ((signed char) arr_12 [i_1] [i_2] [i_4]);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned long long int) -1331505401130589464LL);
                var_21 |= ((/* implicit */unsigned short) ((signed char) var_1));
                var_22 = min((((arr_2 [(unsigned char)12]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)29379)))))), (((/* implicit */unsigned long long int) arr_18 [4U] [i_1] [i_2] [i_2] [i_1] [4U])));
            }
            var_23 |= ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned short) arr_1 [i_2])), (var_1))));
            var_24 = ((unsigned long long int) arr_20 [(short)12]);
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [9LL]))) : (1331505401130589451LL)));
            var_26 = ((/* implicit */_Bool) max((var_26), (((var_10) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1])))))));
            var_27 = ((/* implicit */unsigned long long int) 2147483635);
        }
        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            var_28 = ((/* implicit */_Bool) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_9] [i_9 + 2] [i_9])) >> (((((/* implicit */int) arr_10 [(_Bool)1] [i_9 + 1] [i_9])) - (19008)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_9 + 2] [i_9 + 1])) % (((/* implicit */int) arr_0 [i_9 + 2] [i_9 - 1])))))))));
            arr_34 [i_9] = ((/* implicit */unsigned short) 917504U);
        }
        for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 1) 
        {
            var_29 = ((/* implicit */signed char) max((max(((~(2344650838448217706ULL))), (var_3))), ((-(arr_30 [(signed char)6] [(signed char)6])))));
            var_30 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) ((16377232974284286361ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100)))))) - (((/* implicit */int) max(((unsigned short)1669), (((/* implicit */unsigned short) (_Bool)1))))))));
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        {
                            arr_46 [i_13] [i_12 + 1] [i_11] [i_10 + 2] [i_1] = ((/* implicit */unsigned char) arr_21 [i_1] [i_1] [(_Bool)1] [i_12] [i_13] [i_11]);
                            var_31 |= ((/* implicit */signed char) min((max((var_3), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_1])), (107035776)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_32 [i_1] [0]), (((/* implicit */signed char) var_6)))))) > (9223372036854775807LL))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29380))) / (16377232974284286361ULL)));
                var_33 *= ((((/* implicit */int) arr_36 [i_1] [i_1])) >= (((/* implicit */int) var_6)));
            }
            var_34 = 2007174337;
        }
        var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-1331505401130589464LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)14)) - (14)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-13)) != (((/* implicit */int) arr_6 [i_1])))))) : (((unsigned int) var_8))));
    }
    var_36 |= ((/* implicit */short) var_6);
}
