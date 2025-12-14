/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70231
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (~((+(((/* implicit */int) min(((unsigned short)16384), (((/* implicit */unsigned short) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */long long int) var_7);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (short i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (signed char)15);
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned short) max((((unsigned long long int) (signed char)15)), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) 4026531840U)) >= (13188375897057853430ULL))))))));
                                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_14 [i_3 + 2] [i_3 - 2] [i_3 - 3] [i_3 - 3] [i_1] [i_3 - 2]))) ? (((long long int) arr_13 [i_1] [i_4] [i_3 + 3])) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (signed char)9))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_3] [i_2])) > ((~(((/* implicit */int) arr_11 [i_4]))))))), (arr_7 [i_3 - 2] [i_4] [i_1]))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8367))) == (-9223372036854775797LL)));
                }
            } 
        } 
        var_21 |= min((((/* implicit */unsigned long long int) (unsigned short)22584)), (13188375897057853438ULL));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)42952));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6] [i_6]))))))));
        arr_21 [i_6] = ((/* implicit */signed char) (~(arr_19 [i_6])));
        arr_22 [i_6] = 13188375897057853407ULL;
    }
    /* LoopSeq 1 */
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_24 [(unsigned short)6] [(unsigned short)6]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42951)))))) ? (arr_25 [(signed char)21]) : (((((/* implicit */_Bool) arr_24 [i_7] [(unsigned short)12])) ? (arr_24 [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7])))))))) ? (((((_Bool) arr_25 [i_7])) ? (8441819479974742126ULL) : (var_6))) : (13ULL)));
        var_25 = ((/* implicit */unsigned long long int) arr_23 [i_7]);
    }
}
