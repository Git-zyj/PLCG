/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69046
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
    var_12 = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) arr_1 [i_0]);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((/* implicit */int) var_8)) + (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)185))))) ? (((/* implicit */int) arr_7 [(unsigned char)12] [i_2 + 2] [(unsigned char)12] [i_2 + 1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)14636)) : (((/* implicit */int) var_0)))))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) min((((arr_7 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 2]) && (arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 2]))) == (var_3)))));
                }
                for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    var_14 = ((arr_7 [5] [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (((/* implicit */int) (!(arr_7 [i_3] [(unsigned short)1] [i_3 - 1] [i_3 - 1])))) : ((~(2147418112))));
                    arr_12 [i_0] [i_3] [i_3] [i_0] = (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_4))))))));
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */int) var_7);
                            var_15 += ((/* implicit */unsigned char) arr_3 [i_3]);
                        }
                        arr_19 [i_3] [i_0] = ((/* implicit */unsigned int) 3140362229978890358ULL);
                        arr_20 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1915264714) / (((/* implicit */int) arr_14 [i_4 + 2])))))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3 + 1] [i_0] [i_4 + 2] [i_0]))))) << ((+(((/* implicit */int) var_11))))));
                    }
                }
                var_17 = arr_16 [i_0] [i_0] [i_1] [i_0];
                var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(unsigned char)3] [i_0] [i_1] [i_1])) << ((((-(arr_0 [i_0]))) + (224866669)))))) * ((+(3955699925U)))));
                arr_21 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */int) ((arr_16 [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) arr_2 [i_0]))))) >= ((-(-1915264715))))), ((((+(arr_17 [i_0] [i_0] [i_0] [i_1] [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) == (var_2)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                {
                    arr_30 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14636))) ^ (2261829103U)))) ? (((((/* implicit */_Bool) arr_27 [i_7])) ? (arr_27 [i_7]) : (arr_27 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7]))))))));
                    var_19 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_7))))))));
                    var_20 = ((/* implicit */int) (short)27223);
                }
            } 
        } 
    } 
}
