/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65687
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) != (max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) var_10))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) var_10))));
                var_13 = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-28636)) ? (((/* implicit */int) (short)-28647)) : (((/* implicit */int) (short)-28639)))))), ((~(((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))));
                var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_9)), ((-(((unsigned int) arr_2 [i_0] [i_1] [i_1]))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    var_15 = ((max((((/* implicit */long long int) min((var_11), (((/* implicit */int) (short)-28659))))), (1366652280006709703LL))) != (((long long int) ((short) (unsigned short)11632))));
                    var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) > (((/* implicit */int) (short)28651)))), (((_Bool) max((((/* implicit */unsigned short) var_3)), (arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_0] [i_4] [i_4] = ((/* implicit */short) var_1);
                                arr_18 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_11 [11LL] [i_2 + 2] [i_1] [i_1] [21U] [i_0 + 1]);
                }
                for (unsigned int i_5 = 3; i_5 < 19; i_5 += 1) 
                {
                    arr_23 [i_0 - 2] [i_1] [i_0 - 2] [i_5] = ((long long int) var_6);
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-28646))));
                    arr_24 [i_5] [i_0] [i_1] [i_5 + 1] = ((/* implicit */unsigned char) (short)28639);
                    arr_25 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_5] [i_1] [i_5]);
                }
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            arr_32 [i_6] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22524)) ? (((/* implicit */int) arr_2 [(signed char)15] [i_1] [i_7])) : (((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_7] [i_0])), (arr_27 [(signed char)4] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [(unsigned short)13]))))));
                            arr_33 [i_7] = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_1] [i_6] [i_7]);
                        }
                    } 
                } 
            }
        } 
    } 
}
