/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57790
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (max(((+(var_4))), (((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (-767635904) : (arr_0 [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_0]) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_11 = ((/* implicit */short) (unsigned char)32);
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_12 &= var_3;
                            arr_19 [i_1] [i_2] [i_3] [i_4] [i_1] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)255), ((unsigned char)43)))) && ((_Bool)1))))));
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1])) ? (((unsigned int) 4294967295U)) : (max((((/* implicit */unsigned int) arr_10 [i_5] [i_2] [i_2])), (arr_4 [i_5]))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) arr_16 [i_1])), (arr_10 [i_1] [i_2] [i_3]))))))))))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_2))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((arr_15 [i_2] [i_4] [i_2] [i_3] [i_2] [i_1]) ? (((/* implicit */int) var_0)) : (var_9))) >= (((/* implicit */int) (short)-6363))))) % (((((/* implicit */_Bool) arr_10 [i_1 + 3] [i_1 + 3] [i_1 + 3])) ? (arr_14 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 3]) : (((/* implicit */int) arr_5 [i_1]))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_6] [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((unsigned char) var_9)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -3292184541263530073LL)))))))) | (((((/* implicit */int) ((((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_2] [i_3] [i_1])) <= (((/* implicit */int) var_3))))) << (((max((var_7), (var_7))) - (701410958U)))))));
                            var_16 = max((((/* implicit */long long int) var_4)), ((((!(var_5))) ? (-3292184541263530100LL) : (((/* implicit */long long int) ((/* implicit */int) (!(var_8))))))));
                            arr_23 [i_1] [i_4] [i_6] &= -3292184541263530073LL;
                            var_17 &= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_10))) : (((3737699946U) << (((/* implicit */int) var_8))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_1] [i_4] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)52))));
                            arr_27 [i_2] [i_3] = ((/* implicit */_Bool) (~(max((min((arr_11 [i_1]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) var_3))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_3] [i_3] [i_3] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((max((var_9), (((/* implicit */int) (short)-10550)))) >= (((int) (short)-6342))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)48))))))));
                            var_18 = ((/* implicit */_Bool) ((int) (short)32767));
                        }
                        arr_31 [i_4] [i_3] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (max((2478627606U), (((unsigned int) arr_15 [i_1] [i_1] [i_2] [i_2] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? ((~(((/* implicit */int) (short)-32767)))) : (((int) -3292184541263530100LL))))))));
        arr_32 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)69)) ^ (arr_0 [i_1])))) : ((-(9223372036854775807LL))))))));
        arr_33 [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) ((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-10550))))))))));
    }
    for (unsigned char i_9 = 2; i_9 < 19; i_9 += 3) /* same iter space */
    {
        var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)1016)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (arr_28 [12] [i_9 - 2] [i_9 + 2] [i_9 + 3])))) ? (((/* implicit */int) ((short) arr_0 [i_9 - 1]))) : (((/* implicit */int) ((short) -1463436141)))));
        arr_37 [i_9] = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) arr_8 [i_9] [i_9] [i_9])) : (((unsigned int) 1463436141))))) != (max((max((-8843191756380561263LL), (((/* implicit */long long int) 56116388)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (2377832052U)))))));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                {
                    arr_42 [i_9] [i_10] [i_11] &= ((/* implicit */short) ((_Bool) var_5));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) ((long long int) (short)10525));
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            var_22 = ((/* implicit */int) ((((long long int) arr_46 [i_9 + 2] [i_9 + 2] [i_9 - 2] [i_9 + 3] [i_9 - 1])) % (((/* implicit */long long int) ((arr_46 [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 1] [i_9 - 2]) / (arr_46 [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9 + 1]))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6359031917352161575LL)) ? (-1463436133) : (-1463436141)));
                            var_24 &= ((/* implicit */unsigned int) ((min((((/* implicit */int) ((unsigned char) (_Bool)1))), (((int) (short)6353)))) ^ (((/* implicit */int) (_Bool)0))));
                        }
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */int) (!(var_2)))) - (arr_14 [i_9] [i_9 - 2] [i_9 + 1] [i_9] [i_9 + 1])));
                            var_26 &= ((/* implicit */unsigned char) (((_Bool)1) ? ((~(((/* implicit */int) (short)-6348)))) : (((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */unsigned int) (_Bool)1);
                            var_28 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_6)) & (((/* implicit */int) arr_24 [i_9] [i_10] [i_9] [i_12] [i_14]))))));
                        }
                    }
                    arr_50 [i_9] [i_10] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (+((~(arr_28 [16LL] [i_10] [i_10] [i_10])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11]))) : (((long long int) var_1))));
                }
            } 
        } 
    }
    for (unsigned char i_15 = 2; i_15 < 19; i_15 += 3) /* same iter space */
    {
        arr_54 [i_15] &= ((/* implicit */unsigned int) ((short) max((((((/* implicit */int) (short)8618)) | (((/* implicit */int) var_8)))), ((-(((/* implicit */int) (short)-6333)))))));
        var_29 &= ((/* implicit */int) var_4);
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_17 [6] [i_15] [i_15]), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_0)))))))) ? (var_1) : (((/* implicit */long long int) (~(((/* implicit */int) max((arr_5 [i_15]), (arr_45 [i_15] [i_15] [i_15] [i_15] [i_15])))))))));
    }
    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) min((max((var_10), (((/* implicit */unsigned int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (2975515069U))))))))));
    var_32 = ((/* implicit */short) ((unsigned int) var_0));
    var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((var_10) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)28)))))))) ? (((((var_8) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (max((4294967270U), (1527238343U))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)32365))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17710)))))));
}
