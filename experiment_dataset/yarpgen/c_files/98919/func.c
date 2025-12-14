/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98919
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) arr_0 [i_0]);
                arr_4 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)88))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_1])))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_1])), (427344247))))))) ^ ((+(((/* implicit */int) (short)-5812)))))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17358177790376843529ULL)) && (((/* implicit */_Bool) 4294967295U))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((1088566283332708086ULL) << ((((+(((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (arr_0 [(unsigned char)16]))))) + (26375LL)))));
        arr_10 [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 10395163135534913206ULL))))));
        arr_11 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_2]))));
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (+(((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) (short)-5809))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22840))) : (var_6))))))));
        arr_14 [i_3] = var_3;
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min(((((!(((/* implicit */_Bool) -6568868205756703256LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (17358177790376843542ULL))), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3])))))));
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (((unsigned short) var_4))))) ? (((((/* implicit */_Bool) ((short) (short)-5795))) ? (max((var_6), (((/* implicit */unsigned long long int) arr_2 [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_4]), (((/* implicit */signed char) var_1)))))))) : (((9380993476013763249ULL) ^ (((9380993476013763237ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5812)))))))));
        arr_20 [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89)))))) ? (((((/* implicit */int) arr_3 [i_4])) ^ (((/* implicit */int) (signed char)-89)))) : (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_3))))))), (-4164230181454524979LL)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 22; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_4]))));
                    arr_25 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_12);
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((signed char) 18446744073709551615ULL));
                        var_24 = ((/* implicit */signed char) var_12);
                        arr_29 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((arr_12 [i_4] [i_5]) << (((((/* implicit */int) arr_15 [i_7])) + (95))))), (((arr_18 [i_5]) << (((2376061408U) - (2376061395U))))))))));
                        arr_30 [i_4] [i_4] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_26 [i_4] [i_5] [i_6] [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-10)) && (((/* implicit */_Bool) (signed char)-109)))))))));
                    }
                }
            } 
        } 
        arr_31 [i_4] [i_4] = ((/* implicit */signed char) max(((-(arr_24 [i_4] [i_4] [(unsigned short)12] [i_4]))), (((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 4164230181454524979LL)))) ? (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) arr_3 [i_4]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)88)) && (((/* implicit */_Bool) (unsigned short)60537)))))))));
    }
    var_25 = ((/* implicit */unsigned char) var_5);
    var_26 &= ((/* implicit */unsigned short) var_5);
}
