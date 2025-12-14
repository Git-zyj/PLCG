/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64365
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [(short)5] = ((/* implicit */_Bool) min((((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)15)))), (arr_4 [i_1])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) min((arr_8 [i_0] [i_0] [i_2 + 3]), ((_Bool)0)))) > ((~(((/* implicit */int) (unsigned short)58847)))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3 - 1] = ((/* implicit */unsigned char) min((((((/* implicit */int) min((arr_0 [i_3]), (((/* implicit */unsigned char) (_Bool)1))))) > (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_0))))))), (min((arr_7 [i_2] [i_2] [i_2 + 2]), (arr_7 [(unsigned char)10] [i_2] [i_2 + 2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned char) (((~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_3)))))) <= (min((((((/* implicit */_Bool) arr_3 [(unsigned short)3] [i_4])) ? (((/* implicit */int) arr_16 [(unsigned short)0] [i_4] [(_Bool)1] [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_15 [i_0] [i_1] [i_4]))))))));
                            arr_17 [i_5] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) arr_16 [i_5 - 2] [i_5 - 1] [(_Bool)1] [i_5 - 2] [i_5] [i_5]);
                            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [(unsigned char)0] [i_1] [(_Bool)1])) * (((/* implicit */int) arr_2 [i_1]))))))) ? (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [(unsigned short)6])) : (min((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_0] [i_0] [(unsigned short)17]))))))));
                        }
                    } 
                } 
                arr_19 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (unsigned char)137)) >= (((/* implicit */int) arr_2 [i_0]))))), (min((var_7), (arr_4 [i_0])))))) * (min((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */int) var_7))));
}
