/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80777
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) 9223369837831520256LL);
                    arr_8 [i_2] [i_0] [i_0] |= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))) / (arr_3 [i_0 - 1]))) * (-9223369837831520256LL)));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_3] [i_2] [i_1 - 1] [i_0] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0 - 1])) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) == (var_14)))))) < (arr_5 [i_0 - 1] [i_2] [i_3])));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 131072)) - (((((/* implicit */long long int) ((arr_4 [5ULL] [i_1 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))))) - (-9223369837831520257LL)))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) != (3990664576U)));
                        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)245)) && (var_8)));
                        var_24 += ((/* implicit */int) (unsigned char)245);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 4) 
                        {
                            var_25 |= ((/* implicit */short) ((unsigned long long int) arr_2 [i_0 - 1]));
                            arr_17 [i_0] [i_0] [i_4] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))) ^ (var_17)));
                        }
                        for (int i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            arr_20 [i_1 - 2] [i_1 - 2] [i_1] [i_6] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((_Bool) arr_5 [i_6 - 2] [i_1 - 2] [i_0 - 1]));
                            arr_21 [i_0] [i_2] [(short)6] [i_4] [i_6] [(unsigned char)0] [i_0] &= ((/* implicit */unsigned int) ((short) 33521664U));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 645611880U)) && (((/* implicit */_Bool) (signed char)71))))) << (((((long long int) -264470873)) + (264470901LL))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((var_6) / (((/* implicit */unsigned int) var_19))));
    var_28 = ((/* implicit */unsigned long long int) var_7);
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_0))));
}
