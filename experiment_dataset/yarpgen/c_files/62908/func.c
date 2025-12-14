/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62908
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) max(((short)-6062), (((/* implicit */short) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [(_Bool)1] [i_0]))))))) ? (max((3593956609U), (((/* implicit */unsigned int) (short)6062)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) max((var_5), (((/* implicit */signed char) var_10))))))))));
        arr_4 [i_0] = ((/* implicit */int) ((_Bool) ((arr_0 [i_0]) | (((/* implicit */int) (short)6061)))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [10] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) + (((arr_14 [i_2] [i_2 + 1] [i_3] [i_4] [i_3] [i_3]) << (((4294967295U) - (4294967271U)))))))));
                        /* LoopSeq 4 */
                        for (short i_5 = 4; i_5 < 20; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_8 [20LL] [i_5 - 3]), ((short)6982)))) + (((/* implicit */int) ((unsigned short) arr_10 [i_1] [14])))));
                            arr_19 [i_1] = ((/* implicit */signed char) (-(max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) (short)-6976))))));
                        }
                        for (int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(min((((/* implicit */int) ((short) (short)21099))), (((((/* implicit */int) arr_10 [i_4] [i_1])) | (((/* implicit */int) var_8)))))))))));
                            arr_22 [i_1] [i_2 + 1] [(signed char)11] [i_2] = ((/* implicit */signed char) min(((((+(arr_14 [i_1] [i_1] [i_1] [i_4] [i_4] [i_4]))) + (arr_14 [i_1] [i_1] [i_6 - 1] [i_1] [i_6 - 1] [i_6 + 1]))), (((/* implicit */unsigned int) arr_21 [3U] [i_1]))));
                        }
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)-6089))))));
                            var_18 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_10 [i_4] [i_4])) / (((/* implicit */int) arr_10 [i_7 + 1] [i_3])))), (((((/* implicit */_Bool) arr_23 [i_4] [i_3])) ? (((/* implicit */int) arr_12 [i_1] [i_2 + 1] [i_3] [i_7 + 1])) : (((/* implicit */int) arr_23 [i_3] [i_2]))))));
                            arr_25 [i_1] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_1] [i_2] [i_1] [i_7 + 1]))));
                            arr_26 [i_1] [i_2] [i_3] [i_3] [15LL] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)6066))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65526))))))))));
                        }
                        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_19 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50785)) << (((((/* implicit */int) (unsigned char)18)) - (14))))))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (var_10)));
                        }
                        var_21 *= ((/* implicit */unsigned short) arr_15 [i_1] [i_2] [(short)19] [i_2 - 1] [i_3]);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((long long int) arr_14 [i_2 + 1] [i_2] [(short)17] [i_2] [i_2 + 1] [i_2 + 1])) >> (((min((((/* implicit */unsigned int) (short)12960)), (((((/* implicit */_Bool) arr_8 [(signed char)17] [i_2 - 1])) ? (599241175U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))))))) - (12903U))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (-(arr_21 [(_Bool)1] [i_1])))) : (arr_17 [i_1] [i_1] [i_1] [i_1] [6U]))), (((/* implicit */long long int) arr_9 [i_1]))));
    }
    for (short i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_5 [i_9]))));
                    arr_37 [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) (+((+((-(var_11)))))));
                }
            } 
        } 
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_35 [i_9] [i_9] [i_9]))))))));
    }
    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_10))))) : (((((/* implicit */_Bool) var_12)) ? (var_0) : (var_6))))) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_26 &= ((/* implicit */unsigned char) max(((+(var_6))), (var_0)));
}
