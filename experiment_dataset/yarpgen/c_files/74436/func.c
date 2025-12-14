/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74436
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-7059)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */int) min((arr_3 [i_0]), ((unsigned short)9420)))) : (((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_1]))))));
                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)7059)) : (((/* implicit */int) (short)-7059)))) % (((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                var_18 = ((/* implicit */unsigned int) arr_3 [i_0]);
                var_19 *= ((/* implicit */short) var_4);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_6 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_3] [i_0])) / (((/* implicit */int) (short)9345))))))))));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_3 + 2] [i_0])) <= (((/* implicit */int) arr_4 [i_3 + 2] [i_0]))))) & (((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_3 + 2] [i_0]))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (arr_6 [i_3 + 4] [i_3 + 1] [i_3 + 4])))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) arr_6 [i_3 + 4] [(signed char)3] [(signed char)3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 15; i_6 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        arr_20 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + ((((_Bool)0) ? (arr_6 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7068))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (arr_11 [i_6] [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [(signed char)3])) < (((/* implicit */int) (unsigned char)255)))))) : (((((/* implicit */_Bool) arr_6 [i_4] [i_5] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_6 [i_5] [i_6 - 1] [i_5])))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_12 [i_6 - 2]) : (arr_12 [i_6 + 4])))) ? (((long long int) var_14)) : (((/* implicit */long long int) ((arr_12 [i_6 + 2]) & (arr_12 [i_6 + 4]))))));
                        arr_21 [(unsigned char)14] [i_5] [(unsigned char)14] [(unsigned char)14] = ((/* implicit */_Bool) (short)7059);
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-7059)) == (-1)));
                    }
                    var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [(short)16]))) ? (min((var_4), (arr_9 [i_6] [i_6]))) : (((/* implicit */unsigned int) ((arr_2 [i_5] [i_4]) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_0 [i_5])))))))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) (short)7059)) | (((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
}
