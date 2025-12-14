/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79379
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [6] = ((/* implicit */signed char) max((max((-5152519484703531365LL), (((/* implicit */long long int) 0)))), (((((0) == (var_12))) ? (min((var_10), (((/* implicit */long long int) -164806271)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_2 [17LL]))))))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_14)) | (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_8))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))) : (((arr_1 [i_0]) ? (var_1) : (var_1))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_5))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1 - 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-2LL) : (arr_6 [i_1] [0])))) ? (min((((/* implicit */long long int) 4294967285U)), (6971064161084049539LL))) : (((/* implicit */long long int) ((int) arr_1 [i_1])))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        {
                            arr_22 [i_4] = ((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) -1)), (max((-1LL), (((/* implicit */long long int) var_9)))))));
                            arr_23 [6] [i_4] [i_4] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) (_Bool)1))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) 4294967291U)) : (var_4)))))));
                        }
                    } 
                } 
            } 
            arr_24 [i_2] = ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1))))) != (var_3)));
            var_19 *= ((/* implicit */_Bool) arr_11 [i_2]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            arr_29 [i_6] = ((/* implicit */int) ((long long int) ((713652983826181355LL) >= (((/* implicit */long long int) ((/* implicit */int) var_15))))));
            arr_30 [i_1] [i_6] = var_3;
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (unsigned int i_9 = 2; i_9 < 11; i_9 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 3; i_10 < 10; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) 145056350U)) ? (((/* implicit */unsigned int) max((((arr_1 [i_7]) ? (((/* implicit */int) (_Bool)1)) : (var_5))), (((/* implicit */int) (signed char)98))))) : (arr_37 [i_11] [i_10 - 1] [i_9] [i_7]))))));
                            var_21 = (+(((var_16) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10 - 3] [i_10] [i_10] [i_9 - 1]))))));
                        }
                        var_22 = 707022486;
                        var_23 = ((/* implicit */_Bool) var_13);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) ^ (max((((/* implicit */long long int) var_6)), (var_11)))))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-96)))) : (((/* implicit */long long int) min((((unsigned int) (_Bool)1)), ((+(var_16))))))));
                        arr_42 [i_10] [i_8] = ((/* implicit */long long int) min((((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (((signed char) ((((/* implicit */_Bool) -707022485)) || (((/* implicit */_Bool) 1985638762)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        for (signed char i_13 = 4; i_13 < 10; i_13 += 1) 
                        {
                            {
                                arr_50 [2] = ((((var_14) + (2147483647))) >> (((min((max((((/* implicit */int) var_7)), (1))), (((int) var_0)))) + (125))));
                                var_25 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)85)) + (arr_43 [i_7] [i_8] [i_12] [i_13])))) ? (var_13) : (((/* implicit */long long int) ((0U) % (var_9))))))));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_46 [i_9 + 1]), (((/* implicit */long long int) ((var_12) >> (((var_10) - (8571657463604530349LL))))))))) ? (((/* implicit */long long int) ((4149910946U) << (((4294967293U) - (4294967279U)))))) : (((((/* implicit */_Bool) -58086129)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (332987627837520764LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) ((0LL) == (0LL)));
}
