/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6771
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
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) 16244463962207836827ULL);
                    var_15 = ((/* implicit */signed char) ((long long int) ((((6204991177259450456ULL) - (((/* implicit */unsigned long long int) arr_4 [i_2])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) >= (((12241752896450101159ULL) >> (((var_4) - (16061722084613525745ULL)))))));
                                arr_15 [(signed char)5] [(signed char)5] [(signed char)5] [i_3] [i_4 - 2] = ((/* implicit */unsigned long long int) ((max((var_3), (((/* implicit */long long int) arr_14 [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 1])))) >= (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 2] [i_4])) + (151))))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [15ULL] [i_4 - 2] [i_4 - 2])) | (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4 + 1] [i_4 - 1])) && (((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4] [i_4 - 2] [i_4 + 1])))))));
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_9)))) | (((((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [0U] [i_4])) ^ (((/* implicit */int) arr_12 [i_1] [12ULL] [i_3] [i_4]))))))) ? (min(((~(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) max((-3096418563606779054LL), (((/* implicit */long long int) (signed char)-9)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_5] = ((/* implicit */unsigned int) max((((var_4) - (((/* implicit */unsigned long long int) ((var_0) ? (var_6) : (arr_21 [i_0] [4U] [(signed char)9] [4U] [13U] [i_6 - 1])))))), (((((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                                arr_25 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((6204991177259450454ULL) >= (((/* implicit */unsigned long long int) (-(arr_21 [i_5] [i_6 - 1] [i_6] [i_6] [i_6] [i_6 - 1]))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_1] [i_6 - 1] [i_6 - 1]))) >= (((var_3) - (((/* implicit */long long int) arr_11 [i_0] [i_6 - 1] [i_6] [i_6 - 1])))))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_2 [i_0] [i_1])) & (5245864487437673332LL)));
                                arr_26 [i_0] [i_5] [i_5] [i_2] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_3)))) && (((/* implicit */_Bool) var_6))))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) min((((/* implicit */signed char) var_0)), ((signed char)4)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (12241752896450101159ULL)))));
                arr_32 [i_7] [i_8] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_7] [i_7] [i_8]), ((signed char)-44))))) & (var_1))));
            }
        } 
    } 
}
