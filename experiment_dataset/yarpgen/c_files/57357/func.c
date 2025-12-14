/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57357
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) arr_1 [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_15 [i_2] &= ((/* implicit */int) (+(max((((unsigned int) (unsigned short)38468)), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)14747)))))))));
                                var_19 *= ((/* implicit */unsigned short) (unsigned char)144);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned short)50789)) || (((/* implicit */_Bool) (unsigned short)14729))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned long long int) 2533315061U);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 1761652243U))));
                        }
                    } 
                } 
                arr_28 [i_6] [i_6] [i_5] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)14737))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (int i_10 = 1; i_10 < 11; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (unsigned int i_12 = 1; i_12 < 10; i_12 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_11 [i_9] [6LL] [i_10 - 1] [i_11] [i_9] [i_12 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)22985)), (2533315077U)))) ? (((/* implicit */int) ((_Bool) 4294967283U))) : (((/* implicit */int) min((var_4), (((/* implicit */short) var_12)))))))) : (15697873930583769342ULL)));
                            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned short)36514))));
                            /* LoopSeq 2 */
                            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
                            {
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_1 [i_9] [i_9]))));
                                var_26 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)50806));
                            }
                            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
                            {
                                var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_9])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)14729))))) | (arr_32 [i_9] [i_11]))))));
                                var_28 -= ((/* implicit */unsigned short) -4729302259094719689LL);
                            }
                            var_29 = ((/* implicit */unsigned short) var_4);
                            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_9] [i_10])) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_18 [i_11]))))) / (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)111)), (arr_38 [i_9] [i_10] [i_10] [i_11] [i_10] [i_9])))))))));
                        }
                    } 
                } 
                arr_45 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (min((((/* implicit */long long int) (_Bool)1)), (((var_14) | (arr_32 [i_9] [(short)0]))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)32438)))) ? (((/* implicit */int) arr_38 [i_9] [i_10] [i_10] [i_10] [i_10] [i_9])) : (((/* implicit */int) arr_25 [i_10] [14LL] [i_10] [i_10] [i_10])))))));
            }
        } 
    } 
}
