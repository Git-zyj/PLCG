/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68716
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
    var_16 = ((/* implicit */int) (~((+(((var_4) / (var_4)))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((25LL), (((/* implicit */long long int) (short)26596))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_14)))))))) : (((/* implicit */int) ((_Bool) var_5)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) 63U))));
        var_19 = arr_0 [i_0];
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((max((((/* implicit */int) arr_3 [i_0] [i_1] [i_4])), (arr_0 [i_1]))) * ((+(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) arr_11 [(_Bool)1] [i_3] [i_2] [i_3] [i_4])))))));
                            var_21 *= ((/* implicit */short) ((unsigned char) (_Bool)1));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) >= (-2345408157678585394LL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 3] [i_2] [i_1] [i_0 - 2] [i_0 + 3]))) : (var_4)));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_14)))));
                            arr_22 [i_0 - 1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) arr_0 [i_6]);
                            var_24 = ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
                arr_23 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
            }
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                var_25 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                var_26 = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_35 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_7] [i_9])))) ^ (((((/* implicit */_Bool) var_0)) ? (arr_14 [i_0] [i_0 - 3] [i_0 - 4]) : (arr_14 [i_0 - 1] [i_0 + 3] [i_0 + 4])))));
                            arr_36 [i_9] [i_7] [i_7] [i_1] [i_7] [i_0] |= ((/* implicit */short) ((unsigned char) ((((((/* implicit */int) arr_20 [(unsigned char)2] [i_1] [i_7] [i_8] [(_Bool)1])) + (2147483647))) << (((var_4) - (2809896520U))))));
                            var_27 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_8] [i_8] [i_9])), (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_8)))))))));
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */unsigned char) var_14);
        }
        for (int i_10 = 1; i_10 < 18; i_10 += 1) /* same iter space */
        {
            var_29 &= ((/* implicit */signed char) var_10);
            var_30 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 + 2] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_16 [i_0] [i_0] [i_10])))) ? (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_14))))) : (max((((/* implicit */long long int) arr_28 [6U] [i_0] [i_10] [i_10 - 1])), (arr_14 [i_0] [i_0] [i_10]))))));
        }
        for (int i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
        {
            arr_43 [i_0] [i_11] = ((/* implicit */unsigned int) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_0))))))));
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    for (unsigned int i_14 = 1; i_14 < 19; i_14 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            var_32 *= ((/* implicit */unsigned int) ((short) min((((/* implicit */long long int) var_10)), (max((var_11), (-8041047170342793809LL))))));
                            arr_52 [i_0] = ((/* implicit */unsigned short) arr_15 [i_0] [0ULL] [i_0] [i_13]);
                            var_33 &= ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) (short)-12567)) ? (arr_26 [i_0] [i_12] [i_12] [(unsigned short)14]) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])) <= (((/* implicit */int) arr_15 [i_0] [12U] [i_12] [i_12])))))))));
                            var_34 = ((/* implicit */long long int) (-(((/* implicit */int) max((var_14), (((/* implicit */unsigned short) arr_45 [i_11 + 1] [i_14 - 1])))))));
                        }
                    } 
                } 
            } 
            arr_53 [i_11] = ((/* implicit */unsigned char) ((((unsigned int) arr_16 [(signed char)1] [i_11 + 2] [i_11])) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5))))));
        }
    }
}
