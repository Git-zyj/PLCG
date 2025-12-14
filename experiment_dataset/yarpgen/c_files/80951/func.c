/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80951
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
    var_18 = ((/* implicit */int) var_9);
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((2698234115696945830ULL) >> (((var_4) - (160976419))))) << (((((int) 2698234115696945805ULL)) + (487265699))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), (15748509958012605786ULL)))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */short) ((15748509958012605786ULL) | ((-(arr_0 [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] = 2698234115696945814ULL;
                        arr_12 [i_2] [i_1] &= ((((/* implicit */_Bool) ((arr_0 [i_2]) << (((((var_9) / (((/* implicit */long long int) var_4)))) + (26295948817LL)))))) ? (((/* implicit */int) ((arr_5 [i_0] [i_1 + 1] [i_2] [i_1 + 1]) || (((/* implicit */_Bool) max((((/* implicit */long long int) 67108860)), (var_14))))))) : (((/* implicit */int) ((_Bool) 1334308506358532286ULL))));
                        var_22 = var_0;
                        var_23 += ((/* implicit */unsigned int) var_3);
                        var_24 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (min((2698234115696945814ULL), (((/* implicit */unsigned long long int) (unsigned short)10573))))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] = ((((((/* implicit */_Bool) (~(-67108860)))) ? ((+(2698234115696945789ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_4] [i_1 + 1] [i_2] [i_0])) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) + (((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_0] [i_0] [i_0 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_0] [i_0] [i_0 - 1])))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15748509958012605785ULL)) ? (((/* implicit */int) (short)5)) : (((int) var_3))));
                    }
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    var_27 = ((int) (((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0] [i_0])))) * (((/* implicit */int) (unsigned short)0))));
                    var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])))))) || (((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_0] [i_1]))))))) ? (((/* implicit */unsigned long long int) var_7)) : (((unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) (signed char)-118)))))));
                }
                for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                arr_30 [i_6] [i_1] [i_8] |= ((/* implicit */short) arr_27 [i_8] [i_6] [i_6] [i_7]);
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max((((/* implicit */int) var_15)), (min((max((469762048), (1073741823))), (((/* implicit */int) var_8)))))))));
                                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) (signed char)12)) >> (((((/* implicit */int) (signed char)-12)) + (30)))))))));
                                arr_31 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0] [i_1 + 2] [i_6] [i_8] [i_8])) && (((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0] [i_1 - 1] [i_8]))))), (arr_24 [i_0 + 1] [i_1] [i_1 - 1] [i_1])));
                                var_31 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_29 [i_0] [i_8] [i_8] [i_7 - 1] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) | (15748509958012605785ULL))) : (((/* implicit */unsigned long long int) 2623812613U))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */long long int) (short)21656);
                }
                arr_32 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 1761448533))))), (arr_29 [i_0] [i_0] [i_0 - 2] [i_1 + 2] [i_1] [i_1])));
            }
        } 
    } 
}
