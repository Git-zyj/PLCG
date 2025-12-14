/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79493
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
    var_15 = ((/* implicit */_Bool) 33554430LL);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_1 [i_0]) - (arr_1 [i_0])))) ? (((/* implicit */long long int) ((arr_1 [i_0]) << (((arr_0 [i_0]) - (1109385495948647695LL)))))) : (arr_0 [i_0]))) - (((arr_0 [i_0]) - (33554451LL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_16 -= ((/* implicit */long long int) ((arr_1 [i_1]) << (((arr_1 [i_0]) - (3148589661U)))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ^ (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -33554430LL)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42785))) / (arr_3 [i_0] [i_0] [i_0])))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]);
        }
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_18 = ((/* implicit */long long int) arr_8 [i_2] [i_2]);
        arr_10 [i_2] [i_2] = ((/* implicit */short) ((long long int) arr_9 [i_2] [i_2]));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_7 [i_2]))));
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22750))) : (6757754561894844570LL)));
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((-33554408LL) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [14U])))))))) <= (((((arr_14 [i_3]) && (((/* implicit */_Bool) -1)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_3])) + (((/* implicit */int) arr_13 [i_3]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (4176041102U))))))))));
        var_21 = ((/* implicit */unsigned short) ((long long int) ((min((3104071308U), (4294967295U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_12 [i_3])))))));
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_23 [i_3] [i_4] [i_5] [i_4] [i_3] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_4] [i_4] [i_5] [i_6] [i_6]))) ^ ((((_Bool)1) ? (-33554445LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [(unsigned short)20] [i_4] [i_4] [i_6] [i_5] [i_4]))))))), (((/* implicit */long long int) arr_12 [i_5]))));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_22 += ((/* implicit */unsigned long long int) arr_14 [i_7]);
                            var_23 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) arr_18 [i_3] [i_4] [i_6]))) > (((((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_5] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_4] [i_5] [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))))))) : ((-(33554411LL)))))));
                            arr_26 [i_3] [i_4] [i_5] [(unsigned char)18] [i_7] = ((/* implicit */unsigned int) arr_15 [i_3] [i_5] [i_7]);
                            var_24 ^= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) min((((/* implicit */int) arr_22 [i_3] [i_4] [(signed char)12] [i_5] [i_4] [i_7])), (arr_16 [i_3] [i_4] [i_5])))), (((var_6) ? (arr_21 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42807))))))), (((/* implicit */long long int) ((arr_14 [i_3]) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4])))))));
                            arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_18 [i_3] [i_4] [i_6])))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 23; i_8 += 2) 
                        {
                            arr_32 [i_3] [i_4] [(unsigned short)14] [i_6] [i_6] [i_8] = (_Bool)0;
                            arr_33 [i_3] [i_4] [i_4] [i_8] [i_8] = ((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6]);
                            arr_34 [i_3] [i_4] [i_8] [i_6] [i_8] = ((/* implicit */short) (((~(6671487103642784697LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42786)))));
                        }
                    }
                } 
            } 
        } 
    }
}
