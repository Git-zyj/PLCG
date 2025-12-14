/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9619
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_0);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (_Bool)1);
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_14))));
                                arr_14 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)28017))));
                                var_21 = ((/* implicit */_Bool) ((short) (-(arr_3 [i_0]))));
                            }
                        } 
                    } 
                }
                var_22 ^= ((/* implicit */unsigned short) (+(max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))));
                var_23 -= ((/* implicit */short) max(((+(0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((3740833406U) ^ (3740833425U)))) ? (2660897019U) : (554133890U))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    arr_22 [i_5] [i_5] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_5] [i_6] [i_7] [i_5]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (max((var_6), (((/* implicit */unsigned long long int) arr_1 [i_5] [i_5]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_30 [i_5] [i_6] [i_6] [i_5] [i_5] = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */long long int) var_15)) - (arr_2 [i_7] [i_8]))))))));
                                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) max((554133910U), (((/* implicit */unsigned int) (_Bool)1))))))));
                                arr_31 [i_5] [i_8] [i_8] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_7] [i_7])))))) ? ((+(((var_16) << (((/* implicit */int) (_Bool)1)))))) : ((((_Bool)1) ? (3740833410U) : (1634070276U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        for (short i_11 = 1; i_11 < 18; i_11 += 3) 
        {
            {
                arr_38 [(unsigned char)20] &= ((/* implicit */unsigned char) ((((arr_5 [(signed char)2] [(signed char)2]) % (arr_5 [20LL] [20LL]))) < (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [18ULL] [i_11 - 1]) <= (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 3; i_12 < 20; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) arr_33 [i_10]);
                            var_26 = max((((((/* implicit */_Bool) 4433230883192832LL)) ? (11LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (-(3740833403U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))))))));
}
