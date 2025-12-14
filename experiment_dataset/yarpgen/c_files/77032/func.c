/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77032
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [i_1] [i_1] [(unsigned short)0])), (max((((((/* implicit */int) var_8)) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3])))), (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_8))))))));
                                var_20 = ((/* implicit */int) (-(max((1359360627174455765LL), (((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 - 1]))))));
                                arr_13 [i_3] [i_1] [i_2] [i_2] [i_3 + 2] [9LL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_9 [(unsigned char)7] [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 3] [i_3 - 1]))))) & (-5229327383620092696LL)));
                                var_21 = ((/* implicit */int) arr_4 [i_1] [i_4]);
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */short) arr_8 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2] [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] [i_0] [i_1] [8U] [i_2] [5LL] [i_1] = ((/* implicit */short) max((arr_8 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned short) arr_11 [(_Bool)1] [i_0 + 2] [i_1] [i_2] [i_5] [i_6]))));
                                var_23 = -1817281087;
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0 + 2] [i_0 - 1])) | (((/* implicit */int) ((unsigned short) -1817281087)))));
                                arr_21 [i_6] [i_6] [i_2] [(unsigned char)1] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (unsigned char)136))) + (arr_6 [(unsigned char)4] [i_6] [i_6])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_0 - 1] [i_0] [i_0 - 1])))) % (max((arr_6 [i_0] [i_0] [i_0 - 1]), (((/* implicit */int) arr_14 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]))))));
                        var_26 = ((/* implicit */_Bool) (unsigned char)241);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_19 [i_0] [i_0] [i_1] [i_0 + 2] [i_0 - 1] [i_0 + 1]), (arr_19 [4LL] [i_0] [i_1] [i_0 + 2] [i_0 - 1] [i_0 - 1])))) || (((/* implicit */_Bool) var_12))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) var_2);
    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_10))));
}
