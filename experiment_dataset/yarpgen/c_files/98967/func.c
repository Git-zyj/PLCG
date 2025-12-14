/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98967
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
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -5961032716192251222LL)) ? (5961032716192251222LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) : (-5961032716192251214LL))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */signed char) min((((int) ((797617664) & (((/* implicit */int) var_11))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193)))))))));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((long long int) max((((((/* implicit */int) var_9)) + (((/* implicit */int) var_14)))), (((/* implicit */int) (signed char)3)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_1)))) ? ((~(((/* implicit */int) (unsigned char)193)))) : ((-(-797617682)))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_17 *= ((/* implicit */_Bool) ((int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8089))))), (max((((/* implicit */long long int) (signed char)-1)), (8529420744505456874LL))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_9 [i_2] = -7104950634447510706LL;
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (short i_4 = 2; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) var_8);
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_4 - 2] [16LL])) ? (arr_11 [i_3] [i_4] [i_4 + 1] [(short)9]) : (3726819020U)))) || (((/* implicit */_Bool) max((8529420744505456897LL), (((/* implicit */long long int) arr_11 [i_4] [i_4] [i_4 - 2] [i_4])))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_4] = (signed char)-78;
                            arr_19 [i_5] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_10 [i_3] [i_2] [i_4 - 1])))) ? (arr_15 [i_2] [i_2] [i_4 + 2] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (arr_0 [i_4])))))));
                            arr_20 [i_5] [i_2] [(short)1] [(_Bool)1] [i_5] = ((/* implicit */long long int) var_12);
                        }
                        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_24 [i_2] = ((/* implicit */signed char) var_1);
                            var_19 = ((/* implicit */unsigned char) min((((int) (_Bool)1)), (((int) var_4))));
                            arr_25 [i_2] = ((((((/* implicit */_Bool) arr_11 [i_1] [i_4 + 3] [i_3] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)229)) ? (-1LL) : (-8529420744505456874LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_12)), (2978382051U)))))) + (((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_2] [i_2])), (var_6)))));
                        }
                        for (long long int i_7 = 3; i_7 < 16; i_7 += 3) 
                        {
                            var_20 ^= (+(arr_28 [i_2] [i_3] [i_3] [(unsigned char)11] [i_3] [i_7 + 1]));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))) * (((long long int) max((var_1), (((/* implicit */long long int) arr_8 [i_2] [i_7])))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -5961032716192251248LL)) ? (((/* implicit */int) (short)27773)) : (-22587974))))) / (((((/* implicit */_Bool) max((-797617665), (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-107))))) : (arr_0 [i_7 - 3])))));
                            arr_29 [i_7] [i_4 - 2] [i_2] [i_2] [i_1] = ((/* implicit */short) ((3762358410U) | (((/* implicit */unsigned int) ((((/* implicit */int) (short)-14197)) & (((((/* implicit */int) var_9)) / (((/* implicit */int) var_14)))))))));
                            var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((unsigned short) 15));
                            arr_34 [i_2] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) -5961032716192251256LL))), (max((((/* implicit */long long int) (_Bool)1)), (-1412994130540049680LL)))));
                            arr_35 [(unsigned short)16] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((((long long int) (+(((/* implicit */int) var_14))))), (((/* implicit */long long int) (~((+(((/* implicit */int) (short)-30393)))))))));
                        }
                    }
                } 
            } 
        }
    }
    var_25 = min((5961032716192251246LL), (var_1));
}
