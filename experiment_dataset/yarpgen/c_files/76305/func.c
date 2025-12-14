/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76305
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
    var_13 = ((/* implicit */unsigned char) ((long long int) var_6));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_0 [i_0 - 3] [i_0]), (((/* implicit */int) (signed char)33))))), (((long long int) var_1))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((max((((long long int) arr_0 [17ULL] [i_0])), (((/* implicit */long long int) min((var_7), (((/* implicit */int) var_8))))))), (((long long int) arr_1 [i_0 + 1] [i_0 - 1]))));
        arr_3 [i_0] = ((unsigned int) ((unsigned char) (unsigned char)5));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            {
                                var_15 -= ((/* implicit */_Bool) ((int) min((max((((/* implicit */unsigned short) (unsigned char)82)), ((unsigned short)65526))), (((/* implicit */unsigned short) arr_13 [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1] [13ULL])))));
                                var_16 = ((/* implicit */signed char) min((((long long int) (short)32761)), (((/* implicit */long long int) min((((/* implicit */int) var_3)), (max((-781978779), (((/* implicit */int) (signed char)33)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [11U] [i_3] = ((/* implicit */unsigned short) min((max((arr_10 [i_2] [i_2]), (((/* implicit */long long int) max((arr_8 [(signed char)6] [(signed char)6]), (((/* implicit */unsigned int) (signed char)-69))))))), (((/* implicit */long long int) min((1790494833), (((/* implicit */int) ((unsigned char) arr_1 [i_1] [5]))))))));
                    arr_17 [(unsigned char)6] [(unsigned char)6] [(signed char)19] [(signed char)19] = ((/* implicit */unsigned int) ((int) ((unsigned int) 781978798)));
                    arr_18 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned long long int) (short)-32762)), (8222991414228798232ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_12 [i_1] [(short)9] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) ((long long int) var_4)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_11);
}
