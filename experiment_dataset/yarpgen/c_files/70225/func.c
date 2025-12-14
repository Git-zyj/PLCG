/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70225
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
    var_20 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2950801450924271487LL)) ? (((/* implicit */long long int) 4294967295U)) : (-2950801450924271487LL)))) && (((/* implicit */_Bool) -2LL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) min((var_11), (arr_8 [i_0] [i_1] [i_2])))))));
                    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2950801450924271481LL)))))));
                    var_22 -= ((/* implicit */unsigned short) 3987498770085020626LL);
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)0)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        var_24 += var_3;
                        var_25 = ((/* implicit */unsigned long long int) var_6);
                        arr_12 [i_3] [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) 14964681768770852109ULL);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_21 [i_6] [(unsigned short)3] [i_6] = ((/* implicit */long long int) max((arr_1 [i_4]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(7712445204129699079ULL))), (arr_4 [i_6])))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned short)44346))));
                }
            } 
        } 
    } 
    var_27 ^= ((unsigned short) (((~(((/* implicit */int) var_11)))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37824))) != (0ULL))))));
}
