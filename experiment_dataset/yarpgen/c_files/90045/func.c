/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90045
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((int) ((((/* implicit */long long int) var_11)) <= (2156413659476263519LL)))))));
    var_13 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_14 -= ((/* implicit */int) ((short) var_0));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_0 [i_3] [5]))))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_0 + 2] &= ((/* implicit */short) ((((((/* implicit */_Bool) 4095U)) && (((/* implicit */_Bool) arr_1 [i_1] [(signed char)12])))) && ((!(((/* implicit */_Bool) (unsigned short)24738))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned short) 4294963192U);
            var_16 = ((/* implicit */unsigned char) var_2);
        }
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
        {
            arr_19 [6LL] [i_4] = ((/* implicit */unsigned short) 3412739500281235379ULL);
            var_17 *= ((/* implicit */unsigned short) (+(var_3)));
        }
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_18 = ((/* implicit */_Bool) ((unsigned char) var_3));
                arr_27 [i_5] [i_5] = ((/* implicit */unsigned char) ((-7074592708895087340LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_5] [i_6])) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        {
                            arr_37 [i_5] [i_7] [i_9] &= ((arr_28 [i_7]) >= (((/* implicit */int) arr_20 [i_9] [i_0 - 1])));
                            arr_38 [i_5] [i_5] [i_5] [i_5] = arr_12 [i_0] [i_0 + 2] [(unsigned short)11] [i_8];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 12; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        {
                            arr_45 [i_0] [i_5] [i_7] = ((/* implicit */short) ((arr_1 [i_10 + 3] [i_0 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51793)))));
                            var_19 = ((/* implicit */int) ((unsigned short) arr_6 [i_0 - 1]));
                            var_20 += ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
                var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)15)) * (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_13] [i_5] [i_7])) : ((-(var_11))))))));
                            var_23 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)31420)) : (((/* implicit */int) arr_20 [i_13] [i_13])))));
                        }
                    } 
                } 
            }
            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_14] [i_5])) ? (arr_31 [i_0] [i_14] [(short)5] [i_5]) : (8191)))) | ((-(52710940U)))));
                arr_54 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_49 [i_0] [i_0]))));
            }
            /* LoopSeq 3 */
            for (long long int i_15 = 1; i_15 < 15; i_15 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) 131071)))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 7074592708895087335LL)) - (((unsigned long long int) arr_6 [i_0]))));
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_40 [i_0] [i_5] [(unsigned short)10]))));
            }
            for (long long int i_16 = 1; i_16 < 15; i_16 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-(-1117970113))))));
                var_29 -= ((/* implicit */unsigned long long int) var_7);
                var_30 = ((/* implicit */unsigned char) (unsigned short)51797);
            }
            for (long long int i_17 = 1; i_17 < 15; i_17 += 4) /* same iter space */
            {
                var_31 = ((/* implicit */int) ((7785912186086039716ULL) != (((/* implicit */unsigned long long int) -330547758))));
                arr_63 [i_0] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_0]))));
            }
        }
        for (long long int i_18 = 3; i_18 < 13; i_18 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) 2082320245U);
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((unsigned char) arr_39 [i_0 - 1])))));
            arr_67 [i_0 + 2] = ((/* implicit */unsigned char) ((((-6435800317336671601LL) != (((/* implicit */long long int) 330547758)))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_2))))));
            arr_68 [i_0] [i_0] [4LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8191)) || (((/* implicit */_Bool) 8234214427525659475ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (var_11))))));
            var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_18 + 3] [i_0])) - (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(short)14] [i_18 + 3])) ? (((/* implicit */int) var_1)) : (var_9))))));
        }
    }
}
