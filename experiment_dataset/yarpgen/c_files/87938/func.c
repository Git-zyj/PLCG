/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87938
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((short) min((arr_5 [i_1 - 1] [i_1 + 2] [i_0]), (((/* implicit */unsigned char) ((669983141U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                            {
                                var_15 = ((/* implicit */short) ((_Bool) arr_7 [i_1 + 2] [i_3 + 3] [i_3] [(unsigned short)5]));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((_Bool) arr_4 [14U] [i_2])) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)60))))))))));
                                var_17 ^= ((/* implicit */short) (-((~(1363296056U)))));
                                var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1 + 1] [i_2] [i_3 + 3] [i_4])) | (((/* implicit */int) arr_5 [i_4] [i_3 - 1] [i_1 + 2]))));
                                arr_16 [(_Bool)1] [i_1] [i_2] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_14 [i_0] [i_1 + 1] [10U] [11U] [i_1 + 1])) : (((/* implicit */int) var_6))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) var_11))))))));
                                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(var_12))))));
                                var_21 |= ((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_0] [i_0])));
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_6 = 4; i_6 < 14; i_6 += 4) 
                            {
                                var_22 = ((/* implicit */short) (+(min((((/* implicit */long long int) arr_14 [i_0] [i_1 + 1] [i_1] [i_3 - 1] [i_6 - 4])), (var_5)))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_3] [i_3 - 1] [2U]))) && (((((/* implicit */_Bool) arr_8 [i_3] [i_3 + 2] [i_3])) && (((/* implicit */_Bool) var_7))))));
                                var_24 += ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) != (((/* implicit */int) var_11)))))) == (var_7))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                            {
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) | (((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3624984161U))))))))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */long long int) min((2536906105U), (((/* implicit */unsigned int) (signed char)-9))))), (((((/* implicit */_Bool) var_2)) ? (5053611194363369451LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (-2699994158514024303LL)));
                                var_27 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967286U))));
                                var_28 = ((/* implicit */unsigned int) max((var_28), ((+(((unsigned int) (-(((/* implicit */int) var_11)))))))));
                            }
                        }
                    } 
                } 
                arr_23 [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */int) max((var_29), ((+(((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_8] [i_8] [i_9] [i_8] [12])) ? (((/* implicit */int) var_11)) : (var_3)))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */int) (signed char)-5)) + (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && ((((_Bool)1) || (var_12))))))));
                            var_31 = (-((~(((/* implicit */int) ((var_12) || (((/* implicit */_Bool) var_4))))))));
                            var_32 = ((/* implicit */int) arr_6 [i_1 - 1] [i_1] [12] [i_9]);
                        }
                    } 
                } 
                var_33 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1 + 2] [i_1] [i_1])) || (var_12))))))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
            }
        } 
    } 
    var_34 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) ? (max((((((/* implicit */_Bool) -999412657)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) : (var_1))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (2692750429U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_35 = ((/* implicit */unsigned int) (-(var_3)));
}
