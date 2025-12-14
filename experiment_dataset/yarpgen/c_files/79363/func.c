/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79363
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), ((-(4865159384379761679ULL)))));
                            arr_8 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -1335635241)) * (6290335910191394533ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3256698911U))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 4; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */int) (_Bool)0)) < (-459587959))), ((_Bool)0))))) / (6267486939350050530LL)));
                                var_16 |= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (3ULL))));
                                var_17 += ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-93))))) + (((unsigned int) (-(2012940397))))));
                                arr_17 [8LL] [(unsigned char)4] [i_4 + 2] [i_5] [i_6] = ((/* implicit */unsigned int) ((_Bool) 0LL));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    arr_27 [i_7] [i_8 - 1] [i_8] [i_7] = ((/* implicit */unsigned short) (_Bool)1);
                    var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 2039297883)) > (5318461210405379529LL))))) != (((unsigned long long int) 14LL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (unsigned char i_11 = 2; i_11 < 11; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_19 *= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) 10ULL)));
                    var_20 += ((/* implicit */unsigned long long int) ((max((12156408163518157085ULL), (((18446744073709551605ULL) * (((/* implicit */unsigned long long int) 0LL)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967287U))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5280619796481818133LL)) ? (-12LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
