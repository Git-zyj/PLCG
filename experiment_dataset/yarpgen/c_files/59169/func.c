/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59169
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
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) var_8))))), (max((((/* implicit */unsigned long long int) (-(4092)))), ((~(var_11)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (~(405951744U)))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((arr_7 [i_0 - 1] [i_1 + 3] [i_0 - 1] [i_1 + 1]), (arr_7 [i_0 + 2] [i_1] [i_2] [i_1 + 4])))), (((long long int) ((short) 4092)))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1 + 4] [i_2] [(unsigned char)12] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) (unsigned short)35848))), ((~(((/* implicit */int) min(((signed char)84), ((signed char)75))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) min((((unsigned short) 664208778)), (((unsigned short) arr_3 [i_3 - 1] [i_3 - 1]))));
                        var_21 = ((/* implicit */short) max((max((var_2), (min((var_9), (((/* implicit */int) arr_7 [9ULL] [9] [(short)5] [9])))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((unsigned int) min((max((arr_2 [(unsigned short)2]), (arr_2 [i_0 + 1]))), (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [9U] [i_0] [i_0] [i_0]))))));
                            arr_14 [i_0] [(short)8] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned short) (signed char)120)), (((unsigned short) (signed char)-85))));
                            var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_8)))))), ((-(((unsigned long long int) arr_6 [i_4] [(unsigned char)11] [i_1] [i_0]))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((_Bool) arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2] [(unsigned char)4]))))), (((signed char) min(((unsigned short)65504), (((/* implicit */unsigned short) var_1)))))));
                            var_25 = ((_Bool) (!(((/* implicit */_Bool) ((unsigned short) var_11)))));
                            var_26 *= ((/* implicit */short) ((unsigned int) ((unsigned char) ((unsigned int) var_8))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */long long int) (!((_Bool)1)))), (min((((/* implicit */long long int) arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1])), (-7962169024282023405LL))))))));
                                arr_22 [i_0 - 1] [i_0 - 1] [i_7] = ((/* implicit */unsigned int) ((signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0 + 2] [(unsigned short)10] [i_0 + 2] [i_0]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) ((short) (~(var_9))));
}
