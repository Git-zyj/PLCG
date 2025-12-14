/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90637
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (min((var_2), (((/* implicit */unsigned int) ((unsigned short) var_1)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_11 = ((/* implicit */signed char) min((((unsigned int) (unsigned short)47684)), (((/* implicit */unsigned int) var_0))));
            var_12 = ((/* implicit */unsigned int) var_3);
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_13 = ((/* implicit */short) min((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0])))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */short) (-((+(((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) arr_9 [(unsigned char)12] [3U] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_0]))))))));
                        arr_10 [i_0] [i_2] [i_0] [(short)4] = ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */short) var_3)), (((short) var_9))))), (min((var_2), (849361692U)))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 849361692U))));
                        arr_11 [i_0] [i_0] = ((/* implicit */short) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), ((+(((/* implicit */int) (short)22722))))));
                    }
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            arr_14 [i_5] [i_0] [19U] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) (short)20948))))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)119)), (arr_9 [(short)12] [i_5] [i_0]))))))));
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)3408), (arr_3 [i_5])))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-25)) && (((/* implicit */_Bool) (unsigned char)0))))))))));
        }
        var_17 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [18U] [18U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)22] [i_0]))) : (var_2))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64803)) ? (((/* implicit */int) arr_12 [(signed char)14] [i_0])) : (((/* implicit */int) (unsigned char)246)))))));
        var_18 *= ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)12))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))) ^ (1111617365U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-8376)))))))) ? ((+(((/* implicit */int) (unsigned short)18269)))) : (((/* implicit */int) var_3)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_20 -= arr_13 [(unsigned short)19] [(unsigned short)19];
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 9; i_10 += 4) 
                        {
                            {
                                arr_29 [i_6] [(unsigned char)7] [i_8] [i_9] [(signed char)7] [i_10 + 1] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (short)6938))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (max((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7))), (((/* implicit */unsigned int) arr_25 [i_10 - 1] [i_10 + 2] [i_10 - 1] [i_10] [i_10 + 2]))))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (short)-5629))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), ((~((~(arr_27 [i_6] [i_10 - 1] [i_10 + 2] [(unsigned char)3] [i_10 + 1] [i_10 + 2] [(short)0])))))));
                                arr_30 [i_6] [i_6] [(signed char)4] [(signed char)4] [i_6] = ((/* implicit */unsigned char) (+(min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) min(((short)-2386), (((/* implicit */short) var_0)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) max((var_24), ((+(min((3018122775U), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-38)), ((unsigned char)5))))))))));
                }
            } 
        } 
    }
    var_25 *= ((/* implicit */short) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)65535)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    var_26 = ((/* implicit */unsigned short) (-(min((3562565911U), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27288))) : (var_7)))))));
}
