/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79519
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
    var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) % ((-(var_1)))))) ? (min(((-(var_1))), (((((/* implicit */unsigned long long int) var_10)) ^ (var_1))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_7))))), ((-(var_5))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1822373764911953946ULL) >> (((1822373764911953950ULL) - (1822373764911953936ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (max((min((((/* implicit */unsigned long long int) (unsigned short)63)), (arr_7 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((arr_2 [i_2]), (((/* implicit */unsigned char) (signed char)-124)))))))));
                    arr_9 [i_2] [i_1] = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)65473));
                    arr_10 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_2 [i_0])), (min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((min((arr_11 [i_3]), (((/* implicit */long long int) (unsigned short)65472)))) ^ (((((/* implicit */_Bool) (unsigned short)59)) ? (((/* implicit */long long int) arr_3 [19U] [14U])) : (arr_11 [i_3])))))), (min((((/* implicit */unsigned long long int) ((unsigned short) var_3))), (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_7 [i_3] [i_3]))))))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) (-(min((var_1), (((/* implicit */unsigned long long int) (unsigned short)59))))));
        arr_14 [i_3] [(unsigned char)10] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)38580)), (2198754820096LL)));
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) (short)(-32767 - 1)));
        arr_19 [i_4] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) arr_12 [i_4] [i_4])), (var_3))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)28601)))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_15 -= ((/* implicit */short) ((-9LL) >= ((-9223372036854775807LL - 1LL))));
        var_16 = ((/* implicit */long long int) ((short) arr_21 [i_5]));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_20 [i_5] [i_5]))));
        arr_23 [i_5] &= var_1;
    }
}
