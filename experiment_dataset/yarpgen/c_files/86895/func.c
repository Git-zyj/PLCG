/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86895
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) var_13);
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((unsigned long long int) arr_3 [i_1])) >= (((/* implicit */unsigned long long int) min((arr_2 [i_1] [i_0]), (((/* implicit */unsigned int) arr_4 [8]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))) : (((min((((/* implicit */long long int) arr_3 [i_0])), (var_15))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1010687736))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((long long int) (+(var_15)))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (-3877132706140917723LL) : (arr_6 [i_2]))), (((/* implicit */long long int) ((1010687762) ^ (((/* implicit */int) (signed char)-120)))))))) : ((+(8559952227021013024ULL)))));
                                arr_17 [i_2] [i_3] [i_4] [i_4] [i_3] [i_5] [i_6] = min((arr_14 [i_2] [i_3] [i_4] [11U] [i_4]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))))));
                                var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) 8559952227021013006ULL)) ? (((/* implicit */long long int) -1506404828)) : (-3997288710604013993LL)))));
                                arr_18 [i_2] [i_4] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 4294967295U)) & (-3997288710604013978LL))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) min((((arr_7 [i_4]) / (((/* implicit */long long int) arr_12 [i_4] [i_3] [i_2])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))));
                    arr_20 [i_4] [i_3] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3035419000U)) ? (arr_10 [i_2] [i_3] [i_4]) : (4226385681U)))) ? (((/* implicit */int) (unsigned short)56117)) : (((/* implicit */int) arr_4 [i_3])));
                }
            } 
        } 
    } 
}
