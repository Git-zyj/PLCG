/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79271
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) min((arr_1 [i_0] [i_0]), (min((arr_3 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) var_1))))));
                var_11 = ((/* implicit */unsigned char) ((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))) != (((/* implicit */unsigned long long int) (~(137438953408LL)))))) || (((/* implicit */_Bool) min((((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) 1252229406U))))), (min((964604190), (((/* implicit */int) (signed char)15)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            arr_19 [i_4] = ((/* implicit */unsigned char) var_8);
                            var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1668064962888212229LL)) ? (((/* implicit */int) (_Bool)1)) : (-964604177)));
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_3))));
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) var_5)))))));
                            arr_20 [i_2] [i_2] [i_2] [i_5] [i_4] = ((unsigned long long int) var_9);
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            arr_24 [i_4] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */signed char) arr_14 [i_2] [i_3] [i_4] [i_3] [i_7]);
                            arr_25 [i_2] [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) var_10)), (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8)))))))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned short) (-(max((var_2), (max((((/* implicit */long long int) var_1)), (var_2)))))));
                            arr_29 [i_4] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((var_9), (((/* implicit */unsigned long long int) arr_11 [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_8 [i_2] [i_2]))) != (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) arr_9 [i_2] [i_4] [i_2]))))))))) : (min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) arr_5 [i_2] [i_2]))))), ((~(68719476735ULL)))))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 4) /* same iter space */
                        {
                            arr_32 [i_2] [i_2] [i_4] [i_2] [i_9] [i_4] [i_4] = ((/* implicit */unsigned char) min((-2847496131508368568LL), (((/* implicit */long long int) (_Bool)1))));
                            arr_33 [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((arr_30 [i_2] [i_3] [i_4] [i_5] [i_5] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))))), (min((((/* implicit */unsigned int) min((arr_21 [i_2] [i_2] [i_4] [i_2] [i_2] [i_4]), (arr_12 [i_4])))), ((-(var_0)))))));
                            var_16 = max((((/* implicit */unsigned long long int) arr_0 [i_9 + 1])), ((+(var_3))));
                            arr_34 [i_2] [i_4] [i_3] [i_4] [i_5] [i_4] = ((int) ((unsigned char) ((var_7) * (((/* implicit */unsigned int) var_1)))));
                        }
                        arr_35 [i_5] [i_5] [i_5] [i_4] = min((((/* implicit */unsigned long long int) max((var_10), (min((var_10), (var_10)))))), (arr_8 [i_5] [i_3]));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (-(-964604188)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (14358622008294249079ULL))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_7)))), ((-(18446744073709551601ULL))))))))));
    }
    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) arr_36 [i_10]))))))) : (((13406253695634928182ULL) ^ (18446744073709551611ULL)))))));
        arr_39 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)243)) / (((/* implicit */int) (unsigned char)141))));
    }
}
