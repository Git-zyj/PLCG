/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65646
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_14 |= max((((/* implicit */int) arr_1 [i_0])), (((int) max((arr_1 [10]), (arr_0 [(unsigned short)11])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 = max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1])) > (((/* implicit */int) arr_5 [i_2] [i_1] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_2] [i_3]));
                            var_17 = ((/* implicit */unsigned short) (+(min((arr_4 [i_0] [i_0] [i_2]), ((~(arr_4 [i_0] [(unsigned short)8] [i_0])))))));
                            var_18 -= ((/* implicit */unsigned char) max((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4 + 2] [i_0] [i_1])), (max(((-(arr_8 [i_4 + 2] [i_3]))), (((/* implicit */int) min((arr_7 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]), (arr_9 [i_0] [i_1] [i_1] [i_0] [i_4]))))))));
                            arr_13 [i_4] = ((/* implicit */unsigned char) (-(max((arr_4 [i_0] [3] [i_2]), (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                        }
                        arr_14 [i_0 - 2] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_3]))));
                        var_19 = ((/* implicit */unsigned short) arr_10 [i_3] [i_3] [i_2] [(unsigned short)10] [i_0]);
                        var_20 = ((/* implicit */int) max((var_20), (max((((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_1])))), (arr_2 [i_0] [i_2])))));
                    }
                    var_21 = ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_0 [i_2])), (max((arr_8 [i_0] [i_2]), (arr_2 [i_0] [i_0]))))) & (((/* implicit */int) ((unsigned char) (unsigned short)65535)))));
                    arr_15 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) min((max((arr_8 [i_2] [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) -1276043424)))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) var_1)), (min((((/* implicit */int) var_6)), (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_9)) - (67)))))))));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_0))));
    var_24 = ((/* implicit */int) var_1);
    var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (max(((+(((/* implicit */int) var_11)))), ((-(((/* implicit */int) var_3))))))));
}
