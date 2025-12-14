/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56478
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((unsigned long long int) ((((arr_2 [i_0]) == (arr_1 [i_0] [i_0]))) ? ((~(((/* implicit */int) (short)0)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_2))))));
                arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (3044488910U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) >= (var_17)))))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) (unsigned short)50591)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_2 [i_0]))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [18ULL]))) : (arr_2 [7LL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0] [(unsigned short)8] [(unsigned short)8]), (((/* implicit */short) arr_0 [i_1] [i_0])))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (unsigned char)0);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 23; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_3 + 1] = ((/* implicit */unsigned long long int) max((max((((/* implicit */short) arr_0 [i_1] [i_2])), (min((((/* implicit */short) var_4)), ((short)-697))))), (((/* implicit */short) arr_0 [i_0] [8U]))));
                        arr_13 [i_0] [i_0] = ((arr_2 [i_2]) % (var_7));
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((unsigned long long int) var_7);
                        arr_15 [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) 3591948107682754608ULL)))))))) ? (((/* implicit */unsigned long long int) ((long long int) var_2))) : (17375419047165761834ULL)));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        arr_19 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_4]))) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (var_3)))));
                        arr_20 [i_0] [i_2] [i_1] [i_0] = ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) 1250478386U))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) 7844931239325019156ULL)) ? (var_18) : (((/* implicit */unsigned long long int) var_6)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)1)) < (((/* implicit */int) var_15)))))))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [18LL] [i_0] [18LL] = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17594))) : (arr_24 [i_0] [i_1] [i_0] [1LL] [i_6]))))) >> (((/* implicit */int) var_0))));
                                arr_27 [i_0] [(short)0] [i_2] [i_5] [i_2] [i_6] = ((/* implicit */signed char) (+((+(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)65535)))))))));
                                var_20 &= ((/* implicit */unsigned int) ((((((arr_16 [i_0] [i_1] [i_2] [i_5] [i_2] [i_2]) && (((/* implicit */_Bool) 0ULL)))) || ((((_Bool)1) || (((/* implicit */_Bool) arr_18 [i_6] [i_6])))))) ? (((/* implicit */int) ((unsigned short) ((arr_2 [i_0]) + (var_7))))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                var_21 = max((((((/* implicit */unsigned long long int) max((arr_17 [i_0] [i_1] [i_0]), (arr_17 [i_0] [7LL] [7LL])))) & (((arr_2 [3ULL]) % (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((arr_17 [i_0] [i_1] [i_1]) <= (arr_17 [i_0] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 4; i_7 < 21; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((arr_1 [i_1] [i_8]) ^ (((/* implicit */unsigned long long int) (((-(arr_17 [i_0] [i_1] [i_0]))) % ((~(arr_30 [i_0] [i_0] [i_8]))))))));
                            arr_34 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 18; i_9 += 3) 
    {
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            {
                arr_40 [(short)12] [i_9] [i_10] = ((/* implicit */_Bool) 1250478386U);
                arr_41 [i_9] = ((/* implicit */short) 14854795966026797007ULL);
            }
        } 
    } 
}
