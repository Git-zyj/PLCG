/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88871
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
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) ^ (((/* implicit */long long int) 1411597905))))) : (((unsigned long long int) ((((/* implicit */int) (unsigned char)82)) - (((/* implicit */int) (unsigned char)84)))))));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)82)), (arr_1 [(_Bool)1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) (-((~(max((((/* implicit */unsigned long long int) 2564749755U)), (3836678138353403133ULL)))))));
                            var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) 1730217540U)) : (arr_8 [i_0] [i_1] [i_0] [i_3])))) || (((/* implicit */_Bool) max((296464338), (((/* implicit */int) arr_9 [i_2] [i_3]))))))) ? (((126100789566373888ULL) + (((/* implicit */unsigned long long int) max((arr_2 [12LL]), (((/* implicit */long long int) (unsigned char)80))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [23U])) ? (((((-296464354) + (2147483647))) << (((7486461912938111610ULL) - (7486461912938111610ULL))))) : (min((var_3), (((/* implicit */int) arr_10 [i_0 + 2] [i_0] [10U] [10ULL])))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_8)) : (780285926)))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) 1326012451)) : (7565320191141094716ULL)))));
                var_15 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_2 [i_0])) > (((arr_1 [8]) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (long long int i_6 = 4; i_6 < 18; i_6 += 3) 
            {
                {
                    arr_20 [i_4] = ((/* implicit */unsigned int) max((arr_1 [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_6))) && (((/* implicit */_Bool) min((1730217541U), (((/* implicit */unsigned int) arr_18 [i_4 - 3] [i_5] [i_4 - 3]))))))))));
                    arr_21 [i_5] [i_4] = ((/* implicit */int) (~(min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_4] [i_4] [(short)3] [(unsigned short)3])) : (((/* implicit */int) arr_16 [i_6 - 1] [i_4]))))), (max((87168290037921128LL), (((/* implicit */long long int) 4064))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max((13818147870481349453ULL), (((/* implicit */unsigned long long int) -2567383199793252166LL))));
    var_17 = ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))));
}
