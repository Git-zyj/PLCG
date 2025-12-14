/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71953
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = (i_2 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_1]) & (((/* implicit */unsigned int) 131070))))) ? (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_6 [i_2] [(short)7])) - (189))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)90)) - (((/* implicit */int) var_16))))), (((unsigned int) (unsigned char)0))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_1]) & (((/* implicit */unsigned int) 131070))))) ? (((((((/* implicit */int) var_3)) + (2147483647))) << (((((((((/* implicit */int) arr_6 [i_2] [(short)7])) - (189))) + (187))) - (23))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)90)) - (((/* implicit */int) var_16))))), (((unsigned int) (unsigned char)0)))))));
                    var_20 = ((/* implicit */unsigned char) (~(arr_2 [i_0] [i_1])));
                    var_21 = max((((((/* implicit */int) (unsigned char)82)) | (min((1103684143), (((/* implicit */int) (unsigned char)122)))))), (((((_Bool) arr_6 [i_2] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                    var_22 = ((/* implicit */_Bool) var_9);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_23 *= ((/* implicit */short) var_13);
                                var_24 = arr_6 [i_2] [i_2];
                                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) | (((/* implicit */int) (signed char)-27)))))));
                                arr_12 [i_2] = ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned char)216)))))) - (((/* implicit */int) (!((_Bool)0)))));
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)197))))) + (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-27)), (var_0))))))) ? (327140022) : (((((/* implicit */_Bool) 2322045580U)) ? (((/* implicit */int) arr_6 [i_2] [i_3])) : (((/* implicit */int) arr_6 [i_2] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */int) ((unsigned int) var_6));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        arr_24 [i_5] [(unsigned char)5] [i_5] [i_6] [i_5] [i_8] = (~((-(((/* implicit */int) (signed char)-27)))));
                        var_27 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)244))));
                    }
                    arr_25 [(unsigned short)5] [i_6] [i_5] [6U] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_19 [i_5] [i_5] [i_6] [i_7])))))));
                }
            } 
        } 
    } 
}
