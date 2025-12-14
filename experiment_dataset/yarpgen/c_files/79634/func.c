/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79634
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
    var_14 = ((/* implicit */unsigned char) (+(var_2)));
    var_15 = ((/* implicit */_Bool) (+((-((+(((/* implicit */int) (unsigned char)220))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_0)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2])))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                            var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_2] [i_3] [i_2])), ((-(((/* implicit */int) arr_10 [i_4] [i_4 + 2] [i_4 + 2] [i_3] [i_1] [i_4]))))));
                        }
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_7))))))));
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                arr_21 [i_6] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_17 [i_6]))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((_Bool) var_9)))));
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_6] [(short)15] [i_6] [7U])))))));
                            arr_28 [i_0] [i_6] [i_0] [i_7] [i_8] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_8 [i_6])))) & (((arr_8 [i_0]) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_5]))))));
                            var_22 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_6 [i_5] [i_6] [i_5])))));
                            var_23 = ((/* implicit */short) (!(arr_10 [6] [i_5] [i_5] [(short)15] [i_8] [i_7])));
                        }
                    } 
                } 
            }
            for (short i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (arr_29 [13] [i_5] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_25 *= ((/* implicit */short) ((_Bool) (-(((/* implicit */int) ((signed char) (unsigned short)13878))))));
                    var_26 = ((/* implicit */signed char) ((short) ((_Bool) arr_23 [i_0] [i_5] [i_9] [i_10])));
                    arr_33 [i_5] [i_9] [i_5] [(short)15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((var_10) ^ (((/* implicit */long long int) arr_27 [i_10] [i_10] [16LL] [i_10])))))))));
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_37 [i_11] [i_11] [i_11] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [(short)10] [(short)13] [i_0]))));
                arr_38 [i_11] = ((/* implicit */_Bool) ((signed char) (unsigned char)24));
                var_27 = ((/* implicit */_Bool) (~(arr_18 [i_5])));
            }
        }
        /* LoopSeq 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_28 = ((/* implicit */long long int) arr_25 [(short)8] [i_0] [i_0]);
            arr_43 [i_12] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_12] [i_12]))) != (var_6))))))) & (((((/* implicit */_Bool) arr_26 [5LL] [i_12] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_12] [i_12] [i_12])) : (var_2)))));
        }
        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            var_29 = (-(65535U));
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                for (long long int i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    {
                        arr_52 [i_15] [i_14] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_39 [i_0] [i_14])), (max((arr_18 [i_0]), (((/* implicit */long long int) (~(arr_23 [i_14] [i_13] [i_14] [i_15]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_13))))), (arr_3 [i_14] [i_14])))), ((-(((/* implicit */int) (signed char)-67))))));
                            var_31 = ((/* implicit */short) (+((+(arr_29 [i_0] [i_13] [(signed char)7] [i_15])))));
                        }
                        arr_56 [(short)10] [i_0] [i_0] [0LL] [i_0] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_1)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_47 [3U] [3U]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)25)), (8531513472803091642LL)))))))));
                    }
                } 
            } 
            var_32 ^= ((/* implicit */long long int) var_13);
            var_33 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_13] [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_0] [i_0]))))))));
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_15 [i_13] [i_0]))));
        }
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 2) 
        {
            var_35 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_17] [i_17])) & (((/* implicit */int) arr_8 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))) : (((unsigned int) 8531513472803091642LL))));
            var_36 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_17])) ? (var_12) : (var_2)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)104))))) : (arr_26 [14U] [14U] [i_17] [i_17] [(unsigned char)7]))))));
        }
    }
    for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 4) 
    {
        arr_61 [i_18] = ((/* implicit */_Bool) (~(((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_59 [i_18])) : (((/* implicit */int) arr_59 [i_18])))))));
        arr_62 [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_8)))))))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (short i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                {
                    var_37 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_68 [i_20] [5LL]))));
                    var_38 = ((/* implicit */long long int) arr_69 [i_19] [i_20] [i_21]);
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_19]))) - (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [(signed char)1] [i_19])))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_63 [i_19]))))) : (((unsigned long long int) arr_72 [i_19] [i_19]))));
        arr_73 [i_19] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_70 [i_19] [0ULL] [0ULL] [i_19])) ? (((/* implicit */int) arr_66 [i_19] [i_19])) : (((/* implicit */int) arr_66 [i_19] [0LL])))))) > ((-(((/* implicit */int) ((unsigned char) arr_69 [i_19] [i_19] [i_19])))))));
    }
}
