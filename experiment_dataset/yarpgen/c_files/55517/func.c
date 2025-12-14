/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55517
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
    var_11 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) + (0ULL));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) arr_7 [i_1] [i_3]);
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned short) min((arr_13 [i_0] [i_4]), (max(((~(18446744073709551615ULL))), (min((arr_13 [i_0] [12ULL]), (((/* implicit */unsigned long long int) arr_2 [(unsigned short)2]))))))));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((18446744073709551615ULL) << (((((/* implicit */int) arr_2 [i_4])) - (13907))))))) > (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_4] [i_1 - 2]))))))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 23; i_5 += 2) 
                        {
                            var_15 = ((((/* implicit */_Bool) 0ULL)) ? (18446744073709551602ULL) : (20ULL));
                            var_16 *= arr_4 [i_0] [(unsigned short)17] [21ULL];
                        }
                        arr_17 [i_0] [i_1] [(unsigned short)8] = max((((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (min((511ULL), (2113929216ULL))) : (min((13ULL), (((/* implicit */unsigned long long int) (unsigned short)20)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7168)) ? (((/* implicit */int) (unsigned short)8128)) : (((/* implicit */int) (unsigned short)3840))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) arr_9 [16ULL] [i_1] [i_2] [(unsigned short)21]);
                                var_18 = ((/* implicit */unsigned short) (+(min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) var_5))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (max((((/* implicit */unsigned long long int) ((arr_21 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_1] [5ULL]) > (18446744073709551602ULL)))), (((4467570830351532032ULL) * (0ULL)))))));
                }
            } 
        } 
    } 
}
