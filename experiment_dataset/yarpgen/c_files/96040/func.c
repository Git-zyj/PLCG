/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96040
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) var_3);
        arr_2 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_12) + (var_12)))) ? (((arr_0 [i_1]) - (((/* implicit */unsigned int) arr_1 [i_1] [i_1])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) >> (min((min((var_10), (arr_0 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) var_7)))))))));
        arr_6 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */unsigned int) arr_4 [i_1]))))) ? ((-(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) arr_4 [i_1])))))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1])) ? (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1])) ? (13414356907921156725ULL) : (((/* implicit */unsigned long long int) 1227996986U)))) : (((((/* implicit */_Bool) 1444383135363319548LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (13414356907921156705ULL)))));
            arr_9 [i_1] = (short)26178;
            var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((var_6) / (((/* implicit */int) (signed char)46))))))) ^ ((((_Bool)1) ? (13414356907921156725ULL) : (((/* implicit */unsigned long long int) -1942569289733510852LL))))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_2))))), (var_11)))) ? (min((((/* implicit */unsigned long long int) 1883502319U)), (13414356907921156725ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_1 - 1])))))));
            arr_13 [i_1] [i_3] = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) 5032387165788394908ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))) : (2411464977U))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) <= ((~(2725562195U))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2596618986U) << (((13414356907921156705ULL) - (13414356907921156685ULL)))))) ? (((long long int) arr_0 [i_1 + 1])) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4])))));
                arr_16 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) arr_4 [i_1]);
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)106))));
                arr_19 [i_5] [i_3] [i_3] [i_1] = (~(((/* implicit */int) arr_4 [i_1 - 2])));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 1; i_6 < 7; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) (+(5032387165788394899ULL)));
                        var_20 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                    }
                    arr_27 [i_1] [i_1] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) var_9);
                    var_21 = ((((/* implicit */_Bool) arr_23 [i_1] [i_1 - 1] [i_3] [i_6] [i_6 + 2] [i_6])) ? (arr_23 [i_1] [i_1 + 2] [i_3] [i_6] [i_6 - 1] [i_6]) : (arr_23 [i_1] [i_1 - 1] [i_5] [i_6] [i_6 + 4] [i_6]));
                }
                var_22 = ((/* implicit */int) (-((+(arr_15 [i_5] [i_3] [i_3] [i_1])))));
            }
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_33 [i_8] = ((/* implicit */unsigned long long int) (-(((arr_15 [i_1] [i_3] [i_9] [i_1 - 2]) | (((/* implicit */long long int) var_10))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_3] [i_3] [i_9])))))) | (arr_15 [i_1] [i_3] [i_1] [i_8]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    {
                        arr_42 [i_12] [i_12] [i_12] [i_1] = ((/* implicit */short) 10983212926209306977ULL);
                        arr_43 [i_12] [i_11] [i_1] [i_10] [i_1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1])) ? (arr_15 [i_1] [i_1 - 2] [i_1] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (13414356907921156725ULL) : (((/* implicit */unsigned long long int) var_10))))) ? ((-(((/* implicit */int) (signed char)109)))) : ((+(((/* implicit */int) (unsigned short)1))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_13 = 3; i_13 < 10; i_13 += 3) 
            {
                for (unsigned int i_14 = 3; i_14 < 9; i_14 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) (!(var_4)));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 1; i_15 < 7; i_15 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_15] [i_13] [i_1] [i_1]))));
                            arr_52 [i_1] [i_1] [i_14] [i_1] [i_10] [i_1] = ((/* implicit */int) (-(arr_28 [i_15 - 1] [i_14 - 1])));
                        }
                        arr_53 [i_14] [i_13] [i_10] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_14])) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_5))));
                        var_27 = ((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [i_1] [i_14] [i_1])) ? (((/* implicit */int) arr_41 [i_13] [i_13] [i_10] [i_1])) : (((int) arr_44 [i_1])));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61066)) ? (-4760622766363539955LL) : (-1989550011294795301LL)));
            arr_54 [i_10] = ((/* implicit */_Bool) var_6);
        }
        arr_55 [i_1] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */long long int) var_0)), (arr_15 [i_1 + 1] [i_1] [i_1] [i_1]))));
    }
    for (long long int i_16 = 0; i_16 < 12; i_16 += 1) 
    {
        var_29 = ((/* implicit */_Bool) min(((signed char)(-127 - 1)), ((signed char)107)));
        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-22096))))));
    }
    var_31 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)89)) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) var_5))))));
}
