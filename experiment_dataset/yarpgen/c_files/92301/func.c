/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92301
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_0])), ((~(((/* implicit */int) arr_3 [i_1 - 2])))))))));
                var_11 = (~(((unsigned long long int) max((((/* implicit */unsigned long long int) arr_2 [(short)3])), (var_8)))));
                arr_5 [(unsigned short)1] [i_1] [i_1] = ((/* implicit */int) max((max(((unsigned short)41137), (((/* implicit */unsigned short) (signed char)104)))), (((/* implicit */unsigned short) (signed char)104))));
                var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) min(((signed char)104), ((signed char)110))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_3]) - (((/* implicit */int) (signed char)108))))))))));
                                var_14 = max((min((((((/* implicit */_Bool) 123799769)) ? (((/* implicit */int) arr_8 [i_3] [i_2] [i_0])) : (((/* implicit */int) (signed char)-107)))), (((((/* implicit */_Bool) (unsigned short)5757)) ? (((/* implicit */int) (unsigned short)48307)) : (((/* implicit */int) arr_11 [i_2] [i_1] [i_2])))))), (((((/* implicit */int) (unsigned short)17311)) + ((-2147483647 - 1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)57993))));
                        var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_12 [i_0] [i_0] [i_5 - 1] [i_5 - 2] [15])), (((((/* implicit */int) (unsigned short)17311)) & (((/* implicit */int) (_Bool)1))))));
                        var_17 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) ^ (83473164))) != (((/* implicit */int) (unsigned short)32764))));
                        var_18 *= ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (-123799782)));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 |= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 2] [i_2] [i_0] [i_6]);
                        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) var_7));
                        var_21 -= ((/* implicit */unsigned short) ((int) arr_16 [i_0] [(unsigned short)3] [i_1 - 1] [i_1 + 1]));
                    }
                    for (int i_7 = 3; i_7 < 20; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */short) -1001732810);
                        arr_22 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_2] [i_2] [(short)12] [i_7] [i_2])) == (((/* implicit */int) arr_15 [i_2] [i_2] [(_Bool)1] [i_1 - 1] [i_1 - 1]))))), (((arr_18 [i_2]) ^ (arr_18 [i_2])))));
                    }
                    var_23 = ((/* implicit */unsigned short) min((4582083901968362382ULL), (((/* implicit */unsigned long long int) -123799806))));
                    var_24 &= ((/* implicit */short) arr_4 [i_2]);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4291)) == (((/* implicit */int) (unsigned short)33757)))))));
}
