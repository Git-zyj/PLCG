/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84796
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 23ULL))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_17 -= ((/* implicit */int) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned char) -6092016159027984608LL);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) ((32767LL) & (((/* implicit */long long int) 215187293U))));
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
    }
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        arr_12 [(short)20] = (((+(((/* implicit */int) arr_11 [i_2])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) || (((/* implicit */_Bool) (unsigned short)7936))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    {
                        arr_24 [i_2] [i_2] [i_3 - 1] [i_2] [i_5] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 237666563793397698ULL)) || (((/* implicit */_Bool) (unsigned char)64)))))))), ((~(((arr_20 [i_2] [i_2] [i_2]) % (((/* implicit */unsigned long long int) -1169318559))))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((((/* implicit */int) arr_13 [i_2] [i_4 - 2] [i_2])) & (((/* implicit */int) arr_13 [i_2] [i_4 - 2] [i_2])))))))));
                        arr_25 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_23 [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 + 1] [i_4]))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3 + 4])) ? (((/* implicit */long long int) arr_2 [i_3 - 1] [i_3 + 3])) : (32752LL)))) || (((/* implicit */_Bool) (short)-9061)))))));
                        arr_26 [i_2] [i_3 + 3] [i_4] [i_3] = ((/* implicit */unsigned short) (unsigned char)3);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4267408910U)))))));
    }
    /* LoopSeq 1 */
    for (int i_6 = 3; i_6 < 11; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            arr_33 [i_7] = ((/* implicit */int) -32767LL);
            arr_34 [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            arr_35 [(short)7] [i_7] [i_6] = ((/* implicit */signed char) (((+(((/* implicit */int) (short)0)))) * (((/* implicit */int) arr_16 [i_6] [i_7] [4U]))));
            arr_36 [i_6] [i_7] [i_7] = ((/* implicit */short) (+(((unsigned long long int) min((arr_19 [3ULL]), (((/* implicit */long long int) arr_27 [i_7])))))));
            arr_37 [13U] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) 2705395317U))));
        }
        var_23 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (short)6549)) : (159451961)))) / (2U)))) > (arr_6 [i_6 + 1] [i_6])));
    }
}
